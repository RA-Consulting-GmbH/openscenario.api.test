#pragma once
#include "IParserMessageLogger.h"
#include "IndexedElement.h"
#include "XmlParserBase.h"
#include <vector>
#include "MemLeakDetection.h"

namespace RAC_OPENSCENARIO
{
    /**
    * A generic parser for model groups (sequence, all, choice)
    */
    template <class T>
    class XmlModelGroupParser: public virtual BaseImpl, public XmlParserBase<T> 
    {
    protected:
        std::vector<std::shared_ptr<IElementParser<T>>> _parsers;
        /**
         * Creates a list of parsers for the elements of the model group.
         * @return the list of parsers.
         */
        virtual std::vector<std::shared_ptr<IElementParser<T>>> CreateParserList()
        {
            return {};
        }

    public:
        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operationg on.
         */
        XmlModelGroupParser(IParserMessageLogger& messageLogger, std::string filename) :XmlParserBase<T>(messageLogger, filename) {}
        virtual ~XmlModelGroupParser() = default;

    protected:
        /**
         * The parsers for the elements in this model group.
         * @return the parsers
         */
        std::vector<std::shared_ptr<IElementParser<T>>>& GetParsers()
        {
            return _parsers;
        }

        /**
         * Find the right parser for a given tag name
         * @param tagName the tag name a given parser ahould be found for.
         * @return the appropriate parser for an element with this tag name.
         */
        std::shared_ptr<IElementParser<T>> FindParser(std::string& tagName)
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

        /**
         * Moves the current index to the elemtn
         * @param indexedElements a list with the indexed elements to parse
         * @param currentIndex the current index
         * @param lastParsedElement the last element that was parsed
         * @return the new list index or the size of the indexed elements list
         */
        static int MoveForwardToLastElementParsed(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, const int currentIndex, std::shared_ptr<IndexedElement> lastParsedElement)
        {
            //TODO: check if this comparison is sufficient
            for (unsigned int i = currentIndex; i < indexedElements.size(); i++)
            {
                if (indexedElements[i] == lastParsedElement)
                {
                    return i;
                }
            }
            return indexedElements.size();
        }

    public:
       void ParseSubElements(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<T>& object) override
        {
            _parsers.clear();
            _parsers = CreateParserList();
            ParseSubElementsInternal(indexedElements, parserContext, object);
        }

        /**
         * Parsing the sub elements
         * @param indexedElements all sub elements
         * @param parserContext a parser context to store dynamic information in.
         * @param object the object that will be filled during the parsing process.
         */
        virtual void ParseSubElementsInternal(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<T>& object) {}
    };
}
