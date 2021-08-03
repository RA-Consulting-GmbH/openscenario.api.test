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
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include "BaseImpl.h"
#include "ParserContext.h"
#include "XmlComplexTypeParser.h"
#include "IndexedElement.h"
#include "Position.h"
#include <vector>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Parser for XSD:simpleContent types (a complexType Parser with no elements, just content)
    */
    template <class T>
    class XmlSimpleContentParser: public virtual BaseImpl, public XmlComplexTypeParser<T> 
    {
    public:
        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operating on.
         */
        XmlSimpleContentParser(IParserMessageLogger& messageLogger, std::string& filename) : XmlComplexTypeParser<T>(messageLogger, filename) {}

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <ParserContext>& parserContext, std::shared_ptr <T>& object) override
        {

            this->ParseAttributes(indexedElement, object);
            // Read element. Make sure it is a Character Tag
            auto content = indexedElement->GetCharacters();
            if (!content.empty())
                SetContentProperty(content, object);
            else if (IsContentRequired())
                SetContentProperty("", object);

            auto subElements = indexedElement->GetSubElements();
            for (auto&& elem : subElements)
            {
                std::string elemName = elem->GetElement()->Name();
                auto msg = FileContentMessage("Element '" + elemName + "' is not allowed here.", ERROR, Textmarker(elem->GetStartElementLocation().GetLine(), elem->GetStartElementLocation().GetColumn(), this->_filename));
                this->_messageLogger.LogMessage(msg);
            }

            const auto kStartPosition = indexedElement->GetStartElementLocation();
            object->SetStartMarker( Textmarker(kStartPosition.GetLine(), kStartPosition.GetColumn(), this->_filename));
            const auto kEndPosition = indexedElement->GetEndElementLocation();
            object->SetEndMarker( Textmarker(kEndPosition.GetLine(), kEndPosition.GetColumn(), this->_filename));
            parserContext->SetLastElementParsed(indexedElement);
        }


    protected:
        /**
         * Sets the property that is represented by the content
         * @param content the content of the simpleContent
         * @param object the model object for that the property is assigned with the content
         */
        virtual void SetContentProperty( const std::string content, std::shared_ptr<T>& object) {}

        /**
         * is the content a required property.
         * @return true if required
         */
        virtual bool IsContentRequired()
        {
            return false;
        }

    };
}
