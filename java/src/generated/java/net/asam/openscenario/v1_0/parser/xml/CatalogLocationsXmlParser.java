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
import net.asam.openscenario.v1_0.impl.CatalogLocationsImpl;
import net.asam.openscenario.v1_0.impl.ControllerCatalogLocationImpl;
import net.asam.openscenario.v1_0.impl.EnvironmentCatalogLocationImpl;
import net.asam.openscenario.v1_0.impl.ManeuverCatalogLocationImpl;
import net.asam.openscenario.v1_0.impl.MiscObjectCatalogLocationImpl;
import net.asam.openscenario.v1_0.impl.PedestrianCatalogLocationImpl;
import net.asam.openscenario.v1_0.impl.RouteCatalogLocationImpl;
import net.asam.openscenario.v1_0.impl.TrajectoryCatalogLocationImpl;
import net.asam.openscenario.v1_0.impl.VehicleCatalogLocationImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CatalogLocationsImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class CatalogLocationsXmlParser extends XmlComplexTypeParser<CatalogLocationsImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public CatalogLocationsXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<CatalogLocationsImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<CatalogLocationsImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<CatalogLocationsImpl> {
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
    protected List<IElementParser<CatalogLocationsImpl>> createParserList() {
      List<IElementParser<CatalogLocationsImpl>> result = new ArrayList<>();
      result.add(new SubElementVehicleCatalogParser());
      result.add(new SubElementControllerCatalogParser());
      result.add(new SubElementPedestrianCatalogParser());
      result.add(new SubElementMiscObjectCatalogParser());
      result.add(new SubElementEnvironmentCatalogParser());
      result.add(new SubElementManeuverCatalogParser());
      result.add(new SubElementTrajectoryCatalogParser());
      result.add(new SubElementRouteCatalogParser());
      return result;
    }
  }
  /** A parser for subelement vehicleCatalog */
  @SuppressWarnings("synthetic-access")
  private class SubElementVehicleCatalogParser implements IElementParser<CatalogLocationsImpl> {

    /** Constructor */
    public SubElementVehicleCatalogParser() {
      super();
      this.vehicleCatalogLocationXmlParser =
          new VehicleCatalogLocationXmlParser(
              CatalogLocationsXmlParser.this.messageLogger,
              CatalogLocationsXmlParser.this.filename);
    }

    private VehicleCatalogLocationXmlParser vehicleCatalogLocationXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogLocationsImpl object) {
      VehicleCatalogLocationImpl vehicleCatalog = new VehicleCatalogLocationImpl();
      // Setting the parent
      vehicleCatalog.setParent(object);
      this.vehicleCatalogLocationXmlParser.parseElement(
          indexedElement, parserContext, vehicleCatalog);

      object.setVehicleCatalog(vehicleCatalog);
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
      return elementName.equals(OscConstants.ELEMENT__VEHICLE_CATALOG);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__VEHICLE_CATALOG};
    }
  }
  /** A parser for subelement controllerCatalog */
  @SuppressWarnings("synthetic-access")
  private class SubElementControllerCatalogParser implements IElementParser<CatalogLocationsImpl> {

    /** Constructor */
    public SubElementControllerCatalogParser() {
      super();
      this.controllerCatalogLocationXmlParser =
          new ControllerCatalogLocationXmlParser(
              CatalogLocationsXmlParser.this.messageLogger,
              CatalogLocationsXmlParser.this.filename);
    }

    private ControllerCatalogLocationXmlParser controllerCatalogLocationXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogLocationsImpl object) {
      ControllerCatalogLocationImpl controllerCatalog = new ControllerCatalogLocationImpl();
      // Setting the parent
      controllerCatalog.setParent(object);
      this.controllerCatalogLocationXmlParser.parseElement(
          indexedElement, parserContext, controllerCatalog);

      object.setControllerCatalog(controllerCatalog);
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
      return elementName.equals(OscConstants.ELEMENT__CONTROLLER_CATALOG);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__CONTROLLER_CATALOG};
    }
  }
  /** A parser for subelement pedestrianCatalog */
  @SuppressWarnings("synthetic-access")
  private class SubElementPedestrianCatalogParser implements IElementParser<CatalogLocationsImpl> {

    /** Constructor */
    public SubElementPedestrianCatalogParser() {
      super();
      this.pedestrianCatalogLocationXmlParser =
          new PedestrianCatalogLocationXmlParser(
              CatalogLocationsXmlParser.this.messageLogger,
              CatalogLocationsXmlParser.this.filename);
    }

    private PedestrianCatalogLocationXmlParser pedestrianCatalogLocationXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogLocationsImpl object) {
      PedestrianCatalogLocationImpl pedestrianCatalog = new PedestrianCatalogLocationImpl();
      // Setting the parent
      pedestrianCatalog.setParent(object);
      this.pedestrianCatalogLocationXmlParser.parseElement(
          indexedElement, parserContext, pedestrianCatalog);

      object.setPedestrianCatalog(pedestrianCatalog);
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
      return elementName.equals(OscConstants.ELEMENT__PEDESTRIAN_CATALOG);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__PEDESTRIAN_CATALOG};
    }
  }
  /** A parser for subelement miscObjectCatalog */
  @SuppressWarnings("synthetic-access")
  private class SubElementMiscObjectCatalogParser implements IElementParser<CatalogLocationsImpl> {

    /** Constructor */
    public SubElementMiscObjectCatalogParser() {
      super();
      this.miscObjectCatalogLocationXmlParser =
          new MiscObjectCatalogLocationXmlParser(
              CatalogLocationsXmlParser.this.messageLogger,
              CatalogLocationsXmlParser.this.filename);
    }

    private MiscObjectCatalogLocationXmlParser miscObjectCatalogLocationXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogLocationsImpl object) {
      MiscObjectCatalogLocationImpl miscObjectCatalog = new MiscObjectCatalogLocationImpl();
      // Setting the parent
      miscObjectCatalog.setParent(object);
      this.miscObjectCatalogLocationXmlParser.parseElement(
          indexedElement, parserContext, miscObjectCatalog);

      object.setMiscObjectCatalog(miscObjectCatalog);
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
      return elementName.equals(OscConstants.ELEMENT__MISC_OBJECT_CATALOG);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__MISC_OBJECT_CATALOG};
    }
  }
  /** A parser for subelement environmentCatalog */
  @SuppressWarnings("synthetic-access")
  private class SubElementEnvironmentCatalogParser implements IElementParser<CatalogLocationsImpl> {

    /** Constructor */
    public SubElementEnvironmentCatalogParser() {
      super();
      this.environmentCatalogLocationXmlParser =
          new EnvironmentCatalogLocationXmlParser(
              CatalogLocationsXmlParser.this.messageLogger,
              CatalogLocationsXmlParser.this.filename);
    }

    private EnvironmentCatalogLocationXmlParser environmentCatalogLocationXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogLocationsImpl object) {
      EnvironmentCatalogLocationImpl environmentCatalog = new EnvironmentCatalogLocationImpl();
      // Setting the parent
      environmentCatalog.setParent(object);
      this.environmentCatalogLocationXmlParser.parseElement(
          indexedElement, parserContext, environmentCatalog);

      object.setEnvironmentCatalog(environmentCatalog);
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
      return elementName.equals(OscConstants.ELEMENT__ENVIRONMENT_CATALOG);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ENVIRONMENT_CATALOG};
    }
  }
  /** A parser for subelement maneuverCatalog */
  @SuppressWarnings("synthetic-access")
  private class SubElementManeuverCatalogParser implements IElementParser<CatalogLocationsImpl> {

    /** Constructor */
    public SubElementManeuverCatalogParser() {
      super();
      this.maneuverCatalogLocationXmlParser =
          new ManeuverCatalogLocationXmlParser(
              CatalogLocationsXmlParser.this.messageLogger,
              CatalogLocationsXmlParser.this.filename);
    }

    private ManeuverCatalogLocationXmlParser maneuverCatalogLocationXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogLocationsImpl object) {
      ManeuverCatalogLocationImpl maneuverCatalog = new ManeuverCatalogLocationImpl();
      // Setting the parent
      maneuverCatalog.setParent(object);
      this.maneuverCatalogLocationXmlParser.parseElement(
          indexedElement, parserContext, maneuverCatalog);

      object.setManeuverCatalog(maneuverCatalog);
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
      return elementName.equals(OscConstants.ELEMENT__MANEUVER_CATALOG);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__MANEUVER_CATALOG};
    }
  }
  /** A parser for subelement trajectoryCatalog */
  @SuppressWarnings("synthetic-access")
  private class SubElementTrajectoryCatalogParser implements IElementParser<CatalogLocationsImpl> {

    /** Constructor */
    public SubElementTrajectoryCatalogParser() {
      super();
      this.trajectoryCatalogLocationXmlParser =
          new TrajectoryCatalogLocationXmlParser(
              CatalogLocationsXmlParser.this.messageLogger,
              CatalogLocationsXmlParser.this.filename);
    }

    private TrajectoryCatalogLocationXmlParser trajectoryCatalogLocationXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogLocationsImpl object) {
      TrajectoryCatalogLocationImpl trajectoryCatalog = new TrajectoryCatalogLocationImpl();
      // Setting the parent
      trajectoryCatalog.setParent(object);
      this.trajectoryCatalogLocationXmlParser.parseElement(
          indexedElement, parserContext, trajectoryCatalog);

      object.setTrajectoryCatalog(trajectoryCatalog);
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
      return elementName.equals(OscConstants.ELEMENT__TRAJECTORY_CATALOG);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__TRAJECTORY_CATALOG};
    }
  }
  /** A parser for subelement routeCatalog */
  @SuppressWarnings("synthetic-access")
  private class SubElementRouteCatalogParser implements IElementParser<CatalogLocationsImpl> {

    /** Constructor */
    public SubElementRouteCatalogParser() {
      super();
      this.routeCatalogLocationXmlParser =
          new RouteCatalogLocationXmlParser(
              CatalogLocationsXmlParser.this.messageLogger,
              CatalogLocationsXmlParser.this.filename);
    }

    private RouteCatalogLocationXmlParser routeCatalogLocationXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogLocationsImpl object) {
      RouteCatalogLocationImpl routeCatalog = new RouteCatalogLocationImpl();
      // Setting the parent
      routeCatalog.setParent(object);
      this.routeCatalogLocationXmlParser.parseElement(indexedElement, parserContext, routeCatalog);

      object.setRouteCatalog(routeCatalog);
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
      return elementName.equals(OscConstants.ELEMENT__ROUTE_CATALOG);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ROUTE_CATALOG};
    }
  }
}
