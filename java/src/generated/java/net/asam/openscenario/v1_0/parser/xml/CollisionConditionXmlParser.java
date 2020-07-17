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
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.ByObjectTypeImpl;
import net.asam.openscenario.v1_0.impl.CollisionConditionImpl;
import net.asam.openscenario.v1_0.impl.EntityRefImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CollisionConditionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class CollisionConditionXmlParser extends XmlComplexTypeParser<CollisionConditionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public CollisionConditionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  public void parseElement(
      IndexedElement indexedElement, ParserContext parserContext, CollisionConditionImpl object) {
    messageLogger.logMessage(
        new FileContentMessage(
            "Start Parsing CollisionCondition",
            ErrorLevel.DEBUG,
            new Textmarker(
                indexedElement.getStartElementLocation().getLine(),
                indexedElement.getStartElementLocation().getColumn(),
                filename)));
    super.parseElement(indexedElement, parserContext, object);
    messageLogger.logMessage(
        new FileContentMessage(
            "End Parsing CollisionCondition",
            ErrorLevel.DEBUG,
            new Textmarker(
                indexedElement.getEndElementLocation().getLine(),
                indexedElement.getEndElementLocation().getColumn(),
                filename)));
  }

  @Override
  protected Map<String, IAttributeParser<CollisionConditionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<CollisionConditionImpl>> result =
        new Hashtable<String, IAttributeParser<CollisionConditionImpl>>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlChoiceParser<CollisionConditionImpl> {
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
    protected List<IElementParser<CollisionConditionImpl>> createParserList() {
      List<IElementParser<CollisionConditionImpl>> result =
          new ArrayList<IElementParser<CollisionConditionImpl>>();
      result.add(new SubElementEntityRefParser());
      result.add(new SubElementByTypeParser());
      return result;
    }
  }
  /** A parser for subelement entityRef */
  private class SubElementEntityRefParser implements IElementParser<CollisionConditionImpl> {

    /** Constructor */
    public SubElementEntityRefParser() {
      super();
      entityRefXmlParser = new EntityRefXmlParser(messageLogger, filename);
    }

    private EntityRefXmlParser entityRefXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CollisionConditionImpl object) {
      EntityRefImpl entityRef = new EntityRefImpl();
      // Setting the parent
      entityRef.setParent(object);
      entityRefXmlParser.parseElement(indexedElement, parserContext, entityRef);

      object.setEntityRef(entityRef);
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
      return elementName.equals(OscConstants.ELEMENT__ENTITY_REF);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ENTITY_REF};
    }
  }
  /** A parser for subelement byType */
  private class SubElementByTypeParser implements IElementParser<CollisionConditionImpl> {

    /** Constructor */
    public SubElementByTypeParser() {
      super();
      byObjectTypeXmlParser = new ByObjectTypeXmlParser(messageLogger, filename);
    }

    private ByObjectTypeXmlParser byObjectTypeXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CollisionConditionImpl object) {
      ByObjectTypeImpl byType = new ByObjectTypeImpl();
      // Setting the parent
      byType.setParent(object);
      byObjectTypeXmlParser.parseElement(indexedElement, parserContext, byType);

      object.setByType(byType);
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
      return elementName.equals(OscConstants.ELEMENT__BY_TYPE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__BY_TYPE};
    }
  }
}
