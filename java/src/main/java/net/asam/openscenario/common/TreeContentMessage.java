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

import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * A message that consists of an error context and an error level
 *
 * @author Andreas Hege - RA Consulting
 */
public class TreeContentMessage implements IErrorMessage {
  private ErrorLevel errorLevel;
  private IOpenScenarioModelElement treeContext;
  private String message;

  /**
   * Constructor;
   *
   * @param errorLevel the error level of the message
   *     location.
   * @param treeContext the tree object that is related to the message
   * @param message the error message 
   */
  public TreeContentMessage(ErrorLevel errorLevel, IOpenScenarioModelElement treeContext, String message) {
    super();
    this.treeContext = treeContext;
    this.errorLevel = errorLevel;
    this.message = message;

  }

  /**
   * The tree object that is related to the message
   * @return the treeContext
   */
  public IOpenScenarioModelElement getTreeContext()
  {
    return this.treeContext;
  }
  
  @Override
  public String getMessage()
  {
    return this.message;
  }

  @Override
  public ErrorLevel getErrorLevel() {
    return this.errorLevel;
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
        + this.message
        + "'"
        + " ErrorLevel: "
        + this.errorLevel.toString()
        + " Textmarker: '"
        + this.treeContext.toString()
        + "'";
  }
  @Override
  public int compareTo(IErrorMessage o) {
    return this.toString().compareTo(o.toString());
  }
}
