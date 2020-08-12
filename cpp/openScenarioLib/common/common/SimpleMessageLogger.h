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
#include <vector>
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include <algorithm>
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Buffers log messages
    */
    class SimpleMessageLogger : public IParserMessageLogger
    {
    private:
        std::vector<FileContentMessage> _messages;
        ErrorLevel _logLevel = INFO;

    public:
        SimpleMessageLogger(const ErrorLevel logLevel) : _logLevel(logLevel) {}

        void LogMessage(FileContentMessage& message) override
        {
            if (message.GetErrorLevel() >= _logLevel)
                _messages.push_back(message);
        }

        void LogAllMessages(std::vector<FileContentMessage>& messages) override
        {
            for (auto&& message : messages)
                LogMessage(message);
        }

        /**
        * The message that have been picked up and >= log level.
        * @return the messages picked up
        */
        std::vector<FileContentMessage> GetMessages() const
        {
            return _messages;
        }

        /**
        * The message that have been picked up filtered by a specific error level.
        *
        * @param errorLevel the error level to filter the messages.
        * @return the filtered messages
        */
        std::vector<FileContentMessage> GetMessagesFilteredByErrorLevel(const ErrorLevel errorLevel) 
        {
            std::vector<FileContentMessage> result;
            for (auto&& message : _messages)
            {
                if (errorLevel == message.GetErrorLevel())
                {
                    result.push_back(message);
                }
            }

            std::sort(result.begin(), result.end(), [](const NET_ASAM_OPENSCENARIO::FileContentMessage& lhs, const NET_ASAM_OPENSCENARIO::FileContentMessage& rhs) {
                return lhs.GetMsg() < rhs.GetMsg();
            });
            return result;
        }

        /**
         * The message that have been picked up filtered by a specific error level.
         *
         * @param errorLevel the error level to filter for worse or equal.
         * @return the filtered messages
         */
        std::vector<FileContentMessage> GetMessagesFilteredByWorseOrEqualToErrorLevel(const ErrorLevel errorLevel) 
        {
            std::vector<FileContentMessage> result;
            for (auto&& message : _messages)
            {
                if (message.GetErrorLevel() >= errorLevel)
                {
                    result.push_back(message);
                }
            }

            std::sort(result.begin(), result.end(), [](const NET_ASAM_OPENSCENARIO::FileContentMessage& lhs, const NET_ASAM_OPENSCENARIO::FileContentMessage& rhs) {
                return lhs.GetMsg() < rhs.GetMsg();
            });
            return result;
        }
    };
}