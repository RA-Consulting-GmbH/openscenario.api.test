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
#include "IParserMessageLogger.h"
#include "IndexedElement.h"
#include "XmlParserBase.h"
#include "BaseImpl.h"
#include <vector>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * A generic parser for model groups (sequence, all, choice)
    */
    class XmlModelGroupParser: public virtual BaseImpl, public XmlParserBase
    {
    protected:
        std::vector<std::shared_ptr<IElementParser>> _parsers;
        /**
         * Creates a list of parsers for the elements of the model group.
         * @return the list of parsers.
         */
        virtual std::vector<std::shared_ptr<IElementParser>> CreateParserList()
        {
            return {};
        }

    public:
        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operationg on.
         */
        XmlModelGroupParser(IParserMessageLogger& messageLogger, std::string filename) :XmlParserBase(messageLogger, filename) {}
        virtual ~XmlModelGroupParser() = default;

    protected:
        /**
         * The parsers for the elements in this model group.
         * @return the parsers
         */
        std::vector<std::shared_ptr<IElementParser>>& GetParsers()
        {
            return _parsers;
        }

        /**
         * Find the right parser for a given tag name
         * @param tagName the tag name a given parser ahould be found for.
         * @return the appropriate parser for an element with this tag name.
         */
        std::shared_ptr<IElementParser> FindParser(std::string& tagName)
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
            for (unsigned int i = currentIndex; i < indexedElements.size(); i++)
            {
                if (indexedElements[i] == lastParsedElement)
                {
                    return i;
                }
            }
            return static_cast<int>(indexedElements.size());
        }

    public:
       void ParseSubElements(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override
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
        virtual void ParseSubElementsInternal(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) {}
    };
}
