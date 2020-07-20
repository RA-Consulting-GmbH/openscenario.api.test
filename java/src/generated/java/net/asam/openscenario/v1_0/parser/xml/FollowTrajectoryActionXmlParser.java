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
import net.asam.openscenario.v1_0.impl.CatalogReferenceImpl;
import net.asam.openscenario.v1_0.impl.FollowTrajectoryActionImpl;
import net.asam.openscenario.v1_0.impl.TimeReferenceImpl;
import net.asam.openscenario.v1_0.impl.TrajectoryFollowingModeImpl;
import net.asam.openscenario.v1_0.impl.TrajectoryImpl;
import net.asam.openscenario.v1_0.parser.CatalogReferenceParserContext;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a FollowTrajectoryActionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class FollowTrajectoryActionXmlParser
    extends XmlComplexTypeParser<FollowTrajectoryActionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public FollowTrajectoryActionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<FollowTrajectoryActionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<FollowTrajectoryActionImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<FollowTrajectoryActionImpl> {
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
    protected List<IElementParser<FollowTrajectoryActionImpl>> createParserList() {
      List<IElementParser<FollowTrajectoryActionImpl>> result = new ArrayList<>();
      result.add(new SubElementTrajectoryParser());
      result.add(new SubElementCatalogReferenceParser());
      result.add(new SubElementTimeReferenceParser());
      result.add(new SubElementTrajectoryFollowingModeParser());
      return result;
    }
  }
  /** A parser for subelement trajectory */
  @SuppressWarnings("synthetic-access")
  private class SubElementTrajectoryParser implements IElementParser<FollowTrajectoryActionImpl> {

    /** Constructor */
    public SubElementTrajectoryParser() {
      super();
      this.trajectoryXmlParser =
          new TrajectoryXmlParser(
              FollowTrajectoryActionXmlParser.this.messageLogger,
              FollowTrajectoryActionXmlParser.this.filename);
    }

    private TrajectoryXmlParser trajectoryXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement,
        ParserContext parserContext,
        FollowTrajectoryActionImpl object) {
      TrajectoryImpl trajectory = new TrajectoryImpl();
      // Setting the parent
      trajectory.setParent(object);
      this.trajectoryXmlParser.parseElement(indexedElement, parserContext, trajectory);

      object.setTrajectory(trajectory);
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
      return elementName.equals(OscConstants.ELEMENT__TRAJECTORY);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__TRAJECTORY};
    }
  }
  /** A parser for subelement catalogReference */
  @SuppressWarnings("synthetic-access")
  private class SubElementCatalogReferenceParser
      implements IElementParser<FollowTrajectoryActionImpl> {

    /** Constructor */
    public SubElementCatalogReferenceParser() {
      super();
      this.catalogReferenceXmlParser =
          new CatalogReferenceXmlParser(
              FollowTrajectoryActionXmlParser.this.messageLogger,
              FollowTrajectoryActionXmlParser.this.filename);
    }

    private CatalogReferenceXmlParser catalogReferenceXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement,
        ParserContext parserContext,
        FollowTrajectoryActionImpl object) {
      CatalogReferenceImpl catalogReference = new CatalogReferenceImpl();
      // Setting the parent
      catalogReference.setParent(object);
      this.catalogReferenceXmlParser.parseElement(indexedElement, parserContext, catalogReference);

      object.setCatalogReference(catalogReference);
      ((CatalogReferenceParserContext) parserContext).addCatalogReference(catalogReference);
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
      return elementName.equals(OscConstants.ELEMENT__CATALOG_REFERENCE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__CATALOG_REFERENCE};
    }
  }
  /** A parser for subelement timeReference */
  @SuppressWarnings("synthetic-access")
  private class SubElementTimeReferenceParser
      implements IElementParser<FollowTrajectoryActionImpl> {

    /** Constructor */
    public SubElementTimeReferenceParser() {
      super();
      this.timeReferenceXmlParser =
          new TimeReferenceXmlParser(
              FollowTrajectoryActionXmlParser.this.messageLogger,
              FollowTrajectoryActionXmlParser.this.filename);
    }

    private TimeReferenceXmlParser timeReferenceXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement,
        ParserContext parserContext,
        FollowTrajectoryActionImpl object) {
      TimeReferenceImpl timeReference = new TimeReferenceImpl();
      // Setting the parent
      timeReference.setParent(object);
      this.timeReferenceXmlParser.parseElement(indexedElement, parserContext, timeReference);

      object.setTimeReference(timeReference);
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
      return elementName.equals(OscConstants.ELEMENT__TIME_REFERENCE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__TIME_REFERENCE};
    }
  }
  /** A parser for subelement trajectoryFollowingMode */
  @SuppressWarnings("synthetic-access")
  private class SubElementTrajectoryFollowingModeParser
      implements IElementParser<FollowTrajectoryActionImpl> {

    /** Constructor */
    public SubElementTrajectoryFollowingModeParser() {
      super();
      this.trajectoryFollowingModeXmlParser =
          new TrajectoryFollowingModeXmlParser(
              FollowTrajectoryActionXmlParser.this.messageLogger,
              FollowTrajectoryActionXmlParser.this.filename);
    }

    private TrajectoryFollowingModeXmlParser trajectoryFollowingModeXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement,
        ParserContext parserContext,
        FollowTrajectoryActionImpl object) {
      TrajectoryFollowingModeImpl trajectoryFollowingMode = new TrajectoryFollowingModeImpl();
      // Setting the parent
      trajectoryFollowingMode.setParent(object);
      this.trajectoryFollowingModeXmlParser.parseElement(
          indexedElement, parserContext, trajectoryFollowingMode);

      object.setTrajectoryFollowingMode(trajectoryFollowingMode);
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
      return elementName.equals(OscConstants.ELEMENT__TRAJECTORY_FOLLOWING_MODE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__TRAJECTORY_FOLLOWING_MODE};
    }
  }
}
