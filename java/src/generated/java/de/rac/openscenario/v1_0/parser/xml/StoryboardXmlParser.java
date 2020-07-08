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
package de.rac.openscenario.v1_0.parser.xml;

import de.rac.openscenario.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.simple.struct.IndexedElement;
import de.rac.openscenario.parser.ParserContext;
import de.rac.openscenario.v1_0.parser.CatalogReferenceParserContext;
import de.rac.openscenario.common.FileContentMessage;
import de.rac.xml.indexer.Position;
import de.rac.openscenario.common.Textmarker;
import de.rac.openscenario.common.ErrorLevel;
import java.util.List;
import de.rac.openscenario.v1_0.api.IStory;

import de.rac.openscenario.v1_0.impl.InitImpl;
import de.rac.openscenario.v1_0.impl.TriggerImpl;
import de.rac.openscenario.v1_0.impl.StoryboardImpl;
import de.rac.openscenario.v1_0.impl.StoryImpl;


import de.rac.openscenario.parser.modelgroup.XmlSequenceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a StoryboardImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class StoryboardXmlParser extends XmlComplexTypeParser<StoryboardImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public StoryboardXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,StoryboardImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing Storyboard", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing Storyboard", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<StoryboardImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<StoryboardImpl>> result  = new Hashtable<String, IAttributeParser<StoryboardImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlSequenceParser<StoryboardImpl>{
		/**
		 * Constructor
		 * @param messageLogger to log messages during parsing
		 * @param filename to locate the messages in a file
		 */
		public SubElementParser (IParserMessageLogger messageLogger, String filename) {
			super( messageLogger, filename);	
		}
		/*
		 * Creates a list of parser
		 */
		protected  List<IElementParser<StoryboardImpl>> createParserList()
		{
			List<IElementParser<StoryboardImpl>> result = new ArrayList<IElementParser<StoryboardImpl>>();
			result.add(new SubElementInitParser());
			result.add(new SubElementStoriesParser());
			result.add(new SubElementStopTriggerParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement init
	 */
	private class SubElementInitParser implements IElementParser<StoryboardImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementInitParser()
		{
			super();
			initXmlParser = new InitXmlParser(messageLogger, filename);
		}
		private InitXmlParser initXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,StoryboardImpl object)
		{
			InitImpl init = new InitImpl();
			// Setting the parent
			init.setParent(object);
			initXmlParser.parseElement(indexedElement,parserContext, init);

			object.setInit( init);
			
		}

		@Override
		public int getMinOccur()
		{
			return 1;
		}
		
		@Override
		public int getMaxOccur()
		{
			return 1;
		}
		
		@Override
		public boolean doesMatch(String elementName)
		{
			return
				elementName.equals(OscConstants.ELEMENT__INIT) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__INIT
					};
		}
	}
	/**
	 * A parser for subelement stories
	 */
	private class SubElementStoriesParser implements IElementParser<StoryboardImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementStoriesParser()
		{
			super();
			storyXmlParser = new StoryXmlParser(messageLogger, filename);
		}
		private StoryXmlParser storyXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,StoryboardImpl object)
		{
			StoryImpl stories = new StoryImpl();
			// Setting the parent
			stories.setParent(object);
			storyXmlParser.parseElement(indexedElement,parserContext, stories);
			List<IStory> storiesList = object.getStories();
			if (storiesList == null)
			{
				storiesList = new ArrayList<IStory>();
				object.setStories( storiesList);
			}
			storiesList.add(stories);
			
		}

		@Override
		public int getMinOccur()
		{
			return 1;
		}
		
		@Override
		public int getMaxOccur()
		{
			return -1;
		}
		
		@Override
		public boolean doesMatch(String elementName)
		{
			return
				elementName.equals(OscConstants.ELEMENT__STORY) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__STORY
					};
		}
	}
	/**
	 * A parser for subelement stopTrigger
	 */
	private class SubElementStopTriggerParser implements IElementParser<StoryboardImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementStopTriggerParser()
		{
			super();
			triggerXmlParser = new TriggerXmlParser(messageLogger, filename);
		}
		private TriggerXmlParser triggerXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,StoryboardImpl object)
		{
			TriggerImpl stopTrigger = new TriggerImpl();
			// Setting the parent
			stopTrigger.setParent(object);
			triggerXmlParser.parseElement(indexedElement,parserContext, stopTrigger);

			object.setStopTrigger( stopTrigger);
			
		}

		@Override
		public int getMinOccur()
		{
			return 1;
		}
		
		@Override
		public int getMaxOccur()
		{
			return 1;
		}
		
		@Override
		public boolean doesMatch(String elementName)
		{
			return
				elementName.equals(OscConstants.ELEMENT__STOP_TRIGGER) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__STOP_TRIGGER
					};
		}
	}
}

