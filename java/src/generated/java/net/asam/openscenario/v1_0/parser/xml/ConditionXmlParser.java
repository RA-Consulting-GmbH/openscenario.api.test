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
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.parser.modelgroup.XmlChoiceParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.api.ConditionEdge;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.ByEntityConditionImpl;
import net.asam.openscenario.v1_0.impl.ByValueConditionImpl;
import net.asam.openscenario.v1_0.impl.ConditionImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ConditionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ConditionXmlParser extends XmlComplexTypeParser<ConditionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public ConditionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<ConditionImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<ConditionImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__NAME,
        new IAttributeParser<ConditionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              ConditionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    ConditionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    ConditionXmlParser.this.filename);
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
    result.put(
        OscConstants.ATTRIBUTE__DELAY,
        new IAttributeParser<ConditionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              ConditionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    ConditionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    ConditionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__DELAY, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setDelay(parseDouble(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__DELAY, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__DELAY, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__CONDITION_EDGE,
        new IAttributeParser<ConditionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              ConditionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    ConditionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    ConditionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__CONDITION_EDGE,
                  stripDollarSign(attributeValue),
                  startMarker);
            } else {
              // Parse value
              // Enumeration Type
              ConditionEdge result = ConditionEdge.getFromLiteral(attributeValue);
              if (result != null) {
                object.setConditionEdge(result);
              } else {
                ConditionXmlParser.this.messageLogger.logMessage(
                    new FileContentMessage(
                        "Value '" + attributeValue + "' is not allowed.",
                        ErrorLevel.ERROR,
                        startMarker));
              }
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__CONDITION_EDGE, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__CONDITION_EDGE, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlChoiceParser<ConditionImpl> {
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
    protected List<IElementParser<ConditionImpl>> createParserList() {
      List<IElementParser<ConditionImpl>> result = new ArrayList<>();
      result.add(new SubElementByEntityConditionParser());
      result.add(new SubElementByValueConditionParser());
      return result;
    }
  }
  /** A parser for subelement byEntityCondition */
  @SuppressWarnings("synthetic-access")
  private class SubElementByEntityConditionParser implements IElementParser<ConditionImpl> {

    /** Constructor */
    public SubElementByEntityConditionParser() {
      super();
      this.byEntityConditionXmlParser =
          new ByEntityConditionXmlParser(
              ConditionXmlParser.this.messageLogger, ConditionXmlParser.this.filename);
    }

    private ByEntityConditionXmlParser byEntityConditionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, ConditionImpl object) {
      ByEntityConditionImpl byEntityCondition = new ByEntityConditionImpl();
      // Setting the parent
      byEntityCondition.setParent(object);
      this.byEntityConditionXmlParser.parseElement(
          indexedElement, parserContext, byEntityCondition);

      object.setByEntityCondition(byEntityCondition);
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
      return elementName.equals(OscConstants.ELEMENT__BY_ENTITY_CONDITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__BY_ENTITY_CONDITION};
    }
  }
  /** A parser for subelement byValueCondition */
  @SuppressWarnings("synthetic-access")
  private class SubElementByValueConditionParser implements IElementParser<ConditionImpl> {

    /** Constructor */
    public SubElementByValueConditionParser() {
      super();
      this.byValueConditionXmlParser =
          new ByValueConditionXmlParser(
              ConditionXmlParser.this.messageLogger, ConditionXmlParser.this.filename);
    }

    private ByValueConditionXmlParser byValueConditionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, ConditionImpl object) {
      ByValueConditionImpl byValueCondition = new ByValueConditionImpl();
      // Setting the parent
      byValueCondition.setParent(object);
      this.byValueConditionXmlParser.parseElement(indexedElement, parserContext, byValueCondition);

      object.setByValueCondition(byValueCondition);
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
      return elementName.equals(OscConstants.ELEMENT__BY_VALUE_CONDITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__BY_VALUE_CONDITION};
    }
  }
}
