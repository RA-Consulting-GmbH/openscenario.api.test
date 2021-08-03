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
#include "ParserContext.h"
#include "XmlParserException.h"
#include "IndexedElement.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Parser interface for types (XSD:group, XSD:complexType, XSD:simpleContent)
    */
    template <class T>
    class IXmlTypeParser 
    {
    public:
        IXmlTypeParser() = default;
        virtual ~IXmlTypeParser() = default;

        /**
         * Parsing the XSD type
         * @param indexedElement the element to be parsed
         * @param parserContext a parser context to store dynamic information in.
         * @param object the object that will be filled during the parsing process.
         * @throws XmlParserException if an exception occurs.
         */
        //TODO: discuss with Dieter if this should be avoided as usually its suggested not to specify exceptions
        virtual void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <ParserContext>& parserContext, std::shared_ptr <T>& object) {} //throw(XmlParserException) {}

    };

}
