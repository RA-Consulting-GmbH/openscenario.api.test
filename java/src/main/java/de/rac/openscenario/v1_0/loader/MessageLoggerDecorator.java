package de.rac.openscenario.v1_0.loader;

/**
 * Decorates a message logger to connect to detect whether errors or fatal errors have occured.
 * This is a useful helper class.
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
import java.util.List;

import de.rac.openscenario.v1_0.common.ErrorLevel;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;

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
