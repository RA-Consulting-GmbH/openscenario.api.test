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
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "IParserMessageLogger.h"
#include "MemLeakDetection.h"

#undef ERROR
namespace NET_ASAM_OPENSCENARIO
{
    /**
     * Decorates a message logger to connect to detect whether errors or fatal errors have occured.
     * This is a useful helper class.
     */
    class MessageLoggerDecorator: public IParserMessageLogger 
    {
    private:
        bool _hasErrors = false;
        std::shared_ptr<IParserMessageLogger> _innerMessageLogger;

    public:
        /**
         * Constructor
         * @param innerMessageLogger decrated message logger
         */
         MessageLoggerDecorator(std::shared_ptr<IParserMessageLogger>& innerMessageLogger): _innerMessageLogger(innerMessageLogger) {}

        void LogMessage(FileContentMessage& message) override
        {
            const auto kErrorLevel = message.GetErrorLevel();
            _hasErrors = _hasErrors || (kErrorLevel == FATAL || kErrorLevel == ERROR);
            _innerMessageLogger->LogMessage(message);

        }

        void LogAllMessages(std::vector<FileContentMessage>& messages) override
        {
            for (FileContentMessage message : messages) 
            {
                _innerMessageLogger->LogMessage(message);
            }
        }

        /**
         * Report whether errors occured
         * @return true if errors or fatal errors have been occured.
         */
        bool HasErrors() const
        {
            return _hasErrors;
        }

    };

}
