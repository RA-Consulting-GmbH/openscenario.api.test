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

#include  "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "Textmarker.h"
#include <climits>
#include <sstream>
#include <stdexcept> 
#include <algorithm>
#include <locale>
#include <iomanip>
#include <iostream>
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
        static  std::string ParseString(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker) 
        {
            return xmlValue;
        }

        /**
         * Parsing a string representation of an unsigned integer value into an unsigned integer value
         * @param messageLogger to log errors and warnings
         * @param xmlValue the value from xml
         * @param textMarker text marker
         * @return the parsed value or null if value cannot be parsed
         */
        static uint32_t ParseUnsignedInt(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker)
        {
            try 
            {
                const auto kResult = std::stoll(xmlValue, nullptr, 0);
                if (kResult > UNSIGNED_INT_MAX_VALUE || kResult < 0)
                {
                    auto msg = FileContentMessage("Cannot convert '" + xmlValue + "' to an unsignedInteger. Value must be in [0.." + 
                                                  std::to_string(UNSIGNED_INT_MAX_VALUE) + "].", ERROR, textMarker);
                    messageLogger.LogMessage(msg);
                }
                else 
                    return kResult & 0xffffffff;

            }
            catch ( std::invalid_argument& e ) 
            {
                (void)e;
                auto msg = FileContentMessage("Cannot convert '" + xmlValue + "' to an unsignedInteger. Number format error.", ERROR, textMarker);
                messageLogger.LogMessage(msg);
            }

            return 0;
        }

        /**
         * Parsing a string representation of an integer value into an integer value.
         * Integer value is represented in a Integer data object.
         * @param messageLogger to log errors and warnings
         * @param xmlValue the value from xml
         * @param textMarker text marker
         * @return the parsed value or null if value cannot be parsed
         */
        static int ParseInt(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker) 
        {
            try 
            {
                const auto kResult = std::stoi(xmlValue, nullptr, 0);
                return kResult;
            }
            catch (std::invalid_argument& e)
            {
                (void)e;
                auto msg = FileContentMessage("Cannot convert '" + xmlValue + "' to an int. Number format error.", ERROR, textMarker);
                messageLogger.LogMessage(msg);
            }
            return 0;
        }

        /**
         * Parsing a string representation of a double value into a double value.
         * Integer value is represented in a Double data object.
         * @param messageLogger to log errors and warnings
         * @param xmlValue the value from xml
         * @param textMarker text marker
         * @return the parsed value or null if value cannot be parsed
         */
        static double ParseDouble(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker)
        {
            try 
            {
                const auto kResult = std::stod(xmlValue);
                return kResult;

            }
            catch (std::invalid_argument& e) 
            {
                (void)e;
                auto msg = FileContentMessage("Cannot convert '" + xmlValue + "' to a double. Number format error.", ERROR, textMarker);
                messageLogger.LogMessage(msg);
            }
            return 0;
        }

        /**
         * Parsing a string representation of an unsigned short value into an unsigned short value.
         * and check the limits of unsigned short (16 bit). unsigned short value is represented in a Integer data object.
         * @param messageLogger to log errors and warnings
         * @param xmlValue the value from xml
         * @param textMarker text marker
         * @return the parsed value or null if value cannot be parsed
         */
        static uint16_t ParseUnsignedShort(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker)
        {
            try 
            {
                const auto kResult = std::stol(xmlValue, nullptr, 0);
                if (kResult > 2 * UNSIGNED_SHORT_MAX_VALUE || kResult < 0)
                {
                    auto msg = FileContentMessage("Cannot convert '" + xmlValue + "' to an unsignedShort. Value must be in [0.." +
                                                   std::to_string(UNSIGNED_SHORT_MAX_VALUE) + "].", ERROR, textMarker);
                    messageLogger.LogMessage(msg);
                }
                else 
                    return kResult & 0xffff;

            }
            catch (std::invalid_argument& e) 
            {
                (void)e;
                auto msg = FileContentMessage("Cannot convert '" + xmlValue + "' to an unsignedShort. Number format error.", ERROR, textMarker);
                messageLogger.LogMessage(msg);
            }
            return 0;
        }

        /**
         * Parsing a string representation of a boolean into an boolean value.
         * boolean value is represented in a Boolean data object.
         * @param messageLogger to log errors and warnings
         * @param xmlValue the value from xml
         * @param textMarker text marker
         * @return the parsed value or null if value cannot be parsed
         */
        static bool ParseBoolean(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker)
        {
            bool result;

//            std::transform(xmlValue.begin(), xmlValue.end(), xmlValue.begin(), [](unsigned char c) { return std::tolower(c, std::locale()); });
            for ( std::string::iterator it=xmlValue.begin(); it!=xmlValue.end(); ++it)
               *it = std::tolower(*it, std::locale());

            if (xmlValue == "1" || xmlValue == "true")
                result = true;
            else if (xmlValue == "0" || xmlValue == "false")
                result = false;
            else
            {
                auto msg = FileContentMessage("Cannot convert '" + xmlValue + "' to a boolean. Number format error.", ERROR, textMarker);
                messageLogger.LogMessage(msg);
                return false;
            }

            return result;
        }

        /**
         * Parsing a string representation of a date into a date value.
         * Date value is represented in a java.util.Date data object.
         * @param messageLogger to log errors and warnings
         * @param xmlValue the value from xml
         * @param textMarker text marker
         * @return the parsed value or null if value cannot be parsed
         */
        static DateTime ParseDateTime(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker)
        {
            DateTime result{};

            try
            {
                if(!DateTimeParser::ToDateTime(xmlValue, result))
                {
                    auto msg = FileContentMessage("Cannot convert '" + xmlValue + "' to a dateTime. Number format error.", ERROR, textMarker);
                    messageLogger.LogMessage(msg);
                    return {};
                }
            }
            catch (...)
            {
                auto msg = FileContentMessage("Cannot convert '" + xmlValue + "' to a dateTime. Number format error.", ERROR, textMarker);
                messageLogger.LogMessage(msg);
                return {};
            }
            return result;
        }

        /**
         * Parsing a string representation of an unsigned integer value into an unsigned integer value and
         * check the limits of unsigned integer (32 bit range). unsigned integer value is represented in a
         * Long data object.
         *
         * @param xmlValue the value
         * @throws Exception when validation fails
         */
        static void ValidateUnsignedInt(std::string& xmlValue)
        {
            try 
            {
                const auto kResult = std::stoll(xmlValue, nullptr, 0);

                if (kResult > UNSIGNED_INT_MAX_VALUE || kResult < 0)
                {
                    const std::string kErrorMessage = "Cannot convert '" + xmlValue + "' to an unsignedInteger. Value must be in [0.." + std::to_string(UNSIGNED_INT_MAX_VALUE)+ "].";
                    throw std::range_error(kErrorMessage);
                }

            }
            catch (...) 
            {
                throw std::runtime_error("Cannot convert '" + xmlValue + "' to an unsignedInteger. Number format error.");
            }
        }

        /**
         * Parsing a string representation of an integer value into an integer value. Integer value is
         * represented in a Integer data object.
         *
         * @param xmlValue the value
         * @throws Exception when validation fails
         */
        static void ValidateInt(std::string& xmlValue)
        {
            try 
            {
                (void) std::stoi(xmlValue, nullptr, 0);
            }
            catch (...) 
            {
                throw std::runtime_error("Cannot convert '" + xmlValue + "' to an int. Number format error.");
            }
        }

        /**
         * Parsing a string representation of a double value into a double value. Integer value is
         * represented in a Double data object.
         *
         * @param xmlValue the value
         * @throws Exception when validation fails
         */
        static void ValidateDouble(std::string& xmlValue)
        {
            try 
            {
                (void) std::stod(xmlValue);
            }
            catch (...)
            {
                throw std::runtime_error("Cannot convert '" + xmlValue + "' to a double. Number format error.");
            }
        }

        /**
         * Parsing a string representation of an unsigned short value into an unsigned short value. and
         * check the limits of unsigned short (16 bit). unsigned short value is represented in a Integer
         * data object.
         *
         * @param xmlValue the value
         * @throws Exception when validation fails
         */
        static void ValidateUnsignedShort(std::string& xmlValue)
        {
            try 
            {
                const auto kResult = std::stol(xmlValue, nullptr, 0);
                if (kResult > 2 * UNSIGNED_SHORT_MAX_VALUE || kResult < 0)
                {
                    const std::string kErrorMessage = "Cannot convert '" + xmlValue + "' to an unsignedShort. Value must be in [0.." + std::to_string(UNSIGNED_SHORT_MAX_VALUE) + "].";
                    throw std::range_error(kErrorMessage);
                }
            }
            catch (...)
            {
                throw std::runtime_error("Cannot convert '" + xmlValue + "' to an unsignedShort. Number format error.");
            }
        }

        /**
         * Parsing a string representation of a boolean into an boolean value. boolean value is
         * represented in a Boolean data object.
         *
         * @param xmlValue the value
         * @throws Exception when validation fails
         */
        static void ValidateBoolean(std::string& xmlValue)
        {
            auto xmlValueCpy = xmlValue;
            for (std::string::iterator it = xmlValueCpy.begin(); it != xmlValueCpy.end(); ++it)
                *it = std::tolower(*it, std::locale());

            if (xmlValueCpy !="true" && xmlValueCpy != "false" && xmlValueCpy != "0" && xmlValueCpy != "1")
                throw std::runtime_error("Cannot convert '" + xmlValue + "' to a boolean. Illegal boolean value.");
        }

        /**
         * Parsing a string representation of a date into a date value. Date value is represented in a
         * java.util.Date data object.
         *
         * @param xmlValue the value
         * @throws Exception when validation fails
         */
        static void ValidateDateTime(std::string& xmlValue)
        {
            try 
            {
                DateTime result{};
                if (!DateTimeParser::ToDateTime(xmlValue, result))
                {
                    if (xmlValue != "true" && xmlValue != "false" && xmlValue != "0" && xmlValue != "1")
                        throw std::runtime_error("Cannot convert '" + xmlValue + "' to a dateTime. Illegal dateTime value.");
                }
            }
            catch (...)
            {
                throw std::runtime_error("Cannot convert '" + xmlValue + "' to a dateTime. Illegal dateTime value.");
            }
        }
    };
}
