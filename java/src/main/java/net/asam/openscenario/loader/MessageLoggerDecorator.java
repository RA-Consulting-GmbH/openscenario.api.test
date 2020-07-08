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
 
package net.asam.openscenario.loader;

/**
 * Decorates a message logger to connect to detect whether errors or fatal errors have occured.
 * This is a useful helper class.
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
import java.util.List;

import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;

public class MessageLoggerDecorator implements IParserMessageLogger {
	boolean hasErrors = false;
	IParserMessageLogger innerMessageLogger;

	/**
	 * Constructor
	 * @param innerMessageLogger decrated message logger
	 */
	public MessageLoggerDecorator(IParserMessageLogger innerMessageLogger) {
		super();
		this.innerMessageLogger = innerMessageLogger;
	}

	@Override
	public void logMessage(FileContentMessage message) {
		ErrorLevel erorLevel = message.getErrorLevel();
		hasErrors = hasErrors
				|| (erorLevel == ErrorLevel.FATAL || erorLevel == ErrorLevel.ERROR);
		innerMessageLogger.logMessage(message);

	}

	@Override
	public void logAllMessages(List<FileContentMessage> messages) {
		for (FileContentMessage message : messages) {
			innerMessageLogger.logMessage(message);
		}

	}

	/**
	 * Report whether errors occured
	 * @return true if errors or fatal errors have been occured.
	 */
	public boolean hasErrors() {
		return hasErrors;
	}

}
