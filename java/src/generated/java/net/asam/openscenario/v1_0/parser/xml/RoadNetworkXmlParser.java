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
import net.asam.openscenario.parser.WrappedListParser;
import net.asam.openscenario.parser.modelgroup.XmlSequenceParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.api.ITrafficSignalController;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.FileImpl;
import net.asam.openscenario.v1_0.impl.RoadNetworkImpl;
import net.asam.openscenario.v1_0.impl.TrafficSignalControllerImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoadNetworkImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class RoadNetworkXmlParser extends XmlComplexTypeParser<RoadNetworkImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public RoadNetworkXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<RoadNetworkImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<RoadNetworkImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<RoadNetworkImpl> {
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
    @SuppressWarnings("synthetic-access")
    protected List<IElementParser<RoadNetworkImpl>> createParserList() {
      List<IElementParser<RoadNetworkImpl>> result = new ArrayList<>();
      result.add(new SubElementLogicFileParser());
      result.add(new SubElementSceneGraphFileParser());
      result.add(
          new WrappedListParser<>(
              this.messageLogger,
              RoadNetworkXmlParser.this.filename,
              new SubElementTrafficSignalsParser(),
              OscConstants.ELEMENT__TRAFFIC_SIGNALS));
      return result;
    }
  }
  /** A parser for subelement logicFile */
  @SuppressWarnings("synthetic-access")
  private class SubElementLogicFileParser implements IElementParser<RoadNetworkImpl> {

    /** Constructor */
    public SubElementLogicFileParser() {
      super();
      this.fileXmlParser =
          new FileXmlParser(
              RoadNetworkXmlParser.this.messageLogger, RoadNetworkXmlParser.this.filename);
    }

    private FileXmlParser fileXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, RoadNetworkImpl object) {
      FileImpl logicFile = new FileImpl();
      // Setting the parent
      logicFile.setParent(object);
      this.fileXmlParser.parseElement(indexedElement, parserContext, logicFile);

      object.setLogicFile(logicFile);
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
      return elementName.equals(OscConstants.ELEMENT__LOGIC_FILE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__LOGIC_FILE};
    }
  }
  /** A parser for subelement sceneGraphFile */
  @SuppressWarnings("synthetic-access")
  private class SubElementSceneGraphFileParser implements IElementParser<RoadNetworkImpl> {

    /** Constructor */
    public SubElementSceneGraphFileParser() {
      super();
      this.fileXmlParser =
          new FileXmlParser(
              RoadNetworkXmlParser.this.messageLogger, RoadNetworkXmlParser.this.filename);
    }

    private FileXmlParser fileXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, RoadNetworkImpl object) {
      FileImpl sceneGraphFile = new FileImpl();
      // Setting the parent
      sceneGraphFile.setParent(object);
      this.fileXmlParser.parseElement(indexedElement, parserContext, sceneGraphFile);

      object.setSceneGraphFile(sceneGraphFile);
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
      return elementName.equals(OscConstants.ELEMENT__SCENE_GRAPH_FILE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__SCENE_GRAPH_FILE};
    }
  }
  /** A parser for subelement trafficSignals */
  @SuppressWarnings("synthetic-access")
  private class SubElementTrafficSignalsParser implements IElementParser<RoadNetworkImpl> {

    /** Constructor */
    public SubElementTrafficSignalsParser() {
      super();
      this.trafficSignalControllerXmlParser =
          new TrafficSignalControllerXmlParser(
              RoadNetworkXmlParser.this.messageLogger, RoadNetworkXmlParser.this.filename);
    }

    private TrafficSignalControllerXmlParser trafficSignalControllerXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, RoadNetworkImpl object) {
      TrafficSignalControllerImpl trafficSignals = new TrafficSignalControllerImpl();
      // Setting the parent
      trafficSignals.setParent(object);
      this.trafficSignalControllerXmlParser.parseElement(
          indexedElement, parserContext, trafficSignals);
      List<ITrafficSignalController> trafficSignalsList = object.getTrafficSignals();
      if (trafficSignalsList == null) {
        trafficSignalsList = new ArrayList<>();
        object.setTrafficSignals(trafficSignalsList);
      }
      trafficSignalsList.add(trafficSignals);
    }

    @Override
    public int getMinOccur() {
      return 0;
    }

    @Override
    public int getMaxOccur() {
      return -1;
    }

    @Override
    public boolean doesMatch(String elementName) {
      return elementName.equals(OscConstants.ELEMENT__TRAFFIC_SIGNAL_CONTROLLER);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__TRAFFIC_SIGNAL_CONTROLLER};
    }
  }
}
