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
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "BaseImpl.h"
#include "ParserContext.h"
#include "XmlModelGroupParser.h"
#include "IndexedElement.h"
#include "Position.h"
#include <vector>
#include <map>
#include "MemLeakDetection.h"


namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Parser for a XSD:choice model group (one out of of a list of types).
    */
    template <class T>
    class XmlChoiceParser: public virtual BaseImpl, public XmlModelGroupParser<T> 
    {
    private:
        std::map<std::shared_ptr<IElementParser<T>>, int>  _occuredElementList;

    public:
        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operating on.
         */
        XmlChoiceParser(IParserMessageLogger& messageLogger, std::string& filename) : XmlModelGroupParser<T>(messageLogger, filename) {}

        void ParseSubElementsInternal(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<T>& object) override 
        {
            unsigned int currentListIndex = 0;
            std::shared_ptr<IndexedElement> lastElementParsed = nullptr;
            _occuredElementList.clear();
            while (currentListIndex < indexedElements.size()) 
            {
                auto indexedElement = indexedElements[currentListIndex];
                const auto kElement = indexedElement->GetElement();
                std::string tagName = kElement->Name();
                auto parser = this->FindParser(tagName);
                auto start = indexedElement->GetStartElementLocation();

                if (parser == nullptr)
                {
                    if (this->_parsers.size() >= 1)
                    {
                        const auto kIt = _occuredElementList.find(this->_parsers[0]);
                        if (kIt != _occuredElementList.end() && kIt->second >= this->_parsers[0]->GetMinOccur())
                        {
                            // We are done
                            break;
                        }
                    }
                    else
                    {
                        auto msg = FileContentMessage("Unknown element '" + tagName + "'", ERROR, Textmarker(start.GetLine(), start.GetColumn(), this->_filename));
                        this->_messageLogger.LogMessage(msg);
                        lastElementParsed = indexedElement;

                    }
                }
                else
                {
                    int currentOccurs = 0;
                    auto it = _occuredElementList.begin();
                    while (it != _occuredElementList.end())
                    {
                        if (it->first->DoesMatch(tagName))
                        {
                            currentOccurs = it->second;
                            break;
                        }
                        it++;
                    }
                    if (currentOccurs < parser->GetMaxOccur())
                    {
                        parser->Parse(indexedElement, parserContext, object);
                        currentListIndex = this->MoveForwardToLastElementParsed(indexedElements, currentListIndex, parserContext->GetLastElementParsed());
                        lastElementParsed = parserContext->GetLastElementParsed();
                        // delete all parsers with other tag names;
                        if (currentOccurs == 0)
                        {
                            ExcludeOtherParsers(parser);
                        }
                        _occuredElementList.emplace(std::make_pair(parser, currentOccurs + 1));
                    }
                    else
                    {
                        auto msg = FileContentMessage("Too many elements of <" + tagName + ">  (" + std::to_string(parser->GetMaxOccur()) + ") has already reached", ERROR, Textmarker(start.GetLine(), start.GetColumn(), this->_filename));
                        this->_messageLogger.LogMessage(msg);
                        lastElementParsed = indexedElement;
                    }
                }

                currentListIndex++;
            }
            if (lastElementParsed)
                parserContext->SetLastElementParsed(lastElementParsed);
        }


    private:
        /**
         * Once a occurance is found, exclude all other parser (choice)
         * @param parser the parser that was used to parse the element
         */
        void ExcludeOtherParsers(std::shared_ptr<IElementParser<T>>& parser) 
        {
            auto parsers = this->GetParsers();
            parsers.clear();
            parsers.push_back(parser);
        }
    };
}
