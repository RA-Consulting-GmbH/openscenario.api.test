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

#include "XmlAllParser.h"
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "ParserContext.h"
#include "Position.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
	XmlAllParser::XmlAllParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions) : XmlModelGroupParser(messageLogger, filename, parserOptions) {}
	XmlAllParser::~XmlAllParser() = default;


    void XmlAllParser::ParseSubElementsInternal(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
    {
        unsigned int currentListIndex = 0;
        std::shared_ptr<IndexedElement> lastElementParsed = nullptr;
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
                parser->Parse(indexedElement, parserContext, object);
                currentListIndex = XmlModelGroupParser::MoveForwardToLastElementParsed(indexedElements, currentListIndex, parserContext->GetLastElementParsed());
                lastElementParsed = parserContext->GetLastElementParsed();
                // remove from the set 
                const auto kIt = std::find(this->GetParsers().begin(), this->GetParsers().end(), parser);
                if (kIt != this->GetParsers().end())
                    this->GetParsers().erase(kIt);
            }
            parserContext->SetLastElementParsed(indexedElement);
            currentListIndex++;
        }
        if (lastElementParsed)
            parserContext->SetLastElementParsed(lastElementParsed);

        // Every required field must be processed:
        for (auto parser : this->GetParsers()) 
        {
            if (parser->GetMinOccur() > 0)
            {
                auto position = parserContext->GetLastElementParsed()->GetEndElementLocation();

                auto expectedTagNames = parser->GetExpectedTagNames();
                if (expectedTagNames.size() > 1)
                {
                    auto msg = FileContentMessage("Required element (One of " + FormatExpectedTagNames(expectedTagNames) + ") is missing ", ERROR, Textmarker(position.GetLine(), position.GetColumn(), this->_filename));
                    this->_messageLogger.LogMessage(msg);
                }
                else
                {
                    auto msg = FileContentMessage("Required element '" + expectedTagNames[0] + "' is missing ", ERROR, Textmarker(position.GetLine(), position.GetColumn(), this->_filename));
                    this->_messageLogger.LogMessage(msg);
                }
            }
        }
    }

    /**
     * Formatting the expected tags for a message (comma separated)
     * @param tagNames list of tag names
     * @return the comma separated string
     */
    std::string XmlAllParser::FormatExpectedTagNames(std::vector<std::string>& tagNames)
    {
        std::string names = "";
        for (auto && tagName: tagNames)
            names += "'" + tagName + "',";
        return names.substr(0, names.size()-1);

    }


}
