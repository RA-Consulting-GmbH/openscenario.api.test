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
import net.asam.openscenario.v1_0.impl.OrientationImpl;
import net.asam.openscenario.v1_0.impl.RoadPositionImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoadPositionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class RoadPositionXmlParser extends XmlComplexTypeParser<RoadPositionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public RoadPositionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<RoadPositionImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<RoadPositionImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__ROAD_ID,
        new IAttributeParser<RoadPositionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              RoadPositionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    RoadPositionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    RoadPositionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__ROAD_ID, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setRoadId(parseString(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__ROAD_ID, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__ROAD_ID, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__S,
        new IAttributeParser<RoadPositionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              RoadPositionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    RoadPositionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    RoadPositionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__S, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setS(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__S, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__S, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__T,
        new IAttributeParser<RoadPositionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              RoadPositionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    RoadPositionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    RoadPositionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__T, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setT(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__T, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__T, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<RoadPositionImpl> {
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
    protected List<IElementParser<RoadPositionImpl>> createParserList() {
      List<IElementParser<RoadPositionImpl>> result = new ArrayList<>();
      result.add(new SubElementOrientationParser());
      return result;
    }
  }
  /** A parser for subelement orientation */
  @SuppressWarnings("synthetic-access")
  private class SubElementOrientationParser implements IElementParser<RoadPositionImpl> {

    /** Constructor */
    public SubElementOrientationParser() {
      super();
      this.orientationXmlParser =
          new OrientationXmlParser(
              RoadPositionXmlParser.this.messageLogger, RoadPositionXmlParser.this.filename);
    }

    private OrientationXmlParser orientationXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, RoadPositionImpl object) {
      OrientationImpl orientation = new OrientationImpl();
      // Setting the parent
      orientation.setParent(object);
      this.orientationXmlParser.parseElement(indexedElement, parserContext, orientation);

      object.setOrientation(orientation);
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
      return elementName.equals(OscConstants.ELEMENT__ORIENTATION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ORIENTATION};
    }
  }
}
