package de.rac.openscenario.v1_0.main;

import java.util.ArrayList;
import java.util.List;

import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;

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

