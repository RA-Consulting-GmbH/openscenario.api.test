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
import net.asam.openscenario.v1_0.api.VehicleCategory;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.VehicleCategoryDistributionEntryImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a VehicleCategoryDistributionEntryImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class VehicleCategoryDistributionEntryXmlParser
    extends XmlComplexTypeParser<VehicleCategoryDistributionEntryImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public VehicleCategoryDistributionEntryXmlParser(
      IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<VehicleCategoryDistributionEntryImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<VehicleCategoryDistributionEntryImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__CATEGORY,
        new IAttributeParser<VehicleCategoryDistributionEntryImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              VehicleCategoryDistributionEntryImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    VehicleCategoryDistributionEntryXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    VehicleCategoryDistributionEntryXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__CATEGORY, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Enumeration Type
              VehicleCategory result = VehicleCategory.getFromLiteral(attributeValue);
              if (result != null) {
                object.setCategory(result);
              } else {
                VehicleCategoryDistributionEntryXmlParser.this.messageLogger.logMessage(
                    new FileContentMessage(
                        "Value '" + attributeValue + "' is not allowed.",
                        ErrorLevel.ERROR,
                        startMarker));
              }
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__CATEGORY, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__CATEGORY, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__WEIGHT,
        new IAttributeParser<VehicleCategoryDistributionEntryImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              VehicleCategoryDistributionEntryImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    VehicleCategoryDistributionEntryXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    VehicleCategoryDistributionEntryXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__WEIGHT, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setWeight(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__WEIGHT, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__WEIGHT, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<VehicleCategoryDistributionEntryImpl> {
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
    protected List<IElementParser<VehicleCategoryDistributionEntryImpl>> createParserList() {
      List<IElementParser<VehicleCategoryDistributionEntryImpl>> result = new ArrayList<>();
      return result;
    }
  }
}
