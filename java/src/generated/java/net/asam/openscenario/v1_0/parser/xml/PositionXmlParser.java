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
import net.asam.openscenario.v1_0.impl.LanePositionImpl;
import net.asam.openscenario.v1_0.impl.PositionImpl;
import net.asam.openscenario.v1_0.impl.RelativeLanePositionImpl;
import net.asam.openscenario.v1_0.impl.RelativeObjectPositionImpl;
import net.asam.openscenario.v1_0.impl.RelativeRoadPositionImpl;
import net.asam.openscenario.v1_0.impl.RelativeWorldPositionImpl;
import net.asam.openscenario.v1_0.impl.RoadPositionImpl;
import net.asam.openscenario.v1_0.impl.RoutePositionImpl;
import net.asam.openscenario.v1_0.impl.WorldPositionImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PositionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class PositionXmlParser extends XmlComplexTypeParser<PositionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public PositionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<PositionImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<PositionImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlChoiceParser<PositionImpl> {
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
    protected List<IElementParser<PositionImpl>> createParserList() {
      List<IElementParser<PositionImpl>> result = new ArrayList<>();
      result.add(new SubElementWorldPositionParser());
      result.add(new SubElementRelativeWorldPositionParser());
      result.add(new SubElementRelativeObjectPositionParser());
      result.add(new SubElementRoadPositionParser());
      result.add(new SubElementRelativeRoadPositionParser());
      result.add(new SubElementLanePositionParser());
      result.add(new SubElementRelativeLanePositionParser());
      result.add(new SubElementRoutePositionParser());
      return result;
    }
  }
  /** A parser for subelement worldPosition */
  @SuppressWarnings("synthetic-access")
  private class SubElementWorldPositionParser implements IElementParser<PositionImpl> {

    /** Constructor */
    public SubElementWorldPositionParser() {
      super();
      this.worldPositionXmlParser =
          new WorldPositionXmlParser(
              PositionXmlParser.this.messageLogger, PositionXmlParser.this.filename);
    }

    private WorldPositionXmlParser worldPositionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PositionImpl object) {
      WorldPositionImpl worldPosition = new WorldPositionImpl();
      // Setting the parent
      worldPosition.setParent(object);
      this.worldPositionXmlParser.parseElement(indexedElement, parserContext, worldPosition);

      object.setWorldPosition(worldPosition);
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
      return elementName.equals(OscConstants.ELEMENT__WORLD_POSITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__WORLD_POSITION};
    }
  }
  /** A parser for subelement relativeWorldPosition */
  @SuppressWarnings("synthetic-access")
  private class SubElementRelativeWorldPositionParser implements IElementParser<PositionImpl> {

    /** Constructor */
    public SubElementRelativeWorldPositionParser() {
      super();
      this.relativeWorldPositionXmlParser =
          new RelativeWorldPositionXmlParser(
              PositionXmlParser.this.messageLogger, PositionXmlParser.this.filename);
    }

    private RelativeWorldPositionXmlParser relativeWorldPositionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PositionImpl object) {
      RelativeWorldPositionImpl relativeWorldPosition = new RelativeWorldPositionImpl();
      // Setting the parent
      relativeWorldPosition.setParent(object);
      this.relativeWorldPositionXmlParser.parseElement(
          indexedElement, parserContext, relativeWorldPosition);

      object.setRelativeWorldPosition(relativeWorldPosition);
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
      return elementName.equals(OscConstants.ELEMENT__RELATIVE_WORLD_POSITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__RELATIVE_WORLD_POSITION};
    }
  }
  /** A parser for subelement relativeObjectPosition */
  @SuppressWarnings("synthetic-access")
  private class SubElementRelativeObjectPositionParser implements IElementParser<PositionImpl> {

    /** Constructor */
    public SubElementRelativeObjectPositionParser() {
      super();
      this.relativeObjectPositionXmlParser =
          new RelativeObjectPositionXmlParser(
              PositionXmlParser.this.messageLogger, PositionXmlParser.this.filename);
    }

    private RelativeObjectPositionXmlParser relativeObjectPositionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PositionImpl object) {
      RelativeObjectPositionImpl relativeObjectPosition = new RelativeObjectPositionImpl();
      // Setting the parent
      relativeObjectPosition.setParent(object);
      this.relativeObjectPositionXmlParser.parseElement(
          indexedElement, parserContext, relativeObjectPosition);

      object.setRelativeObjectPosition(relativeObjectPosition);
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
      return elementName.equals(OscConstants.ELEMENT__RELATIVE_OBJECT_POSITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__RELATIVE_OBJECT_POSITION};
    }
  }
  /** A parser for subelement roadPosition */
  @SuppressWarnings("synthetic-access")
  private class SubElementRoadPositionParser implements IElementParser<PositionImpl> {

    /** Constructor */
    public SubElementRoadPositionParser() {
      super();
      this.roadPositionXmlParser =
          new RoadPositionXmlParser(
              PositionXmlParser.this.messageLogger, PositionXmlParser.this.filename);
    }

    private RoadPositionXmlParser roadPositionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PositionImpl object) {
      RoadPositionImpl roadPosition = new RoadPositionImpl();
      // Setting the parent
      roadPosition.setParent(object);
      this.roadPositionXmlParser.parseElement(indexedElement, parserContext, roadPosition);

      object.setRoadPosition(roadPosition);
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
      return elementName.equals(OscConstants.ELEMENT__ROAD_POSITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ROAD_POSITION};
    }
  }
  /** A parser for subelement relativeRoadPosition */
  @SuppressWarnings("synthetic-access")
  private class SubElementRelativeRoadPositionParser implements IElementParser<PositionImpl> {

    /** Constructor */
    public SubElementRelativeRoadPositionParser() {
      super();
      this.relativeRoadPositionXmlParser =
          new RelativeRoadPositionXmlParser(
              PositionXmlParser.this.messageLogger, PositionXmlParser.this.filename);
    }

    private RelativeRoadPositionXmlParser relativeRoadPositionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PositionImpl object) {
      RelativeRoadPositionImpl relativeRoadPosition = new RelativeRoadPositionImpl();
      // Setting the parent
      relativeRoadPosition.setParent(object);
      this.relativeRoadPositionXmlParser.parseElement(
          indexedElement, parserContext, relativeRoadPosition);

      object.setRelativeRoadPosition(relativeRoadPosition);
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
      return elementName.equals(OscConstants.ELEMENT__RELATIVE_ROAD_POSITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__RELATIVE_ROAD_POSITION};
    }
  }
  /** A parser for subelement lanePosition */
  @SuppressWarnings("synthetic-access")
  private class SubElementLanePositionParser implements IElementParser<PositionImpl> {

    /** Constructor */
    public SubElementLanePositionParser() {
      super();
      this.lanePositionXmlParser =
          new LanePositionXmlParser(
              PositionXmlParser.this.messageLogger, PositionXmlParser.this.filename);
    }

    private LanePositionXmlParser lanePositionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PositionImpl object) {
      LanePositionImpl lanePosition = new LanePositionImpl();
      // Setting the parent
      lanePosition.setParent(object);
      this.lanePositionXmlParser.parseElement(indexedElement, parserContext, lanePosition);

      object.setLanePosition(lanePosition);
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
      return elementName.equals(OscConstants.ELEMENT__LANE_POSITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__LANE_POSITION};
    }
  }
  /** A parser for subelement relativeLanePosition */
  @SuppressWarnings("synthetic-access")
  private class SubElementRelativeLanePositionParser implements IElementParser<PositionImpl> {

    /** Constructor */
    public SubElementRelativeLanePositionParser() {
      super();
      this.relativeLanePositionXmlParser =
          new RelativeLanePositionXmlParser(
              PositionXmlParser.this.messageLogger, PositionXmlParser.this.filename);
    }

    private RelativeLanePositionXmlParser relativeLanePositionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PositionImpl object) {
      RelativeLanePositionImpl relativeLanePosition = new RelativeLanePositionImpl();
      // Setting the parent
      relativeLanePosition.setParent(object);
      this.relativeLanePositionXmlParser.parseElement(
          indexedElement, parserContext, relativeLanePosition);

      object.setRelativeLanePosition(relativeLanePosition);
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
      return elementName.equals(OscConstants.ELEMENT__RELATIVE_LANE_POSITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__RELATIVE_LANE_POSITION};
    }
  }
  /** A parser for subelement routePosition */
  @SuppressWarnings("synthetic-access")
  private class SubElementRoutePositionParser implements IElementParser<PositionImpl> {

    /** Constructor */
    public SubElementRoutePositionParser() {
      super();
      this.routePositionXmlParser =
          new RoutePositionXmlParser(
              PositionXmlParser.this.messageLogger, PositionXmlParser.this.filename);
    }

    private RoutePositionXmlParser routePositionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PositionImpl object) {
      RoutePositionImpl routePosition = new RoutePositionImpl();
      // Setting the parent
      routePosition.setParent(object);
      this.routePositionXmlParser.parseElement(indexedElement, parserContext, routePosition);

      object.setRoutePosition(routePosition);
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
      return elementName.equals(OscConstants.ELEMENT__ROUTE_POSITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ROUTE_POSITION};
    }
  }
}
