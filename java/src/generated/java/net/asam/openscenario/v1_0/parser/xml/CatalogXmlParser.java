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
import net.asam.openscenario.parser.modelgroup.XmlSequenceParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.api.writer.IControllerWriter;
import net.asam.openscenario.v1_0.api.writer.IEnvironmentWriter;
import net.asam.openscenario.v1_0.api.writer.IManeuverWriter;
import net.asam.openscenario.v1_0.api.writer.IMiscObjectWriter;
import net.asam.openscenario.v1_0.api.writer.IPedestrianWriter;
import net.asam.openscenario.v1_0.api.writer.IRouteWriter;
import net.asam.openscenario.v1_0.api.writer.ITrajectoryWriter;
import net.asam.openscenario.v1_0.api.writer.IVehicleWriter;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.CatalogImpl;
import net.asam.openscenario.v1_0.impl.ControllerImpl;
import net.asam.openscenario.v1_0.impl.EnvironmentImpl;
import net.asam.openscenario.v1_0.impl.ManeuverImpl;
import net.asam.openscenario.v1_0.impl.MiscObjectImpl;
import net.asam.openscenario.v1_0.impl.PedestrianImpl;
import net.asam.openscenario.v1_0.impl.RouteImpl;
import net.asam.openscenario.v1_0.impl.TrajectoryImpl;
import net.asam.openscenario.v1_0.impl.VehicleImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CatalogImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class CatalogXmlParser extends XmlComplexTypeParser<CatalogImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public CatalogXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<CatalogImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<CatalogImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__NAME,
        new IAttributeParser<CatalogImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              CatalogImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    CatalogXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(), endPosition.getColumn(), CatalogXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__NAME, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setName(parseString(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__NAME, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__NAME, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 0;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<CatalogImpl> {
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
    protected List<IElementParser<CatalogImpl>> createParserList() {
      List<IElementParser<CatalogImpl>> result = new ArrayList<>();
      result.add(new SubElementVehiclesParser());
      result.add(new SubElementControllersParser());
      result.add(new SubElementPedestriansParser());
      result.add(new SubElementMiscObjectsParser());
      result.add(new SubElementEnvironmentsParser());
      result.add(new SubElementManeuversParser());
      result.add(new SubElementTrajectoriesParser());
      result.add(new SubElementRoutesParser());
      return result;
    }
  }
  /** A parser for subelement vehicles */
  @SuppressWarnings("synthetic-access")
  private class SubElementVehiclesParser implements IElementParser<CatalogImpl> {

    /** Constructor */
    public SubElementVehiclesParser() {
      super();
      this.vehicleXmlParser =
          new VehicleXmlParser(CatalogXmlParser.this.messageLogger, CatalogXmlParser.this.filename);
    }

    private VehicleXmlParser vehicleXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogImpl object) {
      VehicleImpl vehicles = new VehicleImpl();
      // Setting the parent
      vehicles.setParent(object);
      this.vehicleXmlParser.parseElement(indexedElement, parserContext, vehicles);
      List<IVehicleWriter> vehiclesList = object.getWriterVehicles();
      if (vehiclesList == null) {
        vehiclesList = new ArrayList<>();
        object.setVehicles(vehiclesList);
      }
      vehiclesList.add(vehicles);
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
      return elementName.equals(OscConstants.ELEMENT__VEHICLE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__VEHICLE};
    }
  }
  /** A parser for subelement controllers */
  @SuppressWarnings("synthetic-access")
  private class SubElementControllersParser implements IElementParser<CatalogImpl> {

    /** Constructor */
    public SubElementControllersParser() {
      super();
      this.controllerXmlParser =
          new ControllerXmlParser(
              CatalogXmlParser.this.messageLogger, CatalogXmlParser.this.filename);
    }

    private ControllerXmlParser controllerXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogImpl object) {
      ControllerImpl controllers = new ControllerImpl();
      // Setting the parent
      controllers.setParent(object);
      this.controllerXmlParser.parseElement(indexedElement, parserContext, controllers);
      List<IControllerWriter> controllersList = object.getWriterControllers();
      if (controllersList == null) {
        controllersList = new ArrayList<>();
        object.setControllers(controllersList);
      }
      controllersList.add(controllers);
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
      return elementName.equals(OscConstants.ELEMENT__CONTROLLER);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__CONTROLLER};
    }
  }
  /** A parser for subelement pedestrians */
  @SuppressWarnings("synthetic-access")
  private class SubElementPedestriansParser implements IElementParser<CatalogImpl> {

    /** Constructor */
    public SubElementPedestriansParser() {
      super();
      this.pedestrianXmlParser =
          new PedestrianXmlParser(
              CatalogXmlParser.this.messageLogger, CatalogXmlParser.this.filename);
    }

    private PedestrianXmlParser pedestrianXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogImpl object) {
      PedestrianImpl pedestrians = new PedestrianImpl();
      // Setting the parent
      pedestrians.setParent(object);
      this.pedestrianXmlParser.parseElement(indexedElement, parserContext, pedestrians);
      List<IPedestrianWriter> pedestriansList = object.getWriterPedestrians();
      if (pedestriansList == null) {
        pedestriansList = new ArrayList<>();
        object.setPedestrians(pedestriansList);
      }
      pedestriansList.add(pedestrians);
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
      return elementName.equals(OscConstants.ELEMENT__PEDESTRIAN);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__PEDESTRIAN};
    }
  }
  /** A parser for subelement miscObjects */
  @SuppressWarnings("synthetic-access")
  private class SubElementMiscObjectsParser implements IElementParser<CatalogImpl> {

    /** Constructor */
    public SubElementMiscObjectsParser() {
      super();
      this.miscObjectXmlParser =
          new MiscObjectXmlParser(
              CatalogXmlParser.this.messageLogger, CatalogXmlParser.this.filename);
    }

    private MiscObjectXmlParser miscObjectXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogImpl object) {
      MiscObjectImpl miscObjects = new MiscObjectImpl();
      // Setting the parent
      miscObjects.setParent(object);
      this.miscObjectXmlParser.parseElement(indexedElement, parserContext, miscObjects);
      List<IMiscObjectWriter> miscObjectsList = object.getWriterMiscObjects();
      if (miscObjectsList == null) {
        miscObjectsList = new ArrayList<>();
        object.setMiscObjects(miscObjectsList);
      }
      miscObjectsList.add(miscObjects);
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
      return elementName.equals(OscConstants.ELEMENT__MISC_OBJECT);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__MISC_OBJECT};
    }
  }
  /** A parser for subelement environments */
  @SuppressWarnings("synthetic-access")
  private class SubElementEnvironmentsParser implements IElementParser<CatalogImpl> {

    /** Constructor */
    public SubElementEnvironmentsParser() {
      super();
      this.environmentXmlParser =
          new EnvironmentXmlParser(
              CatalogXmlParser.this.messageLogger, CatalogXmlParser.this.filename);
    }

    private EnvironmentXmlParser environmentXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogImpl object) {
      EnvironmentImpl environments = new EnvironmentImpl();
      // Setting the parent
      environments.setParent(object);
      this.environmentXmlParser.parseElement(indexedElement, parserContext, environments);
      List<IEnvironmentWriter> environmentsList = object.getWriterEnvironments();
      if (environmentsList == null) {
        environmentsList = new ArrayList<>();
        object.setEnvironments(environmentsList);
      }
      environmentsList.add(environments);
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
      return elementName.equals(OscConstants.ELEMENT__ENVIRONMENT);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ENVIRONMENT};
    }
  }
  /** A parser for subelement maneuvers */
  @SuppressWarnings("synthetic-access")
  private class SubElementManeuversParser implements IElementParser<CatalogImpl> {

    /** Constructor */
    public SubElementManeuversParser() {
      super();
      this.maneuverXmlParser =
          new ManeuverXmlParser(
              CatalogXmlParser.this.messageLogger, CatalogXmlParser.this.filename);
    }

    private ManeuverXmlParser maneuverXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogImpl object) {
      ManeuverImpl maneuvers = new ManeuverImpl();
      // Setting the parent
      maneuvers.setParent(object);
      this.maneuverXmlParser.parseElement(indexedElement, parserContext, maneuvers);
      List<IManeuverWriter> maneuversList = object.getWriterManeuvers();
      if (maneuversList == null) {
        maneuversList = new ArrayList<>();
        object.setManeuvers(maneuversList);
      }
      maneuversList.add(maneuvers);
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
      return elementName.equals(OscConstants.ELEMENT__MANEUVER);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__MANEUVER};
    }
  }
  /** A parser for subelement trajectories */
  @SuppressWarnings("synthetic-access")
  private class SubElementTrajectoriesParser implements IElementParser<CatalogImpl> {

    /** Constructor */
    public SubElementTrajectoriesParser() {
      super();
      this.trajectoryXmlParser =
          new TrajectoryXmlParser(
              CatalogXmlParser.this.messageLogger, CatalogXmlParser.this.filename);
    }

    private TrajectoryXmlParser trajectoryXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogImpl object) {
      TrajectoryImpl trajectories = new TrajectoryImpl();
      // Setting the parent
      trajectories.setParent(object);
      this.trajectoryXmlParser.parseElement(indexedElement, parserContext, trajectories);
      List<ITrajectoryWriter> trajectoriesList = object.getWriterTrajectories();
      if (trajectoriesList == null) {
        trajectoriesList = new ArrayList<>();
        object.setTrajectories(trajectoriesList);
      }
      trajectoriesList.add(trajectories);
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
      return elementName.equals(OscConstants.ELEMENT__TRAJECTORY);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__TRAJECTORY};
    }
  }
  /** A parser for subelement routes */
  @SuppressWarnings("synthetic-access")
  private class SubElementRoutesParser implements IElementParser<CatalogImpl> {

    /** Constructor */
    public SubElementRoutesParser() {
      super();
      this.routeXmlParser =
          new RouteXmlParser(CatalogXmlParser.this.messageLogger, CatalogXmlParser.this.filename);
    }

    private RouteXmlParser routeXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogImpl object) {
      RouteImpl routes = new RouteImpl();
      // Setting the parent
      routes.setParent(object);
      this.routeXmlParser.parseElement(indexedElement, parserContext, routes);
      List<IRouteWriter> routesList = object.getWriterRoutes();
      if (routesList == null) {
        routesList = new ArrayList<>();
        object.setRoutes(routesList);
      }
      routesList.add(routes);
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
      return elementName.equals(OscConstants.ELEMENT__ROUTE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ROUTE};
    }
  }
}
