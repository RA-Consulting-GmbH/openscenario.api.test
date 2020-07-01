package de.rac.openscenario.v1_0.test;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;

import de.rac.openscenario.v1_0.common.ErrorLevel;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.Textmarker;

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

