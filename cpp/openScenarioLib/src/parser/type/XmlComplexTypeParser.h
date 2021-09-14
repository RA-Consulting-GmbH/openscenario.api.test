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
#include "IXmlTypeParser.h"
#include "XmlParserBase.h"
#include <vector>
#include <map>

#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Parsing an XSD:complexType
    */
    class XmlComplexTypeParser : public virtual BaseImpl, public XmlParserBase, public IXmlTypeParser 
    {
    protected:
        std::shared_ptr<XmlModelGroupParser> _subElementParser = nullptr;
        /**
         * A dictionary that maps an attribute names to their parser.
         * @return the name to parser dictionary
         */
		virtual std::map<std::string, std::shared_ptr<IAttributeParser>> GetAttributeNameToAttributeParserMap();


    private:
        std::map<std::string, std::shared_ptr<IAttributeParser>> _attributeNameToAttributeParser;

    public:
        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operating on.
         */
		XmlComplexTypeParser(IParserMessageLogger& messageLogger, std::string& filename);
		virtual ~XmlComplexTypeParser();
    protected:
        /**
         * parses all atrributes and fills them into the object
         * @param indexedElement the element to be parsed
         * @param object the object that will be filled during the parsing process.
         */
		void ParseAttributes(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <BaseImpl> object);
    public:
		void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <ParserContext>& parserContext, std::shared_ptr <BaseImpl> object) override;
    protected:
        /**
         * Checks for paramterized value ($-notation)
         * @param value value
         * @return true if the attribute represents a parameter rather than a literal value
         */
		static bool IsParametrized(std::string& value);
		/**
		 * Checks for expression value ('${'-notation)
		 * @param value value
		 * @return true if the attribute represents an expression rather than a literal value
		 */
		static bool IsExpression(std::string& value);
        /**
         * Stripes the '$' from a name when the value starts with '$'
         * @param value value that might start with a '$'
         * @return value without a starting '$'
         */
		static std::string StripDollarSign(std::string& value);

    public:
		void ParseSubElements(std::vector<std::shared_ptr<IndexedElement>>& indexedElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) override;
    };

}
