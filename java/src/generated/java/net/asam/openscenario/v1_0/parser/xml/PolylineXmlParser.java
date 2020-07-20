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
import net.asam.openscenario.v1_0.api.IVertex;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.PolylineImpl;
import net.asam.openscenario.v1_0.impl.VertexImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a PolylineImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class PolylineXmlParser extends XmlComplexTypeParser<PolylineImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public PolylineXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<PolylineImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<PolylineImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<PolylineImpl> {
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
    protected List<IElementParser<PolylineImpl>> createParserList() {
      List<IElementParser<PolylineImpl>> result = new ArrayList<>();
      result.add(new SubElementVerticesParser());
      return result;
    }
  }
  /** A parser for subelement vertices */
  @SuppressWarnings("synthetic-access")
  private class SubElementVerticesParser implements IElementParser<PolylineImpl> {

    /** Constructor */
    public SubElementVerticesParser() {
      super();
      this.vertexXmlParser =
          new VertexXmlParser(
              PolylineXmlParser.this.messageLogger, PolylineXmlParser.this.filename);
    }

    private VertexXmlParser vertexXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, PolylineImpl object) {
      VertexImpl vertices = new VertexImpl();
      // Setting the parent
      vertices.setParent(object);
      this.vertexXmlParser.parseElement(indexedElement, parserContext, vertices);
      List<IVertex> verticesList = object.getVertices();
      if (verticesList == null) {
        verticesList = new ArrayList<>();
        object.setVertices(verticesList);
      }
      verticesList.add(vertices);
    }

    @Override
    public int getMinOccur() {
      return 2;
    }

    @Override
    public int getMaxOccur() {
      return -1;
    }

    @Override
    public boolean doesMatch(String elementName) {
      return elementName.equals(OscConstants.ELEMENT__VERTEX);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__VERTEX};
    }
  }
}
