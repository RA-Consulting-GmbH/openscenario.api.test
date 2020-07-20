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
import net.asam.openscenario.parser.modelgroup.XmlChoiceParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.api.IEntity;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.AddEntityActionImpl;
import net.asam.openscenario.v1_0.impl.DeleteEntityActionImpl;
import net.asam.openscenario.v1_0.impl.EntityActionImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EntityActionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class EntityActionXmlParser extends XmlComplexTypeParser<EntityActionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public EntityActionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<EntityActionImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<EntityActionImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__ENTITY_REF,
        new IAttributeParser<EntityActionImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              EntityActionImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    EntityActionXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    EntityActionXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__ENTITY_REF, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Proxy
              NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<>(attributeValue);
              proxy.setParent(object);
              object.setEntityRef(proxy);
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__ENTITY_REF, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__ENTITY_REF, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlChoiceParser<EntityActionImpl> {
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
    protected List<IElementParser<EntityActionImpl>> createParserList() {
      List<IElementParser<EntityActionImpl>> result = new ArrayList<>();
      result.add(new SubElementAddEntityActionParser());
      result.add(new SubElementDeleteEntityActionParser());
      return result;
    }
  }
  /** A parser for subelement addEntityAction */
  @SuppressWarnings("synthetic-access")
  private class SubElementAddEntityActionParser implements IElementParser<EntityActionImpl> {

    /** Constructor */
    public SubElementAddEntityActionParser() {
      super();
      this.addEntityActionXmlParser =
          new AddEntityActionXmlParser(
              EntityActionXmlParser.this.messageLogger, EntityActionXmlParser.this.filename);
    }

    private AddEntityActionXmlParser addEntityActionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityActionImpl object) {
      AddEntityActionImpl addEntityAction = new AddEntityActionImpl();
      // Setting the parent
      addEntityAction.setParent(object);
      this.addEntityActionXmlParser.parseElement(indexedElement, parserContext, addEntityAction);

      object.setAddEntityAction(addEntityAction);
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
      return elementName.equals(OscConstants.ELEMENT__ADD_ENTITY_ACTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ADD_ENTITY_ACTION};
    }
  }
  /** A parser for subelement deleteEntityAction */
  @SuppressWarnings("synthetic-access")
  private class SubElementDeleteEntityActionParser implements IElementParser<EntityActionImpl> {

    /** Constructor */
    public SubElementDeleteEntityActionParser() {
      super();
      this.deleteEntityActionXmlParser =
          new DeleteEntityActionXmlParser(
              EntityActionXmlParser.this.messageLogger, EntityActionXmlParser.this.filename);
    }

    private DeleteEntityActionXmlParser deleteEntityActionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, EntityActionImpl object) {
      DeleteEntityActionImpl deleteEntityAction = new DeleteEntityActionImpl();
      // Setting the parent
      deleteEntityAction.setParent(object);
      this.deleteEntityActionXmlParser.parseElement(
          indexedElement, parserContext, deleteEntityAction);

      object.setDeleteEntityAction(deleteEntityAction);
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
      return elementName.equals(OscConstants.ELEMENT__DELETE_ENTITY_ACTION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__DELETE_ENTITY_ACTION};
    }
  }
}
