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
import net.asam.openscenario.impl.NamedReferenceProxy;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.parser.modelgroup.XmlAllParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.api.IEntity;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.FinalSpeedImpl;
import net.asam.openscenario.v1_0.impl.PositionImpl;
import net.asam.openscenario.v1_0.impl.SynchronizeActionImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SynchronizeActionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class SynchronizeActionXmlParser extends XmlComplexTypeParser<SynchronizeActionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public SynchronizeActionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<SynchronizeActionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<SynchronizeActionImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__MASTER_ENTITY_REF,
        new IAttributeParser<SynchronizeActionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              SynchronizeActionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    SynchronizeActionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    SynchronizeActionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__MASTER_ENTITY_REF,
                  stripDollarSign(attributeValue),
                  startMarker);
            } else {
              // Parse value
              // Proxy
              NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<>(attributeValue);
              proxy.setParent(object);
              object.setMasterEntityRef(proxy);
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<SynchronizeActionImpl> {
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
    protected List<IElementParser<SynchronizeActionImpl>> createParserList() {
      List<IElementParser<SynchronizeActionImpl>> result = new ArrayList<>();
      result.add(new SubElementTargetPositionMasterParser());
      result.add(new SubElementTargetPositionParser());
      result.add(new SubElementFinalSpeedParser());
      return result;
    }
  }
  /** A parser for subelement targetPositionMaster */
  @SuppressWarnings("synthetic-access")
  private class SubElementTargetPositionMasterParser
      implements IElementParser<SynchronizeActionImpl> {

    /** Constructor */
    public SubElementTargetPositionMasterParser() {
      super();
      this.positionXmlParser =
          new PositionXmlParser(
              SynchronizeActionXmlParser.this.messageLogger,
              SynchronizeActionXmlParser.this.filename);
    }

    private PositionXmlParser positionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, SynchronizeActionImpl object) {
      PositionImpl targetPositionMaster = new PositionImpl();
      // Setting the parent
      targetPositionMaster.setParent(object);
      this.positionXmlParser.parseElement(indexedElement, parserContext, targetPositionMaster);

      object.setTargetPositionMaster(targetPositionMaster);
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
      return elementName.equals(OscConstants.ELEMENT__TARGET_POSITION_MASTER);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__TARGET_POSITION_MASTER};
    }
  }
  /** A parser for subelement targetPosition */
  @SuppressWarnings("synthetic-access")
  private class SubElementTargetPositionParser implements IElementParser<SynchronizeActionImpl> {

    /** Constructor */
    public SubElementTargetPositionParser() {
      super();
      this.positionXmlParser =
          new PositionXmlParser(
              SynchronizeActionXmlParser.this.messageLogger,
              SynchronizeActionXmlParser.this.filename);
    }

    private PositionXmlParser positionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, SynchronizeActionImpl object) {
      PositionImpl targetPosition = new PositionImpl();
      // Setting the parent
      targetPosition.setParent(object);
      this.positionXmlParser.parseElement(indexedElement, parserContext, targetPosition);

      object.setTargetPosition(targetPosition);
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
      return elementName.equals(OscConstants.ELEMENT__TARGET_POSITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__TARGET_POSITION};
    }
  }
  /** A parser for subelement finalSpeed */
  @SuppressWarnings("synthetic-access")
  private class SubElementFinalSpeedParser implements IElementParser<SynchronizeActionImpl> {

    /** Constructor */
    public SubElementFinalSpeedParser() {
      super();
      this.finalSpeedXmlParser =
          new FinalSpeedXmlParser(
              SynchronizeActionXmlParser.this.messageLogger,
              SynchronizeActionXmlParser.this.filename);
    }

    private FinalSpeedXmlParser finalSpeedXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, SynchronizeActionImpl object) {
      FinalSpeedImpl finalSpeed = new FinalSpeedImpl();
      // Setting the parent
      finalSpeed.setParent(object);
      this.finalSpeedXmlParser.parseElement(indexedElement, parserContext, finalSpeed);

      object.setFinalSpeed(finalSpeed);
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
      return elementName.equals(OscConstants.ELEMENT__FINAL_SPEED);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__FINAL_SPEED};
    }
  }
}
