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
 * @author Andreas Hege - RA Consulting
 * @param <T> the type of the message
 *
 */
public class BaseMessageLogger<T  extends ContentMessage> implements IContentMessageLogger<T>
{

  private List<T> messages = new ArrayList<>();
  private ErrorLevel logLevel = ErrorLevel.INFO;

  /**
   * Constructor
   * @param logLevel the log level treshhold. Messages with this log level 
   * and worse log levels are logged
   */
  public BaseMessageLogger(ErrorLevel logLevel) {
    super();
    this.logLevel = logLevel;
  }

  @Override
  public void logMessage(T message) {
    if (message.getErrorLevel().isWorseOrEqualThan(this.logLevel)) {
      this.messages.add(message);
    }
  }

  @Override
  public void logAllMessages(List<T> messages) {
    for (T fileContentMessage : messages) {
      logMessage(fileContentMessage);
    }
  }

  /**
   * The message that have been picked up.
   *
   * @return the messages picked up
   */
  public List<T> getMessages() {
    return this.messages;
  }

  @Override
  public List<T> getMessagesFilteredByErrorLevel(ErrorLevel errorLevel) {
    return this.messages
        .stream()
        .filter(m -> m.getErrorLevel() == errorLevel)
        .collect(Collectors.toList());
  }


  @Override
  public List<T> getMessagesFilteredByWorseOrEqualToErrorLevel(
      ErrorLevel errorLevel) {
    return this.messages
        .stream()
        .filter(m -> m.getErrorLevel().isWorseOrEqualThan(errorLevel))
        .collect(Collectors.toList());
  }
}
