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
import net.asam.openscenario.parser.modelgroup.XmlAllParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.api.writer.IParameterDeclarationWriter;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.EnvironmentImpl;
import net.asam.openscenario.v1_0.impl.ParameterDeclarationImpl;
import net.asam.openscenario.v1_0.impl.RoadConditionImpl;
import net.asam.openscenario.v1_0.impl.TimeOfDayImpl;
import net.asam.openscenario.v1_0.impl.WeatherImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EnvironmentImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class EnvironmentXmlParser extends XmlComplexTypeParser<EnvironmentImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public EnvironmentXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<EnvironmentImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<EnvironmentImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__NAME,
        new IAttributeParser<EnvironmentImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              EnvironmentImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    EnvironmentXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    EnvironmentXmlParser.this.filename);
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
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<EnvironmentImpl> {
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
    protected List<IElementParser<EnvironmentImpl>> createParserList() {
      List<IElementParser<EnvironmentImpl>> result = new ArrayList<>();
      result.add(
          new WrappedListParser<>(
              this.messageLogger,
              EnvironmentXmlParser.this.filename,
              new SubElementParameterDeclarationsParser(),
              OscConstants.ELEMENT__PARAMETER_DECLARATIONS));
      result.add(new SubElementTimeOfDayParser());
      result.add(new SubElementWeatherParser());
      result.add(new SubElementRoadConditionParser());
      return result;
    }
  }
  /** A parser for subelement parameterDeclarations */
  @SuppressWarnings("synthetic-access")
  private class SubElementParameterDeclarationsParser implements IElementParser<EnvironmentImpl> {

    /** Constructor */
    public SubElementParameterDeclarationsParser() {
      super();
      this.parameterDeclarationXmlParser =
          new ParameterDeclarationXmlParser(
              EnvironmentXmlParser.this.messageLogger, EnvironmentXmlParser.this.filename);
    }

    private ParameterDeclarationXmlParser parameterDeclarationXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EnvironmentImpl object) {
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
  /** A parser for subelement timeOfDay */
  @SuppressWarnings("synthetic-access")
  private class SubElementTimeOfDayParser implements IElementParser<EnvironmentImpl> {

    /** Constructor */
    public SubElementTimeOfDayParser() {
      super();
      this.timeOfDayXmlParser =
          new TimeOfDayXmlParser(
              EnvironmentXmlParser.this.messageLogger, EnvironmentXmlParser.this.filename);
    }

    private TimeOfDayXmlParser timeOfDayXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EnvironmentImpl object) {
      TimeOfDayImpl timeOfDay = new TimeOfDayImpl();
      // Setting the parent
      timeOfDay.setParent(object);
      this.timeOfDayXmlParser.parseElement(indexedElement, parserContext, timeOfDay);

      object.setTimeOfDay(timeOfDay);
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
      return elementName.equals(OscConstants.ELEMENT__TIME_OF_DAY);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__TIME_OF_DAY};
    }
  }
  /** A parser for subelement weather */
  @SuppressWarnings("synthetic-access")
  private class SubElementWeatherParser implements IElementParser<EnvironmentImpl> {

    /** Constructor */
    public SubElementWeatherParser() {
      super();
      this.weatherXmlParser =
          new WeatherXmlParser(
              EnvironmentXmlParser.this.messageLogger, EnvironmentXmlParser.this.filename);
    }

    private WeatherXmlParser weatherXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EnvironmentImpl object) {
      WeatherImpl weather = new WeatherImpl();
      // Setting the parent
      weather.setParent(object);
      this.weatherXmlParser.parseElement(indexedElement, parserContext, weather);

      object.setWeather(weather);
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
      return elementName.equals(OscConstants.ELEMENT__WEATHER);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__WEATHER};
    }
  }
  /** A parser for subelement roadCondition */
  @SuppressWarnings("synthetic-access")
  private class SubElementRoadConditionParser implements IElementParser<EnvironmentImpl> {

    /** Constructor */
    public SubElementRoadConditionParser() {
      super();
      this.roadConditionXmlParser =
          new RoadConditionXmlParser(
              EnvironmentXmlParser.this.messageLogger, EnvironmentXmlParser.this.filename);
    }

    private RoadConditionXmlParser roadConditionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EnvironmentImpl object) {
      RoadConditionImpl roadCondition = new RoadConditionImpl();
      // Setting the parent
      roadCondition.setParent(object);
      this.roadConditionXmlParser.parseElement(indexedElement, parserContext, roadCondition);

      object.setRoadCondition(roadCondition);
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
      return elementName.equals(OscConstants.ELEMENT__ROAD_CONDITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ROAD_CONDITION};
    }
  }
}
