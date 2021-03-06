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

import java.util.ArrayList;
import java.util.Hashtable;
import java.util.List;
import java.util.Map;

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
 * Parser for a XSD:sequence model group (exact order of elements).
 *
 * @author Andreas Hege - RA Consulting
 * @param <T> OpenSCENARIO model element type
 */
public abstract class XmlSequenceParser<T extends BaseImpl> extends XmlModelGroupParser<T> {

  private static int NOT_FOUND = -1;

  private Map<IElementParser<T>, Integer> occuredElementList = new Hashtable<>();

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing process
   * @param filename of the file the parser is operating on.
   */
  public XmlSequenceParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
  }

  @Override
  public void parseSubElementsInternal(
      List<IndexedElement> indexedElements, ParserContext parserContext, T object) {

    IndexedElement lastElementParsed = null;
    int currentListIndex = 0;
    int currentParserIndex = 0;
    while (currentListIndex < indexedElements.size()) {
      IndexedElement indexedElement = indexedElements.get(currentListIndex);
      Element element = indexedElement.getElement();
      String tagName = element.getNodeName();
      IElementParser<T> parser = findParser(tagName);
      Position start = indexedElement.getStartElementLocation();

      if (parser == null) {
        this.messageLogger.logMessage(
            new FileContentMessage(
                "Unknown element '" + tagName + "'",
                ErrorLevel.ERROR,
                new Textmarker(start.getLine(), start.getColumn(), this.filename)));
        lastElementParsed = indexedElement;
      } else {
        int nextIndex = getNextIndex(currentParserIndex, tagName, start);
        if (nextIndex == NOT_FOUND) {
          this.messageLogger.logMessage(
              new FileContentMessage(
                  "Element '" + tagName + "' is not allowed here.",
                  ErrorLevel.ERROR,
                  new Textmarker(start.getLine(), start.getColumn(), this.filename)));
          lastElementParsed = indexedElement;
        } else {
          currentParserIndex = nextIndex;
          Integer currentOccurs = this.occuredElementList.get(parser);
          if (currentOccurs == null) {
            currentOccurs = new Integer(0);
          }
          if (currentOccurs.intValue() < parser.getMaxOccur() || parser.getMaxOccur() == -1) {
            parser.parse(indexedElement, parserContext, object);
            currentListIndex =
                moveForwardToLastElementParsed(
                    indexedElements, currentListIndex, parserContext.getLastElementParsed());
            lastElementParsed = parserContext.getLastElementParsed();
            this.occuredElementList.put(parser, new Integer(currentOccurs.intValue() + 1));
          } else {
            this.messageLogger.logMessage(
                new FileContentMessage(
                    "Too many elements of <"
                        + tagName
                        + ">  ("
                        + parser.getMaxOccur()
                        + ") has already reached",
                    ErrorLevel.ERROR,
                    new Textmarker(start.getLine(), start.getColumn(), this.filename)));
            lastElementParsed = indexedElement;
          }
        }
      }
      currentListIndex++;
    }
    if (lastElementParsed != null) parserContext.setLastElementParsed(lastElementParsed);
  }

  /**
   * Evaluates the next index in the ordered parser list. Checks on the fly whether a element is
   * missing in between.
   *
   * @param currentIndex the current index in the list
   * @param tagName the tag name of the element that should be parsed
   * @param startPosition a current position in the file
   * @return the next index if found or -1 if a parser for such a element cannot be found.
   */
  private int getNextIndex(int currentIndex, String tagName, Position startPosition) {
    List<FileContentMessage> localMessages = new ArrayList<>();

    int result = NOT_FOUND;
    // Increment the list index until the element fits
    for (int i = currentIndex; i < getParsers().size(); i++) {
      List<IElementParser<T>> parsers = getParsers();
      if (parsers.get(i).doesMatch(tagName)) {
        this.messageLogger.logAllMessages(localMessages);
        result = i;
        break;
      }
      IElementParser<T> parser = parsers.get(i);
      // if the element at this index is required and not yet reached minimum occurance
      Integer occured = this.occuredElementList.get(parser);
      if (occured == null) {
        occured = new Integer(0);
      }
      if (parser.getMinOccur() > occured.intValue()) {
        localMessages.add(
            new FileContentMessage(
                "Required element is missing before <" + tagName + ">",
                ErrorLevel.ERROR,
                new Textmarker(startPosition.getLine(), startPosition.getColumn(), this.filename)));
      }
    }
    return result;
  }
}
