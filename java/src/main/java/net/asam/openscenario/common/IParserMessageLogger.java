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
 * An interface that logs a single message or a list of messages to a log target.
 *
 * @author Andreas Hege - RA Consulting
 * @param <T> 
 */
public interface IParserMessageLogger<T extends IErrorMessage> {

  /**
   * Logging a single message to a log target.
   *
   * @param message the message to log.
   */
  public void logMessage(T message);

  /**
   * Logging a list of messages to a log target.
   *
   * @param messages the list of messages.
   */
  public void logAllMessages(List<T> messages);

  /**
   * The message that have been picked up filtered by a specific error level.
   *
   * @param errorLevel the error level to filter the messages.
   * @return the filtered messages
   */
  public List<T> getMessagesFilteredByErrorLevel(ErrorLevel errorLevel);

  /**
   * The message that have been picked up filtered by a specific error level.
   *
   * @param errorLevel the error level to filter for worse or equal.
   * @return the filtered messages
   */
  public List<T> getMessagesFilteredByWorseOrEqualToErrorLevel(
      ErrorLevel errorLevel);
}
