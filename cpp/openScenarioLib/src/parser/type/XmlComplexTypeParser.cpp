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

#include "XmlComplexTypeParser.h"
#include <regex>

namespace NET_ASAM_OPENSCENARIO
{
    std::map<std::string, std::shared_ptr<IAttributeParser>> XmlComplexTypeParser::GetAttributeNameToAttributeParserMap()
    {
        return {};
    }


	XmlComplexTypeParser::XmlComplexTypeParser(IParserMessageLogger& messageLogger, std::string& filename): XmlParserBase(messageLogger, filename) {}
	XmlComplexTypeParser::~XmlComplexTypeParser() = default;
	
    void XmlComplexTypeParser::ParseAttributes(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <BaseImpl> object)
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
            std::shared_ptr<IAttributeParser> parser;
            const auto kIt = _attributeNameToAttributeParser.find(attributeName);
            if (kIt != _attributeNameToAttributeParser.end())
                parser = kIt->second;

            auto attributeStartPosition = indexedElement->GetAttributeStartPosition(attributeName);
			auto attributeEndPosition = indexedElement->GetAttributeEndPosition(attributeName);
			auto attributeStartValuePosition = indexedElement->GetAttributeStartValuePosition(attributeName);

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
                parser->Parse(attributeStartPosition, attributeEndPosition, attributeStartValuePosition, attributeName, attributeValue, object);
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

    void XmlComplexTypeParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <ParserContext>& parserContext, std::shared_ptr <BaseImpl> object)
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
	
    bool XmlComplexTypeParser::IsParametrized(std::string& value)
    {
        // Only Dollar will result in "$"
        return value[0] == '$' && value.length() > 1;
    }

	bool XmlComplexTypeParser::IsExpression(std::string& value)
	{
		// Only Dollar will result in "$"
		std::smatch base_match;
		const std::regex base_regex("^\\s*\\$\\s*\\{");
		return std::regex_match(value,base_match, base_regex);
	}
	
    /**
     * Stripes the '$' from a name when the value starts with '$'
     * @param value value that might start with a '$'
     * @return value without a starting '$'
     */
    std::string XmlComplexTypeParser::StripDollarSign(std::string& value)
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


    void XmlComplexTypeParser::ParseSubElements(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
    {
        _subElementParser->ParseSubElements(indexedElements, parserContext, object);
    }

}
