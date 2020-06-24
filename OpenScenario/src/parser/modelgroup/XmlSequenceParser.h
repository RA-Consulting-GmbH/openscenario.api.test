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

namespace RAC_OPENSCENARIO
    {/**
     * Parser for a XSD:sequence model group (exact order of elements).
     */
    template <class T>
    class XmlSequenceParser : public virtual BaseImpl, public XmlModelGroupParser<T>
    {
    private:
        static const int kNotFound = -1;
        std::map<std::shared_ptr<IElementParser<T>>, int> _occuredElementList;

    public:
        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operating on.
         */
        XmlSequenceParser(IParserMessageLogger& messageLogger, std::string& filename) : XmlModelGroupParser(messageLogger, filename) {}

        void ParseSubElementsInternal(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, ParserContext& parserContext, T& object) override
        {
 /*           unsigned int currentListIndex = 0;
            int currentParserIndex = 0;
            while (currentListIndex < indexedElements.size()) 
            {
                auto indexedElement = indexedElements[currentListIndex];
                const auto kElement = indexedElement->GetElement();
                std::string tagName = kElement->Name();
                auto parser = this->FindParser(tagName);
                auto start = indexedElement->GetStartElementLocation();

                if (parser)
                {
                    auto msg = FileContentMessage("Unknown element '" + tagName + "'", ERROR, new Textmarker(start.GetLine(), start.GetColumn(), this->_filename));
                    this->_messageLogger.logMessage(msg);
                    this->_lastElementParsed = indexedElement;
                }
                else
                {
                    auto nextIndex = GetNextIndex(currentParserIndex, tagName, start);
                    if (nextIndex == kNotFound)
                    {
                        auto msg = FileContentMessage("Element '" + tagName + "' is not allowed here.", ERROR, new Textmarker(start.GetLine(), start.GetColumn(), this->_filename));
                        this->_messageLogger.logMessage(msg);
                        this->_lastElementParsed = indexedElement;
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
                        }
                        if (currentOccurs < parser.GetMaxOccur() || parser.GetMaxOccur() == -1)
                        {
                            parser.Parse(indexedElement, parserContext, object);
                            currentListIndex = this->MoveForwardToLastElementParsed(indexedElements, currentListIndex, parserContext.GetLastElementParsed());
                            this->_lastElementParsed = parserContext.GetLastElementParsed();
                            _occuredElementList.emplace(std::make_pair(parser, currentOccurs + 1));
                        }
                        else
                        {
                            auto msg = FileContentMessage("Too many elements of <" + tagName + ">  (" + std::to_string(parser.GetMaxOccur()) + ") has already reached", ERROR, new Textmarker(start.GetLine(), start.GetColumn(), this->_filename));
                            this->_messageLogger.logMessage(msg);
                            this->_lastElementParsed = indexedElement;
                        }
                    }
                }
                currentListIndex++;
            }
            if (this->_lastElementParsed)
                parserContext.SetLastElementParsed(this->_lastElementParsed);*/
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
        int GetNextIndex(int& currentIndex, std::string& tagName, RAC_XML_INDEXER::Position& startPosition)
        {
            std::vector<FileContentMessage> localMessages;

            // Increment the list index until the element fits
            for (int i = currentIndex; i < this->GetParsers().size(); i++) 
            {
                auto parsers = this->GetParsers();
                if (parsers.get(i).doesMatch(tagName))
                {
                    this->_messageLogger.LogAllMessages(localMessages);
                    return i;
                }
                else
                {
                    auto parser = this->_parsers[i];
                    int occured = 0;
                    const auto kIt = _occuredElementList.find(parser);
                    if (kIt != _occuredElementList.end() && this->_parsers.size() == 1 && kIt->second >= this->_parsers[0].GetMinOccur())
                    {
                        occured = kIt->second;
                    }
                    if (parser.GetMinOccur() > occured)
                    {
                        localMessages.push_back(new FileContentMessage("Required element is missing before <" + tagName + ">", ERROR, new Textmarker(startPosition.GetLine(), startPosition.GetColumn(), this->_filename)));
                    }
                }
            }
            return kNotFound;
        }

    };
}
