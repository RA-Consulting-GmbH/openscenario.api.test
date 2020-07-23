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
#include "MemLeakDetection.h"
#include <iostream>

namespace NET_ASAM_OPENSCENARIO
{
    /**
    * Buffers log messages
    */
    class MessageLogger: public IParserMessageLogger 
    {
    private:
        std::vector<FileContentMessage> _messages;

    public:
        void LogMessage(FileContentMessage& message) override
        {
            _messages.push_back(message);
            if (message.GetErrorLevel() == ERROR || message.GetErrorLevel() == INFO || message.GetErrorLevel() == FATAL) 
            {
                const auto kTextmarker = message.GetTextmarker();
                std::cout << message.GetMsg() << " (" << kTextmarker.GetLine() << "," << kTextmarker.GetColumn() << ")" <<std::endl;
            }
        }

        void LogAllMessages(std::vector<FileContentMessage>& messages) override
        {
            _messages.insert(_messages.end(), messages.begin(), messages.end());
        }

        /**
         * The buffered messages
         * @return buffered messages
         */
        std::vector<FileContentMessage> GetMessages() const
        {
            return _messages;
        }

        void Clear() 
        {
            _messages.clear();
        }
    };
}
