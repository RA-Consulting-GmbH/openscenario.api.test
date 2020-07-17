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

package net.asam.openscenario.parser.modelgroup;

import java.util.List;

import org.w3c.dom.Element;

import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.parser.XmlModelGroupParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.xml.indexer.Position;

/**
 * Parser for a XSD:all model group (arbitrary order of elements).
 *
 * @author Andreas Hege - RA Consulting
 */
public abstract class XmlAllParser<T extends BaseImpl> extends XmlModelGroupParser<T> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing process
   * @param filename of the file the parser is operating on.
   */
  public XmlAllParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
  }

  @Override
  public void parseSubElementsInternal(
      List<IndexedElement> indexedElements, ParserContext parserContext, T object) {

    IndexedElement lastElementParsed = null;
    int currentListIndex = 0;
    while (currentListIndex < indexedElements.size()) {
      IndexedElement indexedElement = indexedElements.get(currentListIndex);
      Element element = indexedElement.getElement();
      String tagName = element.getNodeName();
      IElementParser<T> parser = findParser(tagName);
      Position start = indexedElement.getStartElementLocation();

      if (parser == null) {
        messageLogger.logMessage(
            new FileContentMessage(
                "Unknown element '" + tagName + "'",
                ErrorLevel.ERROR,
                new Textmarker(start.getLine(), start.getColumn(), filename)));
        lastElementParsed = indexedElement;
      } else {
        parser.parse(indexedElement, parserContext, object);
        currentListIndex =
            moveForwardToLastElementParsed(
                indexedElements, currentListIndex, parserContext.getLastElementParsed());
        lastElementParsed = parserContext.getLastElementParsed();
        // remove from the set
        getParsers().remove(parser);
      }
      parserContext.setLastElementParsed(indexedElement);
      currentListIndex++;
    }
    if (lastElementParsed != null) parserContext.setLastElementParsed(lastElementParsed);

    // Every required field must be processed:
    for (IElementParser<T> parser : getParsers()) {
      if (parser.getMinOccur() > 0) {
        Position position = parserContext.getLastElementParsed().getEndElementLocation();

        String[] expectedTagNames = parser.getExpectedTagNames();
        if (expectedTagNames.length > 1) {
          messageLogger.logMessage(
              new FileContentMessage(
                  "Required element (One of "
                      + formatExpectedTagNames(expectedTagNames)
                      + ") is missing ",
                  ErrorLevel.ERROR,
                  new Textmarker(position.getLine(), position.getColumn(), filename)));
        } else {
          messageLogger.logMessage(
              new FileContentMessage(
                  "Required element '" + expectedTagNames[0] + "' is missing ",
                  ErrorLevel.ERROR,
                  new Textmarker(position.getLine(), position.getColumn(), filename)));
        }
      }
    }
  }

  /**
   * Formatting the expected tags for a message (comma separated)
   *
   * @param tagNames list of tag names
   * @return the comma separated string
   */
  private String formatExpectedTagNames(String[] tagNames) {
    String[] elements = new String[tagNames.length];
    for (int i = 0; i < tagNames.length; i++) {
      elements[i] = "'" + tagNames[i] + "'";
    }

    return String.join(", ", elements);
  }
}
