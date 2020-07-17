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
import net.asam.openscenario.parser.WrappedListParser;
import net.asam.openscenario.parser.modelgroup.XmlSequenceParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.api.IParameterAssignment;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.CatalogReferenceImpl;
import net.asam.openscenario.v1_0.impl.ParameterAssignmentImpl;
import net.asam.xml.indexer.Position;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CatalogReferenceImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class CatalogReferenceXmlParser extends XmlComplexTypeParser<CatalogReferenceImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public CatalogReferenceXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  public void parseElement(
      IndexedElement indexedElement, ParserContext parserContext, CatalogReferenceImpl object) {
    messageLogger.logMessage(
        new FileContentMessage(
            "Start Parsing CatalogReference",
            ErrorLevel.DEBUG,
            new Textmarker(
                indexedElement.getStartElementLocation().getLine(),
                indexedElement.getStartElementLocation().getColumn(),
                filename)));
    super.parseElement(indexedElement, parserContext, object);
    messageLogger.logMessage(
        new FileContentMessage(
            "End Parsing CatalogReference",
            ErrorLevel.DEBUG,
            new Textmarker(
                indexedElement.getEndElementLocation().getLine(),
                indexedElement.getEndElementLocation().getColumn(),
                filename)));
  }

  @Override
  protected Map<String, IAttributeParser<CatalogReferenceImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<CatalogReferenceImpl>> result =
        new Hashtable<String, IAttributeParser<CatalogReferenceImpl>>();
    result.put(
        OscConstants.ATTRIBUTE__CATALOG_NAME,
        new IAttributeParser<CatalogReferenceImpl>() {
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              CatalogReferenceImpl object) {

            Textmarker startMarker =
                new Textmarker(startPosition.getLine(), startPosition.getColumn(), filename);
            Textmarker endMarker =
                new Textmarker(endPosition.getLine(), endPosition.getColumn(), filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__CATALOG_NAME,
                  stripDollarSign(attributeValue),
                  startMarker);
            } else {
              // Parse value
              // Simple type
              object.setCatalogName(parseString(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__CATALOG_NAME, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__CATALOG_NAME, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    result.put(
        OscConstants.ATTRIBUTE__ENTRY_NAME,
        new IAttributeParser<CatalogReferenceImpl>() {
          @Override
          public void parse(
              Position startPosition,
              Position endPosition,
              String attributeName,
              String attributeValue,
              CatalogReferenceImpl object) {

            Textmarker startMarker =
                new Textmarker(startPosition.getLine(), startPosition.getColumn(), filename);
            Textmarker endMarker =
                new Textmarker(endPosition.getLine(), endPosition.getColumn(), filename);
            if (isParametrized(attributeValue)) {
              object.setAttributeParameter(
                  OscConstants.ATTRIBUTE__ENTRY_NAME, stripDollarSign(attributeValue), startMarker);
            } else {
              // Parse value
              // Simple type
              object.setEntryName(parseString(attributeValue, startMarker));
            }
            object.putPropertyStartMarker(OscConstants.ATTRIBUTE__ENTRY_NAME, startMarker);
            object.putPropertyEndMarker(OscConstants.ATTRIBUTE__ENTRY_NAME, endMarker);
          }

          @Override
          public int getMinOccur() {
            return 1;
          }
        });
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<CatalogReferenceImpl> {
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
    protected List<IElementParser<CatalogReferenceImpl>> createParserList() {
      List<IElementParser<CatalogReferenceImpl>> result =
          new ArrayList<IElementParser<CatalogReferenceImpl>>();
      result.add(
          new WrappedListParser<CatalogReferenceImpl>(
              messageLogger,
              filename,
              new SubElementParameterAssignmentsParser(),
              OscConstants.ELEMENT__PARAMETER_ASSIGNMENTS));
      return result;
    }
  }
  /** A parser for subelement parameterAssignments */
  private class SubElementParameterAssignmentsParser
      implements IElementParser<CatalogReferenceImpl> {

    /** Constructor */
    public SubElementParameterAssignmentsParser() {
      super();
      parameterAssignmentXmlParser = new ParameterAssignmentXmlParser(messageLogger, filename);
    }

    private ParameterAssignmentXmlParser parameterAssignmentXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, CatalogReferenceImpl object) {
      ParameterAssignmentImpl parameterAssignments = new ParameterAssignmentImpl();
      // Setting the parent
      parameterAssignments.setParent(object);
      parameterAssignmentXmlParser.parseElement(
          indexedElement, parserContext, parameterAssignments);
      List<IParameterAssignment> parameterAssignmentsList = object.getParameterAssignments();
      if (parameterAssignmentsList == null) {
        parameterAssignmentsList = new ArrayList<IParameterAssignment>();
        object.setParameterAssignments(parameterAssignmentsList);
      }
      parameterAssignmentsList.add(parameterAssignments);
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
      return elementName.equals(OscConstants.ELEMENT__PARAMETER_ASSIGNMENT);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__PARAMETER_ASSIGNMENT};
    }
  }
}
