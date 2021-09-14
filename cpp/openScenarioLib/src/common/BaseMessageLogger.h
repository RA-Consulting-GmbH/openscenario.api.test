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
#include "IContentMessageLogger.h"
#include <algorithm>
#include "MemLeakDetection.h"


namespace NET_ASAM_OPENSCENARIO
{
    template <class T>
    class BaseMessageLogger: public IContentMessageLogger
    {

    private :
        std::vector<T> _messages = {};
        ErrorLevel _logLevel = INFO;

    public:

        /**
         * Constructor
         * @param logLevel the log level treshhold. Messages with this log level
         * and worse log levels are logged
         */
         BaseMessageLogger(const ErrorLevel logLevel): _logLevel(logLevel) {}

        void LogMessage(T& message)
        {
            if (message.GetErrorLevel() >= _logLevel) 
            {
                _messages.push_back(message);
            }
        }

        void LogAllMessages(std::vector<T>& messages)
        {
            for (T fileContentMessage : messages) 
            {
                LogMessage(fileContentMessage);
            }
        }

        /**
         * The message that have been picked up.
         *
         * @return the messages picked up
         */
        std::vector<T> GetMessages()
        {
            return _messages;
        }

        std::vector<T> GetMessagesFilteredByErrorLevel(const ErrorLevel errorLevel)
        {

            std::vector<T> result;
            for (auto&& message : _messages)
            {
                if (message.GetErrorLevel() == errorLevel)
                {
                    result.push_back(message);
                }
            }

            std::sort(result.begin(), result.end(), []( T& lhs,  T& rhs) {
                return lhs.GetMsg() < rhs.GetMsg();
            });
            return result;
        }

        std::vector<T> GetMessagesFilteredByWorseOrEqualToErrorLevel(const ErrorLevel errorLevel)
        {
            std::vector<T> result;
            for (auto&& message : _messages)
            {
                if (message.GetErrorLevel() >= errorLevel)
                {
                    result.push_back(message);
                }
            }

            std::sort(result.begin(), result.end(), []( T& lhs,  T& rhs) {
                return lhs.GetMsg() < rhs.GetMsg();
            });
            return result;
        }
    };
}