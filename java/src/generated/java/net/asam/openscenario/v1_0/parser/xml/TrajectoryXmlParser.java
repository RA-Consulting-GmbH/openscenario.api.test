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
import net.asam.openscenario.parser.WrappedListParser;
import net.asam.openscenario.parser.modelgroup.XmlSequenceParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.api.IParameterDeclaration;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.ParameterDeclarationImpl;
import net.asam.openscenario.v1_0.impl.ShapeImpl;
import net.asam.openscenario.v1_0.impl.TrajectoryImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrajectoryImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class TrajectoryXmlParser extends XmlComplexTypeParser<TrajectoryImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public TrajectoryXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<TrajectoryImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<TrajectoryImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__NAME,
        new IAttributeParser<TrajectoryImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TrajectoryImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TrajectoryXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    TrajectoryXmlParser.this.filename);
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
        OscConstants.ATTRIBUTE__CLOSED,
        new IAttributeParser<TrajectoryImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TrajectoryImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TrajectoryXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    TrajectoryXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__CLOSED, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setClosed(parseBoolean(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__CLOSED, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__CLOSED, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<TrajectoryImpl> {
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
    protected List<IElementParser<TrajectoryImpl>> createParserList() {
      List<IElementParser<TrajectoryImpl>> result = new ArrayList<>();
      result.add(
          new WrappedListParser<>(
              this.messageLogger,
              TrajectoryXmlParser.this.filename,
              new SubElementParameterDeclarationsParser(),
              OscConstants.ELEMENT__PARAMETER_DECLARATIONS));
      result.add(new SubElementShapeParser());
      return result;
    }
  }
  /** A parser for subelement parameterDeclarations */
  @SuppressWarnings("synthetic-access")
  private class SubElementParameterDeclarationsParser implements IElementParser<TrajectoryImpl> {

    /** Constructor */
    public SubElementParameterDeclarationsParser() {
      super();
      this.parameterDeclarationXmlParser =
          new ParameterDeclarationXmlParser(
              TrajectoryXmlParser.this.messageLogger, TrajectoryXmlParser.this.filename);
    }

    private ParameterDeclarationXmlParser parameterDeclarationXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, TrajectoryImpl object) {
      ParameterDeclarationImpl parameterDeclarations = new ParameterDeclarationImpl();
      // Setting the parent
      parameterDeclarations.setParent(object);
      this.parameterDeclarationXmlParser.parseElement(
          indexedElement, parserContext, parameterDeclarations);
      List<IParameterDeclaration> parameterDeclarationsList = object.getParameterDeclarations();
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
  /** A parser for subelement shape */
  @SuppressWarnings("synthetic-access")
  private class SubElementShapeParser implements IElementParser<TrajectoryImpl> {

    /** Constructor */
    public SubElementShapeParser() {
      super();
      this.shapeXmlParser =
          new ShapeXmlParser(
              TrajectoryXmlParser.this.messageLogger, TrajectoryXmlParser.this.filename);
    }

    private ShapeXmlParser shapeXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, TrajectoryImpl object) {
      ShapeImpl shape = new ShapeImpl();
      // Setting the parent
      shape.setParent(object);
      this.shapeXmlParser.parseElement(indexedElement, parserContext, shape);

      object.setShape(shape);
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
      return elementName.equals(OscConstants.ELEMENT__SHAPE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__SHAPE};
    }
  }
}
