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
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.parser.modelgroup.XmlSequenceParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.FileHeaderImpl;
import net.asam.openscenario.v1_0.impl.OpenScenarioCategoryImpl;
import net.asam.openscenario.v1_0.impl.OpenScenarioImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a OpenScenarioImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class OpenScenarioXmlParser extends XmlComplexTypeParser<OpenScenarioImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public OpenScenarioXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<OpenScenarioImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<OpenScenarioImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<OpenScenarioImpl> {
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
    protected List<IElementParser<OpenScenarioImpl>> createParserList() {
      List<IElementParser<OpenScenarioImpl>> result = new ArrayList<>();
      result.add(new SubElementFileHeaderParser());
      result.add(new SubElementOpenScenarioCategoryParser());
      return result;
    }
  }
  /** A parser for subelement fileHeader */
  @SuppressWarnings("synthetic-access")
  private class SubElementFileHeaderParser implements IElementParser<OpenScenarioImpl> {

    /** Constructor */
    public SubElementFileHeaderParser() {
      super();
      this.fileHeaderXmlParser =
          new FileHeaderXmlParser(
              OpenScenarioXmlParser.this.messageLogger, OpenScenarioXmlParser.this.filename);
    }

    private FileHeaderXmlParser fileHeaderXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, OpenScenarioImpl object) {
      FileHeaderImpl fileHeader = new FileHeaderImpl();
      // Setting the parent
      fileHeader.setParent(object);
      this.fileHeaderXmlParser.parseElement(indexedElement, parserContext, fileHeader);

      object.setFileHeader(fileHeader);
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
      return elementName.equals(OscConstants.ELEMENT__FILE_HEADER);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__FILE_HEADER};
    }
  }
  /** A parser for subelement openScenarioCategory */
  @SuppressWarnings("synthetic-access")
  private class SubElementOpenScenarioCategoryParser implements IElementParser<OpenScenarioImpl> {

    /** Constructor */
    public SubElementOpenScenarioCategoryParser() {
      super();
      this.openScenarioCategoryXmlParser =
          new OpenScenarioCategoryXmlParser(
              OpenScenarioXmlParser.this.messageLogger, OpenScenarioXmlParser.this.filename);
    }

    private OpenScenarioCategoryXmlParser openScenarioCategoryXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, OpenScenarioImpl object) {
      OpenScenarioCategoryImpl openScenarioCategory = new OpenScenarioCategoryImpl();
      // Setting the parent
      openScenarioCategory.setParent(object);
      this.openScenarioCategoryXmlParser.parseElement(
          indexedElement, parserContext, openScenarioCategory);

      object.setOpenScenarioCategory(openScenarioCategory);
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
          || elementName.equals(OscConstants.ELEMENT__CATALOG_LOCATIONS)
          || elementName.equals(OscConstants.ELEMENT__CATALOG);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {
        OscConstants.ELEMENT__PARAMETER_DECLARATIONS,
        OscConstants.ELEMENT__CATALOG_LOCATIONS,
        OscConstants.ELEMENT__CATALOG
      };
    }
  }
}
