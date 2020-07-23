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
        const static long UNSIGNED_SHORT_MAX_VALUE = USHRT_MAX;
        const static long long UNSIGNED_INT_MAX_VALUE = UINT_MAX;

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
        static long long ParseUnsignedInt(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker)
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
                    return kResult;

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
        static  double ParseDouble(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker)
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
        static long ParseUnsignedShort(IParserMessageLogger& messageLogger, std::string& xmlValue, Textmarker& textMarker)
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
                    return kResult;

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

    };
}
