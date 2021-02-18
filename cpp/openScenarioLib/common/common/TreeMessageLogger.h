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
#include "BaseMessageLogger.h"
#include "ITreeMessageLogger.h"

/**
 * An simple class that logs messages.
 *
 */
namespace NET_ASAM_OPENSCENARIO
{
    class TreeMessageLogger: public ITreeMessageLogger
    {

    private:
         BaseMessageLogger<TreeContentMessage> _baseMessageLogger;

    public:
        /**
         * Constructor
         * @param logLevel the log level treshhold. Messages with this log level
         * and worse log levels are logged
         */
         TreeMessageLogger(const ErrorLevel logLevel): _baseMessageLogger(logLevel) {}

         void LogMessage(TreeContentMessage& message) override
         {
             _baseMessageLogger.LogMessage(message);
         }

         void LogAllMessages(std::vector<TreeContentMessage>& messages) override
         {
             _baseMessageLogger.LogAllMessages(messages);
         }

         /**
         * The message that have been picked up and >= log level.
         * @return the messages picked up
         */
         std::vector<TreeContentMessage> GetMessages()
         {
             return _baseMessageLogger.GetMessages();
         }

         std::vector<TreeContentMessage> GetMessagesFilteredByErrorLevel(const ErrorLevel errorLevel)  override
         {
             return _baseMessageLogger.GetMessagesFilteredByErrorLevel(errorLevel);
         }

         std::vector<TreeContentMessage> GetMessagesFilteredByWorseOrEqualToErrorLevel(const ErrorLevel errorLevel) override
         {
             return _baseMessageLogger.GetMessagesFilteredByWorseOrEqualToErrorLevel(errorLevel);
         }

    };
}