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
#include "IParserMessageLogger.h"
#include "BaseImpl.h"
#include "XmlParserBase.h"
#include "IndexedElement.h"



namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Generic parsers for wrapped list. An inner parser is wrapped by this parser.
    */
    class WrappedListParser: public BaseImpl, public XmlParserBase, public IElementParser
    {
    private:
        std::shared_ptr<IElementParser> _innerElementParser;

    protected:
        std::string _wrapperTagName;
        Position _wrapperTagNameEndPosition;

    public:
        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operationg on.
         * @param innerParser the inner parser
         * @param wrapperTagName the tagname that wrapps the list.
         * @param parserOptions options for the parser
         */
		WrappedListParser(IParserMessageLogger& messageLogger, std::string& filename, const std::shared_ptr<IElementParser> innerParser, const std::string wrapperTagName, ParserOptions& parserOptions);
           

		void ParseSubElements(std::vector<std::shared_ptr<IndexedElement>>& parentElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;
    	

		void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <ParserContext>& parserContext, std::shared_ptr <BaseImpl> object) override;

		int GetMinOccur() override;
    	
		int GetMaxOccur() override;


		bool DoesMatch(std::string& elementName) override;


		std::vector<std::string> GetExpectedTagNames() override;

    };
}
