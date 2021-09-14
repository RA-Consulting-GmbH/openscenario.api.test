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
#include "BaseMessageLogger.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"

#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Buffers log messages
    */
    class SimpleMessageLogger : public IParserMessageLogger
    {
    private:
        BaseMessageLogger<FileContentMessage> _baseMessageLogger;

    public:
		OPENSCENARIOLIB_EXP SimpleMessageLogger(const ErrorLevel logLevel) ;

		OPENSCENARIOLIB_EXP virtual void LogMessage(FileContentMessage& message) override;

		OPENSCENARIOLIB_EXP virtual void LogAllMessages(std::vector<FileContentMessage>& messages) override;

        /**
        * The message that have been picked up and >= log level.
        * @return the messages picked up
        */
		OPENSCENARIOLIB_EXP virtual std::vector<FileContentMessage> GetMessages();

		OPENSCENARIOLIB_EXP virtual std::vector<FileContentMessage> GetMessagesFilteredByErrorLevel(const ErrorLevel errorLevel)  override;

		OPENSCENARIOLIB_EXP virtual std::vector<FileContentMessage> GetMessagesFilteredByWorseOrEqualToErrorLevel(const ErrorLevel errorLevel) override;
    };
}