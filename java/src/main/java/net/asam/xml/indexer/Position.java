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
 * Class for position value objects.
 *
 * @author Andreas Hege - RA Consulting
 */
public class Position {

  private int line;
  private int column;

  /**
   * The column
   *
   * @return the column of the position.
   */
  public int getColumn() {
    return column;
  }

  /**
   * The line
   *
   * @return the line of the position
   */
  public int getLine() {
    return line;
  }

  /**
   * Constructor
   *
   * @param line line of the position
   * @param column column of the position
   */
  public Position(int line, int column) {
    super();
    this.line = line;
    this.column = column;
  }
}
