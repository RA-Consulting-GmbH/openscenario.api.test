#pragma once
#include "tinyxml2.h"
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "BaseImpl.h"
#include <vector>
#include "ParserContext.h"
#include "IndexedElement.h"
#include "XmlModelGroupParser.h"
#include "Position.h"
#include "MemLeakDetection.h"

namespace RAC_OPENSCENARIO
{
    /**
    * Parser for a XSD:all model group (arbitrary order of elements).
    */

    template <class T>
    class XmlAllParser: public virtual BaseImpl, public XmlModelGroupParser<T>
    {
    public:
        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operating on.
         */
        XmlAllParser(IParserMessageLogger& messageLogger, std::string& filename) : XmlModelGroupParser(messageLogger, filename) {}


        void ParseSubElementsInternal(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<T>& object) override
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
                    currentListIndex = XmlModelGroupParser<T>::MoveForwardToLastElementParsed(indexedElements, currentListIndex, parserContext->GetLastElementParsed());
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

    private:
        /**
         * Formatting the expected tags for a message (comma separated)
         * @param tagNames list of tag names
         * @return the comma separated string
         */
        static std::string FormatExpectedTagNames(std::vector<std::string>& tagNames)
        {
            std::string names = "";
            for (auto && tagName: tagNames)
                names += "'" + tagName + "',";
            return names.substr(0, names.size()-1);

        }

    };
}
