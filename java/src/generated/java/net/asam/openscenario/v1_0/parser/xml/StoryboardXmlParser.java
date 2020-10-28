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
import net.asam.openscenario.v1_0.api.writer.IStoryWriter;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.v1_0.impl.InitImpl;
import net.asam.openscenario.v1_0.impl.StoryImpl;
import net.asam.openscenario.v1_0.impl.StoryboardImpl;
import net.asam.openscenario.v1_0.impl.TriggerImpl;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a StoryboardImpl instance from an xml tree.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class StoryboardXmlParser extends XmlComplexTypeParser<StoryboardImpl> {

  /**
   * Constructor
   *
   * @param messageLogger to log messages during parsing
   * @param filename to locate the messages in a file
   */
  public StoryboardXmlParser(IParserMessageLogger messageLogger, String filename) {
    super(messageLogger, filename);
    this.subElementParser = new SubElementParser(messageLogger, filename);
  }

  @Override
  protected Map<String, IAttributeParser<StoryboardImpl>> getAttributeNameToAttributeParserMap() {
    Map<String, IAttributeParser<StoryboardImpl>> result = new Hashtable<>();
    return result;
  }

  /** Parser for all subelements */
  private class SubElementParser extends XmlSequenceParser<StoryboardImpl> {
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
    protected List<IElementParser<StoryboardImpl>> createParserList() {
      List<IElementParser<StoryboardImpl>> result = new ArrayList<>();
      result.add(new SubElementInitParser());
      result.add(new SubElementStoriesParser());
      result.add(new SubElementStopTriggerParser());
      return result;
    }
  }
  /** A parser for subelement init */
  @SuppressWarnings("synthetic-access")
  private class SubElementInitParser implements IElementParser<StoryboardImpl> {

    /** Constructor */
    public SubElementInitParser() {
      super();
      this.initXmlParser =
          new InitXmlParser(
              StoryboardXmlParser.this.messageLogger, StoryboardXmlParser.this.filename);
    }

    private InitXmlParser initXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, StoryboardImpl object) {
      InitImpl init = new InitImpl();
      // Setting the parent
      init.setParent(object);
      this.initXmlParser.parseElement(indexedElement, parserContext, init);

      object.setInit(init);
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
      return elementName.equals(OscConstants.ELEMENT__INIT);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__INIT};
    }
  }
  /** A parser for subelement stories */
  @SuppressWarnings("synthetic-access")
  private class SubElementStoriesParser implements IElementParser<StoryboardImpl> {

    /** Constructor */
    public SubElementStoriesParser() {
      super();
      this.storyXmlParser =
          new StoryXmlParser(
              StoryboardXmlParser.this.messageLogger, StoryboardXmlParser.this.filename);
    }

    private StoryXmlParser storyXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, StoryboardImpl object) {
      StoryImpl stories = new StoryImpl();
      // Setting the parent
      stories.setParent(object);
      this.storyXmlParser.parseElement(indexedElement, parserContext, stories);
      List<IStoryWriter> storiesList = object.getWriterStories();
      if (storiesList == null) {
        storiesList = new ArrayList<>();
        object.setStories(storiesList);
      }
      storiesList.add(stories);
    }

    @Override
    public int getMinOccur() {
      return 1;
    }

    @Override
    public int getMaxOccur() {
      return -1;
    }

    @Override
    public boolean doesMatch(String elementName) {
      return elementName.equals(OscConstants.ELEMENT__STORY);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__STORY};
    }
  }
  /** A parser for subelement stopTrigger */
  @SuppressWarnings("synthetic-access")
  private class SubElementStopTriggerParser implements IElementParser<StoryboardImpl> {

    /** Constructor */
    public SubElementStopTriggerParser() {
      super();
      this.triggerXmlParser =
          new TriggerXmlParser(
              StoryboardXmlParser.this.messageLogger, StoryboardXmlParser.this.filename);
    }

    private TriggerXmlParser triggerXmlParser;

    @Override
    public void parse(
        IndexedElement indexedElement, ParserContext parserContext, StoryboardImpl object) {
      TriggerImpl stopTrigger = new TriggerImpl();
      // Setting the parent
      stopTrigger.setParent(object);
      this.triggerXmlParser.parseElement(indexedElement, parserContext, stopTrigger);

      object.setStopTrigger(stopTrigger);
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
      return elementName.equals(OscConstants.ELEMENT__STOP_TRIGGER);
    }

    @Override
    public String[] getExpectedTagNames() {
      return new String[] {OscConstants.ELEMENT__STOP_TRIGGER};
    }
  }
}
