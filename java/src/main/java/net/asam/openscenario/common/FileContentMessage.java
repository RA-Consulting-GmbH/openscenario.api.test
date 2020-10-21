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
 * A message that consists of the message itself and some meta information like the error level and
 * a textmarker that enables the user to trace the message back to a file location.
 *
 * @author Andreas Hege - RA Consulting
 */
public class FileContentMessage extends ContentMessage implements Comparable<FileContentMessage> {
  private Textmarker textmarker;


  /**
   * Constructor;
   *
   * @param message the message text
   * @param errorLevel the error level of the message
   * @param textmarker the text marker that enables the user to trace the message back to a file
   *     location.
   */
  public FileContentMessage(String message, ErrorLevel errorLevel, Textmarker textmarker) {
    super(message, errorLevel);
    this.textmarker = textmarker;
  }

  /**
   * The text marker that enables the user to trace the message back to a file location
   *
   * @return the text marker
   */
  public Textmarker getTextmarker() {
    return this.textmarker;
  }

  @Override
  public boolean equals(Object obj) {
    if (obj instanceof FileContentMessage) {
      FileContentMessage comparedObject = (FileContentMessage) obj;
      boolean equals = comparedObject.toString().equals(this.toString());
      return equals;
    }
    return false;
  }

  @Override
  public int hashCode() {
    return this.toString().hashCode();
  }

  @Override
  public String toString() {
    return "Message: '"
        + this.getMessage()
        + "'"
        + " ErrorLevel: "
        + this.getErrorLevel().toString()
        + " Textmarker: '"
        + this.getTextmarker().toString()
        + "'";
  }

  @Override
  public int compareTo(FileContentMessage o) {
    return this.toString().compareTo(o.toString());
  }
}
