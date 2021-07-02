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
import net.asam.openscenario.parser.modelgroup.XmlSequenceParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.api.writer.IManeuverGroupWriter;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.ActImpl;
import net.asam.openscenario.v1_0.impl.ManeuverGroupImpl;
import net.asam.openscenario.v1_0.impl.TriggerImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ActImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ActXmlParser extends XmlComplexTypeParser<ActImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public ActXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<ActImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<ActImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__NAME,
        new IAttributeParser<ActImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              ActImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(), startPosition.getColumn(), ActXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(), endPosition.getColumn(), ActXmlParser.this.filename);
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
  private class SubElementParser extends XmlSequenceParser<ActImpl> {
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
    protected List<IElementParser<ActImpl>> createParserList() {
      List<IElementParser<ActImpl>> result = new ArrayList<>();
      result.add(new SubElementManeuverGroupsParser());
      result.add(new SubElementStartTriggerParser());
      result.add(new SubElementStopTriggerParser());
      return result;
    }
  }
  /** A parser for subelement maneuverGroups */
  @SuppressWarnings("synthetic-access")
  private class SubElementManeuverGroupsParser implements IElementParser<ActImpl> {

    /** Constructor */
    public SubElementManeuverGroupsParser() {
      super();
      this.maneuverGroupXmlParser =
          new ManeuverGroupXmlParser(ActXmlParser.this.messageLogger, ActXmlParser.this.filename);
    }

    private ManeuverGroupXmlParser maneuverGroupXmlParser;

    @Override
    public void parse(IndexedElement indexedElement, ParserContext parserContext, ActImpl object) {
      ManeuverGroupImpl maneuverGroups = new ManeuverGroupImpl();
      // Setting the parent
      maneuverGroups.setParent(object);
      this.maneuverGroupXmlParser.parseElement(indexedElement, parserContext, maneuverGroups);
      List<IManeuverGroupWriter> maneuverGroupsList = object.getWriterManeuverGroups();
      if (maneuverGroupsList == null) {
        maneuverGroupsList = new ArrayList<>();
        object.setManeuverGroups(maneuverGroupsList);
      }
      maneuverGroupsList.add(maneuverGroups);
    }

    @Override
    public int getMinOccur() {
      return 1;
    }

    @Override
    public int getMaxOccur() {
      return -1;
    }

    @Override
    public boolean doesMatch(String elementName) {
      return elementName.equals(OscConstants.ELEMENT__MANEUVER_GROUP);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__MANEUVER_GROUP};
    }
  }
  /** A parser for subelement startTrigger */
  @SuppressWarnings("synthetic-access")
  private class SubElementStartTriggerParser implements IElementParser<ActImpl> {

    /** Constructor */
    public SubElementStartTriggerParser() {
      super();
      this.triggerXmlParser =
          new TriggerXmlParser(ActXmlParser.this.messageLogger, ActXmlParser.this.filename);
    }

    private TriggerXmlParser triggerXmlParser;

    @Override
    public void parse(IndexedElement indexedElement, ParserContext parserContext, ActImpl object) {
      TriggerImpl startTrigger = new TriggerImpl();
      // Setting the parent
      startTrigger.setParent(object);
      this.triggerXmlParser.parseElement(indexedElement, parserContext, startTrigger);

      object.setStartTrigger(startTrigger);
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
      return elementName.equals(OscConstants.ELEMENT__START_TRIGGER);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__START_TRIGGER};
    }
  }
  /** A parser for subelement stopTrigger */
  @SuppressWarnings("synthetic-access")
  private class SubElementStopTriggerParser implements IElementParser<ActImpl> {

    /** Constructor */
    public SubElementStopTriggerParser() {
      super();
      this.triggerXmlParser =
          new TriggerXmlParser(ActXmlParser.this.messageLogger, ActXmlParser.this.filename);
    }

    private TriggerXmlParser triggerXmlParser;

    @Override
    public void parse(IndexedElement indexedElement, ParserContext parserContext, ActImpl object) {
      TriggerImpl stopTrigger = new TriggerImpl();
      // Setting the parent
      stopTrigger.setParent(object);
      this.triggerXmlParser.parseElement(indexedElement, parserContext, stopTrigger);

      object.setStopTrigger(stopTrigger);
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
      return elementName.equals(OscConstants.ELEMENT__STOP_TRIGGER);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__STOP_TRIGGER};
    }
  }
}
