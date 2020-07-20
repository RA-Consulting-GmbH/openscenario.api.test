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
import net.asam.openscenario.v1_0.impl.LaneChangeActionImpl;
import net.asam.openscenario.v1_0.impl.LaneOffsetActionImpl;
import net.asam.openscenario.v1_0.impl.LateralActionImpl;
import net.asam.openscenario.v1_0.impl.LateralDistanceActionImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LateralActionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class LateralActionXmlParser extends XmlComplexTypeParser<LateralActionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public LateralActionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<LateralActionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<LateralActionImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlChoiceParser<LateralActionImpl> {
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
    protected List<IElementParser<LateralActionImpl>> createParserList() {
      List<IElementParser<LateralActionImpl>> result = new ArrayList<>();
      result.add(new SubElementLaneChangeActionParser());
      result.add(new SubElementLaneOffsetActionParser());
      result.add(new SubElementLateralDistanceActionParser());
      return result;
    }
  }
  /** A parser for subelement laneChangeAction */
  @SuppressWarnings("synthetic-access")
  private class SubElementLaneChangeActionParser implements IElementParser<LateralActionImpl> {

    /** Constructor */
    public SubElementLaneChangeActionParser() {
      super();
      this.laneChangeActionXmlParser =
          new LaneChangeActionXmlParser(
              LateralActionXmlParser.this.messageLogger, LateralActionXmlParser.this.filename);
    }

    private LaneChangeActionXmlParser laneChangeActionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, LateralActionImpl object) {
      LaneChangeActionImpl laneChangeAction = new LaneChangeActionImpl();
      // Setting the parent
      laneChangeAction.setParent(object);
      this.laneChangeActionXmlParser.parseElement(indexedElement, parserContext, laneChangeAction);

      object.setLaneChangeAction(laneChangeAction);
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
      return elementName.equals(OscConstants.ELEMENT__LANE_CHANGE_ACTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__LANE_CHANGE_ACTION};
    }
  }
  /** A parser for subelement laneOffsetAction */
  @SuppressWarnings("synthetic-access")
  private class SubElementLaneOffsetActionParser implements IElementParser<LateralActionImpl> {

    /** Constructor */
    public SubElementLaneOffsetActionParser() {
      super();
      this.laneOffsetActionXmlParser =
          new LaneOffsetActionXmlParser(
              LateralActionXmlParser.this.messageLogger, LateralActionXmlParser.this.filename);
    }

    private LaneOffsetActionXmlParser laneOffsetActionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, LateralActionImpl object) {
      LaneOffsetActionImpl laneOffsetAction = new LaneOffsetActionImpl();
      // Setting the parent
      laneOffsetAction.setParent(object);
      this.laneOffsetActionXmlParser.parseElement(indexedElement, parserContext, laneOffsetAction);

      object.setLaneOffsetAction(laneOffsetAction);
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
      return elementName.equals(OscConstants.ELEMENT__LANE_OFFSET_ACTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__LANE_OFFSET_ACTION};
    }
  }
  /** A parser for subelement lateralDistanceAction */
  @SuppressWarnings("synthetic-access")
  private class SubElementLateralDistanceActionParser implements IElementParser<LateralActionImpl> {

    /** Constructor */
    public SubElementLateralDistanceActionParser() {
      super();
      this.lateralDistanceActionXmlParser =
          new LateralDistanceActionXmlParser(
              LateralActionXmlParser.this.messageLogger, LateralActionXmlParser.this.filename);
    }

    private LateralDistanceActionXmlParser lateralDistanceActionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, LateralActionImpl object) {
      LateralDistanceActionImpl lateralDistanceAction = new LateralDistanceActionImpl();
      // Setting the parent
      lateralDistanceAction.setParent(object);
      this.lateralDistanceActionXmlParser.parseElement(
          indexedElement, parserContext, lateralDistanceAction);

      object.setLateralDistanceAction(lateralDistanceAction);
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
      return elementName.equals(OscConstants.ELEMENT__LATERAL_DISTANCE_ACTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__LATERAL_DISTANCE_ACTION};
    }
  }
}
