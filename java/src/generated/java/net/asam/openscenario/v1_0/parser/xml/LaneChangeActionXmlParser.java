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
import net.asam.openscenario.v1_0.impl.LaneChangeActionImpl;
import net.asam.openscenario.v1_0.impl.LaneChangeTargetImpl;
import net.asam.openscenario.v1_0.impl.TransitionDynamicsImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LaneChangeActionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class LaneChangeActionXmlParser extends XmlComplexTypeParser<LaneChangeActionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public LaneChangeActionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<LaneChangeActionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<LaneChangeActionImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__TARGET_LANE_OFFSET,
        new IAttributeParser<LaneChangeActionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              LaneChangeActionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    LaneChangeActionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    LaneChangeActionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__TARGET_LANE_OFFSET,
                  stripDollarSign(attributeValue),
                  startMarker);
            } else {
              // Parse value
              // Simple type
              object.setTargetLaneOffset(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__TARGET_LANE_OFFSET, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__TARGET_LANE_OFFSET, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 0;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<LaneChangeActionImpl> {
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
    protected List<IElementParser<LaneChangeActionImpl>> createParserList() {
      List<IElementParser<LaneChangeActionImpl>> result = new ArrayList<>();
      result.add(new SubElementLaneChangeActionDynamicsParser());
      result.add(new SubElementLaneChangeTargetParser());
      return result;
    }
  }
  /** A parser for subelement laneChangeActionDynamics */
  @SuppressWarnings("synthetic-access")
  private class SubElementLaneChangeActionDynamicsParser
      implements IElementParser<LaneChangeActionImpl> {

    /** Constructor */
    public SubElementLaneChangeActionDynamicsParser() {
      super();
      this.transitionDynamicsXmlParser =
          new TransitionDynamicsXmlParser(
              LaneChangeActionXmlParser.this.messageLogger,
              LaneChangeActionXmlParser.this.filename);
    }

    private TransitionDynamicsXmlParser transitionDynamicsXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, LaneChangeActionImpl object) {
      TransitionDynamicsImpl laneChangeActionDynamics = new TransitionDynamicsImpl();
      // Setting the parent
      laneChangeActionDynamics.setParent(object);
      this.transitionDynamicsXmlParser.parseElement(
          indexedElement, parserContext, laneChangeActionDynamics);

      object.setLaneChangeActionDynamics(laneChangeActionDynamics);
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
      return elementName.equals(OscConstants.ELEMENT__LANE_CHANGE_ACTION_DYNAMICS);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__LANE_CHANGE_ACTION_DYNAMICS};
    }
  }
  /** A parser for subelement laneChangeTarget */
  @SuppressWarnings("synthetic-access")
  private class SubElementLaneChangeTargetParser implements IElementParser<LaneChangeActionImpl> {

    /** Constructor */
    public SubElementLaneChangeTargetParser() {
      super();
      this.laneChangeTargetXmlParser =
          new LaneChangeTargetXmlParser(
              LaneChangeActionXmlParser.this.messageLogger,
              LaneChangeActionXmlParser.this.filename);
    }

    private LaneChangeTargetXmlParser laneChangeTargetXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, LaneChangeActionImpl object) {
      LaneChangeTargetImpl laneChangeTarget = new LaneChangeTargetImpl();
      // Setting the parent
      laneChangeTarget.setParent(object);
      this.laneChangeTargetXmlParser.parseElement(indexedElement, parserContext, laneChangeTarget);

      object.setLaneChangeTarget(laneChangeTarget);
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
      return elementName.equals(OscConstants.ELEMENT__LANE_CHANGE_TARGET);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__LANE_CHANGE_TARGET};
    }
  }
}
