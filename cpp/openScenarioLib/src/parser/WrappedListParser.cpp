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

#include <vector>
#include "tinyxml2.h"
#include "WrappedListParser.h"
#include "Position.h"


namespace NET_ASAM_OPENSCENARIO
{
		WrappedListParser::WrappedListParser(IParserMessageLogger& messageLogger, std::string& filename, const std::shared_ptr<IElementParser> innerParser, const std::string wrapperTagName, ParserOptions& parserOptions):
            XmlParserBase(messageLogger, filename, parserOptions), _innerElementParser(innerParser), _wrapperTagName(wrapperTagName), _wrapperTagNameEndPosition(-1,-1) {}

		void WrappedListParser::ParseSubElements(std::vector<std::shared_ptr<IndexedElement>>& parentElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            int currentOccurs = 0;
            for (auto && indexedElement : parentElements)
            {
                const auto kElement = indexedElement->GetElement();
                std::string tagName = kElement->Name();
                auto start = indexedElement->GetStartElementLocation();

                if (!_innerElementParser->DoesMatch(tagName))
                {
                   auto msg = FileContentMessage("Unknown or unexpected element '" + tagName + "'", ERROR, Textmarker(start.GetLine(), start.GetColumn(), this->_filename));
                   this->_messageLogger.LogMessage(msg);
                }
                else
                {

                    if (currentOccurs < _innerElementParser->GetMaxOccur() || _innerElementParser->GetMaxOccur() == -1)
                    {
                        _innerElementParser->Parse(indexedElement, parserContext, object);
                        currentOccurs++;
                    }
                    else
                    {
                        auto msg = FileContentMessage("Too many elements in <" + _wrapperTagName + ">  (" + std::to_string(_innerElementParser->GetMaxOccur()) + ") has already reached", ERROR, Textmarker(start.GetLine(), start.GetColumn(), this->_filename));
                        this->_messageLogger.LogMessage(msg);
                    }
                }

            }

            if (currentOccurs < _innerElementParser->GetMinOccur())
            {
                auto msg = FileContentMessage("Too few elements in <" + _wrapperTagName + ">(" + std::to_string(_innerElementParser->GetMaxOccur()) + " are allowed)", ERROR, Textmarker(_wrapperTagNameEndPosition.GetLine(), _wrapperTagNameEndPosition.GetColumn(), this->_filename));
                this->_messageLogger.LogMessage(msg);
            }

        }

        void WrappedListParser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <ParserContext>& parserContext, std::shared_ptr <BaseImpl> object)
        {
            _wrapperTagNameEndPosition = indexedElement->GetEndElementLocation();
            auto subElements = indexedElement->GetSubElements();
            ParseSubElements(subElements, parserContext, object);
            parserContext->SetLastElementParsed(indexedElement);
        }

        int WrappedListParser::GetMinOccur()
        {
            return _innerElementParser->GetMinOccur() == 0 ? 0 : 1;
        }


        int WrappedListParser::GetMaxOccur()
        {
            return 1;
        }


        bool WrappedListParser::DoesMatch(std::string& elementName)
        {
            return elementName == _wrapperTagName;
        }


        std::vector<std::string> WrappedListParser::GetExpectedTagNames()
        {
            return std::vector<std::string>{ _wrapperTagName };
        }

}
