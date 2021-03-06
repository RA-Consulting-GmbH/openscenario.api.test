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
import net.asam.openscenario.impl.NamedReferenceProxy;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.parser.modelgroup.XmlAllParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.api.IEntity;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.OrientationImpl;
import net.asam.openscenario.v1_0.impl.RelativeLanePositionImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RelativeLanePositionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class RelativeLanePositionXmlParser extends XmlComplexTypeParser<RelativeLanePositionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public RelativeLanePositionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<RelativeLanePositionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<RelativeLanePositionImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__ENTITY_REF,
        new IAttributeParser<RelativeLanePositionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              RelativeLanePositionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    RelativeLanePositionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    RelativeLanePositionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__ENTITY_REF, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Proxy
              NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<>(attributeValue);
              proxy.setParent(object);
              object.setEntityRef(proxy);
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__ENTITY_REF, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__ENTITY_REF, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__D_LANE,
        new IAttributeParser<RelativeLanePositionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              RelativeLanePositionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    RelativeLanePositionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    RelativeLanePositionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__D_LANE, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setDLane(parseInt(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__D_LANE, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__D_LANE, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__DS,
        new IAttributeParser<RelativeLanePositionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              RelativeLanePositionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    RelativeLanePositionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    RelativeLanePositionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__DS, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setDs(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__DS, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__DS, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__OFFSET,
        new IAttributeParser<RelativeLanePositionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              RelativeLanePositionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    RelativeLanePositionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    RelativeLanePositionXmlParser.this.filename);
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
            return 0;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<RelativeLanePositionImpl> {
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
    protected List<IElementParser<RelativeLanePositionImpl>> createParserList() {
      List<IElementParser<RelativeLanePositionImpl>> result = new ArrayList<>();
      result.add(new SubElementOrientationParser());
      return result;
    }
  }
  /** A parser for subelement orientation */
  @SuppressWarnings("synthetic-access")
  private class SubElementOrientationParser implements IElementParser<RelativeLanePositionImpl> {

    /** Constructor */
    public SubElementOrientationParser() {
      super();
      this.orientationXmlParser =
          new OrientationXmlParser(
              RelativeLanePositionXmlParser.this.messageLogger,
              RelativeLanePositionXmlParser.this.filename);
    }

    private OrientationXmlParser orientationXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement,
        ParserContext parserContext,
        RelativeLanePositionImpl object) {
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
