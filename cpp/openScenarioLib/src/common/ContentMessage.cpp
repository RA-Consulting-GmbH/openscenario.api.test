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

#include "MemLeakDetection.h"
#include "ContentMessage.h"
#include "ErrorLevel.h"

/**
 * An interface that logs a single message or a list of messages to a log target.
 */

namespace NET_ASAM_OPENSCENARIO
{
    ContentMessage::ContentMessage(const std::string message, const ErrorLevel errorLevel): _message(message), _errorLevel(errorLevel) {}

    ContentMessage::~ContentMessage() {}

    std::string ContentMessage::GetMsg()
    {
        return _message;
    }

    ErrorLevel ContentMessage::GetErrorLevel()
    {
        return _errorLevel;
    }


}