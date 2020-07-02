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

import de.rac.openscenario.v1_0.impl.LaneOffsetTargetImpl;
import de.rac.openscenario.v1_0.impl.LaneOffsetActionDynamicsImpl;
import de.rac.openscenario.v1_0.impl.LaneOffsetActionImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlAllParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LaneOffsetActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LaneOffsetActionXmlParser extends XmlComplexTypeParser<LaneOffsetActionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public LaneOffsetActionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,LaneOffsetActionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing LaneOffsetAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing LaneOffsetAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<LaneOffsetActionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<LaneOffsetActionImpl>> result  = new Hashtable<String, IAttributeParser<LaneOffsetActionImpl>>();
		result.put(OscConstants.ATTRIBUTE__CONTINUOUS, new IAttributeParser<LaneOffsetActionImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, LaneOffsetActionImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__CONTINUOUS, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setContinuous(parseBoolean(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__CONTINUOUS, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__CONTINUOUS, endMarker);
				
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
	private class SubElementParser extends XmlAllParser<LaneOffsetActionImpl>{
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
		protected  List<IElementParser<LaneOffsetActionImpl>> createParserList()
		{
			List<IElementParser<LaneOffsetActionImpl>> result = new ArrayList<IElementParser<LaneOffsetActionImpl>>();
			result.add(new SubElementLaneOffsetActionDynamicsParser());
			result.add(new SubElementLaneOffsetTargetParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement laneOffsetActionDynamics
	 */
	private class SubElementLaneOffsetActionDynamicsParser implements IElementParser<LaneOffsetActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementLaneOffsetActionDynamicsParser()
		{
			super();
			laneOffsetActionDynamicsXmlParser = new LaneOffsetActionDynamicsXmlParser(messageLogger, filename);
		}
		private LaneOffsetActionDynamicsXmlParser laneOffsetActionDynamicsXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,LaneOffsetActionImpl object)
		{
			LaneOffsetActionDynamicsImpl laneOffsetActionDynamics = new LaneOffsetActionDynamicsImpl();
			// Setting the parent
			laneOffsetActionDynamics.setParent(object);
			laneOffsetActionDynamicsXmlParser.parseElement(indexedElement,parserContext, laneOffsetActionDynamics);

			object.setLaneOffsetActionDynamics( laneOffsetActionDynamics);
			
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
				elementName.equals(OscConstants.ELEMENT__LANE_OFFSET_ACTION_DYNAMICS) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__LANE_OFFSET_ACTION_DYNAMICS
					};
		}
	}
	/**
	 * A parser for subelement laneOffsetTarget
	 */
	private class SubElementLaneOffsetTargetParser implements IElementParser<LaneOffsetActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementLaneOffsetTargetParser()
		{
			super();
			laneOffsetTargetXmlParser = new LaneOffsetTargetXmlParser(messageLogger, filename);
		}
		private LaneOffsetTargetXmlParser laneOffsetTargetXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,LaneOffsetActionImpl object)
		{
			LaneOffsetTargetImpl laneOffsetTarget = new LaneOffsetTargetImpl();
			// Setting the parent
			laneOffsetTarget.setParent(object);
			laneOffsetTargetXmlParser.parseElement(indexedElement,parserContext, laneOffsetTarget);

			object.setLaneOffsetTarget( laneOffsetTarget);
			
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
				elementName.equals(OscConstants.ELEMENT__LANE_OFFSET_TARGET) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__LANE_OFFSET_TARGET
					};
		}
	}
}

