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
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.parser.modelgroup.XmlAllParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.LaneOffsetActionDynamicsImpl;
import net.asam.openscenario.v1_0.impl.LaneOffsetActionImpl;
import net.asam.openscenario.v1_0.impl.LaneOffsetTargetImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LaneOffsetActionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class LaneOffsetActionXmlParser extends XmlComplexTypeParser<LaneOffsetActionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public LaneOffsetActionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<LaneOffsetActionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<LaneOffsetActionImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__CONTINUOUS,
        new IAttributeParser<LaneOffsetActionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              LaneOffsetActionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    LaneOffsetActionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    LaneOffsetActionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__CONTINUOUS, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setContinuous(parseBoolean(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__CONTINUOUS, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__CONTINUOUS, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<LaneOffsetActionImpl> {
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
    protected List<IElementParser<LaneOffsetActionImpl>> createParserList() {
      List<IElementParser<LaneOffsetActionImpl>> result = new ArrayList<>();
      result.add(new SubElementLaneOffsetActionDynamicsParser());
      result.add(new SubElementLaneOffsetTargetParser());
      return result;
    }
  }
  /** A parser for subelement laneOffsetActionDynamics */
  @SuppressWarnings("synthetic-access")
  private class SubElementLaneOffsetActionDynamicsParser
      implements IElementParser<LaneOffsetActionImpl> {

    /** Constructor */
    public SubElementLaneOffsetActionDynamicsParser() {
      super();
      this.laneOffsetActionDynamicsXmlParser =
          new LaneOffsetActionDynamicsXmlParser(
              LaneOffsetActionXmlParser.this.messageLogger,
              LaneOffsetActionXmlParser.this.filename);
    }

    private LaneOffsetActionDynamicsXmlParser laneOffsetActionDynamicsXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, LaneOffsetActionImpl object) {
      LaneOffsetActionDynamicsImpl laneOffsetActionDynamics = new LaneOffsetActionDynamicsImpl();
      // Setting the parent
      laneOffsetActionDynamics.setParent(object);
      this.laneOffsetActionDynamicsXmlParser.parseElement(
          indexedElement, parserContext, laneOffsetActionDynamics);

      object.setLaneOffsetActionDynamics(laneOffsetActionDynamics);
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
      return elementName.equals(OscConstants.ELEMENT__LANE_OFFSET_ACTION_DYNAMICS);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__LANE_OFFSET_ACTION_DYNAMICS};
    }
  }
  /** A parser for subelement laneOffsetTarget */
  @SuppressWarnings("synthetic-access")
  private class SubElementLaneOffsetTargetParser implements IElementParser<LaneOffsetActionImpl> {

    /** Constructor */
    public SubElementLaneOffsetTargetParser() {
      super();
      this.laneOffsetTargetXmlParser =
          new LaneOffsetTargetXmlParser(
              LaneOffsetActionXmlParser.this.messageLogger,
              LaneOffsetActionXmlParser.this.filename);
    }

    private LaneOffsetTargetXmlParser laneOffsetTargetXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, LaneOffsetActionImpl object) {
      LaneOffsetTargetImpl laneOffsetTarget = new LaneOffsetTargetImpl();
      // Setting the parent
      laneOffsetTarget.setParent(object);
      this.laneOffsetTargetXmlParser.parseElement(indexedElement, parserContext, laneOffsetTarget);

      object.setLaneOffsetTarget(laneOffsetTarget);
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
      return elementName.equals(OscConstants.ELEMENT__LANE_OFFSET_TARGET);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__LANE_OFFSET_TARGET};
    }
  }
}
