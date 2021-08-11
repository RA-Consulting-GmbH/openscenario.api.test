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
#include <sstream>
#include <iomanip>
#include <regex>
#include "MemLeakDetection.h"
#include "ExportDefinitions.h"

namespace NET_ASAM_OPENSCENARIO
{
    struct DateTime
    {
        double sec;   // seconds after the minute - [0, 60] including leap second
        int min;      // minutes after the hour - [0, 59]
        int hour;     // hours since midnight - [0, 23]
        int mday;     // day of the month - [1, 31]
        int mon;      // months since January - [0, 11]
        int year;     // years since 1900
        int wday;     // days since Sunday - [0, 6]
        int yday;     // days since January 1 - [0, 365]
        int isdst;    // daylight savings time flag
        int gmtHours; //hours +- GMT
        int gmtMin;   //min +- GMT

		OPENSCENARIOLIB_EXP bool operator== (const DateTime& other) const;
        
    };

    class DateTimeParser
    {
    public:

        //2004-04-12T13:20:00-05:00 XML Schema 1.0 > xsd:dateTime
		OPENSCENARIOLIB_EXP static std::string ToString(const DateTime dateTime);
		OPENSCENARIOLIB_EXP static bool DateTimeParser::ToDateTime(std::string& dateTimeString, DateTime& dateTime);
    };
}
