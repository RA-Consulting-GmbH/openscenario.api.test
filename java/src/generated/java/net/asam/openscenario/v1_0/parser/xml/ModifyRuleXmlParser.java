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
import net.asam.openscenario.v1_0.impl.ModifyRuleImpl;
import net.asam.openscenario.v1_0.impl.ParameterAddValueRuleImpl;
import net.asam.openscenario.v1_0.impl.ParameterMultiplyByValueRuleImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ModifyRuleImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ModifyRuleXmlParser extends XmlComplexTypeParser<ModifyRuleImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public ModifyRuleXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<ModifyRuleImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<ModifyRuleImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlChoiceParser<ModifyRuleImpl> {
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
    protected List<IElementParser<ModifyRuleImpl>> createParserList() {
      List<IElementParser<ModifyRuleImpl>> result = new ArrayList<>();
      result.add(new SubElementAddValueParser());
      result.add(new SubElementMultiplyByValueParser());
      return result;
    }
  }
  /** A parser for subelement addValue */
  @SuppressWarnings("synthetic-access")
  private class SubElementAddValueParser implements IElementParser<ModifyRuleImpl> {

    /** Constructor */
    public SubElementAddValueParser() {
      super();
      this.parameterAddValueRuleXmlParser =
          new ParameterAddValueRuleXmlParser(
              ModifyRuleXmlParser.this.messageLogger, ModifyRuleXmlParser.this.filename);
    }

    private ParameterAddValueRuleXmlParser parameterAddValueRuleXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, ModifyRuleImpl object) {
      ParameterAddValueRuleImpl addValue = new ParameterAddValueRuleImpl();
      // Setting the parent
      addValue.setParent(object);
      this.parameterAddValueRuleXmlParser.parseElement(indexedElement, parserContext, addValue);

      object.setAddValue(addValue);
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
      return elementName.equals(OscConstants.ELEMENT__ADD_VALUE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ADD_VALUE};
    }
  }
  /** A parser for subelement multiplyByValue */
  @SuppressWarnings("synthetic-access")
  private class SubElementMultiplyByValueParser implements IElementParser<ModifyRuleImpl> {

    /** Constructor */
    public SubElementMultiplyByValueParser() {
      super();
      this.parameterMultiplyByValueRuleXmlParser =
          new ParameterMultiplyByValueRuleXmlParser(
              ModifyRuleXmlParser.this.messageLogger, ModifyRuleXmlParser.this.filename);
    }

    private ParameterMultiplyByValueRuleXmlParser parameterMultiplyByValueRuleXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, ModifyRuleImpl object) {
      ParameterMultiplyByValueRuleImpl multiplyByValue = new ParameterMultiplyByValueRuleImpl();
      // Setting the parent
      multiplyByValue.setParent(object);
      this.parameterMultiplyByValueRuleXmlParser.parseElement(
          indexedElement, parserContext, multiplyByValue);

      object.setMultiplyByValue(multiplyByValue);
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
      return elementName.equals(OscConstants.ELEMENT__MULTIPLY_BY_VALUE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__MULTIPLY_BY_VALUE};
    }
  }
}
