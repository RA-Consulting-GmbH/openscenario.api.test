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

#include "DateTime.h"
#include <sstream>
#include <iomanip>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
     bool DateTime::operator== (const DateTime& other) const
        {
            return sec == other.sec &&
                min == other.min &&
                hour == other.hour &&
                mday == other.mday &&
                mon == other.mon &&
                year == other.year &&
                wday == other.wday &&
                yday == other.yday &&
                isdst == other.isdst &&
                gmtHours == other.gmtHours &&
                gmtMin == other.gmtMin;
        }


        std::string DateTimeParser::ToString(const DateTime dateTime)
        {
            std::stringstream ss;
            ss << std::setw(4) << std::setfill('0') << dateTime.year+1900 << "-";
            ss << std::setw(2) << std::setfill('0') << dateTime.mon + 1 << "-";
            ss << std::setw(2) << std::setfill('0') << dateTime.mday << "T";
            ss << std::setw(2) << std::setfill('0') << dateTime.hour << ":";
            ss << std::setw(2) << std::setfill('0') << dateTime.min << ":";
            ss << std::setw(2) << std::setfill('0') << std::setprecision(5) << dateTime.sec;

            if (dateTime.gmtHours != 0 || dateTime.gmtMin != 0)
            {
                if (dateTime.gmtHours < 0 || dateTime.gmtMin < 0)
                    ss << "-";
                else
                    ss << "+";
                ss << std::setw(2) << std::setfill('0') << abs(dateTime.gmtHours) << ":";
                ss << std::setw(2) << std::setfill('0') << abs(dateTime.gmtMin);
            }
            return ss.str();
        }

        bool DateTimeParser::ToDateTime(std::string& dateTimeString, DateTime& dateTime)
        {
            if (std::regex_match(dateTimeString, std::regex("(\\d{4}-\\d{2}-\\d{2}T\\d{2}:\\d{2}:\\d{2}\\.?\\d*(\\+|\\-)?\\d{0,2}:?\\d{0,2}Z?)")))
            {
                std::istringstream value(dateTimeString);
                value.imbue(std::locale());
                std::tm tm{};
                value >> std::get_time(&tm, "%Y-%m-%dT%H:%M:%S");

                dateTime.year = tm.tm_year;
                dateTime.mon = tm.tm_mon;
                dateTime.mday = tm.tm_mday;
                dateTime.hour = tm.tm_hour;
                dateTime.min = tm.tm_min;
                dateTime.sec = tm.tm_sec;

                //get milliseconds if available
                std::regex rgx("(\\.\\d*)");
                std::smatch match;
                if (std::regex_search(dateTimeString, match, rgx))
                    dateTime.sec += std::stod(match.str(0));

                //Check for Timezone 
                std::regex rgxTimeZone("((\\+|\\-)\\d{2}:\\d{2})");
                if (std::regex_search(dateTimeString, match, rgxTimeZone))
                {
                    std::string subString = match.str(0);
                    //check if behind/ahead
                    std::regex rgxBehind("(\\-)");
                    std::smatch temp;
                    auto isBehind = std::regex_search(subString, temp, rgxBehind);
                    std::regex rgxTime("(\\d{2})");
                    if (std::regex_search(subString, temp, rgxTime))
                    {
                        dateTime.gmtHours = isBehind?-1*std::stoi(temp.str(0)): std::stoi(temp.str(0));
                        dateTime.gmtMin = isBehind ? -1 * std::stoi(temp.suffix().str().substr(1)) : std::stoi(temp.suffix().str().substr(1));
                    }
                }

                return !value.fail();
            }

            return false;
        }
    ;
}
