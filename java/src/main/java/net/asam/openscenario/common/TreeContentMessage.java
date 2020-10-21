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

import net.asam.openscenario.checker.tree.ITreeContext;

/**
 * A message that consists of the message itself and some meta information like the error level and
 * a tree context that enables the user to trace the message back to a tree location of the node.
 *
 * @author Andreas Hege - RA Consulting
 */
public class TreeContentMessage extends ContentMessage {
  private ITreeContext treeContext;


  /**
   * Constructor;
   *
   * @param message the message text
   * @param errorLevel the error level of the message
   * @param treeContext the context from the tree.
   */
  public TreeContentMessage(String message, ErrorLevel errorLevel, ITreeContext treeContext) {
    super(message, errorLevel);
    this.treeContext = treeContext;
  }

  /**
   * The text marker that enables the user to trace the message back to a file location
   *
   * @return the text marker
   */
  public ITreeContext getTreeContext() {
    return this.treeContext;
  }

  
  
}
