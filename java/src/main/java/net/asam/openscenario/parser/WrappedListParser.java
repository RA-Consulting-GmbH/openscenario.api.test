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

import org.w3c.dom.Element;

import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.parser.XmlParserBase.IElementParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.xml.indexer.Position;

/**
 * Generic parsers for wrapped list. An inner parser is wrapped by this parser.
 *
 * @author Andreas Hege - RA Consulting
 * @param <T> OpenSCENARIO model element type
 */
public class WrappedListParser<T extends BaseImpl> extends XmlParserBase<T>
    implements IElementParser<T> {

  private IElementParser<T> innerElementParser;
  protected String wrapperTagName;
  protected Position wrapperTagNameEndPosition;

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing process
   * @param filename of the file the parser is operating on.
   * @param innerParser the inner parser
   * @param wrapperTagName the tag name that wraps the list.
   */
  public WrappedListParser(
      IParserMessageLogger messageLogger,
      String filename,
      IElementParser<T> innerParser,
      String wrapperTagName) {
    super(messageLogger, filename);

    this.innerElementParser = innerParser;
    this.wrapperTagName = wrapperTagName;
  }

  @Override
  public void parseSubElements(
      List<IndexedElement> indexedElements, ParserContext parserContext, T object) {
    int currentOccurs = 0;
    for (IndexedElement indexedElement : indexedElements) {
      Element element = indexedElement.getElement();
      String tagName = element.getNodeName();
      Position start = indexedElement.getStartElementLocation();

      if (!this.innerElementParser.doesMatch(tagName)) {
        this.messageLogger.logMessage(
            new FileContentMessage(
                "Unknown or unexpected element '" + tagName + "'",
                ErrorLevel.ERROR,
                new Textmarker(start.getLine(), start.getColumn(), this.filename)));
      } else {

        if (currentOccurs < this.innerElementParser.getMaxOccur()
            || this.innerElementParser.getMaxOccur() == -1) {
          this.innerElementParser.parse(indexedElement, parserContext, object);
          currentOccurs++;

        } else {
          this.messageLogger.logMessage(
              new FileContentMessage(
                  "Too many elements in <"
                      + this.wrapperTagName
                      + ">  ("
                      + this.innerElementParser.getMaxOccur()
                      + ") has already reached",
                  ErrorLevel.ERROR,
                  new Textmarker(start.getLine(), start.getColumn(), this.filename)));
        }
      }
    }

    if (currentOccurs < this.innerElementParser.getMinOccur()) {
      this.messageLogger.logMessage(
          new FileContentMessage(
              "Too few elements in <"
                  + this.wrapperTagName
                  + ">  ("
                  + this.innerElementParser.getMaxOccur()
                  + " are allowed)",
              ErrorLevel.FATAL,
              new Textmarker(
                  this.wrapperTagNameEndPosition.getLine(),
                  this.wrapperTagNameEndPosition.getColumn(),
                  this.filename)));
    }
  }

  @Override
  public void parse(IndexedElement indexedElement, ParserContext parserContext, T object) {

    this.wrapperTagNameEndPosition = indexedElement.getEndElementLocation();
    parseSubElements(indexedElement.getSubElements(), parserContext, object);
    parserContext.setLastElementParsed(indexedElement);
  }

  @Override
  public int getMinOccur() {
    return this.innerElementParser.getMinOccur() == 0 ? 0 : 1;
  }

  @Override
  public int getMaxOccur() {
    return 1;
  }

  @Override
  public boolean doesMatch(String elementName) {
    return elementName != null && elementName.equals(this.wrapperTagName);
  }

  @Override
  public String[] getExpectedTagNames() {
    return new String[] {this.wrapperTagName};
  }
}
