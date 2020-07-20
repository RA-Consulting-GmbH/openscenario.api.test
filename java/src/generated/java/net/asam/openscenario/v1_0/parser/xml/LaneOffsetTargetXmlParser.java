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
import net.asam.openscenario.v1_0.impl.AbsoluteTargetLaneOffsetImpl;
import net.asam.openscenario.v1_0.impl.LaneOffsetTargetImpl;
import net.asam.openscenario.v1_0.impl.RelativeTargetLaneOffsetImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LaneOffsetTargetImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class LaneOffsetTargetXmlParser extends XmlComplexTypeParser<LaneOffsetTargetImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public LaneOffsetTargetXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<LaneOffsetTargetImpl>>
      getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<LaneOffsetTargetImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlChoiceParser<LaneOffsetTargetImpl> {
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
    protected List<IElementParser<LaneOffsetTargetImpl>> createParserList() {
      List<IElementParser<LaneOffsetTargetImpl>> result = new ArrayList<>();
      result.add(new SubElementRelativeTargetLaneOffsetParser());
      result.add(new SubElementAbsoluteTargetLaneOffsetParser());
      return result;
    }
  }
  /** A parser for subelement relativeTargetLaneOffset */
  @SuppressWarnings("synthetic-access")
  private class SubElementRelativeTargetLaneOffsetParser
      implements IElementParser<LaneOffsetTargetImpl> {

    /** Constructor */
    public SubElementRelativeTargetLaneOffsetParser() {
      super();
      this.relativeTargetLaneOffsetXmlParser =
          new RelativeTargetLaneOffsetXmlParser(
              LaneOffsetTargetXmlParser.this.messageLogger,
              LaneOffsetTargetXmlParser.this.filename);
    }

    private RelativeTargetLaneOffsetXmlParser relativeTargetLaneOffsetXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, LaneOffsetTargetImpl object) {
      RelativeTargetLaneOffsetImpl relativeTargetLaneOffset = new RelativeTargetLaneOffsetImpl();
      // Setting the parent
      relativeTargetLaneOffset.setParent(object);
      this.relativeTargetLaneOffsetXmlParser.parseElement(
          indexedElement, parserContext, relativeTargetLaneOffset);

      object.setRelativeTargetLaneOffset(relativeTargetLaneOffset);
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
      return elementName.equals(OscConstants.ELEMENT__RELATIVE_TARGET_LANE_OFFSET);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__RELATIVE_TARGET_LANE_OFFSET};
    }
  }
  /** A parser for subelement absoluteTargetLaneOffset */
  @SuppressWarnings("synthetic-access")
  private class SubElementAbsoluteTargetLaneOffsetParser
      implements IElementParser<LaneOffsetTargetImpl> {

    /** Constructor */
    public SubElementAbsoluteTargetLaneOffsetParser() {
      super();
      this.absoluteTargetLaneOffsetXmlParser =
          new AbsoluteTargetLaneOffsetXmlParser(
              LaneOffsetTargetXmlParser.this.messageLogger,
              LaneOffsetTargetXmlParser.this.filename);
    }

    private AbsoluteTargetLaneOffsetXmlParser absoluteTargetLaneOffsetXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, LaneOffsetTargetImpl object) {
      AbsoluteTargetLaneOffsetImpl absoluteTargetLaneOffset = new AbsoluteTargetLaneOffsetImpl();
      // Setting the parent
      absoluteTargetLaneOffset.setParent(object);
      this.absoluteTargetLaneOffsetXmlParser.parseElement(
          indexedElement, parserContext, absoluteTargetLaneOffset);

      object.setAbsoluteTargetLaneOffset(absoluteTargetLaneOffset);
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
      return elementName.equals(OscConstants.ELEMENT__ABSOLUTE_TARGET_LANE_OFFSET);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__ABSOLUTE_TARGET_LANE_OFFSET};
    }
  }
}
