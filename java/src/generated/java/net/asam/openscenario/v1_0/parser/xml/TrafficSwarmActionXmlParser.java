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
import net.asam.openscenario.v1_0.impl.CentralSwarmObjectImpl;
import net.asam.openscenario.v1_0.impl.TrafficDefinitionImpl;
import net.asam.openscenario.v1_0.impl.TrafficSwarmActionImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSwarmActionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class TrafficSwarmActionXmlParser extends XmlComplexTypeParser<TrafficSwarmActionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public TrafficSwarmActionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<TrafficSwarmActionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<TrafficSwarmActionImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS,
        new IAttributeParser<TrafficSwarmActionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TrafficSwarmActionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TrafficSwarmActionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    TrafficSwarmActionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS,
                  stripDollarSign(attributeValue),
                  startMarker);
            } else {
              // Parse value
              // Simple type
              object.setSemiMajorAxis(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS,
        new IAttributeParser<TrafficSwarmActionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TrafficSwarmActionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TrafficSwarmActionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    TrafficSwarmActionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS,
                  stripDollarSign(attributeValue),
                  startMarker);
            } else {
              // Parse value
              // Simple type
              object.setSemiMinorAxis(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__INNER_RADIUS,
        new IAttributeParser<TrafficSwarmActionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TrafficSwarmActionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TrafficSwarmActionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    TrafficSwarmActionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__INNER_RADIUS,
                  stripDollarSign(attributeValue),
                  startMarker);
            } else {
              // Parse value
              // Simple type
              object.setInnerRadius(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__INNER_RADIUS, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__INNER_RADIUS, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__OFFSET,
        new IAttributeParser<TrafficSwarmActionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TrafficSwarmActionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TrafficSwarmActionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    TrafficSwarmActionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__OFFSET, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setOffset(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__OFFSET, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__OFFSET, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__NUMBER_OF_VEHICLES,
        new IAttributeParser<TrafficSwarmActionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TrafficSwarmActionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TrafficSwarmActionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    TrafficSwarmActionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__NUMBER_OF_VEHICLES,
                  stripDollarSign(attributeValue),
                  startMarker);
            } else {
              // Parse value
              // Simple type
              object.setNumberOfVehicles(parseUnsignedInt(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__NUMBER_OF_VEHICLES, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__NUMBER_OF_VEHICLES, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__VELOCITY,
        new IAttributeParser<TrafficSwarmActionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TrafficSwarmActionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TrafficSwarmActionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    TrafficSwarmActionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__VELOCITY, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setVelocity(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__VELOCITY, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__VELOCITY, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 0;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<TrafficSwarmActionImpl> {
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
    protected List<IElementParser<TrafficSwarmActionImpl>> createParserList() {
      List<IElementParser<TrafficSwarmActionImpl>> result = new ArrayList<>();
      result.add(new SubElementCentralObjectParser());
      result.add(new SubElementTrafficDefinitionParser());
      return result;
    }
  }
  /** A parser for subelement centralObject */
  @SuppressWarnings("synthetic-access")
  private class SubElementCentralObjectParser implements IElementParser<TrafficSwarmActionImpl> {

    /** Constructor */
    public SubElementCentralObjectParser() {
      super();
      this.centralSwarmObjectXmlParser =
          new CentralSwarmObjectXmlParser(
              TrafficSwarmActionXmlParser.this.messageLogger,
              TrafficSwarmActionXmlParser.this.filename);
    }

    private CentralSwarmObjectXmlParser centralSwarmObjectXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, TrafficSwarmActionImpl object) {
      CentralSwarmObjectImpl centralObject = new CentralSwarmObjectImpl();
      // Setting the parent
      centralObject.setParent(object);
      this.centralSwarmObjectXmlParser.parseElement(indexedElement, parserContext, centralObject);

      object.setCentralObject(centralObject);
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
      return elementName.equals(OscConstants.ELEMENT__CENTRAL_OBJECT);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__CENTRAL_OBJECT};
    }
  }
  /** A parser for subelement trafficDefinition */
  @SuppressWarnings("synthetic-access")
  private class SubElementTrafficDefinitionParser
      implements IElementParser<TrafficSwarmActionImpl> {

    /** Constructor */
    public SubElementTrafficDefinitionParser() {
      super();
      this.trafficDefinitionXmlParser =
          new TrafficDefinitionXmlParser(
              TrafficSwarmActionXmlParser.this.messageLogger,
              TrafficSwarmActionXmlParser.this.filename);
    }

    private TrafficDefinitionXmlParser trafficDefinitionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, TrafficSwarmActionImpl object) {
      TrafficDefinitionImpl trafficDefinition = new TrafficDefinitionImpl();
      // Setting the parent
      trafficDefinition.setParent(object);
      this.trafficDefinitionXmlParser.parseElement(
          indexedElement, parserContext, trafficDefinition);

      object.setTrafficDefinition(trafficDefinition);
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
      return elementName.equals(OscConstants.ELEMENT__TRAFFIC_DEFINITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__TRAFFIC_DEFINITION};
    }
  }
}
