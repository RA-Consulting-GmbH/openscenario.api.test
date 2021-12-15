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
#include "FileContentMessage.h"
#include "IContentMessageLogger.h"
#include "MemLeakDetection.h"
#include "TreeContentMessage.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
     * An interface that logs parser messages in a file context.
     *
     */
    class IParserMessageLogger : public IContentMessageLogger
    {
    public:
        IParserMessageLogger() = default;
        virtual ~IParserMessageLogger() = default;

        /*
        * This is empty for compatibility reasons to checker framework and with parsing
        */
		virtual void LogMessage(FileContentMessage& message) = 0;

		virtual void LogAllMessages(std::vector<FileContentMessage>& messages) = 0;

		/**
		* The message that have been picked up and >= log level.
		* @return the messages picked up
		*/
		virtual  std::vector<FileContentMessage> GetMessages() = 0;

		virtual  std::vector<FileContentMessage> GetMessagesFilteredByErrorLevel(const ErrorLevel errorLevel) = 0;

		virtual  std::vector<FileContentMessage> GetMessagesFilteredByWorseOrEqualToErrorLevel(const ErrorLevel errorLevel) = 0;
    };
}
