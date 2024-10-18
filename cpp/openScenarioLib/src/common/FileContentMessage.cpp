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

#include "FileContentMessage.h"

namespace NET_ASAM_OPENSCENARIO
{
	    FileContentMessage::FileContentMessage(const std::string message, const ErrorLevel errorLevel, const Textmarker textmarker) : ContentMessage(message, errorLevel), _textmarker(textmarker) {}

        FileContentMessage::~FileContentMessage() {}

		Textmarker FileContentMessage::GetTextmarker() const
        {
            return _textmarker;
        }

        bool FileContentMessage::operator==(FileContentMessage& rhs)
        {
            return rhs.ToString() == this->ToString();
        }

        size_t FileContentMessage::HashCode() { return std::hash<std::string>{}(this->ToString()); }

        std::string FileContentMessage::ToString()
        {
            return  "Message: '" + GetMsg() + "'" +
                " ErrorLevel: " + ErrorLevelString::ToString(GetErrorLevel()) +
                " Textmarker: '" + _textmarker.ToString() + "'";
        }

        int FileContentMessage::CompareTo( FileContentMessage& rhs)
        {
            //not exactly the java equivalent 
            return rhs.ToString() == this->ToString();
        };

}
