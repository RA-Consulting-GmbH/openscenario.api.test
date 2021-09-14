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
#include <climits>
#include <stdexcept> 
#include <algorithm>
#include <locale>
#include <iomanip>
#include "DateTime.h"
#include "MemLeakDetection.h"

/**
 * Container for parameter values (name, type, value)
 * @author Andreas Hege - RA Consulting
 *
 */
namespace NET_ASAM_OPENSCENARIO
{
    /**
     * Provides helper methods for the pasring process.
     * @author Andreas Hege - RA Consulting
     *
     */
    class ParserHelper 
    {
    public:
        const static uint16_t UNSIGNED_SHORT_MAX_VALUE = USHRT_MAX;
        const static uint32_t UNSIGNED_INT_MAX_VALUE = UINT_MAX;

        /**
         * Parsing a string value into a string value.
         * @param messageLogger to log errors and warnings
         * @param xmlValue the value from xml
         * @param textMarker text marker
         * @return the parsed value
         */
		static  std::string ParseString(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker);

        /**
         * Parsing a string representation of an unsigned integer value into an unsigned integer value
         * @param messageLogger to log errors and warnings
         * @param xmlValue the value from xml
         * @param textMarker text marker
         * @return the parsed value or null if value cannot be parsed
         */
		static uint32_t ParseUnsignedInt(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker);
        /**
         * Parsing a string representation of an integer value into an integer value.
         * Integer value is represented in a Integer data object.
         * @param messageLogger to log errors and warnings
         * @param xmlValue the value from xml
         * @param textMarker text marker
         * @return the parsed value or null if value cannot be parsed
         */
		static int ParseInt(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker);

        /**
         * Parsing a string representation of a double value into a double value.
         * Integer value is represented in a Double data object.
         * @param messageLogger to log errors and warnings
         * @param xmlValue the value from xml
         * @param textMarker text marker
         * @return the parsed value or null if value cannot be parsed
         */
		static double ParseDouble(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker);
        /**
         * Parsing a string representation of an unsigned short value into an unsigned short value.
         * and check the limits of unsigned short (16 bit). unsigned short value is represented in a Integer data object.
         * @param messageLogger to log errors and warnings
         * @param xmlValue the value from xml
         * @param textMarker text marker
         * @return the parsed value or null if value cannot be parsed
         */
		static uint16_t ParseUnsignedShort(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker);

        /**
         * Parsing a string representation of a boolean into an boolean value.
         * boolean value is represented in a Boolean data object.
         * @param messageLogger to log errors and warnings
         * @param xmlValue the value from xml
         * @param textMarker text marker
         * @return the parsed value or null if value cannot be parsed
         */
		static bool ParseBoolean(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker);

        /**
         * Parsing a string representation of a date into a date value.
         * Date value is represented in a java.util.Date data object.
         * @param messageLogger to log errors and warnings
         * @param xmlValue the value from xml
         * @param textMarker text marker
         * @return the parsed value or null if value cannot be parsed
         */
		static DateTime ParseDateTime(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker);

        /**
         * Parsing a string representation of an unsigned integer value into an unsigned integer value and
         * check the limits of unsigned integer (32 bit range). unsigned integer value is represented in a
         * Long data object.
         *
         * @param xmlValue the value
         * @throws Exception when validation fails
         */
		static void ValidateUnsignedInt(std::string& xmlValue);

        /**
         * Parsing a string representation of an integer value into an integer value. Integer value is
         * represented in a Integer data object.
         *
         * @param xmlValue the value
         * @throws Exception when validation fails
         */
		static void ValidateInt(std::string& xmlValue);

        /**
         * Parsing a string representation of a double value into a double value. Integer value is
         * represented in a Double data object.
         *
         * @param xmlValue the value
         * @throws Exception when validation fails
         */
		static void ValidateDouble(std::string& xmlValue);

        /**
         * Parsing a string representation of an unsigned short value into an unsigned short value. and
         * check the limits of unsigned short (16 bit). unsigned short value is represented in a Integer
         * data object.
         *
         * @param xmlValue the value
         * @throws Exception when validation fails
         */
		static void ValidateUnsignedShort(std::string& xmlValue);

        /**
         * Parsing a string representation of a boolean into an boolean value. boolean value is
         * represented in a Boolean data object.
         *
         * @param xmlValue the value
         * @throws Exception when validation fails
         */
		static void ValidateBoolean(std::string& xmlValue);

        /**
         * Parsing a string representation of a date into a date value. Date value is represented in a
         * java.util.Date data object.
         *
         * @param xmlValue the value
         * @throws Exception when validation fails
         */
		static void ValidateDateTime(std::string& xmlValue);
    };
}
