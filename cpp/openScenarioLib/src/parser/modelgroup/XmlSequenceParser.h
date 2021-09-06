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
#include <vector>
#include <map>
#include "tinyxml2.h"
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "BaseImpl.h"
#include "ParserContext.h"
#include "IndexedElement.h"
#include "XmlModelGroupParser.h"
#include "Position.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
    {/**
     * Parser for a XSD:sequence model group (exact order of elements).
     */
    class XmlSequenceParser : public virtual BaseImpl, public XmlModelGroupParser
    {
    private:
        static const int kNotFound = -1;
        std::map<std::shared_ptr<IElementParser>, int> _occuredElementList;

    public:

        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operating on.
         */
        XmlSequenceParser(IParserMessageLogger& messageLogger, std::string& filename) : XmlModelGroupParser(messageLogger, filename) {}

        void ParseSubElementsInternal(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override
        {
            unsigned int currentListIndex = 0;
            int currentParserIndex = 0;
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
                    auto msg = FileContentMessage("Unknown element '" + tagName + "'", ERROR, Textmarker(start.GetLine(), start.GetColumn(), this->_filename));
                    this->_messageLogger.LogMessage(msg);
                    lastElementParsed = indexedElement;
                }
                else
                {
                    auto nextIndex = GetNextIndex(currentParserIndex, tagName, start);
                    if (nextIndex == kNotFound)
                    {
                        auto msg = FileContentMessage("Element '" + tagName + "' is not allowed here.", ERROR, Textmarker(start.GetLine(), start.GetColumn(), this->_filename));
                        this->_messageLogger.LogMessage(msg);
                        lastElementParsed = indexedElement;
                    }
                    else
                    {
                        currentParserIndex = nextIndex;
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
                        if (currentOccurs < parser->GetMaxOccur() || parser->GetMaxOccur() == -1)
                        {
                            parser->Parse(indexedElement, parserContext, object);
                            currentListIndex = this->MoveForwardToLastElementParsed(indexedElements, currentListIndex, parserContext->GetLastElementParsed());
                            lastElementParsed = parserContext->GetLastElementParsed();
                            _occuredElementList.emplace(std::make_pair(parser, currentOccurs + 1));
                        }
                        else
                        {
                            auto msg = FileContentMessage("Too many elements of <" + tagName + ">  (" + std::to_string(parser->GetMaxOccur()) + ") has already reached", ERROR, Textmarker(start.GetLine(), start.GetColumn(), this->_filename));
                            this->_messageLogger.LogMessage(msg);
                            lastElementParsed = indexedElement;
                        }
                    }
                }
                currentListIndex++;
            }
            if (lastElementParsed)
                parserContext->SetLastElementParsed(lastElementParsed);
        }

    private:
        /**
         * Evaluates the next index in the ordered parser list.
         * Checks on the fly whether a element is missing in between.
         * @param currentIndex the current index in the list
         * @param tagName the tag name of the element that should be parsed
         * @param startPosition  a current position in the file
         * @return the next index if found or -1 if a parser for such a element cannot be found.
         */
        int GetNextIndex(int& currentIndex, std::string& tagName, Position& startPosition)
        {
            std::vector<FileContentMessage> localMessages;

            // Increment the list index until the element fits
            for (unsigned int i = currentIndex; i < this->GetParsers().size(); i++) 
            {
                auto parsers = this->GetParsers();
                if (parsers[i]->DoesMatch(tagName))
                {
                    this->_messageLogger.LogAllMessages(localMessages);
                    return i;
                }
                else
                {
                    auto parser = this->_parsers[i];
                    int occured = 0;
                    const auto kIt = _occuredElementList.find(parser);
                    if (kIt != _occuredElementList.end())
                    {
                        occured = kIt->second;
                    }
                    if (parser->GetMinOccur() > occured)
                    {
                        auto msg = FileContentMessage("Required element is missing before <" + tagName + ">", ERROR, Textmarker(startPosition.GetLine(), startPosition.GetColumn(), this->_filename));
                        localMessages.push_back(msg);
                    }
                }
            }
            return kNotFound;
        }

    };
}
