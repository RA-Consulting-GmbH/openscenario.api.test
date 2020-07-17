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

package net.asam.openscenario.parser;

import java.util.ArrayList;
import java.util.List;

import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.api.ICatalogReference;
import net.asam.openscenario.v1_0.catalog.ICatalogReferenceProvider;

/**
 * A Parser Context that allows a parser to store dynamic information during the parsing process. A
 * parser context is handed through the hierarchical parser concept and is especially used for
 * parsing XSD groups.
 *
 * @author Andreas Hege - RA Consulting
 */
public abstract class ParserContext {
  private IndexedElement lastElementParsed;

  /**
   * The last element that has been parsed
   *
   * @return the lasz indexed element that has been parsed
   */
  public IndexedElement getLastElementParsed() {
    return lastElementParsed;
  }

  /**
   * Sets the last element that has been parsed
   *
   * @param lastElementParsed the last element that has been parsed
   */
  public void setLastElementParsed(IndexedElement lastElementParsed) {
    this.lastElementParsed = lastElementParsed;
  }
}
