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
 
package net.asam.openscenario.v1_0.test;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;

public class MessageLogger implements IParserMessageLogger {

	private List<FileContentMessage> messages = new ArrayList<FileContentMessage>();

	@Override
	public void logMessage(FileContentMessage message) {
		messages.add(message);
		if (message.getErrorLevel() == ErrorLevel.ERROR
				|| message.getErrorLevel() == ErrorLevel.INFO
				|| message.getErrorLevel() == ErrorLevel.FATAL) {
			Textmarker textmarker = message.getTextmarker();
			System.out.println(message.getMessage() + " ("
					+ textmarker.getLine() + "," + textmarker.getColumn()
					+ ")");
		}
	}

	@Override
	public void logAllMessages(List<FileContentMessage> logMessages) {
		for (FileContentMessage message : logMessages) {
			messages.add(message);
			System.out.println(message.getMessage());
		}

	}

	public void clear() {
		messages.clear();
	}

	public List<FileContentMessage> getMessages() {
		return messages;
	}
}

