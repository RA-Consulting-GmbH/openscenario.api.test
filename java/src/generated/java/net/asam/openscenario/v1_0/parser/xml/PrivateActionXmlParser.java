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
import net.asam.openscenario.v1_0.impl.ActivateControllerActionImpl;
import net.asam.openscenario.v1_0.impl.ControllerActionImpl;
import net.asam.openscenario.v1_0.impl.LateralActionImpl;
import net.asam.openscenario.v1_0.impl.LongitudinalActionImpl;
import net.asam.openscenario.v1_0.impl.PrivateActionImpl;
import net.asam.openscenario.v1_0.impl.RoutingActionImpl;
import net.asam.openscenario.v1_0.impl.SynchronizeActionImpl;
import net.asam.openscenario.v1_0.impl.TeleportActionImpl;
import net.asam.openscenario.v1_0.impl.VisibilityActionImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PrivateActionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class PrivateActionXmlParser extends XmlComplexTypeParser<PrivateActionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public PrivateActionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<PrivateActionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<PrivateActionImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlChoiceParser<PrivateActionImpl> {
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
    protected List<IElementParser<PrivateActionImpl>> createParserList() {
      List<IElementParser<PrivateActionImpl>> result = new ArrayList<>();
      result.add(new SubElementLongitudinalActionParser());
      result.add(new SubElementLateralActionParser());
      result.add(new SubElementVisibilityActionParser());
      result.add(new SubElementSynchronizeActionParser());
      result.add(new SubElementActivateControllerActionParser());
      result.add(new SubElementControllerActionParser());
      result.add(new SubElementTeleportActionParser());
      result.add(new SubElementRoutingActionParser());
      return result;
    }
  }
  /** A parser for subelement longitudinalAction */
  @SuppressWarnings("synthetic-access")
  private class SubElementLongitudinalActionParser implements IElementParser<PrivateActionImpl> {

    /** Constructor */
    public SubElementLongitudinalActionParser() {
      super();
      this.longitudinalActionXmlParser =
          new LongitudinalActionXmlParser(
              PrivateActionXmlParser.this.messageLogger, PrivateActionXmlParser.this.filename);
    }

    private LongitudinalActionXmlParser longitudinalActionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PrivateActionImpl object) {
      LongitudinalActionImpl longitudinalAction = new LongitudinalActionImpl();
      // Setting the parent
      longitudinalAction.setParent(object);
      this.longitudinalActionXmlParser.parseElement(
          indexedElement, parserContext, longitudinalAction);

      object.setLongitudinalAction(longitudinalAction);
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
      return elementName.equals(OscConstants.ELEMENT__LONGITUDINAL_ACTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__LONGITUDINAL_ACTION};
    }
  }
  /** A parser for subelement lateralAction */
  @SuppressWarnings("synthetic-access")
  private class SubElementLateralActionParser implements IElementParser<PrivateActionImpl> {

    /** Constructor */
    public SubElementLateralActionParser() {
      super();
      this.lateralActionXmlParser =
          new LateralActionXmlParser(
              PrivateActionXmlParser.this.messageLogger, PrivateActionXmlParser.this.filename);
    }

    private LateralActionXmlParser lateralActionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PrivateActionImpl object) {
      LateralActionImpl lateralAction = new LateralActionImpl();
      // Setting the parent
      lateralAction.setParent(object);
      this.lateralActionXmlParser.parseElement(indexedElement, parserContext, lateralAction);

      object.setLateralAction(lateralAction);
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
      return elementName.equals(OscConstants.ELEMENT__LATERAL_ACTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__LATERAL_ACTION};
    }
  }
  /** A parser for subelement visibilityAction */
  @SuppressWarnings("synthetic-access")
  private class SubElementVisibilityActionParser implements IElementParser<PrivateActionImpl> {

    /** Constructor */
    public SubElementVisibilityActionParser() {
      super();
      this.visibilityActionXmlParser =
          new VisibilityActionXmlParser(
              PrivateActionXmlParser.this.messageLogger, PrivateActionXmlParser.this.filename);
    }

    private VisibilityActionXmlParser visibilityActionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PrivateActionImpl object) {
      VisibilityActionImpl visibilityAction = new VisibilityActionImpl();
      // Setting the parent
      visibilityAction.setParent(object);
      this.visibilityActionXmlParser.parseElement(indexedElement, parserContext, visibilityAction);

      object.setVisibilityAction(visibilityAction);
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
      return elementName.equals(OscConstants.ELEMENT__VISIBILITY_ACTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__VISIBILITY_ACTION};
    }
  }
  /** A parser for subelement synchronizeAction */
  @SuppressWarnings("synthetic-access")
  private class SubElementSynchronizeActionParser implements IElementParser<PrivateActionImpl> {

    /** Constructor */
    public SubElementSynchronizeActionParser() {
      super();
      this.synchronizeActionXmlParser =
          new SynchronizeActionXmlParser(
              PrivateActionXmlParser.this.messageLogger, PrivateActionXmlParser.this.filename);
    }

    private SynchronizeActionXmlParser synchronizeActionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PrivateActionImpl object) {
      SynchronizeActionImpl synchronizeAction = new SynchronizeActionImpl();
      // Setting the parent
      synchronizeAction.setParent(object);
      this.synchronizeActionXmlParser.parseElement(
          indexedElement, parserContext, synchronizeAction);

      object.setSynchronizeAction(synchronizeAction);
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
      return elementName.equals(OscConstants.ELEMENT__SYNCHRONIZE_ACTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__SYNCHRONIZE_ACTION};
    }
  }
  /** A parser for subelement activateControllerAction */
  @SuppressWarnings("synthetic-access")
  private class SubElementActivateControllerActionParser
      implements IElementParser<PrivateActionImpl> {

    /** Constructor */
    public SubElementActivateControllerActionParser() {
      super();
      this.activateControllerActionXmlParser =
          new ActivateControllerActionXmlParser(
              PrivateActionXmlParser.this.messageLogger, PrivateActionXmlParser.this.filename);
    }

    private ActivateControllerActionXmlParser activateControllerActionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PrivateActionImpl object) {
      ActivateControllerActionImpl activateControllerAction = new ActivateControllerActionImpl();
      // Setting the parent
      activateControllerAction.setParent(object);
      this.activateControllerActionXmlParser.parseElement(
          indexedElement, parserContext, activateControllerAction);

      object.setActivateControllerAction(activateControllerAction);
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
      return elementName.equals(OscConstants.ELEMENT__ACTIVATE_CONTROLLER_ACTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ACTIVATE_CONTROLLER_ACTION};
    }
  }
  /** A parser for subelement controllerAction */
  @SuppressWarnings("synthetic-access")
  private class SubElementControllerActionParser implements IElementParser<PrivateActionImpl> {

    /** Constructor */
    public SubElementControllerActionParser() {
      super();
      this.controllerActionXmlParser =
          new ControllerActionXmlParser(
              PrivateActionXmlParser.this.messageLogger, PrivateActionXmlParser.this.filename);
    }

    private ControllerActionXmlParser controllerActionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PrivateActionImpl object) {
      ControllerActionImpl controllerAction = new ControllerActionImpl();
      // Setting the parent
      controllerAction.setParent(object);
      this.controllerActionXmlParser.parseElement(indexedElement, parserContext, controllerAction);

      object.setControllerAction(controllerAction);
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
      return elementName.equals(OscConstants.ELEMENT__CONTROLLER_ACTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__CONTROLLER_ACTION};
    }
  }
  /** A parser for subelement teleportAction */
  @SuppressWarnings("synthetic-access")
  private class SubElementTeleportActionParser implements IElementParser<PrivateActionImpl> {

    /** Constructor */
    public SubElementTeleportActionParser() {
      super();
      this.teleportActionXmlParser =
          new TeleportActionXmlParser(
              PrivateActionXmlParser.this.messageLogger, PrivateActionXmlParser.this.filename);
    }

    private TeleportActionXmlParser teleportActionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PrivateActionImpl object) {
      TeleportActionImpl teleportAction = new TeleportActionImpl();
      // Setting the parent
      teleportAction.setParent(object);
      this.teleportActionXmlParser.parseElement(indexedElement, parserContext, teleportAction);

      object.setTeleportAction(teleportAction);
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
      return elementName.equals(OscConstants.ELEMENT__TELEPORT_ACTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__TELEPORT_ACTION};
    }
  }
  /** A parser for subelement routingAction */
  @SuppressWarnings("synthetic-access")
  private class SubElementRoutingActionParser implements IElementParser<PrivateActionImpl> {

    /** Constructor */
    public SubElementRoutingActionParser() {
      super();
      this.routingActionXmlParser =
          new RoutingActionXmlParser(
              PrivateActionXmlParser.this.messageLogger, PrivateActionXmlParser.this.filename);
    }

    private RoutingActionXmlParser routingActionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PrivateActionImpl object) {
      RoutingActionImpl routingAction = new RoutingActionImpl();
      // Setting the parent
      routingAction.setParent(object);
      this.routingActionXmlParser.parseElement(indexedElement, parserContext, routingAction);

      object.setRoutingAction(routingAction);
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
      return elementName.equals(OscConstants.ELEMENT__ROUTING_ACTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ROUTING_ACTION};
    }
  }
}
