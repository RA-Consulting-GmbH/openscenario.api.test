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

package net.asam.xml.indexer;

/**
 * Every osc model element does implement this interface
 *
 * @author Andreas Hege - RA Consulting
 */
public class AttributeNode extends PositionNode {

  private String name;

  /**
   * Constructor
   *
   * @param name name of the attribute
   * @param startLine line of the start position
   * @param startColumn column of the stat position
   * @param endLine line of the end position
   * @param endColumn column of the end position
   */
  public AttributeNode(String name, int startLine, int startColumn, int endLine, int endColumn) {
    super(startLine, startColumn, endLine, endColumn);
    this.name = name;
  }

  /**
   * The name of the attribute
   *
   * @return the name
   */
  public String getName() {
    return this.name;
  }
}
