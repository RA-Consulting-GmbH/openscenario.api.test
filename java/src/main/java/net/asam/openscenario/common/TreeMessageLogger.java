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

import java.util.List;

/**
 * An simple class that logs messages.
 *
 * @author Andreas Hege - RA Consulting
 */
public class TreeMessageLogger implements ITreeMessageLogger {

  private BaseMessageLogger<TreeContentMessage> baseMessageLogger;

  /**
   * Constructor
   * @param logLevel the log level treshhold. Messages with this log level 
   * and worse log levels are logged
   */
  public TreeMessageLogger(ErrorLevel logLevel) {
    super();
    this.baseMessageLogger = new BaseMessageLogger<>(logLevel);
  }

  @Override
  public void logMessage(TreeContentMessage message) {
    this.baseMessageLogger.logMessage(message);
  }

  @Override
  public void logAllMessages(List<TreeContentMessage> messages) {
    this.baseMessageLogger.logAllMessages(messages);
  }

  /**
   * The message that have been picked up.
   *
   * @return the messages picked up
   */
  public List<TreeContentMessage> getMessages() {
    return this.baseMessageLogger.getMessages();
  }

  @Override
  public List<TreeContentMessage> getMessagesFilteredByErrorLevel(ErrorLevel errorLevel) {
    return this.baseMessageLogger.getMessagesFilteredByErrorLevel(errorLevel);
  }


  @Override
  public List<TreeContentMessage> getMessagesFilteredByWorseOrEqualToErrorLevel(
      ErrorLevel errorLevel) {
    return this.baseMessageLogger.getMessagesFilteredByWorseOrEqualToErrorLevel(errorLevel);
  }
}
