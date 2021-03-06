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
import net.asam.openscenario.v1_0.impl.ControllerDistributionImpl;
import net.asam.openscenario.v1_0.impl.TrafficDefinitionImpl;
import net.asam.openscenario.v1_0.impl.VehicleCategoryDistributionImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficDefinitionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class TrafficDefinitionXmlParser extends XmlComplexTypeParser<TrafficDefinitionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public TrafficDefinitionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<TrafficDefinitionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<TrafficDefinitionImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__NAME,
        new IAttributeParser<TrafficDefinitionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TrafficDefinitionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TrafficDefinitionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    TrafficDefinitionXmlParser.this.filename);
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
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<TrafficDefinitionImpl> {
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
    protected List<IElementParser<TrafficDefinitionImpl>> createParserList() {
      List<IElementParser<TrafficDefinitionImpl>> result = new ArrayList<>();
      result.add(new SubElementVehicleCategoryDistributionParser());
      result.add(new SubElementControllerDistributionParser());
      return result;
    }
  }
  /** A parser for subelement vehicleCategoryDistribution */
  @SuppressWarnings("synthetic-access")
  private class SubElementVehicleCategoryDistributionParser
      implements IElementParser<TrafficDefinitionImpl> {

    /** Constructor */
    public SubElementVehicleCategoryDistributionParser() {
      super();
      this.vehicleCategoryDistributionXmlParser =
          new VehicleCategoryDistributionXmlParser(
              TrafficDefinitionXmlParser.this.messageLogger,
              TrafficDefinitionXmlParser.this.filename);
    }

    private VehicleCategoryDistributionXmlParser vehicleCategoryDistributionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, TrafficDefinitionImpl object) {
      VehicleCategoryDistributionImpl vehicleCategoryDistribution =
          new VehicleCategoryDistributionImpl();
      // Setting the parent
      vehicleCategoryDistribution.setParent(object);
      this.vehicleCategoryDistributionXmlParser.parseElement(
          indexedElement, parserContext, vehicleCategoryDistribution);

      object.setVehicleCategoryDistribution(vehicleCategoryDistribution);
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
      return elementName.equals(OscConstants.ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__VEHICLE_CATEGORY_DISTRIBUTION};
    }
  }
  /** A parser for subelement controllerDistribution */
  @SuppressWarnings("synthetic-access")
  private class SubElementControllerDistributionParser
      implements IElementParser<TrafficDefinitionImpl> {

    /** Constructor */
    public SubElementControllerDistributionParser() {
      super();
      this.controllerDistributionXmlParser =
          new ControllerDistributionXmlParser(
              TrafficDefinitionXmlParser.this.messageLogger,
              TrafficDefinitionXmlParser.this.filename);
    }

    private ControllerDistributionXmlParser controllerDistributionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, TrafficDefinitionImpl object) {
      ControllerDistributionImpl controllerDistribution = new ControllerDistributionImpl();
      // Setting the parent
      controllerDistribution.setParent(object);
      this.controllerDistributionXmlParser.parseElement(
          indexedElement, parserContext, controllerDistribution);

      object.setControllerDistribution(controllerDistribution);
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
      return elementName.equals(OscConstants.ELEMENT__CONTROLLER_DISTRIBUTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__CONTROLLER_DISTRIBUTION};
    }
  }
}
