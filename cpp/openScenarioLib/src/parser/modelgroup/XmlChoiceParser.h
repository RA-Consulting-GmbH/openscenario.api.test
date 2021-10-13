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
#include <map>
#include "MemLeakDetection.h"


namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Parser for a XSD:choice model group (one out of of a list of types).
    */
    class XmlChoiceParser: public virtual BaseImpl, public XmlModelGroupParser 
    {
    private:
        std::map<std::shared_ptr<IElementParser>, int>  _occuredElementList;

    public:
        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operating on.
         * @param parserOptions options for the parser
         */
		XmlChoiceParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
		virtual ~XmlChoiceParser();
		void ParseSubElementsInternal(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;


    private:
        /**
         * Once a occurance is found, exclude all other parser (choice)
         * @param parser the parser that was used to parse the element
         */
		void ExcludeOtherParsers(std::shared_ptr<IElementParser>& parser);
    };
}
