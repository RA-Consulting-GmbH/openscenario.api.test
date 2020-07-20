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
import net.asam.openscenario.parser.modelgroup.XmlAllParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.api.CloudState;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.FogImpl;
import net.asam.openscenario.v1_0.impl.PrecipitationImpl;
import net.asam.openscenario.v1_0.impl.SunImpl;
import net.asam.openscenario.v1_0.impl.WeatherImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a WeatherImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class WeatherXmlParser extends XmlComplexTypeParser<WeatherImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public WeatherXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<WeatherImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<WeatherImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__CLOUD_STATE,
        new IAttributeParser<WeatherImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              WeatherImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    WeatherXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(), endPosition.getColumn(), WeatherXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__CLOUD_STATE,
                  stripDollarSign(attributeValue),
                  startMarker);
            } else {
              // Parse value
              // Enumeration Type
              CloudState result = CloudState.getFromLiteral(attributeValue);
              if (result != null) {
                object.setCloudState(result);
              } else {
                WeatherXmlParser.this.messageLogger.logMessage(
                    new FileContentMessage(
                        "Value '" + attributeValue + "' is not allowed.",
                        ErrorLevel.ERROR,
                        startMarker));
              }
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__CLOUD_STATE, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__CLOUD_STATE, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<WeatherImpl> {
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
    protected List<IElementParser<WeatherImpl>> createParserList() {
      List<IElementParser<WeatherImpl>> result = new ArrayList<>();
      result.add(new SubElementSunParser());
      result.add(new SubElementFogParser());
      result.add(new SubElementPrecipitationParser());
      return result;
    }
  }
  /** A parser for subelement sun */
  @SuppressWarnings("synthetic-access")
  private class SubElementSunParser implements IElementParser<WeatherImpl> {

    /** Constructor */
    public SubElementSunParser() {
      super();
      this.sunXmlParser =
          new SunXmlParser(WeatherXmlParser.this.messageLogger, WeatherXmlParser.this.filename);
    }

    private SunXmlParser sunXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, WeatherImpl object) {
      SunImpl sun = new SunImpl();
      // Setting the parent
      sun.setParent(object);
      this.sunXmlParser.parseElement(indexedElement, parserContext, sun);

      object.setSun(sun);
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
      return elementName.equals(OscConstants.ELEMENT__SUN);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__SUN};
    }
  }
  /** A parser for subelement fog */
  @SuppressWarnings("synthetic-access")
  private class SubElementFogParser implements IElementParser<WeatherImpl> {

    /** Constructor */
    public SubElementFogParser() {
      super();
      this.fogXmlParser =
          new FogXmlParser(WeatherXmlParser.this.messageLogger, WeatherXmlParser.this.filename);
    }

    private FogXmlParser fogXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, WeatherImpl object) {
      FogImpl fog = new FogImpl();
      // Setting the parent
      fog.setParent(object);
      this.fogXmlParser.parseElement(indexedElement, parserContext, fog);

      object.setFog(fog);
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
      return elementName.equals(OscConstants.ELEMENT__FOG);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__FOG};
    }
  }
  /** A parser for subelement precipitation */
  @SuppressWarnings("synthetic-access")
  private class SubElementPrecipitationParser implements IElementParser<WeatherImpl> {

    /** Constructor */
    public SubElementPrecipitationParser() {
      super();
      this.precipitationXmlParser =
          new PrecipitationXmlParser(
              WeatherXmlParser.this.messageLogger, WeatherXmlParser.this.filename);
    }

    private PrecipitationXmlParser precipitationXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, WeatherImpl object) {
      PrecipitationImpl precipitation = new PrecipitationImpl();
      // Setting the parent
      precipitation.setParent(object);
      this.precipitationXmlParser.parseElement(indexedElement, parserContext, precipitation);

      object.setPrecipitation(precipitation);
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
      return elementName.equals(OscConstants.ELEMENT__PRECIPITATION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__PRECIPITATION};
    }
  }
}
