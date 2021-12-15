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


#include "XmlToSimpleNodeConverter.h"

#include <regex>


namespace NET_ASAM_OPENSCENARIO
{
	XmlToSimpleNodeConverter::XmlToSimpleNodeConverter(PositionIndex& positionIndex): _positionIndex(positionIndex) {}

    std::shared_ptr<IndexedElement> XmlToSimpleNodeConverter::Convert(tinyxml2::XMLDocument& document)
    {
        auto indexedElement = std::make_shared<IndexedElement>(document.RootElement(), _positionIndex.GetElementNode(_counter++), std::weak_ptr<IndexedElement>());
        ConvertInternal(indexedElement);
        return indexedElement;
    }

    void XmlToSimpleNodeConverter::ConvertInternal(std::shared_ptr<IndexedElement>& indexedElement)
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

    bool XmlToSimpleNodeConverter::IsIgnorableWhitespace(std::string& data) const
    {
        // .matches("^(\\r\\n| \\n|\\s)+$");
        return std::regex_match(data, std::regex("^(\\r\\n| \\n|\\s)+$"));
    }


}
