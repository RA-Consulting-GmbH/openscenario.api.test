/*
 * Copyright 2020 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License,
 * Version 2.0 (the "License"); you may not use this file except
 * in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once
#include "tinyxml2.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "BaseImpl.h"
#include "ParserContext.h"
#include "XmlModelGroupParser.h"
#include "IXmlTypeParser.h"
#include "XmlParserBase.h"
#include "IndexedElement.h"
#include "Position.h"
#include <vector>
#include <map>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Parsing an XSD:complexType
    */
    template <class T>
    class XmlComplexTypeParser : public virtual BaseImpl, public XmlParserBase<T>, public IXmlTypeParser<T> 
    {
    protected:
        std::shared_ptr<XmlModelGroupParser<T>> _subElementParser = nullptr;
        /**
         * A dictionary that maps an attribute names to their parser.
         * @return the name to parser dictionary
         */
        virtual std::map<std::string, std::shared_ptr<IAttributeParser<T>>> GetAttributeNameToAttributeParserMap()
        {
            return {};
        }


    private:
        std::map<std::string, std::shared_ptr<IAttributeParser<T>>> _attributeNameToAttributeParser;

    public:
        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operating on.
         */
         XmlComplexTypeParser(IParserMessageLogger& messageLogger, std::string& filename): XmlParserBase<T>(messageLogger, filename) {}

    protected:
        /**
         * parses all atrributes and fills them into the object
         * @param indexedElement the element to be parsed
         * @param object the object that will be filled during the parsing process.
         */
        void ParseAttributes(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <T>& object)
        {
            _attributeNameToAttributeParser = GetAttributeNameToAttributeParserMap();
            const auto kElement = indexedElement->GetElement();
            std::vector<const tinyxml2::XMLAttribute *> attributeMap;

            if (kElement->FirstAttribute() != nullptr)
            {
                attributeMap.push_back(kElement->FirstAttribute());
                while (attributeMap[attributeMap.size() - 1]->Next() != nullptr)
                {
                    attributeMap.push_back(attributeMap[attributeMap.size() - 1]->Next());
                }
            }
            auto position = indexedElement->GetStartElementLocation();
            for (auto&& attribute: attributeMap)
            {
                std::string attributeName = attribute->Name();
                std::string attributeValue = attribute->Value();
                std::shared_ptr<IAttributeParser<T>> parser;
                const auto kIt = _attributeNameToAttributeParser.find(attributeName);
                if (kIt != _attributeNameToAttributeParser.end())
                    parser = kIt->second;

                auto attributeStartPosition = indexedElement->GetAttributeStartPosition(attributeName);
                auto attributeEndPosition = indexedElement->GetAttributeEndPosition(attributeName);

                if (attributeName.find(":") != std::string::npos)
                {
                    auto msg = FileContentMessage("Ignoring attribute '" + attributeName + "'", INFO, Textmarker(attributeStartPosition.GetLine(), attributeStartPosition.GetColumn(), this->_filename));
                    this->_messageLogger.LogMessage(msg);
                }
                else if (kIt == _attributeNameToAttributeParser.end())
                {
                    auto msg = FileContentMessage("Unknown attribute '" + attributeName + "'", ERROR, Textmarker(attributeStartPosition.GetLine(), attributeStartPosition.GetColumn(), this->_filename));
                    this->_messageLogger.LogMessage(msg);
                }
                else
                {
                    parser->Parse(attributeStartPosition, attributeEndPosition, attributeName, attributeValue, object);
                    // Remove 
                   _attributeNameToAttributeParser.erase(attributeName);
                }
            }

            for (auto&& elem : _attributeNameToAttributeParser) 
            {
                if (elem.second->GetMinOccur() > 0)
                {
                    auto msg = FileContentMessage("Required attribute '" + elem.first + "' is missing ", ERROR, Textmarker(position.GetLine(), position.GetColumn(), this->_filename));
                    this->_messageLogger.LogMessage(msg);
                }
            }
        }

    public:
        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <ParserContext>& parserContext, std::shared_ptr <T>& object) override
        {
            // The element was requested before, so it cannot be null
            const auto kPosition = indexedElement->GetStartElementLocation();
            const std::string kElementName = indexedElement->GetElement()->Name();
            if (indexedElement->IsMixedNode())
            {
                auto msg = FileContentMessage("Element '" + kElementName + "' contains text. Only subelements allowed.", ERROR, Textmarker(kPosition.GetLine(), kPosition.GetColumn(), this->_filename));
                this->_messageLogger.LogMessage(msg);
            }
            ParseAttributes(indexedElement, object);
            auto subElements = indexedElement->GetSubElements();
            ParseSubElements(subElements, parserContext, object);
            parserContext->SetLastElementParsed(indexedElement);
            const auto kStartPosition = indexedElement->GetStartElementLocation();
            object->SetStartMarker(Textmarker(kStartPosition.GetLine(), kStartPosition.GetColumn(), this->_filename));
            const auto kEndPosition = indexedElement->GetEndElementLocation();
            object->SetEndMarker(Textmarker(kEndPosition.GetLine(), kEndPosition.GetColumn(), this->_filename));
        }

    protected:
        /**
         * Checks for paramterized value ($-notation)
         * @param value value
         * @return tue if the attribute has a prameter instead of a literal value
         */
        static bool IsParametrized(std::string& value)
        {
            // Only Dollar will result in "$"
            return value[0] == '$' && value.length() > 1;
        }
        /**
         * Stripes the '$' from a name when the value starts with '$'
         * @param value value that might start with a '$'
         * @return value without a starting '$'
         */
        static std::string StripDollarSign(std::string& value)
        {
            if (value[0] == '$')
            {
                if (value.length() > 1)
                {
                    return value.substr(1);
                }
                else
                {
                    return "";
                }
            }

            return value;
        }

    public:
        void ParseSubElements(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<T>& object) override
        {
            _subElementParser->ParseSubElements(indexedElements, parserContext, object);
        }
    };

}
