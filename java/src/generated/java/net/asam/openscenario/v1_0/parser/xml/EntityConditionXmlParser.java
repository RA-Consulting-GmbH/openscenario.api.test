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
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.parser.modelgroup.XmlChoiceParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.AccelerationConditionImpl;
import net.asam.openscenario.v1_0.impl.CollisionConditionImpl;
import net.asam.openscenario.v1_0.impl.DistanceConditionImpl;
import net.asam.openscenario.v1_0.impl.EndOfRoadConditionImpl;
import net.asam.openscenario.v1_0.impl.EntityConditionImpl;
import net.asam.openscenario.v1_0.impl.OffroadConditionImpl;
import net.asam.openscenario.v1_0.impl.ReachPositionConditionImpl;
import net.asam.openscenario.v1_0.impl.RelativeDistanceConditionImpl;
import net.asam.openscenario.v1_0.impl.RelativeSpeedConditionImpl;
import net.asam.openscenario.v1_0.impl.SpeedConditionImpl;
import net.asam.openscenario.v1_0.impl.StandStillConditionImpl;
import net.asam.openscenario.v1_0.impl.TimeHeadwayConditionImpl;
import net.asam.openscenario.v1_0.impl.TimeToCollisionConditionImpl;
import net.asam.openscenario.v1_0.impl.TraveledDistanceConditionImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EntityConditionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class EntityConditionXmlParser extends XmlComplexTypeParser<EntityConditionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public EntityConditionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  public void parseElement(
      IndexedElement indexedElement, ParserContext parserContext, EntityConditionImpl object) {
    messageLogger.logMessage(
        new FileContentMessage(
            "Start Parsing EntityCondition",
            ErrorLevel.DEBUG,
            new Textmarker(
                indexedElement.getStartElementLocation().getLine(),
                indexedElement.getStartElementLocation().getColumn(),
                filename)));
    super.parseElement(indexedElement, parserContext, object);
    messageLogger.logMessage(
        new FileContentMessage(
            "End Parsing EntityCondition",
            ErrorLevel.DEBUG,
            new Textmarker(
                indexedElement.getEndElementLocation().getLine(),
                indexedElement.getEndElementLocation().getColumn(),
                filename)));
  }

  @Override
  protected Map<String, IAttributeParser<EntityConditionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<EntityConditionImpl>> result =
        new Hashtable<String, IAttributeParser<EntityConditionImpl>>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlChoiceParser<EntityConditionImpl> {
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
    protected List<IElementParser<EntityConditionImpl>> createParserList() {
      List<IElementParser<EntityConditionImpl>> result =
          new ArrayList<IElementParser<EntityConditionImpl>>();
      result.add(new SubElementEndOfRoadConditionParser());
      result.add(new SubElementCollisionConditionParser());
      result.add(new SubElementOffroadConditionParser());
      result.add(new SubElementTimeHeadwayConditionParser());
      result.add(new SubElementTimeToCollisionConditionParser());
      result.add(new SubElementAccelerationConditionParser());
      result.add(new SubElementStandStillConditionParser());
      result.add(new SubElementSpeedConditionParser());
      result.add(new SubElementRelativeSpeedConditionParser());
      result.add(new SubElementTraveledDistanceConditionParser());
      result.add(new SubElementReachPositionConditionParser());
      result.add(new SubElementDistanceConditionParser());
      result.add(new SubElementRelativeDistanceConditionParser());
      return result;
    }
  }
  /** A parser for subelement endOfRoadCondition */
  private class SubElementEndOfRoadConditionParser implements IElementParser<EntityConditionImpl> {

    /** Constructor */
    public SubElementEndOfRoadConditionParser() {
      super();
      endOfRoadConditionXmlParser = new EndOfRoadConditionXmlParser(messageLogger, filename);
    }

    private EndOfRoadConditionXmlParser endOfRoadConditionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityConditionImpl object) {
      EndOfRoadConditionImpl endOfRoadCondition = new EndOfRoadConditionImpl();
      // Setting the parent
      endOfRoadCondition.setParent(object);
      endOfRoadConditionXmlParser.parseElement(indexedElement, parserContext, endOfRoadCondition);

      object.setEndOfRoadCondition(endOfRoadCondition);
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
      return elementName.equals(OscConstants.ELEMENT__END_OF_ROAD_CONDITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__END_OF_ROAD_CONDITION};
    }
  }
  /** A parser for subelement collisionCondition */
  private class SubElementCollisionConditionParser implements IElementParser<EntityConditionImpl> {

    /** Constructor */
    public SubElementCollisionConditionParser() {
      super();
      collisionConditionXmlParser = new CollisionConditionXmlParser(messageLogger, filename);
    }

    private CollisionConditionXmlParser collisionConditionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityConditionImpl object) {
      CollisionConditionImpl collisionCondition = new CollisionConditionImpl();
      // Setting the parent
      collisionCondition.setParent(object);
      collisionConditionXmlParser.parseElement(indexedElement, parserContext, collisionCondition);

      object.setCollisionCondition(collisionCondition);
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
      return elementName.equals(OscConstants.ELEMENT__COLLISION_CONDITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__COLLISION_CONDITION};
    }
  }
  /** A parser for subelement offroadCondition */
  private class SubElementOffroadConditionParser implements IElementParser<EntityConditionImpl> {

    /** Constructor */
    public SubElementOffroadConditionParser() {
      super();
      offroadConditionXmlParser = new OffroadConditionXmlParser(messageLogger, filename);
    }

    private OffroadConditionXmlParser offroadConditionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityConditionImpl object) {
      OffroadConditionImpl offroadCondition = new OffroadConditionImpl();
      // Setting the parent
      offroadCondition.setParent(object);
      offroadConditionXmlParser.parseElement(indexedElement, parserContext, offroadCondition);

      object.setOffroadCondition(offroadCondition);
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
      return elementName.equals(OscConstants.ELEMENT__OFFROAD_CONDITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__OFFROAD_CONDITION};
    }
  }
  /** A parser for subelement timeHeadwayCondition */
  private class SubElementTimeHeadwayConditionParser
      implements IElementParser<EntityConditionImpl> {

    /** Constructor */
    public SubElementTimeHeadwayConditionParser() {
      super();
      timeHeadwayConditionXmlParser = new TimeHeadwayConditionXmlParser(messageLogger, filename);
    }

    private TimeHeadwayConditionXmlParser timeHeadwayConditionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityConditionImpl object) {
      TimeHeadwayConditionImpl timeHeadwayCondition = new TimeHeadwayConditionImpl();
      // Setting the parent
      timeHeadwayCondition.setParent(object);
      timeHeadwayConditionXmlParser.parseElement(
          indexedElement, parserContext, timeHeadwayCondition);

      object.setTimeHeadwayCondition(timeHeadwayCondition);
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
      return elementName.equals(OscConstants.ELEMENT__TIME_HEADWAY_CONDITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__TIME_HEADWAY_CONDITION};
    }
  }
  /** A parser for subelement timeToCollisionCondition */
  private class SubElementTimeToCollisionConditionParser
      implements IElementParser<EntityConditionImpl> {

    /** Constructor */
    public SubElementTimeToCollisionConditionParser() {
      super();
      timeToCollisionConditionXmlParser =
          new TimeToCollisionConditionXmlParser(messageLogger, filename);
    }

    private TimeToCollisionConditionXmlParser timeToCollisionConditionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityConditionImpl object) {
      TimeToCollisionConditionImpl timeToCollisionCondition = new TimeToCollisionConditionImpl();
      // Setting the parent
      timeToCollisionCondition.setParent(object);
      timeToCollisionConditionXmlParser.parseElement(
          indexedElement, parserContext, timeToCollisionCondition);

      object.setTimeToCollisionCondition(timeToCollisionCondition);
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
      return elementName.equals(OscConstants.ELEMENT__TIME_TO_COLLISION_CONDITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__TIME_TO_COLLISION_CONDITION};
    }
  }
  /** A parser for subelement accelerationCondition */
  private class SubElementAccelerationConditionParser
      implements IElementParser<EntityConditionImpl> {

    /** Constructor */
    public SubElementAccelerationConditionParser() {
      super();
      accelerationConditionXmlParser = new AccelerationConditionXmlParser(messageLogger, filename);
    }

    private AccelerationConditionXmlParser accelerationConditionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityConditionImpl object) {
      AccelerationConditionImpl accelerationCondition = new AccelerationConditionImpl();
      // Setting the parent
      accelerationCondition.setParent(object);
      accelerationConditionXmlParser.parseElement(
          indexedElement, parserContext, accelerationCondition);

      object.setAccelerationCondition(accelerationCondition);
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
      return elementName.equals(OscConstants.ELEMENT__ACCELERATION_CONDITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ACCELERATION_CONDITION};
    }
  }
  /** A parser for subelement standStillCondition */
  private class SubElementStandStillConditionParser implements IElementParser<EntityConditionImpl> {

    /** Constructor */
    public SubElementStandStillConditionParser() {
      super();
      standStillConditionXmlParser = new StandStillConditionXmlParser(messageLogger, filename);
    }

    private StandStillConditionXmlParser standStillConditionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityConditionImpl object) {
      StandStillConditionImpl standStillCondition = new StandStillConditionImpl();
      // Setting the parent
      standStillCondition.setParent(object);
      standStillConditionXmlParser.parseElement(indexedElement, parserContext, standStillCondition);

      object.setStandStillCondition(standStillCondition);
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
      return elementName.equals(OscConstants.ELEMENT__STAND_STILL_CONDITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__STAND_STILL_CONDITION};
    }
  }
  /** A parser for subelement speedCondition */
  private class SubElementSpeedConditionParser implements IElementParser<EntityConditionImpl> {

    /** Constructor */
    public SubElementSpeedConditionParser() {
      super();
      speedConditionXmlParser = new SpeedConditionXmlParser(messageLogger, filename);
    }

    private SpeedConditionXmlParser speedConditionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityConditionImpl object) {
      SpeedConditionImpl speedCondition = new SpeedConditionImpl();
      // Setting the parent
      speedCondition.setParent(object);
      speedConditionXmlParser.parseElement(indexedElement, parserContext, speedCondition);

      object.setSpeedCondition(speedCondition);
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
      return elementName.equals(OscConstants.ELEMENT__SPEED_CONDITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__SPEED_CONDITION};
    }
  }
  /** A parser for subelement relativeSpeedCondition */
  private class SubElementRelativeSpeedConditionParser
      implements IElementParser<EntityConditionImpl> {

    /** Constructor */
    public SubElementRelativeSpeedConditionParser() {
      super();
      relativeSpeedConditionXmlParser =
          new RelativeSpeedConditionXmlParser(messageLogger, filename);
    }

    private RelativeSpeedConditionXmlParser relativeSpeedConditionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityConditionImpl object) {
      RelativeSpeedConditionImpl relativeSpeedCondition = new RelativeSpeedConditionImpl();
      // Setting the parent
      relativeSpeedCondition.setParent(object);
      relativeSpeedConditionXmlParser.parseElement(
          indexedElement, parserContext, relativeSpeedCondition);

      object.setRelativeSpeedCondition(relativeSpeedCondition);
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
      return elementName.equals(OscConstants.ELEMENT__RELATIVE_SPEED_CONDITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__RELATIVE_SPEED_CONDITION};
    }
  }
  /** A parser for subelement traveledDistanceCondition */
  private class SubElementTraveledDistanceConditionParser
      implements IElementParser<EntityConditionImpl> {

    /** Constructor */
    public SubElementTraveledDistanceConditionParser() {
      super();
      traveledDistanceConditionXmlParser =
          new TraveledDistanceConditionXmlParser(messageLogger, filename);
    }

    private TraveledDistanceConditionXmlParser traveledDistanceConditionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityConditionImpl object) {
      TraveledDistanceConditionImpl traveledDistanceCondition = new TraveledDistanceConditionImpl();
      // Setting the parent
      traveledDistanceCondition.setParent(object);
      traveledDistanceConditionXmlParser.parseElement(
          indexedElement, parserContext, traveledDistanceCondition);

      object.setTraveledDistanceCondition(traveledDistanceCondition);
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
      return elementName.equals(OscConstants.ELEMENT__TRAVELED_DISTANCE_CONDITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__TRAVELED_DISTANCE_CONDITION};
    }
  }
  /** A parser for subelement reachPositionCondition */
  private class SubElementReachPositionConditionParser
      implements IElementParser<EntityConditionImpl> {

    /** Constructor */
    public SubElementReachPositionConditionParser() {
      super();
      reachPositionConditionXmlParser =
          new ReachPositionConditionXmlParser(messageLogger, filename);
    }

    private ReachPositionConditionXmlParser reachPositionConditionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityConditionImpl object) {
      ReachPositionConditionImpl reachPositionCondition = new ReachPositionConditionImpl();
      // Setting the parent
      reachPositionCondition.setParent(object);
      reachPositionConditionXmlParser.parseElement(
          indexedElement, parserContext, reachPositionCondition);

      object.setReachPositionCondition(reachPositionCondition);
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
      return elementName.equals(OscConstants.ELEMENT__REACH_POSITION_CONDITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__REACH_POSITION_CONDITION};
    }
  }
  /** A parser for subelement distanceCondition */
  private class SubElementDistanceConditionParser implements IElementParser<EntityConditionImpl> {

    /** Constructor */
    public SubElementDistanceConditionParser() {
      super();
      distanceConditionXmlParser = new DistanceConditionXmlParser(messageLogger, filename);
    }

    private DistanceConditionXmlParser distanceConditionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityConditionImpl object) {
      DistanceConditionImpl distanceCondition = new DistanceConditionImpl();
      // Setting the parent
      distanceCondition.setParent(object);
      distanceConditionXmlParser.parseElement(indexedElement, parserContext, distanceCondition);

      object.setDistanceCondition(distanceCondition);
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
      return elementName.equals(OscConstants.ELEMENT__DISTANCE_CONDITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__DISTANCE_CONDITION};
    }
  }
  /** A parser for subelement relativeDistanceCondition */
  private class SubElementRelativeDistanceConditionParser
      implements IElementParser<EntityConditionImpl> {

    /** Constructor */
    public SubElementRelativeDistanceConditionParser() {
      super();
      relativeDistanceConditionXmlParser =
          new RelativeDistanceConditionXmlParser(messageLogger, filename);
    }

    private RelativeDistanceConditionXmlParser relativeDistanceConditionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityConditionImpl object) {
      RelativeDistanceConditionImpl relativeDistanceCondition = new RelativeDistanceConditionImpl();
      // Setting the parent
      relativeDistanceCondition.setParent(object);
      relativeDistanceConditionXmlParser.parseElement(
          indexedElement, parserContext, relativeDistanceCondition);

      object.setRelativeDistanceCondition(relativeDistanceCondition);
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
      return elementName.equals(OscConstants.ELEMENT__RELATIVE_DISTANCE_CONDITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__RELATIVE_DISTANCE_CONDITION};
    }
  }
}
