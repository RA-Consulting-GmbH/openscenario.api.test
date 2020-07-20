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
import net.asam.openscenario.v1_0.impl.BoundingBoxImpl;
import net.asam.openscenario.v1_0.impl.FogImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a FogImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class FogXmlParser extends XmlComplexTypeParser<FogImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public FogXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<FogImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<FogImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__VISUAL_RANGE,
        new IAttributeParser<FogImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              FogImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(), startPosition.getColumn(), FogXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(), endPosition.getColumn(), FogXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__VISUAL_RANGE,
                  stripDollarSign(attributeValue),
                  startMarker);
            } else {
              // Parse value
              // Simple type
              object.setVisualRange(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__VISUAL_RANGE, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__VISUAL_RANGE, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<FogImpl> {
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
    protected List<IElementParser<FogImpl>> createParserList() {
      List<IElementParser<FogImpl>> result = new ArrayList<>();
      result.add(new SubElementBoundingBoxParser());
      return result;
    }
  }
  /** A parser for subelement boundingBox */
  @SuppressWarnings("synthetic-access")
  private class SubElementBoundingBoxParser implements IElementParser<FogImpl> {

    /** Constructor */
    public SubElementBoundingBoxParser() {
      super();
      this.boundingBoxXmlParser =
          new BoundingBoxXmlParser(FogXmlParser.this.messageLogger, FogXmlParser.this.filename);
    }

    private BoundingBoxXmlParser boundingBoxXmlParser;

    @Override
    public void parse(IndexedElement indexedElement, ParserContext parserContext, FogImpl object) {
      BoundingBoxImpl boundingBox = new BoundingBoxImpl();
      // Setting the parent
      boundingBox.setParent(object);
      this.boundingBoxXmlParser.parseElement(indexedElement, parserContext, boundingBox);

      object.setBoundingBox(boundingBox);
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
      return elementName.equals(OscConstants.ELEMENT__BOUNDING_BOX);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__BOUNDING_BOX};
    }
  }
}
