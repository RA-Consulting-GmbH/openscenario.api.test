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


namespace RAC_OPENSCENARIO
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
        XmlChoiceParser(IParserMessageLogger& messageLogger, std::string& filename) : XmlModelGroupParser(messageLogger, filename) {}

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

                if (parser)
                {
                    const auto kIt = _occuredElementList.find(this->_parsers[0]);
                    if (kIt != _occuredElementList.end() && this->_parsers.size() == 1 && kIt->second >= this->_parsers[0]->GetMinOccur())
                    {
                        // We are done
                        break;
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
