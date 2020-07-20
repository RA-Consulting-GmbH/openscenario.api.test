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
import net.asam.openscenario.v1_0.impl.ClothoidImpl;
import net.asam.openscenario.v1_0.impl.NurbsImpl;
import net.asam.openscenario.v1_0.impl.PolylineImpl;
import net.asam.openscenario.v1_0.impl.ShapeImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ShapeImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ShapeXmlParser extends XmlComplexTypeParser<ShapeImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public ShapeXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<ShapeImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<ShapeImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlChoiceParser<ShapeImpl> {
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
    protected List<IElementParser<ShapeImpl>> createParserList() {
      List<IElementParser<ShapeImpl>> result = new ArrayList<>();
      result.add(new SubElementPolylineParser());
      result.add(new SubElementClothoidParser());
      result.add(new SubElementNurbsParser());
      return result;
    }
  }
  /** A parser for subelement polyline */
  @SuppressWarnings("synthetic-access")
  private class SubElementPolylineParser implements IElementParser<ShapeImpl> {

    /** Constructor */
    public SubElementPolylineParser() {
      super();
      this.polylineXmlParser =
          new PolylineXmlParser(ShapeXmlParser.this.messageLogger, ShapeXmlParser.this.filename);
    }

    private PolylineXmlParser polylineXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, ShapeImpl object) {
      PolylineImpl polyline = new PolylineImpl();
      // Setting the parent
      polyline.setParent(object);
      this.polylineXmlParser.parseElement(indexedElement, parserContext, polyline);

      object.setPolyline(polyline);
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
      return elementName.equals(OscConstants.ELEMENT__POLYLINE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__POLYLINE};
    }
  }
  /** A parser for subelement clothoid */
  @SuppressWarnings("synthetic-access")
  private class SubElementClothoidParser implements IElementParser<ShapeImpl> {

    /** Constructor */
    public SubElementClothoidParser() {
      super();
      this.clothoidXmlParser =
          new ClothoidXmlParser(ShapeXmlParser.this.messageLogger, ShapeXmlParser.this.filename);
    }

    private ClothoidXmlParser clothoidXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, ShapeImpl object) {
      ClothoidImpl clothoid = new ClothoidImpl();
      // Setting the parent
      clothoid.setParent(object);
      this.clothoidXmlParser.parseElement(indexedElement, parserContext, clothoid);

      object.setClothoid(clothoid);
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
      return elementName.equals(OscConstants.ELEMENT__CLOTHOID);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__CLOTHOID};
    }
  }
  /** A parser for subelement nurbs */
  @SuppressWarnings("synthetic-access")
  private class SubElementNurbsParser implements IElementParser<ShapeImpl> {

    /** Constructor */
    public SubElementNurbsParser() {
      super();
      this.nurbsXmlParser =
          new NurbsXmlParser(ShapeXmlParser.this.messageLogger, ShapeXmlParser.this.filename);
    }

    private NurbsXmlParser nurbsXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, ShapeImpl object) {
      NurbsImpl nurbs = new NurbsImpl();
      // Setting the parent
      nurbs.setParent(object);
      this.nurbsXmlParser.parseElement(indexedElement, parserContext, nurbs);

      object.setNurbs(nurbs);
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
      return elementName.equals(OscConstants.ELEMENT__NURBS);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__NURBS};
    }
  }
}
