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
 * A node along with its position.
 *
 * @author Andreas Hege - RA Consulting
 */
public abstract class PositionNode {

  private Position startPosition;
  private Position endPosition;

  /**
   * The start position
   *
   * @return start position of the node
   */
  public Position getStartPosition() {
    return this.startPosition;
  }

  /**
   * The end position
   *
   * @return end position of the node
   */
  public Position getEndPosition() {
    return this.endPosition;
  }

  /**
   * Adding an end postion to the node
   *
   * @param line of the end position
   * @param column of the end position
   */
  public void addEndPosition(int line, int column) {
    this.endPosition = new Position(line, column);
  }

  /**
   * Constructor
   *
   * @param line of the start position
   * @param column of the stat position
   */
  public PositionNode(int line, int column) {
    this.startPosition = new Position(line, column);
  }

  /**
   * Constructor
   *
   * @param startLine line of the start position
   * @param startColumn column of the stat position
   * @param endLine line of the end position
   * @param endColumn column of the end position
   */
  public PositionNode(int startLine, int startColumn, int endLine, int endColumn) {
    this.startPosition = new Position(startLine, startColumn);
    this.endPosition = new Position(endLine, endColumn);
  }
}
