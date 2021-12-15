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
#include "XmlModelGroupParser.h"
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
         * @param parserOptions options for the parser
         */
		XmlSequenceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
		virtual ~XmlSequenceParser();
    	
		void ParseSubElementsInternal(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;
  
    private:
        /**
         * Evaluates the next index in the ordered parser list.
         * Checks on the fly whether a element is missing in between.
         * @param currentIndex the current index in the list
         * @param tagName the tag name of the element that should be parsed
         * @param startPosition  a current position in the file
         * @return the next index if found or -1 if a parser for such a element cannot be found.
         */
		int GetNextIndex(int& currentIndex, std::string& tagName, Position& startPosition);
    };
}
