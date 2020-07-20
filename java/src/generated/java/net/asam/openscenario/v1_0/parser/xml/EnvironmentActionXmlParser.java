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
import net.asam.openscenario.parser.modelgroup.XmlChoiceParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.CatalogReferenceImpl;
import net.asam.openscenario.v1_0.impl.EnvironmentActionImpl;
import net.asam.openscenario.v1_0.impl.EnvironmentImpl;
import net.asam.openscenario.v1_0.parser.CatalogReferenceParserContext;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EnvironmentActionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class EnvironmentActionXmlParser extends XmlComplexTypeParser<EnvironmentActionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public EnvironmentActionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<EnvironmentActionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<EnvironmentActionImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlChoiceParser<EnvironmentActionImpl> {
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
    protected List<IElementParser<EnvironmentActionImpl>> createParserList() {
      List<IElementParser<EnvironmentActionImpl>> result = new ArrayList<>();
      result.add(new SubElementEnvironmentParser());
      result.add(new SubElementCatalogReferenceParser());
      return result;
    }
  }
  /** A parser for subelement environment */
  @SuppressWarnings("synthetic-access")
  private class SubElementEnvironmentParser implements IElementParser<EnvironmentActionImpl> {

    /** Constructor */
    public SubElementEnvironmentParser() {
      super();
      this.environmentXmlParser =
          new EnvironmentXmlParser(
              EnvironmentActionXmlParser.this.messageLogger,
              EnvironmentActionXmlParser.this.filename);
    }

    private EnvironmentXmlParser environmentXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EnvironmentActionImpl object) {
      EnvironmentImpl environment = new EnvironmentImpl();
      // Setting the parent
      environment.setParent(object);
      this.environmentXmlParser.parseElement(indexedElement, parserContext, environment);

      object.setEnvironment(environment);
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
      return elementName.equals(OscConstants.ELEMENT__ENVIRONMENT);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ENVIRONMENT};
    }
  }
  /** A parser for subelement catalogReference */
  @SuppressWarnings("synthetic-access")
  private class SubElementCatalogReferenceParser implements IElementParser<EnvironmentActionImpl> {

    /** Constructor */
    public SubElementCatalogReferenceParser() {
      super();
      this.catalogReferenceXmlParser =
          new CatalogReferenceXmlParser(
              EnvironmentActionXmlParser.this.messageLogger,
              EnvironmentActionXmlParser.this.filename);
    }

    private CatalogReferenceXmlParser catalogReferenceXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EnvironmentActionImpl object) {
      CatalogReferenceImpl catalogReference = new CatalogReferenceImpl();
      // Setting the parent
      catalogReference.setParent(object);
      this.catalogReferenceXmlParser.parseElement(indexedElement, parserContext, catalogReference);

      object.setCatalogReference(catalogReference);
      ((CatalogReferenceParserContext) parserContext).addCatalogReference(catalogReference);
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
      return elementName.equals(OscConstants.ELEMENT__CATALOG_REFERENCE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__CATALOG_REFERENCE};
    }
  }
}
