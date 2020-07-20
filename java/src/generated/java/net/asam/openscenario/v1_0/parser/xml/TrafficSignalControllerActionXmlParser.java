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
import net.asam.openscenario.parser.modelgroup.XmlSequenceParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.v1_0.api.ITrafficSignalController;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.TrafficSignalControllerActionImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TrafficSignalControllerActionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class TrafficSignalControllerActionXmlParser
    extends XmlComplexTypeParser<TrafficSignalControllerActionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public TrafficSignalControllerActionXmlParser(
      IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<TrafficSignalControllerActionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<TrafficSignalControllerActionImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF,
        new IAttributeParser<TrafficSignalControllerActionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TrafficSignalControllerActionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TrafficSignalControllerActionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    TrafficSignalControllerActionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF,
                  stripDollarSign(attributeValue),
                  startMarker);
            } else {
              // Parse value
              // Proxy
              NamedReferenceProxy<ITrafficSignalController> proxy =
                  new NamedReferenceProxy<>(attributeValue);
              proxy.setParent(object);
              object.setTrafficSignalControllerRef(proxy);
            }
            object.putPropertyStartMarker(
                OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, startMarker);
            object.putPropertyEndMarker(
                OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__PHASE,
        new IAttributeParser<TrafficSignalControllerActionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TrafficSignalControllerActionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TrafficSignalControllerActionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    TrafficSignalControllerActionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__PHASE, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setPhase(parseString(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__PHASE, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__PHASE, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<TrafficSignalControllerActionImpl> {
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
    protected List<IElementParser<TrafficSignalControllerActionImpl>> createParserList() {
      List<IElementParser<TrafficSignalControllerActionImpl>> result = new ArrayList<>();
      return result;
    }
  }
}
