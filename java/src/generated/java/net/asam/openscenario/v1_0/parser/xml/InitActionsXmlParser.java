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
import net.asam.openscenario.v1_0.api.IGlobalAction;
import net.asam.openscenario.v1_0.api.IPrivate;
import net.asam.openscenario.v1_0.api.IUserDefinedAction;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.GlobalActionImpl;
import net.asam.openscenario.v1_0.impl.InitActionsImpl;
import net.asam.openscenario.v1_0.impl.PrivateImpl;
import net.asam.openscenario.v1_0.impl.UserDefinedActionImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a InitActionsImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class InitActionsXmlParser extends XmlComplexTypeParser<InitActionsImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public InitActionsXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<InitActionsImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<InitActionsImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<InitActionsImpl> {
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
    protected List<IElementParser<InitActionsImpl>> createParserList() {
      List<IElementParser<InitActionsImpl>> result = new ArrayList<>();
      result.add(new SubElementGlobalActionsParser());
      result.add(new SubElementUserDefinedActionsParser());
      result.add(new SubElementPrivatesParser());
      return result;
    }
  }
  /** A parser for subelement globalActions */
  @SuppressWarnings("synthetic-access")
  private class SubElementGlobalActionsParser implements IElementParser<InitActionsImpl> {

    /** Constructor */
    public SubElementGlobalActionsParser() {
      super();
      this.globalActionXmlParser =
          new GlobalActionXmlParser(
              InitActionsXmlParser.this.messageLogger, InitActionsXmlParser.this.filename);
    }

    private GlobalActionXmlParser globalActionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, InitActionsImpl object) {
      GlobalActionImpl globalActions = new GlobalActionImpl();
      // Setting the parent
      globalActions.setParent(object);
      this.globalActionXmlParser.parseElement(indexedElement, parserContext, globalActions);
      List<IGlobalAction> globalActionsList = object.getGlobalActions();
      if (globalActionsList == null) {
        globalActionsList = new ArrayList<>();
        object.setGlobalActions(globalActionsList);
      }
      globalActionsList.add(globalActions);
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
      return elementName.equals(OscConstants.ELEMENT__GLOBAL_ACTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__GLOBAL_ACTION};
    }
  }
  /** A parser for subelement userDefinedActions */
  @SuppressWarnings("synthetic-access")
  private class SubElementUserDefinedActionsParser implements IElementParser<InitActionsImpl> {

    /** Constructor */
    public SubElementUserDefinedActionsParser() {
      super();
      this.userDefinedActionXmlParser =
          new UserDefinedActionXmlParser(
              InitActionsXmlParser.this.messageLogger, InitActionsXmlParser.this.filename);
    }

    private UserDefinedActionXmlParser userDefinedActionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, InitActionsImpl object) {
      UserDefinedActionImpl userDefinedActions = new UserDefinedActionImpl();
      // Setting the parent
      userDefinedActions.setParent(object);
      this.userDefinedActionXmlParser.parseElement(
          indexedElement, parserContext, userDefinedActions);
      List<IUserDefinedAction> userDefinedActionsList = object.getUserDefinedActions();
      if (userDefinedActionsList == null) {
        userDefinedActionsList = new ArrayList<>();
        object.setUserDefinedActions(userDefinedActionsList);
      }
      userDefinedActionsList.add(userDefinedActions);
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
      return elementName.equals(OscConstants.ELEMENT__USER_DEFINED_ACTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__USER_DEFINED_ACTION};
    }
  }
  /** A parser for subelement privates */
  @SuppressWarnings("synthetic-access")
  private class SubElementPrivatesParser implements IElementParser<InitActionsImpl> {

    /** Constructor */
    public SubElementPrivatesParser() {
      super();
      this.privateXmlParser =
          new PrivateXmlParser(
              InitActionsXmlParser.this.messageLogger, InitActionsXmlParser.this.filename);
    }

    private PrivateXmlParser privateXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, InitActionsImpl object) {
      PrivateImpl privates = new PrivateImpl();
      // Setting the parent
      privates.setParent(object);
      this.privateXmlParser.parseElement(indexedElement, parserContext, privates);
      List<IPrivate> privatesList = object.getPrivates();
      if (privatesList == null) {
        privatesList = new ArrayList<>();
        object.setPrivates(privatesList);
      }
      privatesList.add(privates);
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
      return elementName.equals(OscConstants.ELEMENT__PRIVATE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__PRIVATE};
    }
  }
}
