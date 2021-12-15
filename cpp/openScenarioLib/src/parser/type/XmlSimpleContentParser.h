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
#include "XmlComplexTypeParser.h"


namespace NET_ASAM_OPENSCENARIO
{
	/**
	* Parser for XSD:simpleContent types (a complexType Parser with no elements, just content)
	*/
	class XmlSimpleContentParser : public virtual BaseImpl, public XmlComplexTypeParser
	{
	public:
		/**
		 * Constructor
		 * @param messageLogger to log messages during parsing process
		 * @param filename of the file the parser is operating on.
		 * @param parserOptions options for the parser
		 */
		XmlSimpleContentParser(IParserMessageLogger& messageLogger, std::string& filename, ParserOptions& parserOptions);
		virtual ~XmlSimpleContentParser();

		void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <ParserContext>& parserContext, std::shared_ptr <BaseImpl> object);


	protected:
		/**
		 * Sets the property that is represented by the content
		 * @param content the content of the simpleContent
		 * @param object the model object for that the property is assigned with the content
		 */
		virtual void SetContentProperty(const std::string content, std::shared_ptr<BaseImpl> object) = 0;

		/**
		 * is the content a required property.
		 * @return true if required
		 */
		virtual bool IsContentRequired();

	};
}
