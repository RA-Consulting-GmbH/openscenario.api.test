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
import net.asam.openscenario.impl.NamedReferenceProxy;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.parser.modelgroup.XmlAllParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.api.IEntity;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.DynamicConstraintsImpl;
import net.asam.openscenario.v1_0.impl.LongitudinalDistanceActionImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LongitudinalDistanceActionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class LongitudinalDistanceActionXmlParser
    extends XmlComplexTypeParser<LongitudinalDistanceActionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public LongitudinalDistanceActionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  public void parseElement(
      IndexedElement indexedElement,
      ParserContext parserContext,
      LongitudinalDistanceActionImpl object) {
    messageLogger.logMessage(
        new FileContentMessage(
            "Start Parsing LongitudinalDistanceAction",
            ErrorLevel.DEBUG,
            new Textmarker(
                indexedElement.getStartElementLocation().getLine(),
                indexedElement.getStartElementLocation().getColumn(),
                filename)));
    super.parseElement(indexedElement, parserContext, object);
    messageLogger.logMessage(
        new FileContentMessage(
            "End Parsing LongitudinalDistanceAction",
            ErrorLevel.DEBUG,
            new Textmarker(
                indexedElement.getEndElementLocation().getLine(),
                indexedElement.getEndElementLocation().getColumn(),
                filename)));
  }

  @Override
  protected Map<String, IAttributeParser<LongitudinalDistanceActionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<LongitudinalDistanceActionImpl>> result =
        new Hashtable<String, IAttributeParser<LongitudinalDistanceActionImpl>>();
    result.put(
        OscConstants.ATTRIBUTE__ENTITY_REF,
        new IAttributeParser<LongitudinalDistanceActionImpl>() {
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              LongitudinalDistanceActionImpl object) {

            Textmarker startMarker =
                new Textmarker(startPosition.getLine(), startPosition.getColumn(), filename);
            Textmarker endMarker =
                new Textmarker(endPosition.getLine(), endPosition.getColumn(), filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__ENTITY_REF, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Proxy
              NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<IEntity>(attributeValue);
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
        OscConstants.ATTRIBUTE__DISTANCE,
        new IAttributeParser<LongitudinalDistanceActionImpl>() {
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              LongitudinalDistanceActionImpl object) {

            Textmarker startMarker =
                new Textmarker(startPosition.getLine(), startPosition.getColumn(), filename);
            Textmarker endMarker =
                new Textmarker(endPosition.getLine(), endPosition.getColumn(), filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__DISTANCE, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setDistance(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__DISTANCE, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__DISTANCE, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 0;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__TIME_GAP,
        new IAttributeParser<LongitudinalDistanceActionImpl>() {
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              LongitudinalDistanceActionImpl object) {

            Textmarker startMarker =
                new Textmarker(startPosition.getLine(), startPosition.getColumn(), filename);
            Textmarker endMarker =
                new Textmarker(endPosition.getLine(), endPosition.getColumn(), filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__TIME_GAP, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setTimeGap(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__TIME_GAP, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__TIME_GAP, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 0;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__FREESPACE,
        new IAttributeParser<LongitudinalDistanceActionImpl>() {
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              LongitudinalDistanceActionImpl object) {

            Textmarker startMarker =
                new Textmarker(startPosition.getLine(), startPosition.getColumn(), filename);
            Textmarker endMarker =
                new Textmarker(endPosition.getLine(), endPosition.getColumn(), filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__FREESPACE, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setFreespace(parseBoolean(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__FREESPACE, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__FREESPACE, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__CONTINUOUS,
        new IAttributeParser<LongitudinalDistanceActionImpl>() {
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              LongitudinalDistanceActionImpl object) {

            Textmarker startMarker =
                new Textmarker(startPosition.getLine(), startPosition.getColumn(), filename);
            Textmarker endMarker =
                new Textmarker(endPosition.getLine(), endPosition.getColumn(), filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__CONTINUOUS, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setContinuous(parseBoolean(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__CONTINUOUS, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__CONTINUOUS, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<LongitudinalDistanceActionImpl> {
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
    protected List<IElementParser<LongitudinalDistanceActionImpl>> createParserList() {
      List<IElementParser<LongitudinalDistanceActionImpl>> result =
          new ArrayList<IElementParser<LongitudinalDistanceActionImpl>>();
      result.add(new SubElementDynamicConstraintsParser());
      return result;
    }
  }
  /** A parser for subelement dynamicConstraints */
  private class SubElementDynamicConstraintsParser
      implements IElementParser<LongitudinalDistanceActionImpl> {

    /** Constructor */
    public SubElementDynamicConstraintsParser() {
      super();
      dynamicConstraintsXmlParser = new DynamicConstraintsXmlParser(messageLogger, filename);
    }

    private DynamicConstraintsXmlParser dynamicConstraintsXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement,
        ParserContext parserContext,
        LongitudinalDistanceActionImpl object) {
      DynamicConstraintsImpl dynamicConstraints = new DynamicConstraintsImpl();
      // Setting the parent
      dynamicConstraints.setParent(object);
      dynamicConstraintsXmlParser.parseElement(indexedElement, parserContext, dynamicConstraints);

      object.setDynamicConstraints(dynamicConstraints);
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
      return elementName.equals(OscConstants.ELEMENT__DYNAMIC_CONSTRAINTS);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__DYNAMIC_CONSTRAINTS};
    }
  }
}
