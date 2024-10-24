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

#include "ContentMessage.h"
#include "Textmarker.h"
#include "ErrorLevel.h"
#include "MemLeakDetection.h"
#include "ExportDefinitions.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
     * A message that consists of the message itself and some meta information like the error level and a textmarker
     * that enables the user to trace the message back to a file location.
     *
     */
    class OPENSCENARIOLIB_EXP FileContentMessage: public ContentMessage
    {
    private:
        Textmarker _textmarker;

    public:
        /**
         * Constructor;
         * @param message the message text
         * @param errorLevel the error level of the message
         * @param textmarker the text marker that enables the user to trace the message back to a file location.
         */
		FileContentMessage(const std::string message, const ErrorLevel errorLevel, const Textmarker textmarker);

        ~FileContentMessage();

        /**
         * The text marker that enables the user to trace the message back to a file location
         * @return the text marker
         */
		Textmarker GetTextmarker() const;

		bool operator==(FileContentMessage& rhs);

		size_t HashCode();

		std::string ToString();

		int CompareTo(FileContentMessage& rhs);
    };
}
