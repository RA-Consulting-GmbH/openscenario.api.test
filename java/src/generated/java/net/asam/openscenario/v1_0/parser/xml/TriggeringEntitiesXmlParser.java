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
import net.asam.openscenario.parser.modelgroup.XmlSequenceParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.api.IEntityRef;
import net.asam.openscenario.v1_0.api.TriggeringEntitiesRule;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.EntityRefImpl;
import net.asam.openscenario.v1_0.impl.TriggeringEntitiesImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a TriggeringEntitiesImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class TriggeringEntitiesXmlParser extends XmlComplexTypeParser<TriggeringEntitiesImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public TriggeringEntitiesXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<TriggeringEntitiesImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<TriggeringEntitiesImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__TRIGGERING_ENTITIES_RULE,
        new IAttributeParser<TriggeringEntitiesImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              TriggeringEntitiesImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    TriggeringEntitiesXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    TriggeringEntitiesXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__TRIGGERING_ENTITIES_RULE,
                  stripDollarSign(attributeValue),
                  startMarker);
            } else {
              // Parse value
              // Enumeration Type
              TriggeringEntitiesRule result = TriggeringEntitiesRule.getFromLiteral(attributeValue);
              if (result != null) {
                object.setTriggeringEntitiesRule(result);
              } else {
                TriggeringEntitiesXmlParser.this.messageLogger.logMessage(
                    new FileContentMessage(
                        "Value '" + attributeValue + "' is not allowed.",
                        ErrorLevel.ERROR,
                        startMarker));
              }
            }
            object.putPropertyStartMarker(
                OscConstants.ATTRIBUTE__TRIGGERING_ENTITIES_RULE, startMarker);
            object.putPropertyEndMarker(
                OscConstants.ATTRIBUTE__TRIGGERING_ENTITIES_RULE, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<TriggeringEntitiesImpl> {
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
    protected List<IElementParser<TriggeringEntitiesImpl>> createParserList() {
      List<IElementParser<TriggeringEntitiesImpl>> result = new ArrayList<>();
      result.add(new SubElementEntityRefsParser());
      return result;
    }
  }
  /** A parser for subelement entityRefs */
  @SuppressWarnings("synthetic-access")
  private class SubElementEntityRefsParser implements IElementParser<TriggeringEntitiesImpl> {

    /** Constructor */
    public SubElementEntityRefsParser() {
      super();
      this.entityRefXmlParser =
          new EntityRefXmlParser(
              TriggeringEntitiesXmlParser.this.messageLogger,
              TriggeringEntitiesXmlParser.this.filename);
    }

    private EntityRefXmlParser entityRefXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, TriggeringEntitiesImpl object) {
      EntityRefImpl entityRefs = new EntityRefImpl();
      // Setting the parent
      entityRefs.setParent(object);
      this.entityRefXmlParser.parseElement(indexedElement, parserContext, entityRefs);
      List<IEntityRef> entityRefsList = object.getEntityRefs();
      if (entityRefsList == null) {
        entityRefsList = new ArrayList<>();
        object.setEntityRefs(entityRefsList);
      }
      entityRefsList.add(entityRefs);
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
      return elementName.equals(OscConstants.ELEMENT__ENTITY_REF);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ENTITY_REF};
    }
  }
}
