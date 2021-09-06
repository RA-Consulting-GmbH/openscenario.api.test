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
#include "DateTime.h"
#include "IParserMessageLogger.h"
#include "BaseImpl.h"
#include "Textmarker.h"
#include "IndexedElement.h"
#include "Position.h"
#include <vector>
#include "ParserContext.h"
#include "ParserHelper.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Base class for all parsers
    */

    class XmlParserBase
    {
    public:
        IParserMessageLogger& _messageLogger;
        std::string _filename;

    public:
        /**
         * Constructor
         * @param messageLogger to log messages during parsing process
         * @param filename of the file the parser is operationg on.
         */
        XmlParserBase(IParserMessageLogger& messageLogger, std::string& filename):_messageLogger(messageLogger), _filename(filename) {}

        virtual ~XmlParserBase() = default;

        /**
         * Parser method for sub elements.
         * @param parentElements list of parent elements (important for XSD groups)
         * @param parserContext a parser context to store dynamic information in.
         * @param object model object to be filled by the parsing process
         */
        virtual void ParseSubElements(std::vector<std::shared_ptr<IndexedElement>>& parentElements, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object) {};

        /**
         * Parsing a string value
         * @param xmlValue string representation of the value from xml file
         * @param xmlTextMarkerFactory factory for a text marker
         * @return parsed value
         */
        static std::string ParseString(const std::string xmlValue, Textmarker& xmlTextMarkerFactory)
        {
            return xmlValue;
        }

        /**
         * Parsing a unsigned int value
         * @param xmlValue string representation of the value from xml file
         * @param textMarker text marker
         * @return parsed value
         */
        uint32_t ParseUnsignedInt(std::string& xmlValue, Textmarker& textMarker)
        {
            return ParserHelper::ParseUnsignedInt(_messageLogger, xmlValue, textMarker);
        }

        /**
         * Parsing a int value
         * @param xmlValue string representation of the value from xml file
         * @param textMarker text marker
         * @return parsed value
         */
        int ParseInt(std::string& xmlValue, Textmarker& textMarker)
        {
            return ParserHelper::ParseInt(_messageLogger, xmlValue, textMarker);
        }

        /**
         * Parsing a double value
         * @param xmlValue string representation of the value from xml file
         * @param textMarker text marker
         * @return parsed value
         */
        double ParseDouble(std::string& xmlValue, Textmarker& textMarker)
        {
            return ParserHelper::ParseDouble(_messageLogger, xmlValue, textMarker);
        }

        /**
         * Parsing a unsigned short value
         * @param xmlValue string representation of the value from xml file
         * @param textMarker text marker
         * @return parsed value
         */
        uint16_t ParseUnsignedShort(std::string& xmlValue, Textmarker& textMarker)
        {
            return ParserHelper::ParseUnsignedShort(_messageLogger, xmlValue, textMarker);
        }

        /**
         * Parsing a boolean value
         * @param xmlValue string representation of the value from xml file
         * @param textMarker text marker
         * @return parsed value
         */
        bool ParseBoolean(std::string& xmlValue, Textmarker& textMarker)
        {
            return ParserHelper::ParseBoolean(_messageLogger, xmlValue, textMarker);
        }

        /**
         * Parsing a date value
         * @param xmlValue string representation of the value from xml file
         * @param textMarker text marker
         * @return parsed value
         */
        DateTime ParseDateTime(std::string& xmlValue, Textmarker& textMarker)
        {
            return ParserHelper::ParseDateTime(_messageLogger, xmlValue, textMarker);
        }
    };

    /**
     * A parser for a indexed element
     */

    class IElementParser
    {
    public:
        IElementParser() = default;
        virtual ~IElementParser() = default;

        /**
         * parsing the element
         * @param indexedElement the element to be parsed
         * @param parserContext a parser context to store dynamic information in.
         * @param object the model object to be filled during the parsing process
         */
        virtual void Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr <ParserContext>& parserContext, std::shared_ptr <BaseImpl> object) {}

        /**
         * The defined min accur of the element
         * @return the defined min occur value
         */
        virtual int GetMinOccur()
        {
            return 0;
        }

        /**
         * The defined max occur of the element (-1 mean infinity)
         * @return the defined max occur value
         */
        virtual int GetMaxOccur()
        {
            return 0;
        }

        /**
         * Does the parser matches a specific element name.
         * @param elementName the requested element name
         * @return true if the parser is able to parse an element with this specific element name.
         */
        virtual bool DoesMatch(std::string& elementName)
        {
            return false;
        }

        /**
         * A list with the element names  (tag names) this parser would accept
         * Mainly for creating error messages
         * @return the list with element names
         */
        virtual std::vector<std::string> GetExpectedTagNames()
        {
            return {};
        }
    };

    /**
    * Interface for parsing attributes
    */
    class IAttributeParser
    {
    public:
        IAttributeParser() = default;
        virtual ~IAttributeParser() = default;

        /**
         * parse an attribute
         * @param startPosition of the textual representation of the attribute
         * @param endPosition of the textual representation of the attribute
         * @param attributeName name of the attribute
         * @param attributeValue value of the attribute
         * @param object the model object to be filled during the parsing process
         */
		virtual void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) = 0;

        /**
         * The defined min accur of the element 0 for optional 1 for required
         * @return the defined min occur value (0 or 1)
         */
		virtual int GetMinOccur() = 0;
       
    };
}
