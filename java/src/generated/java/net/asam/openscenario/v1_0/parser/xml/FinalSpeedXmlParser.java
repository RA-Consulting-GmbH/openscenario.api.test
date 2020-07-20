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
import net.asam.openscenario.parser.modelgroup.XmlChoiceParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.AbsoluteSpeedImpl;
import net.asam.openscenario.v1_0.impl.FinalSpeedImpl;
import net.asam.openscenario.v1_0.impl.RelativeSpeedToMasterImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a FinalSpeedImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class FinalSpeedXmlParser extends XmlComplexTypeParser<FinalSpeedImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public FinalSpeedXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<FinalSpeedImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<FinalSpeedImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlChoiceParser<FinalSpeedImpl> {
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
    protected List<IElementParser<FinalSpeedImpl>> createParserList() {
      List<IElementParser<FinalSpeedImpl>> result = new ArrayList<>();
      result.add(new SubElementAbsoluteSpeedParser());
      result.add(new SubElementRelativeSpeedToMasterParser());
      return result;
    }
  }
  /** A parser for subelement absoluteSpeed */
  @SuppressWarnings("synthetic-access")
  private class SubElementAbsoluteSpeedParser implements IElementParser<FinalSpeedImpl> {

    /** Constructor */
    public SubElementAbsoluteSpeedParser() {
      super();
      this.absoluteSpeedXmlParser =
          new AbsoluteSpeedXmlParser(
              FinalSpeedXmlParser.this.messageLogger, FinalSpeedXmlParser.this.filename);
    }

    private AbsoluteSpeedXmlParser absoluteSpeedXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, FinalSpeedImpl object) {
      AbsoluteSpeedImpl absoluteSpeed = new AbsoluteSpeedImpl();
      // Setting the parent
      absoluteSpeed.setParent(object);
      this.absoluteSpeedXmlParser.parseElement(indexedElement, parserContext, absoluteSpeed);

      object.setAbsoluteSpeed(absoluteSpeed);
    }

    @Override
    public int getMinOccur() {
      return 0;
    }

    @Override
    public int getMaxOccur() {
      return 1;
    }

    @Override
    public boolean doesMatch(String elementName) {
      return elementName.equals(OscConstants.ELEMENT__ABSOLUTE_SPEED);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ABSOLUTE_SPEED};
    }
  }
  /** A parser for subelement relativeSpeedToMaster */
  @SuppressWarnings("synthetic-access")
  private class SubElementRelativeSpeedToMasterParser implements IElementParser<FinalSpeedImpl> {

    /** Constructor */
    public SubElementRelativeSpeedToMasterParser() {
      super();
      this.relativeSpeedToMasterXmlParser =
          new RelativeSpeedToMasterXmlParser(
              FinalSpeedXmlParser.this.messageLogger, FinalSpeedXmlParser.this.filename);
    }

    private RelativeSpeedToMasterXmlParser relativeSpeedToMasterXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, FinalSpeedImpl object) {
      RelativeSpeedToMasterImpl relativeSpeedToMaster = new RelativeSpeedToMasterImpl();
      // Setting the parent
      relativeSpeedToMaster.setParent(object);
      this.relativeSpeedToMasterXmlParser.parseElement(
          indexedElement, parserContext, relativeSpeedToMaster);

      object.setRelativeSpeedToMaster(relativeSpeedToMaster);
    }

    @Override
    public int getMinOccur() {
      return 0;
    }

    @Override
    public int getMaxOccur() {
      return 1;
    }

    @Override
    public boolean doesMatch(String elementName) {
      return elementName.equals(OscConstants.ELEMENT__RELATIVE_SPEED_TO_MASTER);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__RELATIVE_SPEED_TO_MASTER};
    }
  }
}
