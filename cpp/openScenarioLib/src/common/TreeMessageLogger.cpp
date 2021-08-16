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

#include "TreeMessageLogger.h"

/**
 * An simple class that logs messages.
 *
 */
namespace NET_ASAM_OPENSCENARIO
{
    TreeMessageLogger::TreeMessageLogger(const ErrorLevel logLevel): _baseMessageLogger(logLevel) {}

	void TreeMessageLogger::LogMessage(TreeContentMessage& message)
	{
	 _baseMessageLogger.LogMessage(message);
	}

	void TreeMessageLogger::LogAllMessages(std::vector<TreeContentMessage>& messages)
	{
	 _baseMessageLogger.LogAllMessages(messages);
	}

	/**
	* The message that have been picked up and >= log level.
	* @return the messages picked up
	*/
	std::vector<TreeContentMessage> TreeMessageLogger::GetMessages()
	{
	 return _baseMessageLogger.GetMessages();
	}

	std::vector<TreeContentMessage> TreeMessageLogger::GetMessagesFilteredByErrorLevel(const ErrorLevel errorLevel) 
	{
	 return _baseMessageLogger.GetMessagesFilteredByErrorLevel(errorLevel);
	}

	std::vector<TreeContentMessage> TreeMessageLogger::GetMessagesFilteredByWorseOrEqualToErrorLevel(const ErrorLevel errorLevel)
	{
	 return _baseMessageLogger.GetMessagesFilteredByWorseOrEqualToErrorLevel(errorLevel);
	}


}