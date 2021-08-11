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

#include "MemLeakDetection.h"
#include <memory>
#include "ErrorLevel.h"
#include "ExportDefinitions.h"

/**
 * An interface that logs a single message or a list of messages to a log target.
 */

namespace NET_ASAM_OPENSCENARIO
{
    class ContentMessage
    {

    private:
        std::string _message;
        ErrorLevel _errorLevel;

    public:
        /**
         * Constructor;
         *
         * @param message the message text
         * @param errorLevel the error level of the message
         */
		OPENSCENARIOLIB_EXP ContentMessage(const std::string message = "", const ErrorLevel errorLevel = INFO);

        /**
         * The text of a message
         *
         * @return the message text
         */
		OPENSCENARIOLIB_EXP std::string GetMsg();

        /**
         * The error level of the message.
         *
         * @return the error level
         */
		OPENSCENARIOLIB_EXP ErrorLevel GetErrorLevel();

    };
}