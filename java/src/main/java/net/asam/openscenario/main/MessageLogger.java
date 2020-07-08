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
 
package net.asam.openscenario.main;

import java.util.ArrayList;
import java.util.List;

import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;

/**
 * Buffers log messages
 *
 * @author Andreas Hege - RA Consulting *
 */
public class MessageLogger implements IParserMessageLogger {

	private List<FileContentMessage> messages = new ArrayList<FileContentMessage>();

	@Override
	public void logMessage(FileContentMessage message) {
		messages.add(message);
	}

	@Override
	public void logAllMessages(List<FileContentMessage> logMessages) {
			messages.addAll(messages);
	}

	/**
	 * The buffered messages
	 * @return buffered messages
	 */
	public List<FileContentMessage> getMessages() {
		return messages;
	}
}

