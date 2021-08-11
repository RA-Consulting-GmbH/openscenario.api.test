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
#include <string>
#include "DateTime.h"
#include "MemLeakDetection.h"

/**
 * A generic implementation of INamedReference
 *
*/
namespace NET_ASAM_OPENSCENARIO
{
    class XmlExportHelper
    {
    public:

        /**
         * Retrieve the xml string from a double value
         * @param value the double value
         * @return the xml string
         */
		static std::string ToXmlStringFromDouble(const double value);

        /**
         * Retrieve the xml string from a string value
         * @param value the string value
         * @return the xml string
         */
		static std::string ToXmlStringFromString(const std::string value);

        /**
         * Retrieve the xml string from a unsigned int value
         * @param value the unsigned int value
         * @return the xml string
         */
		static std::string ToXmlStringFromUnsignedInt(const long value);

        /**
         * Retrieve the xml string from a unsigned short value
         * @param value the unsigned short value
         * @return the xml string
         */
		static std::string ToXmlStringFromUnsignedShort(const int value);

        /**
         * Retrieve the xml string from a integer value
         * @param value the integer value
         * @return the xml string
         */
		static std::string ToXmlStringFromInt(const int value);

        /**
         * Retrieve the xml string from a date value
         * @param value the date value
         * @return the xml string
         */
		static std::string ToXmlStringFromDateTime(const DateTime value);

        /**
         * Retrieve the xml string from a boolean value
         * @param value the boolean value
         * @return the xml string
         */
		static std::string ToXmlStringFromBoolean(const bool value);
    };
}