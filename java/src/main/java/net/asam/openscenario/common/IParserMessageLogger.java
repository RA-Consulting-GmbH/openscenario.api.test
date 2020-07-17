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
 */
public interface IParserMessageLogger {

  /**
   * Logging a single message to a log target.
   *
   * @param message the message to log.
   */
  public void logMessage(FileContentMessage message);

  /**
   * Logging a list of messages to a log target.
   *
   * @param messages the list of messages.
   */
  public void logAllMessages(List<FileContentMessage> messages);
}
