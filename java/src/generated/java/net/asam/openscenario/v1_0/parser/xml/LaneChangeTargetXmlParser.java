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
import net.asam.openscenario.v1_0.impl.AbsoluteTargetLaneImpl;
import net.asam.openscenario.v1_0.impl.LaneChangeTargetImpl;
import net.asam.openscenario.v1_0.impl.RelativeTargetLaneImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LaneChangeTargetImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class LaneChangeTargetXmlParser extends XmlComplexTypeParser<LaneChangeTargetImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public LaneChangeTargetXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<LaneChangeTargetImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<LaneChangeTargetImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlChoiceParser<LaneChangeTargetImpl> {
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
    protected List<IElementParser<LaneChangeTargetImpl>> createParserList() {
      List<IElementParser<LaneChangeTargetImpl>> result = new ArrayList<>();
      result.add(new SubElementRelativeTargetLaneParser());
      result.add(new SubElementAbsoluteTargetLaneParser());
      return result;
    }
  }
  /** A parser for subelement relativeTargetLane */
  @SuppressWarnings("synthetic-access")
  private class SubElementRelativeTargetLaneParser implements IElementParser<LaneChangeTargetImpl> {

    /** Constructor */
    public SubElementRelativeTargetLaneParser() {
      super();
      this.relativeTargetLaneXmlParser =
          new RelativeTargetLaneXmlParser(
              LaneChangeTargetXmlParser.this.messageLogger,
              LaneChangeTargetXmlParser.this.filename);
    }

    private RelativeTargetLaneXmlParser relativeTargetLaneXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, LaneChangeTargetImpl object) {
      RelativeTargetLaneImpl relativeTargetLane = new RelativeTargetLaneImpl();
      // Setting the parent
      relativeTargetLane.setParent(object);
      this.relativeTargetLaneXmlParser.parseElement(
          indexedElement, parserContext, relativeTargetLane);

      object.setRelativeTargetLane(relativeTargetLane);
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
      return elementName.equals(OscConstants.ELEMENT__RELATIVE_TARGET_LANE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__RELATIVE_TARGET_LANE};
    }
  }
  /** A parser for subelement absoluteTargetLane */
  @SuppressWarnings("synthetic-access")
  private class SubElementAbsoluteTargetLaneParser implements IElementParser<LaneChangeTargetImpl> {

    /** Constructor */
    public SubElementAbsoluteTargetLaneParser() {
      super();
      this.absoluteTargetLaneXmlParser =
          new AbsoluteTargetLaneXmlParser(
              LaneChangeTargetXmlParser.this.messageLogger,
              LaneChangeTargetXmlParser.this.filename);
    }

    private AbsoluteTargetLaneXmlParser absoluteTargetLaneXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, LaneChangeTargetImpl object) {
      AbsoluteTargetLaneImpl absoluteTargetLane = new AbsoluteTargetLaneImpl();
      // Setting the parent
      absoluteTargetLane.setParent(object);
      this.absoluteTargetLaneXmlParser.parseElement(
          indexedElement, parserContext, absoluteTargetLane);

      object.setAbsoluteTargetLane(absoluteTargetLane);
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
      return elementName.equals(OscConstants.ELEMENT__ABSOLUTE_TARGET_LANE);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ABSOLUTE_TARGET_LANE};
    }
  }
}
