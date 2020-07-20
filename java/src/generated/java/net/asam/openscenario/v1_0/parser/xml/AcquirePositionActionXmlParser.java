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
package net.asam.openscenario.v1_0.parser.xml;

import java.util.ArrayList;
import java.util.Hashtable;
import java.util.List;
import java.util.Map;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.parser.modelgroup.XmlAllParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.AcquirePositionActionImpl;
import net.asam.openscenario.v1_0.impl.PositionImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AcquirePositionActionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class AcquirePositionActionXmlParser
    extends XmlComplexTypeParser<AcquirePositionActionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public AcquirePositionActionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<AcquirePositionActionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<AcquirePositionActionImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<AcquirePositionActionImpl> {
    /**
     * Constructor
     *
     * @param messageLogger to log messages during parsing
     * @param filename to locate the messages in a file
     */
    public SubElementParser(IParserMessageLogger messageLogger, String filename) {
      super(messageLogger, filename);
    }
    /*
     * Creates a list of parser
     */
    @Override
    protected List<IElementParser<AcquirePositionActionImpl>> createParserList() {
      List<IElementParser<AcquirePositionActionImpl>> result = new ArrayList<>();
      result.add(new SubElementPositionParser());
      return result;
    }
  }
  /** A parser for subelement position */
  @SuppressWarnings("synthetic-access")
  private class SubElementPositionParser implements IElementParser<AcquirePositionActionImpl> {

    /** Constructor */
    public SubElementPositionParser() {
      super();
      this.positionXmlParser =
          new PositionXmlParser(
              AcquirePositionActionXmlParser.this.messageLogger,
              AcquirePositionActionXmlParser.this.filename);
    }

    private PositionXmlParser positionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement,
        ParserContext parserContext,
        AcquirePositionActionImpl object) {
      PositionImpl position = new PositionImpl();
      // Setting the parent
      position.setParent(object);
      this.positionXmlParser.parseElement(indexedElement, parserContext, position);

      object.setPosition(position);
    }

    @Override
    public int getMinOccur() {
      return 1;
    }

    @Override
    public int getMaxOccur() {
      return 1;
    }

    @Override
    public boolean doesMatch(String elementName) {
      return elementName.equals(OscConstants.ELEMENT__POSITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__POSITION};
    }
  }
}
