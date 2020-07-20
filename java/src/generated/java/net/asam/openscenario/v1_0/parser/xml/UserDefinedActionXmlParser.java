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
import net.asam.openscenario.v1_0.impl.CustomCommandActionImpl;
import net.asam.openscenario.v1_0.impl.UserDefinedActionImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a UserDefinedActionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class UserDefinedActionXmlParser extends XmlComplexTypeParser<UserDefinedActionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public UserDefinedActionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<UserDefinedActionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<UserDefinedActionImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<UserDefinedActionImpl> {
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
    protected List<IElementParser<UserDefinedActionImpl>> createParserList() {
      List<IElementParser<UserDefinedActionImpl>> result = new ArrayList<>();
      result.add(new SubElementCustomCommandActionParser());
      return result;
    }
  }
  /** A parser for subelement customCommandAction */
  @SuppressWarnings("synthetic-access")
  private class SubElementCustomCommandActionParser
      implements IElementParser<UserDefinedActionImpl> {

    /** Constructor */
    public SubElementCustomCommandActionParser() {
      super();
      this.customCommandActionXmlParser =
          new CustomCommandActionXmlParser(
              UserDefinedActionXmlParser.this.messageLogger,
              UserDefinedActionXmlParser.this.filename);
    }

    private CustomCommandActionXmlParser customCommandActionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, UserDefinedActionImpl object) {
      CustomCommandActionImpl customCommandAction = new CustomCommandActionImpl();
      // Setting the parent
      customCommandAction.setParent(object);
      this.customCommandActionXmlParser.parseElement(
          indexedElement, parserContext, customCommandAction);

      object.setCustomCommandAction(customCommandAction);
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
      return elementName.equals(OscConstants.ELEMENT__CUSTOM_COMMAND_ACTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__CUSTOM_COMMAND_ACTION};
    }
  }
}
