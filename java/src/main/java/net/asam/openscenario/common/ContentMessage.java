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

/**
 * An interface that logs a single message or a list of messages to a log target.
 * @author Andreas Hege - RA Consulting
 *
 */
public abstract class ContentMessage
{

  private String message;
  private ErrorLevel errorLevel;

  /**
   * Constructor;
   *
   * @param message the message text
   * @param errorLevel the error level of the message
   */
  public ContentMessage(String message, ErrorLevel errorLevel) {
    super();
    this.message = message;
    this.errorLevel = errorLevel;
  }

  /**
   * The text of a message
   *
   * @return the message text
   */
  public String getMessage() {
    return this.message;
  }

  /**
   * The error level of the message.
   *
   * @return the error level
   */
  public ErrorLevel getErrorLevel() {
    return this.errorLevel;
  }

}
