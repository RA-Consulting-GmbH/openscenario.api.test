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
import net.asam.openscenario.v1_0.api.ICatalogReference;
import net.asam.openscenario.v1_0.api.IManeuver;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.ActorsImpl;
import net.asam.openscenario.v1_0.impl.CatalogReferenceImpl;
import net.asam.openscenario.v1_0.impl.ManeuverGroupImpl;
import net.asam.openscenario.v1_0.impl.ManeuverImpl;
import net.asam.openscenario.v1_0.parser.CatalogReferenceParserContext;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ManeuverGroupImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ManeuverGroupXmlParser extends XmlComplexTypeParser<ManeuverGroupImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public ManeuverGroupXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<ManeuverGroupImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<ManeuverGroupImpl>> result = new Hashtable<>();
    result.put(
        OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT,
        new IAttributeParser<ManeuverGroupImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              ManeuverGroupImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    ManeuverGroupXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    ManeuverGroupXmlParser.this.filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT,
                  stripDollarSign(attributeValue),
                  startMarker);
            } else {
              // Parse value
              // Simple type
              object.setMaximumExecutionCount(parseUnsignedInt(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(
                OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__NAME,
        new IAttributeParser<ManeuverGroupImpl>() {
          @SuppressWarnings("synthetic-access")
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              ManeuverGroupImpl object) {

            Textmarker startMarker =
                new Textmarker(
                    startPosition.getLine(),
                    startPosition.getColumn(),
                    ManeuverGroupXmlParser.this.filename);
            Textmarker endMarker =
                new Textmarker(
                    endPosition.getLine(),
                    endPosition.getColumn(),
                    ManeuverGroupXmlParser.this.filename);
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
  private class SubElementParser extends XmlSequenceParser<ManeuverGroupImpl> {
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
    protected List<IElementParser<ManeuverGroupImpl>> createParserList() {
      List<IElementParser<ManeuverGroupImpl>> result = new ArrayList<>();
      result.add(new SubElementActorsParser());
      result.add(new SubElementCatalogReferencesParser());
      result.add(new SubElementManeuversParser());
      return result;
    }
  }
  /** A parser for subelement actors */
  @SuppressWarnings("synthetic-access")
  private class SubElementActorsParser implements IElementParser<ManeuverGroupImpl> {

    /** Constructor */
    public SubElementActorsParser() {
      super();
      this.actorsXmlParser =
          new ActorsXmlParser(
              ManeuverGroupXmlParser.this.messageLogger, ManeuverGroupXmlParser.this.filename);
    }

    private ActorsXmlParser actorsXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, ManeuverGroupImpl object) {
      ActorsImpl actors = new ActorsImpl();
      // Setting the parent
      actors.setParent(object);
      this.actorsXmlParser.parseElement(indexedElement, parserContext, actors);

      object.setActors(actors);
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
      return elementName.equals(OscConstants.ELEMENT__ACTORS);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ACTORS};
    }
  }
  /** A parser for subelement catalogReferences */
  @SuppressWarnings("synthetic-access")
  private class SubElementCatalogReferencesParser implements IElementParser<ManeuverGroupImpl> {

    /** Constructor */
    public SubElementCatalogReferencesParser() {
      super();
      this.catalogReferenceXmlParser =
          new CatalogReferenceXmlParser(
              ManeuverGroupXmlParser.this.messageLogger, ManeuverGroupXmlParser.this.filename);
    }

    private CatalogReferenceXmlParser catalogReferenceXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, ManeuverGroupImpl object) {
      CatalogReferenceImpl catalogReferences = new CatalogReferenceImpl();
      // Setting the parent
      catalogReferences.setParent(object);
      this.catalogReferenceXmlParser.parseElement(indexedElement, parserContext, catalogReferences);
      List<ICatalogReference> catalogReferencesList = object.getCatalogReferences();
      if (catalogReferencesList == null) {
        catalogReferencesList = new ArrayList<>();
        object.setCatalogReferences(catalogReferencesList);
      }
      catalogReferencesList.add(catalogReferences);
      ((CatalogReferenceParserContext) parserContext).addCatalogReference(catalogReferences);
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
      return elementName.equals(OscConstants.ELEMENT__CATALOG_REFERENCE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__CATALOG_REFERENCE};
    }
  }
  /** A parser for subelement maneuvers */
  @SuppressWarnings("synthetic-access")
  private class SubElementManeuversParser implements IElementParser<ManeuverGroupImpl> {

    /** Constructor */
    public SubElementManeuversParser() {
      super();
      this.maneuverXmlParser =
          new ManeuverXmlParser(
              ManeuverGroupXmlParser.this.messageLogger, ManeuverGroupXmlParser.this.filename);
    }

    private ManeuverXmlParser maneuverXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, ManeuverGroupImpl object) {
      ManeuverImpl maneuvers = new ManeuverImpl();
      // Setting the parent
      maneuvers.setParent(object);
      this.maneuverXmlParser.parseElement(indexedElement, parserContext, maneuvers);
      List<IManeuver> maneuversList = object.getManeuvers();
      if (maneuversList == null) {
        maneuversList = new ArrayList<>();
        object.setManeuvers(maneuversList);
      }
      maneuversList.add(maneuvers);
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
      return elementName.equals(OscConstants.ELEMENT__MANEUVER);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__MANEUVER};
    }
  }
}
