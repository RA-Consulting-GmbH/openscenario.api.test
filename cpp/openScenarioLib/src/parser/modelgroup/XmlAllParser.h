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

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Parser for a XSD:all model group (arbitrary order of elements).
    */

    class XmlAllParser: public virtual BaseImpl, public XmlModelGroupParser
    {
    public:
        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operating on.
         */
		XmlAllParser(IParserMessageLogger& messageLogger, std::string& filename);
		virtual ~XmlAllParser();


		void ParseSubElementsInternal(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;

    private:
        /**
         * Formatting the expected tags for a message (comma separated)
         * @param tagNames list of tag names
         * @return the comma separated string
         */
		static std::string FormatExpectedTagNames(std::vector<std::string>& tagNames);

    };
}
