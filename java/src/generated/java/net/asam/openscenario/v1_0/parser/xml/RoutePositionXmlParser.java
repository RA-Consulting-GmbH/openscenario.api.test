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
    subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  public void parseElement(
      IndexedElement indexedElement, ParserContext parserContext, RoutePositionImpl object) {
    messageLogger.logMessage(
        new FileContentMessage(
            "Start Parsing RoutePosition",
            ErrorLevel.DEBUG,
            new Textmarker(
                indexedElement.getStartElementLocation().getLine(),
                indexedElement.getStartElementLocation().getColumn(),
                filename)));
    super.parseElement(indexedElement, parserContext, object);
    messageLogger.logMessage(
        new FileContentMessage(
            "End Parsing RoutePosition",
            ErrorLevel.DEBUG,
            new Textmarker(
                indexedElement.getEndElementLocation().getLine(),
                indexedElement.getEndElementLocation().getColumn(),
                filename)));
  }

  @Override
  protected Map<String, IAttributeParser<RoutePositionImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<RoutePositionImpl>> result =
        new Hashtable<String, IAttributeParser<RoutePositionImpl>>();
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
    protected List<IElementParser<RoutePositionImpl>> createParserList() {
      List<IElementParser<RoutePositionImpl>> result =
          new ArrayList<IElementParser<RoutePositionImpl>>();
      result.add(new SubElementRouteRefParser());
      result.add(new SubElementOrientationParser());
      result.add(new SubElementInRoutePositionParser());
      return result;
    }
  }
  /** A parser for subelement routeRef */
  private class SubElementRouteRefParser implements IElementParser<RoutePositionImpl> {

    /** Constructor */
    public SubElementRouteRefParser() {
      super();
      routeRefXmlParser = new RouteRefXmlParser(messageLogger, filename);
    }

    private RouteRefXmlParser routeRefXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, RoutePositionImpl object) {
      RouteRefImpl routeRef = new RouteRefImpl();
      // Setting the parent
      routeRef.setParent(object);
      routeRefXmlParser.parseElement(indexedElement, parserContext, routeRef);

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
  private class SubElementOrientationParser implements IElementParser<RoutePositionImpl> {

    /** Constructor */
    public SubElementOrientationParser() {
      super();
      orientationXmlParser = new OrientationXmlParser(messageLogger, filename);
    }

    private OrientationXmlParser orientationXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, RoutePositionImpl object) {
      OrientationImpl orientation = new OrientationImpl();
      // Setting the parent
      orientation.setParent(object);
      orientationXmlParser.parseElement(indexedElement, parserContext, orientation);

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
  private class SubElementInRoutePositionParser implements IElementParser<RoutePositionImpl> {

    /** Constructor */
    public SubElementInRoutePositionParser() {
      super();
      inRoutePositionXmlParser = new InRoutePositionXmlParser(messageLogger, filename);
    }

    private InRoutePositionXmlParser inRoutePositionXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, RoutePositionImpl object) {
      InRoutePositionImpl inRoutePosition = new InRoutePositionImpl();
      // Setting the parent
      inRoutePosition.setParent(object);
      inRoutePositionXmlParser.parseElement(indexedElement, parserContext, inRoutePosition);

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
