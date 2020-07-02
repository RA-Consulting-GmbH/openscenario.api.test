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

import de.rac.openscenario.v1_0.impl.TransitionDynamicsImpl;
import de.rac.openscenario.v1_0.impl.LaneChangeActionImpl;
import de.rac.openscenario.v1_0.impl.LaneChangeTargetImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlAllParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LaneChangeActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LaneChangeActionXmlParser extends XmlComplexTypeParser<LaneChangeActionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public LaneChangeActionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,LaneChangeActionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing LaneChangeAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing LaneChangeAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<LaneChangeActionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<LaneChangeActionImpl>> result  = new Hashtable<String, IAttributeParser<LaneChangeActionImpl>>();
		result.put(OscConstants.ATTRIBUTE__TARGET_LANE_OFFSET, new IAttributeParser<LaneChangeActionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, LaneChangeActionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__TARGET_LANE_OFFSET, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setTargetLaneOffset(parseDouble(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__TARGET_LANE_OFFSET, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__TARGET_LANE_OFFSET, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 0;
			}
			
		});
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlAllParser<LaneChangeActionImpl>{
		/**
		 * Constructor
		 * @param messageLogger to log messages during parsing
		 * @param filename to locate the messages in a file
		 */
		public SubElementParser (IParserMessageLogger messageLogger, String filename) {
			super(messageLogger,filename);	
		}
		/*
		 * Creates a list of parser
		 */
		protected  List<IElementParser<LaneChangeActionImpl>> createParserList()
		{
			List<IElementParser<LaneChangeActionImpl>> result = new ArrayList<IElementParser<LaneChangeActionImpl>>();
			result.add(new SubElementLaneChangeActionDynamicsParser());
			result.add(new SubElementLaneChangeTargetParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement laneChangeActionDynamics
	 */
	private class SubElementLaneChangeActionDynamicsParser implements IElementParser<LaneChangeActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementLaneChangeActionDynamicsParser()
		{
			super();
			transitionDynamicsXmlParser = new TransitionDynamicsXmlParser(messageLogger, filename);
		}
		private TransitionDynamicsXmlParser transitionDynamicsXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,LaneChangeActionImpl object)
		{
			TransitionDynamicsImpl laneChangeActionDynamics = new TransitionDynamicsImpl();
			// Setting the parent
			laneChangeActionDynamics.setParent(object);
			transitionDynamicsXmlParser.parseElement(indexedElement,parserContext, laneChangeActionDynamics);

			object.setLaneChangeActionDynamics( laneChangeActionDynamics);
			
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
				elementName.equals(OscConstants.ELEMENT__LANE_CHANGE_ACTION_DYNAMICS) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__LANE_CHANGE_ACTION_DYNAMICS
					};
		}
	}
	/**
	 * A parser for subelement laneChangeTarget
	 */
	private class SubElementLaneChangeTargetParser implements IElementParser<LaneChangeActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementLaneChangeTargetParser()
		{
			super();
			laneChangeTargetXmlParser = new LaneChangeTargetXmlParser(messageLogger, filename);
		}
		private LaneChangeTargetXmlParser laneChangeTargetXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,LaneChangeActionImpl object)
		{
			LaneChangeTargetImpl laneChangeTarget = new LaneChangeTargetImpl();
			// Setting the parent
			laneChangeTarget.setParent(object);
			laneChangeTargetXmlParser.parseElement(indexedElement,parserContext, laneChangeTarget);

			object.setLaneChangeTarget( laneChangeTarget);
			
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
				elementName.equals(OscConstants.ELEMENT__LANE_CHANGE_TARGET) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__LANE_CHANGE_TARGET
					};
		}
	}
}

