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
#include <exception>
#include <string>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    class ScenarioLoaderException : public std::exception
    {
    private:
        /**
         * Serial ID, default
         */
        static const long kSerialVersionUid = 1L;
        std::string _msg;

    public:
        /**
         * Constructor
         * @param message text message
         */
        ScenarioLoaderException(std::string message) :_msg(message) {}

        const char* what() const throw() override
        {
            return _msg.c_str();
        }

    };

}
