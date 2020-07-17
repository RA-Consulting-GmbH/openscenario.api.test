/** */
package net.asam.openscenario.common;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

/** @author ahege */
public class SimpleMessageLogger implements IParserMessageLogger {

  private List<FileContentMessage> messages = new ArrayList<>();
  private ErrorLevel logLevel = ErrorLevel.INFO;

  /** @param logLevel */
  public SimpleMessageLogger(ErrorLevel logLevel) {
    super();
    this.logLevel = logLevel;
  }

  @Override
  public void logMessage(FileContentMessage message) {
    if (message.getErrorLevel().isWorseOrEqualThan(logLevel)) {
      this.messages.add(message);
    }
  }

  @Override
  public void logAllMessages(List<FileContentMessage> messages) {
    for (FileContentMessage fileContentMessage : messages) {
      logMessage(fileContentMessage);
    }
  }

  /**
   * The message that have been picked up and <= log level.
   *
   * @return the messages picked up
   */
  public List<FileContentMessage> getMessages() {
    return this.messages;
  }

  /**
   * The message that have been picked up filtered by a specific error level.
   *
   * @return the filtered messages
   */
  public List<FileContentMessage> getMessagesFilteredByErrorLevel(ErrorLevel errorLevel) {
    return this.messages
        .stream()
        .filter(m -> m.getErrorLevel() == errorLevel)
        .collect(Collectors.toList());
  }

  /**
   * The message that have been picked up filtered by a specific error level.
   *
   * @return the filtered messages
   */
  public List<FileContentMessage> getMessagesFilteredByWorseOrEqualToErrorLevel(
      ErrorLevel errorLevel) {
    return this.messages
        .stream()
        .filter(m -> m.getErrorLevel().isWorseOrEqualThan(errorLevel))
        .collect(Collectors.toList());
  }
}
