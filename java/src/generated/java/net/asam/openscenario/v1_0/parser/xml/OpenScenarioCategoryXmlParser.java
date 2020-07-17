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
import java.util.List;
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.parser.modelgroup.XmlChoiceParser;
import net.asam.openscenario.parser.type.XmlGroupParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.CatalogDefinitionImpl;
import net.asam.openscenario.v1_0.impl.OpenScenarioCategoryImpl;
import net.asam.openscenario.v1_0.impl.ScenarioDefinitionImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a OpenScenarioCategoryImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class OpenScenarioCategoryXmlParser extends XmlGroupParser<OpenScenarioCategoryImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public OpenScenarioCategoryXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  public void parseElement(
      IndexedElement indexedElement, ParserContext parserContext, OpenScenarioCategoryImpl object) {
    messageLogger.logMessage(
        new FileContentMessage(
            "Start Parsing OpenScenarioCategory",
            ErrorLevel.DEBUG,
            new Textmarker(
                indexedElement.getStartElementLocation().getLine(),
                indexedElement.getStartElementLocation().getColumn(),
                filename)));
    super.parseElement(indexedElement, parserContext, object);
    messageLogger.logMessage(
        new FileContentMessage(
            "End Parsing OpenScenarioCategory",
            ErrorLevel.DEBUG,
            new Textmarker(
                indexedElement.getEndElementLocation().getLine(),
                indexedElement.getEndElementLocation().getColumn(),
                filename)));
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlChoiceParser<OpenScenarioCategoryImpl> {
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
    protected List<IElementParser<OpenScenarioCategoryImpl>> createParserList() {
      List<IElementParser<OpenScenarioCategoryImpl>> result =
          new ArrayList<IElementParser<OpenScenarioCategoryImpl>>();
      result.add(new SubElementScenarioDefinitionParser());
      result.add(new SubElementCatalogDefinitionParser());
      return result;
    }
  }
  /** A parser for subelement scenarioDefinition */
  private class SubElementScenarioDefinitionParser
      implements IElementParser<OpenScenarioCategoryImpl> {

    /** Constructor */
    public SubElementScenarioDefinitionParser() {
      super();
      scenarioDefinitionXmlParser = new ScenarioDefinitionXmlParser(messageLogger, filename);
    }

    private ScenarioDefinitionXmlParser scenarioDefinitionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement,
        ParserContext parserContext,
        OpenScenarioCategoryImpl object) {
      ScenarioDefinitionImpl scenarioDefinition = new ScenarioDefinitionImpl();
      // Setting the parent
      scenarioDefinition.setParent(object);
      scenarioDefinitionXmlParser.parseElement(indexedElement, parserContext, scenarioDefinition);

      object.setScenarioDefinition(scenarioDefinition);
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
      return elementName.equals(OscConstants.ELEMENT__PARAMETER_DECLARATIONS)
          || elementName.equals(OscConstants.ELEMENT__CATALOG_LOCATIONS);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {
        OscConstants.ELEMENT__PARAMETER_DECLARATIONS, OscConstants.ELEMENT__CATALOG_LOCATIONS
      };
    }
  }
  /** A parser for subelement catalogDefinition */
  private class SubElementCatalogDefinitionParser
      implements IElementParser<OpenScenarioCategoryImpl> {

    /** Constructor */
    public SubElementCatalogDefinitionParser() {
      super();
      catalogDefinitionXmlParser = new CatalogDefinitionXmlParser(messageLogger, filename);
    }

    private CatalogDefinitionXmlParser catalogDefinitionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement,
        ParserContext parserContext,
        OpenScenarioCategoryImpl object) {
      CatalogDefinitionImpl catalogDefinition = new CatalogDefinitionImpl();
      // Setting the parent
      catalogDefinition.setParent(object);
      catalogDefinitionXmlParser.parseElement(indexedElement, parserContext, catalogDefinition);

      object.setCatalogDefinition(catalogDefinition);
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
      return elementName.equals(OscConstants.ELEMENT__CATALOG);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__CATALOG};
    }
  }
}
