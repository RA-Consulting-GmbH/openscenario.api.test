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
import java.util.List;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.parser.modelgroup.XmlChoiceParser;
import net.asam.openscenario.parser.type.XmlGroupParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.CatalogReferenceImpl;
import net.asam.openscenario.v1_0.impl.EntityObjectImpl;
import net.asam.openscenario.v1_0.impl.MiscObjectImpl;
import net.asam.openscenario.v1_0.impl.PedestrianImpl;
import net.asam.openscenario.v1_0.impl.VehicleImpl;
import net.asam.openscenario.v1_0.parser.CatalogReferenceParserContext;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EntityObjectImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class EntityObjectXmlParser extends XmlGroupParser<EntityObjectImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public EntityObjectXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlChoiceParser<EntityObjectImpl> {
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
    protected List<IElementParser<EntityObjectImpl>> createParserList() {
      List<IElementParser<EntityObjectImpl>> result = new ArrayList<>();
      result.add(new SubElementCatalogReferenceParser());
      result.add(new SubElementVehicleParser());
      result.add(new SubElementPedestrianParser());
      result.add(new SubElementMiscObjectParser());
      return result;
    }
  }
  /** A parser for subelement catalogReference */
  @SuppressWarnings("synthetic-access")
  private class SubElementCatalogReferenceParser implements IElementParser<EntityObjectImpl> {

    /** Constructor */
    public SubElementCatalogReferenceParser() {
      super();
      this.catalogReferenceXmlParser =
          new CatalogReferenceXmlParser(
              EntityObjectXmlParser.this.messageLogger, EntityObjectXmlParser.this.filename);
    }

    private CatalogReferenceXmlParser catalogReferenceXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityObjectImpl object) {
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
  /** A parser for subelement vehicle */
  @SuppressWarnings("synthetic-access")
  private class SubElementVehicleParser implements IElementParser<EntityObjectImpl> {

    /** Constructor */
    public SubElementVehicleParser() {
      super();
      this.vehicleXmlParser =
          new VehicleXmlParser(
              EntityObjectXmlParser.this.messageLogger, EntityObjectXmlParser.this.filename);
    }

    private VehicleXmlParser vehicleXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityObjectImpl object) {
      VehicleImpl vehicle = new VehicleImpl();
      // Setting the parent
      vehicle.setParent(object);
      this.vehicleXmlParser.parseElement(indexedElement, parserContext, vehicle);

      object.setVehicle(vehicle);
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
      return elementName.equals(OscConstants.ELEMENT__VEHICLE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__VEHICLE};
    }
  }
  /** A parser for subelement pedestrian */
  @SuppressWarnings("synthetic-access")
  private class SubElementPedestrianParser implements IElementParser<EntityObjectImpl> {

    /** Constructor */
    public SubElementPedestrianParser() {
      super();
      this.pedestrianXmlParser =
          new PedestrianXmlParser(
              EntityObjectXmlParser.this.messageLogger, EntityObjectXmlParser.this.filename);
    }

    private PedestrianXmlParser pedestrianXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityObjectImpl object) {
      PedestrianImpl pedestrian = new PedestrianImpl();
      // Setting the parent
      pedestrian.setParent(object);
      this.pedestrianXmlParser.parseElement(indexedElement, parserContext, pedestrian);

      object.setPedestrian(pedestrian);
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
      return elementName.equals(OscConstants.ELEMENT__PEDESTRIAN);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__PEDESTRIAN};
    }
  }
  /** A parser for subelement miscObject */
  @SuppressWarnings("synthetic-access")
  private class SubElementMiscObjectParser implements IElementParser<EntityObjectImpl> {

    /** Constructor */
    public SubElementMiscObjectParser() {
      super();
      this.miscObjectXmlParser =
          new MiscObjectXmlParser(
              EntityObjectXmlParser.this.messageLogger, EntityObjectXmlParser.this.filename);
    }

    private MiscObjectXmlParser miscObjectXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityObjectImpl object) {
      MiscObjectImpl miscObject = new MiscObjectImpl();
      // Setting the parent
      miscObject.setParent(object);
      this.miscObjectXmlParser.parseElement(indexedElement, parserContext, miscObject);

      object.setMiscObject(miscObject);
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
      return elementName.equals(OscConstants.ELEMENT__MISC_OBJECT);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__MISC_OBJECT};
    }
  }
}
