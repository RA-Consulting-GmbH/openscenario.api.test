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

import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.v1_0.simple.struct.IndexedElement;
import de.rac.openscenario.v1_0.parser.ParserContext;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.xml.indexer.Position;
import de.rac.openscenario.v1_0.common.Textmarker;
import de.rac.openscenario.v1_0.common.ErrorLevel;
import java.util.List;
import de.rac.openscenario.v1_0.api.IManeuverGroup;

import de.rac.openscenario.v1_0.impl.TriggerImpl;
import de.rac.openscenario.v1_0.impl.ManeuverGroupImpl;
import de.rac.openscenario.v1_0.impl.ActImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlSequenceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ActImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ActXmlParser extends XmlComplexTypeParser<ActImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public ActXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,ActImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing Act", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing Act", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<ActImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<ActImpl>> result  = new Hashtable<String, IAttributeParser<ActImpl>>();
		result.put(OscConstants.ATTRIBUTE__NAME, new IAttributeParser<ActImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, ActImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__NAME, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setName(parseString(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__NAME, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__NAME, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 1;
			}
			
		});
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlSequenceParser<ActImpl>{
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
		protected  List<IElementParser<ActImpl>> createParserList()
		{
			List<IElementParser<ActImpl>> result = new ArrayList<IElementParser<ActImpl>>();
			result.add(new SubElementManeuverGroupsParser());
			result.add(new SubElementStartTriggerParser());
			result.add(new SubElementStopTriggerParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement maneuverGroups
	 */
	private class SubElementManeuverGroupsParser implements IElementParser<ActImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementManeuverGroupsParser()
		{
			super();
			maneuverGroupXmlParser = new ManeuverGroupXmlParser(messageLogger, filename);
		}
		private ManeuverGroupXmlParser maneuverGroupXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ActImpl object)
		{
			ManeuverGroupImpl maneuverGroups = new ManeuverGroupImpl();
			// Setting the parent
			maneuverGroups.setParent(object);
			maneuverGroupXmlParser.parseElement(indexedElement,parserContext, maneuverGroups);
			List<IManeuverGroup> maneuverGroupsList = object.getManeuverGroups();
			if (maneuverGroupsList == null)
			{
				maneuverGroupsList = new ArrayList<IManeuverGroup>();
				object.setManeuverGroups( maneuverGroupsList);
			}
			maneuverGroupsList.add(maneuverGroups);
			
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
				elementName.equals(OscConstants.ELEMENT__MANEUVER_GROUP) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__MANEUVER_GROUP
					};
		}
	}
	/**
	 * A parser for subelement startTrigger
	 */
	private class SubElementStartTriggerParser implements IElementParser<ActImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementStartTriggerParser()
		{
			super();
			triggerXmlParser = new TriggerXmlParser(messageLogger, filename);
		}
		private TriggerXmlParser triggerXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ActImpl object)
		{
			TriggerImpl startTrigger = new TriggerImpl();
			// Setting the parent
			startTrigger.setParent(object);
			triggerXmlParser.parseElement(indexedElement,parserContext, startTrigger);

			object.setStartTrigger( startTrigger);
			
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
				elementName.equals(OscConstants.ELEMENT__START_TRIGGER) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__START_TRIGGER
					};
		}
	}
	/**
	 * A parser for subelement stopTrigger
	 */
	private class SubElementStopTriggerParser implements IElementParser<ActImpl> {
	
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
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ActImpl object)
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
			return 0;
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

