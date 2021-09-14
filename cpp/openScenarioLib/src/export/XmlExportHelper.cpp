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


#include "XmlExportHelper.h"
#include "MemLeakDetection.h"

/**
 * A generic implementation of INamedReference
 *
*/
namespace NET_ASAM_OPENSCENARIO
{
   

        std::string XmlExportHelper::ToXmlStringFromDouble(const double value)
        {
            return std::to_string(value);
        }

         std::string XmlExportHelper::ToXmlStringFromString(const std::string value)
        {
            return value;
        }

         std::string XmlExportHelper::ToXmlStringFromUnsignedInt(const long value)
        {
            return std::to_string(value);
        }

         std::string XmlExportHelper::ToXmlStringFromUnsignedShort(const int value)
        {
            return std::to_string(value);
        }

        std::string XmlExportHelper::ToXmlStringFromInt(const int value)
        {
            return std::to_string(value);
        }

        std::string XmlExportHelper::ToXmlStringFromDateTime(const DateTime value)
        {
            //Is not exactly the same as Java implementation.
            return DateTimeParser::ToString(value);
        }

        std::string XmlExportHelper::ToXmlStringFromBoolean(const bool value)
        {
            return value? "true": "false";
        }

}