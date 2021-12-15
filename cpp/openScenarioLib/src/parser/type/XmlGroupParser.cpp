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

#include "XmlGroupParser.h"


namespace NET_ASAM_OPENSCENARIO
{
	XmlGroupParser::XmlGroupParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions): XmlParserBase(messageLogger, filename, parserOptions) {}
	XmlGroupParser::~XmlGroupParser() = default;
	
    void XmlGroupParser::ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <ParserContext>& parserContext, std::shared_ptr <BaseImpl> object)
    {
        const auto kStartPosition = indexedElement->GetStartElementLocation();
        object->SetStartMarker(Textmarker(kStartPosition.GetLine(), kStartPosition.GetColumn(), this->_filename));

        // Prepare a list
        auto parentSubElements = indexedElement->GetParent().lock()->GetSubElements();
        const auto kIt = std::find(parentSubElements.begin(), parentSubElements.end(), indexedElement);
        int index = 0;
        if (kIt != parentSubElements.end())
            index = static_cast<int>(std::distance(parentSubElements.begin(), kIt));

        std::vector<std::shared_ptr<IndexedElement>> elementsToParse;
        for (unsigned int i = index; i < parentSubElements.size(); i++)
        {
            elementsToParse.push_back(parentSubElements[i]);
        }

        ParseSubElements(elementsToParse, parserContext, object);
        const auto kEndPosition = parserContext->GetLastElementParsed()->GetEndElementLocation();
        object->SetEndMarker(Textmarker(kEndPosition.GetLine(), kEndPosition.GetColumn(), this->_filename));
    }

    void XmlGroupParser::ParseSubElements(std::vector<std::shared_ptr<IndexedElement>>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
    {
        _subElementParser->ParseSubElements(indexedElement, parserContext, object);
    }
}
