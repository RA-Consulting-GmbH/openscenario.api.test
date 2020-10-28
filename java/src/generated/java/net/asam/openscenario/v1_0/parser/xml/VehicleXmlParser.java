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
import net.asam.openscenario.parser.WrappedListParser;
import net.asam.openscenario.parser.modelgroup.XmlAllParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.api.VehicleCategory;
import net.asam.openscenario.v1_0.api.writer.IParameterDeclarationWriter;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.AxlesImpl;
import net.asam.openscenario.v1_0.impl.BoundingBoxImpl;
import net.asam.openscenario.v1_0.impl.ParameterDeclarationImpl;
import net.asam.openscenario.v1_0.impl.PerformanceImpl;
import net.asam.openscenario.v1_0.impl.PropertiesImpl;
import net.asam.openscenario.v1_0.impl.VehicleImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VehicleImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class VehicleXmlParser extends XmlComplexTypeParser<VehicleImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public VehicleXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<VehicleImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<VehicleImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__NAME,
        new IAttributeParser<VehicleImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              VehicleImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    VehicleXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(), endPosition.getColumn(), VehicleXmlParser.this.filename);
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
    result.put(
        OscConstants.ATTRIBUTE__VEHICLE_CATEGORY,
        new IAttributeParser<VehicleImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              VehicleImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    VehicleXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(), endPosition.getColumn(), VehicleXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__VEHICLE_CATEGORY,
                  stripDollarSign(attributeValue),
                  startMarker);
            } else {
              // Parse value
              // Enumeration Type
              VehicleCategory result = VehicleCategory.getFromLiteral(attributeValue);
              if (result != null) {
                object.setVehicleCategory(result);
              } else {
                VehicleXmlParser.this.messageLogger.logMessage(
                    new FileContentMessage(
                        "Value '" + attributeValue + "' is not allowed.",
                        ErrorLevel.ERROR,
                        startMarker));
              }
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__VEHICLE_CATEGORY, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__VEHICLE_CATEGORY, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<VehicleImpl> {
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
    protected List<IElementParser<VehicleImpl>> createParserList() {
      List<IElementParser<VehicleImpl>> result = new ArrayList<>();
      result.add(
          new WrappedListParser<>(
              this.messageLogger,
              VehicleXmlParser.this.filename,
              new SubElementParameterDeclarationsParser(),
              OscConstants.ELEMENT__PARAMETER_DECLARATIONS));
      result.add(new SubElementBoundingBoxParser());
      result.add(new SubElementPerformanceParser());
      result.add(new SubElementAxlesParser());
      result.add(new SubElementPropertiesParser());
      return result;
    }
  }
  /** A parser for subelement parameterDeclarations */
  @SuppressWarnings("synthetic-access")
  private class SubElementParameterDeclarationsParser implements IElementParser<VehicleImpl> {

    /** Constructor */
    public SubElementParameterDeclarationsParser() {
      super();
      this.parameterDeclarationXmlParser =
          new ParameterDeclarationXmlParser(
              VehicleXmlParser.this.messageLogger, VehicleXmlParser.this.filename);
    }

    private ParameterDeclarationXmlParser parameterDeclarationXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, VehicleImpl object) {
      ParameterDeclarationImpl parameterDeclarations = new ParameterDeclarationImpl();
      // Setting the parent
      parameterDeclarations.setParent(object);
      this.parameterDeclarationXmlParser.parseElement(
          indexedElement, parserContext, parameterDeclarations);
      List<IParameterDeclarationWriter> parameterDeclarationsList =
          object.getWriterParameterDeclarations();
      if (parameterDeclarationsList == null) {
        parameterDeclarationsList = new ArrayList<>();
        object.setParameterDeclarations(parameterDeclarationsList);
      }
      parameterDeclarationsList.add(parameterDeclarations);
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
      return elementName.equals(OscConstants.ELEMENT__PARAMETER_DECLARATION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__PARAMETER_DECLARATION};
    }
  }
  /** A parser for subelement boundingBox */
  @SuppressWarnings("synthetic-access")
  private class SubElementBoundingBoxParser implements IElementParser<VehicleImpl> {

    /** Constructor */
    public SubElementBoundingBoxParser() {
      super();
      this.boundingBoxXmlParser =
          new BoundingBoxXmlParser(
              VehicleXmlParser.this.messageLogger, VehicleXmlParser.this.filename);
    }

    private BoundingBoxXmlParser boundingBoxXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, VehicleImpl object) {
      BoundingBoxImpl boundingBox = new BoundingBoxImpl();
      // Setting the parent
      boundingBox.setParent(object);
      this.boundingBoxXmlParser.parseElement(indexedElement, parserContext, boundingBox);

      object.setBoundingBox(boundingBox);
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
      return elementName.equals(OscConstants.ELEMENT__BOUNDING_BOX);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__BOUNDING_BOX};
    }
  }
  /** A parser for subelement performance */
  @SuppressWarnings("synthetic-access")
  private class SubElementPerformanceParser implements IElementParser<VehicleImpl> {

    /** Constructor */
    public SubElementPerformanceParser() {
      super();
      this.performanceXmlParser =
          new PerformanceXmlParser(
              VehicleXmlParser.this.messageLogger, VehicleXmlParser.this.filename);
    }

    private PerformanceXmlParser performanceXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, VehicleImpl object) {
      PerformanceImpl performance = new PerformanceImpl();
      // Setting the parent
      performance.setParent(object);
      this.performanceXmlParser.parseElement(indexedElement, parserContext, performance);

      object.setPerformance(performance);
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
      return elementName.equals(OscConstants.ELEMENT__PERFORMANCE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__PERFORMANCE};
    }
  }
  /** A parser for subelement axles */
  @SuppressWarnings("synthetic-access")
  private class SubElementAxlesParser implements IElementParser<VehicleImpl> {

    /** Constructor */
    public SubElementAxlesParser() {
      super();
      this.axlesXmlParser =
          new AxlesXmlParser(VehicleXmlParser.this.messageLogger, VehicleXmlParser.this.filename);
    }

    private AxlesXmlParser axlesXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, VehicleImpl object) {
      AxlesImpl axles = new AxlesImpl();
      // Setting the parent
      axles.setParent(object);
      this.axlesXmlParser.parseElement(indexedElement, parserContext, axles);

      object.setAxles(axles);
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
      return elementName.equals(OscConstants.ELEMENT__AXLES);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__AXLES};
    }
  }
  /** A parser for subelement properties */
  @SuppressWarnings("synthetic-access")
  private class SubElementPropertiesParser implements IElementParser<VehicleImpl> {

    /** Constructor */
    public SubElementPropertiesParser() {
      super();
      this.propertiesXmlParser =
          new PropertiesXmlParser(
              VehicleXmlParser.this.messageLogger, VehicleXmlParser.this.filename);
    }

    private PropertiesXmlParser propertiesXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, VehicleImpl object) {
      PropertiesImpl properties = new PropertiesImpl();
      // Setting the parent
      properties.setParent(object);
      this.propertiesXmlParser.parseElement(indexedElement, parserContext, properties);

      object.setProperties(properties);
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
      return elementName.equals(OscConstants.ELEMENT__PROPERTIES);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__PROPERTIES};
    }
  }
}
