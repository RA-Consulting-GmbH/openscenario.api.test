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
import net.asam.openscenario.v1_0.api.IAxle;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.AxleImpl;
import net.asam.openscenario.v1_0.impl.AxlesImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a AxlesImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class AxlesXmlParser extends XmlComplexTypeParser<AxlesImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public AxlesXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<AxlesImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<AxlesImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<AxlesImpl> {
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
    protected List<IElementParser<AxlesImpl>> createParserList() {
      List<IElementParser<AxlesImpl>> result = new ArrayList<>();
      result.add(new SubElementFrontAxleParser());
      result.add(new SubElementRearAxleParser());
      result.add(new SubElementAdditionalAxlesParser());
      return result;
    }
  }
  /** A parser for subelement frontAxle */
  @SuppressWarnings("synthetic-access")
  private class SubElementFrontAxleParser implements IElementParser<AxlesImpl> {

    /** Constructor */
    public SubElementFrontAxleParser() {
      super();
      this.axleXmlParser =
          new AxleXmlParser(AxlesXmlParser.this.messageLogger, AxlesXmlParser.this.filename);
    }

    private AxleXmlParser axleXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, AxlesImpl object) {
      AxleImpl frontAxle = new AxleImpl();
      // Setting the parent
      frontAxle.setParent(object);
      this.axleXmlParser.parseElement(indexedElement, parserContext, frontAxle);

      object.setFrontAxle(frontAxle);
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
      return elementName.equals(OscConstants.ELEMENT__FRONT_AXLE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__FRONT_AXLE};
    }
  }
  /** A parser for subelement rearAxle */
  @SuppressWarnings("synthetic-access")
  private class SubElementRearAxleParser implements IElementParser<AxlesImpl> {

    /** Constructor */
    public SubElementRearAxleParser() {
      super();
      this.axleXmlParser =
          new AxleXmlParser(AxlesXmlParser.this.messageLogger, AxlesXmlParser.this.filename);
    }

    private AxleXmlParser axleXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, AxlesImpl object) {
      AxleImpl rearAxle = new AxleImpl();
      // Setting the parent
      rearAxle.setParent(object);
      this.axleXmlParser.parseElement(indexedElement, parserContext, rearAxle);

      object.setRearAxle(rearAxle);
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
      return elementName.equals(OscConstants.ELEMENT__REAR_AXLE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__REAR_AXLE};
    }
  }
  /** A parser for subelement additionalAxles */
  @SuppressWarnings("synthetic-access")
  private class SubElementAdditionalAxlesParser implements IElementParser<AxlesImpl> {

    /** Constructor */
    public SubElementAdditionalAxlesParser() {
      super();
      this.axleXmlParser =
          new AxleXmlParser(AxlesXmlParser.this.messageLogger, AxlesXmlParser.this.filename);
    }

    private AxleXmlParser axleXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, AxlesImpl object) {
      AxleImpl additionalAxles = new AxleImpl();
      // Setting the parent
      additionalAxles.setParent(object);
      this.axleXmlParser.parseElement(indexedElement, parserContext, additionalAxles);
      List<IAxle> additionalAxlesList = object.getAdditionalAxles();
      if (additionalAxlesList == null) {
        additionalAxlesList = new ArrayList<>();
        object.setAdditionalAxles(additionalAxlesList);
      }
      additionalAxlesList.add(additionalAxles);
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
      return elementName.equals(OscConstants.ELEMENT__ADDITIONAL_AXLE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ADDITIONAL_AXLE};
    }
  }
}
