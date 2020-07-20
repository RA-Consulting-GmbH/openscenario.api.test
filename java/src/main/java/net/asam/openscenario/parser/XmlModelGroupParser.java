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

import java.util.List;

import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.simple.struct.IndexedElement;

/**
 * A generic parser for model groups (sequence, all, choice)
 *
 * @author Andreas Hege - RA Consulting
 * @param <T> OpenSCENARIO model element type
 */
public abstract class XmlModelGroupParser<T extends BaseImpl> extends XmlParserBase<T> {

  protected List<IElementParser<T>> parsers;

  /**
   * Creates a list of parsers for the elements of the model group.
   *
   * @return the list of parsers.
   */
  protected abstract List<IElementParser<T>> createParserList();

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing process
   * @param filename of the file the parser is operationg on.
   */
  public XmlModelGroupParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
  }
  /**
   * The parsers for the elements in this model group.
   *
   * @return the parsers
   */
  protected List<IElementParser<T>> getParsers() {
    return this.parsers;
  }

  /**
   * Find the right parser for a given tag name
   *
   * @param tagName the tag name a given parser ahould be found for.
   * @return the appropriate parser for an element with this tag name.
   */
  protected IElementParser<T> findParser(String tagName) {
    for (IElementParser<T> parser : this.parsers) {
      if (parser.doesMatch(tagName)) {
        return parser;
      }
    }
    return null;
  }
  /**
   * Moves the current index to the elemtn
   *
   * @param indexedElements a list with the indexed elements to parse
   * @param currentIndex the current index
   * @param lastParsedElement the last element that was parsed
   * @return the new list index or the size of the indexed elements list
   */
  protected int moveForwardToLastElementParsed(
      List<IndexedElement> indexedElements, int currentIndex, IndexedElement lastParsedElement) {
    for (int i = currentIndex; i < indexedElements.size(); i++) {
      if (indexedElements.get(i) == lastParsedElement) {
        return i;
      }
    }
    return indexedElements.size();
  }

  @Override
  public void parseSubElements(
      List<IndexedElement> indexedElements, ParserContext parserContext, T object) {
    this.parsers = createParserList();
    parseSubElementsInternal(indexedElements, parserContext, object);
  }
  /**
   * Parsing the sub elements
   *
   * @param indexedElements all sub elements
   * @param parserContext a parser context to store dynamic information in.
   * @param object the object that will be filled during the parsing process.
   */
  public abstract void parseSubElementsInternal(
      List<IndexedElement> indexedElements, ParserContext parserContext, T object);
}
