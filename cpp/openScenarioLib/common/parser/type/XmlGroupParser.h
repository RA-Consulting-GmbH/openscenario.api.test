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
#include "Textmarker.h"
#include "BaseImpl.h"
#include "ParserContext.h"
#include "XmlModelGroupParser.h"
#include "IXmlTypeParser.h"
#include "XmlParserBase.h"
#include "IndexedElement.h"
#include "Position.h"
#include <vector>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Parser for XSD:group types
    */
    template <class T>
    class XmlGroupParser:public BaseImpl, public XmlParserBase<T>, public IXmlTypeParser<T> 
    {

    protected:
        std::string _elementName;
        std::shared_ptr<XmlModelGroupParser<T>> _subElementParser = nullptr;

    public:
        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operating on.
         */
        XmlGroupParser(IParserMessageLogger& messageLogger, std::string& filename): XmlParserBase<T>(messageLogger, filename) {}

        void ParseElement(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <ParserContext>& parserContext, std::shared_ptr <T>& object) override
        {
            const auto kStartPosition = indexedElement->GetStartElementLocation();
            object->SetStartMarker(Textmarker(kStartPosition.GetLine(), kStartPosition.GetColumn(), this->_filename));

            // Prepare a list
            auto parentSubElements = indexedElement->GetParent().lock()->GetSubElements();
            const auto kIt = std::find(parentSubElements.begin(), parentSubElements.end(), indexedElement);
            int index = 0;
            if (kIt != parentSubElements.end())
                index = static_cast<int>(std::distance(parentSubElements.begin(), kIt));

            std::vector<std::shared_ptr<IndexedElement>> elementsToParse;
            for (unsigned int i = index; i < parentSubElements.size(); i++)
            {
                elementsToParse.push_back(parentSubElements[i]);
            }

            ParseSubElements(elementsToParse, parserContext, object);
            const auto kEndPosition = parserContext->GetLastElementParsed()->GetEndElementLocation();
            object->SetEndMarker(Textmarker(kEndPosition.GetLine(), kEndPosition.GetColumn(), this->_filename));
        }

        void ParseSubElements(std::vector<std::shared_ptr<IndexedElement>>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<T>& object) override
        {
            _subElementParser->ParseSubElements(indexedElement, parserContext, object);
        }
    };
}
