package de.rac.openscenario.v1_0.common;

import java.util.List;

/**
 * An interface that logs a single message or a list of messages to a log target.
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public interface IParserMessageLogger {

	/**
	 * Logging a single message to a log target.
	 * @param message the message to log.
	 */
	public void logMessage(FileContentMessage message);
	
	/**
	 * Logging a list of messages to a log target.
	 * @param messages the list of messages.
	 */
	public void logAllMessages(List<FileContentMessage> messages);
}
