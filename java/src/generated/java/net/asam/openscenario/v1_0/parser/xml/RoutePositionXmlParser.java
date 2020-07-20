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
import net.asam.openscenario.parser.modelgroup.XmlAllParser;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.InRoutePositionImpl;
import net.asam.openscenario.v1_0.impl.OrientationImpl;
import net.asam.openscenario.v1_0.impl.RoutePositionImpl;
import net.asam.openscenario.v1_0.impl.RouteRefImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a RoutePositionImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class RoutePositionXmlParser extends XmlComplexTypeParser<RoutePositionImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public RoutePositionXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<RoutePositionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<RoutePositionImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlAllParser<RoutePositionImpl> {
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
    protected List<IElementParser<RoutePositionImpl>> createParserList() {
      List<IElementParser<RoutePositionImpl>> result = new ArrayList<>();
      result.add(new SubElementRouteRefParser());
      result.add(new SubElementOrientationParser());
      result.add(new SubElementInRoutePositionParser());
      return result;
    }
  }
  /** A parser for subelement routeRef */
  @SuppressWarnings("synthetic-access")
  private class SubElementRouteRefParser implements IElementParser<RoutePositionImpl> {

    /** Constructor */
    public SubElementRouteRefParser() {
      super();
      this.routeRefXmlParser =
          new RouteRefXmlParser(
              RoutePositionXmlParser.this.messageLogger, RoutePositionXmlParser.this.filename);
    }

    private RouteRefXmlParser routeRefXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, RoutePositionImpl object) {
      RouteRefImpl routeRef = new RouteRefImpl();
      // Setting the parent
      routeRef.setParent(object);
      this.routeRefXmlParser.parseElement(indexedElement, parserContext, routeRef);

      object.setRouteRef(routeRef);
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
      return elementName.equals(OscConstants.ELEMENT__ROUTE_REF);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ROUTE_REF};
    }
  }
  /** A parser for subelement orientation */
  @SuppressWarnings("synthetic-access")
  private class SubElementOrientationParser implements IElementParser<RoutePositionImpl> {

    /** Constructor */
    public SubElementOrientationParser() {
      super();
      this.orientationXmlParser =
          new OrientationXmlParser(
              RoutePositionXmlParser.this.messageLogger, RoutePositionXmlParser.this.filename);
    }

    private OrientationXmlParser orientationXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, RoutePositionImpl object) {
      OrientationImpl orientation = new OrientationImpl();
      // Setting the parent
      orientation.setParent(object);
      this.orientationXmlParser.parseElement(indexedElement, parserContext, orientation);

      object.setOrientation(orientation);
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
      return elementName.equals(OscConstants.ELEMENT__ORIENTATION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ORIENTATION};
    }
  }
  /** A parser for subelement inRoutePosition */
  @SuppressWarnings("synthetic-access")
  private class SubElementInRoutePositionParser implements IElementParser<RoutePositionImpl> {

    /** Constructor */
    public SubElementInRoutePositionParser() {
      super();
      this.inRoutePositionXmlParser =
          new InRoutePositionXmlParser(
              RoutePositionXmlParser.this.messageLogger, RoutePositionXmlParser.this.filename);
    }

    private InRoutePositionXmlParser inRoutePositionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, RoutePositionImpl object) {
      InRoutePositionImpl inRoutePosition = new InRoutePositionImpl();
      // Setting the parent
      inRoutePosition.setParent(object);
      this.inRoutePositionXmlParser.parseElement(indexedElement, parserContext, inRoutePosition);

      object.setInRoutePosition(inRoutePosition);
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
      return elementName.equals(OscConstants.ELEMENT__IN_ROUTE_POSITION);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__IN_ROUTE_POSITION};
    }
  }
}
