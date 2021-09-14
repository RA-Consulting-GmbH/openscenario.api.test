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

#include "XmlModelGroupParser.h"

namespace NET_ASAM_OPENSCENARIO
{
       std::vector<std::shared_ptr<IElementParser>> XmlModelGroupParser::CreateParserList()
        {
            return {};
        }

		XmlModelGroupParser::XmlModelGroupParser(IParserMessageLogger& messageLogger, std::string filename) :XmlParserBase(messageLogger, filename) {}
		XmlModelGroupParser::~XmlModelGroupParser() = default;

        std::vector<std::shared_ptr<IElementParser>>& XmlModelGroupParser::GetParsers()
        {
            return _parsers;
        }

         std::shared_ptr<IElementParser> XmlModelGroupParser::FindParser(std::string& tagName)
        {
            for (auto parser : _parsers) 
            {
                if (parser->DoesMatch(tagName))
                {
                    return parser;
                }
            }
            return nullptr;
        }

        int XmlModelGroupParser::MoveForwardToLastElementParsed(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, const int currentIndex, std::shared_ptr<IndexedElement> lastParsedElement)
        {
            for (unsigned int i = currentIndex; i < indexedElements.size(); i++)
            {
                if (indexedElements[i] == lastParsedElement)
                {
                    return i;
                }
            }
            return static_cast<int>(indexedElements.size());
        }

       void XmlModelGroupParser::ParseSubElements(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            _parsers.clear();
            _parsers = CreateParserList();
            ParseSubElementsInternal(indexedElements, parserContext, object);
        }

 }
