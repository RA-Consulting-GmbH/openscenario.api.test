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
import net.asam.openscenario.parser.modelgroup.XmlAllParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.ModifyRuleImpl;
import net.asam.openscenario.v1_0.impl.ParameterModifyActionImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ParameterModifyActionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ParameterModifyActionXmlParser
    extends XmlComplexTypeParser<ParameterModifyActionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public ParameterModifyActionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<ParameterModifyActionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<ParameterModifyActionImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<ParameterModifyActionImpl> {
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
    protected List<IElementParser<ParameterModifyActionImpl>> createParserList() {
      List<IElementParser<ParameterModifyActionImpl>> result = new ArrayList<>();
      result.add(new SubElementRuleParser());
      return result;
    }
  }
  /** A parser for subelement rule */
  @SuppressWarnings("synthetic-access")
  private class SubElementRuleParser implements IElementParser<ParameterModifyActionImpl> {

    /** Constructor */
    public SubElementRuleParser() {
      super();
      this.modifyRuleXmlParser =
          new ModifyRuleXmlParser(
              ParameterModifyActionXmlParser.this.messageLogger,
              ParameterModifyActionXmlParser.this.filename);
    }

    private ModifyRuleXmlParser modifyRuleXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement,
        ParserContext parserContext,
        ParameterModifyActionImpl object) {
      ModifyRuleImpl rule = new ModifyRuleImpl();
      // Setting the parent
      rule.setParent(object);
      this.modifyRuleXmlParser.parseElement(indexedElement, parserContext, rule);

      object.setRule(rule);
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
      return elementName.equals(OscConstants.ELEMENT__RULE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__RULE};
    }
  }
}
