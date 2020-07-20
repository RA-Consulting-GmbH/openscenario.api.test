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
import net.asam.openscenario.parser.modelgroup.XmlSequenceParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.v1_0.api.ReferenceContext;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.TimingImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TimingImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class TimingXmlParser extends XmlComplexTypeParser<TimingImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public TimingXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<TimingImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<TimingImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE,
        new IAttributeParser<TimingImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TimingImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TimingXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(), endPosition.getColumn(), TimingXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE,
                  stripDollarSign(attributeValue),
                  startMarker);
            } else {
              // Parse value
              // Enumeration Type
              ReferenceContext result = ReferenceContext.getFromLiteral(attributeValue);
              if (result != null) {
                object.setDomainAbsoluteRelative(result);
              } else {
                TimingXmlParser.this.messageLogger.logMessage(
                    new FileContentMessage(
                        "Value '" + attributeValue + "' is not allowed.",
                        ErrorLevel.ERROR,
                        startMarker));
              }
            }
            object.putPropertyStartMarker(
                OscConstants.ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE, startMarker);
            object.putPropertyEndMarker(
                OscConstants.ATTRIBUTE__DOMAIN_ABSOLUTE_RELATIVE, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__SCALE,
        new IAttributeParser<TimingImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TimingImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TimingXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(), endPosition.getColumn(), TimingXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__SCALE, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setScale(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__SCALE, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__SCALE, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__OFFSET,
        new IAttributeParser<TimingImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TimingImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TimingXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(), endPosition.getColumn(), TimingXmlParser.this.filename);
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
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<TimingImpl> {
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
    protected List<IElementParser<TimingImpl>> createParserList() {
      List<IElementParser<TimingImpl>> result = new ArrayList<>();
      return result;
    }
  }
}
