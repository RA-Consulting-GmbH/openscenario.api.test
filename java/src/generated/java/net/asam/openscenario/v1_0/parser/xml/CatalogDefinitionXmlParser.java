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
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.parser.modelgroup.XmlSequenceParser;
import net.asam.openscenario.parser.type.XmlGroupParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.CatalogDefinitionImpl;
import net.asam.openscenario.v1_0.impl.CatalogImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CatalogDefinitionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class CatalogDefinitionXmlParser extends XmlGroupParser<CatalogDefinitionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public CatalogDefinitionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<CatalogDefinitionImpl> {
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
    protected List<IElementParser<CatalogDefinitionImpl>> createParserList() {
      List<IElementParser<CatalogDefinitionImpl>> result = new ArrayList<>();
      result.add(new SubElementCatalogParser());
      return result;
    }
  }
  /** A parser for subelement catalog */
  @SuppressWarnings("synthetic-access")
  private class SubElementCatalogParser implements IElementParser<CatalogDefinitionImpl> {

    /** Constructor */
    public SubElementCatalogParser() {
      super();
      this.catalogXmlParser =
          new CatalogXmlParser(
              CatalogDefinitionXmlParser.this.messageLogger,
              CatalogDefinitionXmlParser.this.filename);
    }

    private CatalogXmlParser catalogXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogDefinitionImpl object) {
      CatalogImpl catalog = new CatalogImpl();
      // Setting the parent
      catalog.setParent(object);
      this.catalogXmlParser.parseElement(indexedElement, parserContext, catalog);

      object.setCatalog(catalog);
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
