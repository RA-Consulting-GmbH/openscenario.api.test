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

#include "XmlSequenceParser.h"

namespace NET_ASAM_OPENSCENARIO
{
	XmlSequenceParser::XmlSequenceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions) : XmlModelGroupParser(messageLogger, filename, parserOptions) {}
	XmlSequenceParser::~XmlSequenceParser() = default;
	
    void XmlSequenceParser::ParseSubElementsInternal(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
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
                        auto it = _occuredElementList.find(parser);
                        if (it != _occuredElementList.end()) 
                        {
                            it->second = currentOccurs + 1;
                        } 
                        else 
                        {
                            _occuredElementList.emplace(parser, currentOccurs + 1);
                        }
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


    int XmlSequenceParser::GetNextIndex(int& currentIndex, std::string& tagName, Position& startPosition)
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
}
