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
package net.asam.openscenario.common;

import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

/**
 * An simple class that logs messages.
 *
 * @author Andreas Hege - RA Consulting
 */
public class SimpleMessageLogger implements IParserMessageLogger {

  private List<FileContentMessage> messages = new ArrayList<>();
  private ErrorLevel logLevel = ErrorLevel.INFO;

  /**
   * Constructor
   * @param logLevel the log level treshhold. Messages with this log level 
   * and worse log levels are logged
   */
  public SimpleMessageLogger(ErrorLevel logLevel) {
    super();
    this.logLevel = logLevel;
  }

  @Override
  public void logMessage(FileContentMessage message) {
    if (message.getErrorLevel().isWorseOrEqualThan(this.logLevel)) {
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
   * The message that have been picked up.
   *
   * @return the messages picked up
   */
  public List<FileContentMessage> getMessages() {
    return this.messages;
  }

  /**
   * The message that have been picked up filtered by a specific error level.
   *
   * @param errorLevel the error level to filter the messages.
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
   * @param errorLevel the error level to filter for worse or equal.
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
