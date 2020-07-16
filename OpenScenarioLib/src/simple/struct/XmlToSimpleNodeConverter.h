#pragma once
#include "tinyxml2.h"
#include "PositionIndex.h"
#include "IndexedElement.h"
#include "MemLeakDetection.h"

namespace RAC_OPENSCENARIO
{
    /**
    * Connects a dom node and textural positions to a IndexedElement
    * The dom nodes are located in a document. The textual informations are located in a indexed list.
    */
    class XmlToSimpleNodeConverter 
    {
    private:
        int _counter = 0;
        RAC_XML_INDEXER::PositionIndex _positionIndex;

    public:
        /**
         * Constructor
         * @param positionIndex position of the DOM Node and the textual information.
         */
        XmlToSimpleNodeConverter(RAC_XML_INDEXER::PositionIndex& positionIndex): _positionIndex(positionIndex) {}

        /**
         * Creates a IndexedElement root element from a DOM document
         * @param document
         * @return
         */
        std::shared_ptr<IndexedElement> Convert(tinyxml2::XMLDocument& document)
        {
            auto indexedElement = std::make_shared<IndexedElement>(document.RootElement(), _positionIndex.GetElementNode(_counter++), std::weak_ptr<IndexedElement>());
            ConvertInternal(indexedElement);
            return indexedElement;
        }

    private:
        /**
         * Internal conversion method
         * @param indexedElement the indexed element
         */
        void ConvertInternal(std::shared_ptr<IndexedElement>& indexedElement)
        {
            auto element = indexedElement->GetElement();
            std::vector<tinyxml2::XMLNode*> childNodes;

            auto currentElement = element->FirstChild();
            while(currentElement != nullptr)
            {
                childNodes.push_back(currentElement);
                currentElement = currentElement->NextSibling();
            }

            bool hasChildren = false;
            bool hasNonIgnorableText = false;
            std::string buffer;
            for (auto node: childNodes)
            {
                //in tiny xml Text could be CData node->ToText()->CData()
                if (node->ToText() != nullptr) 
                {
                    std::string text = node->ToText()->Value();
                    hasNonIgnorableText = hasNonIgnorableText | !IsIgnorableWhitespace(text);
                    buffer.append(text);
                }
                else if (node->ToElement() != nullptr)
                {
                    hasChildren = true;
                    auto indexedSubElement = std::make_shared<IndexedElement>(node->ToElement(), _positionIndex.GetElementNode(_counter++), indexedElement);
                    indexedElement->AddSubElement(indexedSubElement);
                    ConvertInternal(indexedSubElement);
                }
            }

            if (!hasChildren && hasNonIgnorableText)
            {
                indexedElement->SetCharacters(buffer);
            }
            else if (hasChildren && hasNonIgnorableText)
            {
                indexedElement->SetMixedNode(true);
            }
        }

    private:
        /**
         * Check whether the characters in data are all ignorable whitespaces
         * @param data data to test
         * @return true if characters are all ignorable whitespace characters
         */
        bool IsIgnorableWhitespace(std::string& data) const
        {
            // .matches("^(\\r\\n| \\n|\\s)+$");
            return std::regex_match(data, std::regex("^(\\r\\n| \\n|\\s)+$"));
        }


    };
}
