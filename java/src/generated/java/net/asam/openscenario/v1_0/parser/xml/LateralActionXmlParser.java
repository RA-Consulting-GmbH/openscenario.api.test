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

import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.simple.struct.IndexedElement;
import net.asam.openscenario.parser.ParserContext;
import net.asam.openscenario.v1_0.parser.CatalogReferenceParserContext;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.xml.indexer.Position;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.common.ErrorLevel;
import java.util.List;

import net.asam.openscenario.v1_0.impl.LateralDistanceActionImpl;
import net.asam.openscenario.v1_0.impl.LateralActionImpl;
import net.asam.openscenario.v1_0.impl.LaneChangeActionImpl;
import net.asam.openscenario.v1_0.impl.LaneOffsetActionImpl;


import net.asam.openscenario.parser.modelgroup.XmlChoiceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LateralActionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LateralActionXmlParser extends XmlComplexTypeParser<LateralActionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public LateralActionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,LateralActionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing LateralAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing LateralAction", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<LateralActionImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<LateralActionImpl>> result  = new Hashtable<String, IAttributeParser<LateralActionImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlChoiceParser<LateralActionImpl>{
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
		protected  List<IElementParser<LateralActionImpl>> createParserList()
		{
			List<IElementParser<LateralActionImpl>> result = new ArrayList<IElementParser<LateralActionImpl>>();
			result.add(new SubElementLaneChangeActionParser());
			result.add(new SubElementLaneOffsetActionParser());
			result.add(new SubElementLateralDistanceActionParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement laneChangeAction
	 */
	private class SubElementLaneChangeActionParser implements IElementParser<LateralActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementLaneChangeActionParser()
		{
			super();
			laneChangeActionXmlParser = new LaneChangeActionXmlParser(messageLogger, filename);
		}
		private LaneChangeActionXmlParser laneChangeActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,LateralActionImpl object)
		{
			LaneChangeActionImpl laneChangeAction = new LaneChangeActionImpl();
			// Setting the parent
			laneChangeAction.setParent(object);
			laneChangeActionXmlParser.parseElement(indexedElement,parserContext, laneChangeAction);

			object.setLaneChangeAction( laneChangeAction);
			
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
				elementName.equals(OscConstants.ELEMENT__LANE_CHANGE_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__LANE_CHANGE_ACTION
					};
		}
	}
	/**
	 * A parser for subelement laneOffsetAction
	 */
	private class SubElementLaneOffsetActionParser implements IElementParser<LateralActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementLaneOffsetActionParser()
		{
			super();
			laneOffsetActionXmlParser = new LaneOffsetActionXmlParser(messageLogger, filename);
		}
		private LaneOffsetActionXmlParser laneOffsetActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,LateralActionImpl object)
		{
			LaneOffsetActionImpl laneOffsetAction = new LaneOffsetActionImpl();
			// Setting the parent
			laneOffsetAction.setParent(object);
			laneOffsetActionXmlParser.parseElement(indexedElement,parserContext, laneOffsetAction);

			object.setLaneOffsetAction( laneOffsetAction);
			
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
				elementName.equals(OscConstants.ELEMENT__LANE_OFFSET_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__LANE_OFFSET_ACTION
					};
		}
	}
	/**
	 * A parser for subelement lateralDistanceAction
	 */
	private class SubElementLateralDistanceActionParser implements IElementParser<LateralActionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementLateralDistanceActionParser()
		{
			super();
			lateralDistanceActionXmlParser = new LateralDistanceActionXmlParser(messageLogger, filename);
		}
		private LateralDistanceActionXmlParser lateralDistanceActionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,LateralActionImpl object)
		{
			LateralDistanceActionImpl lateralDistanceAction = new LateralDistanceActionImpl();
			// Setting the parent
			lateralDistanceAction.setParent(object);
			lateralDistanceActionXmlParser.parseElement(indexedElement,parserContext, lateralDistanceAction);

			object.setLateralDistanceAction( lateralDistanceAction);
			
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
				elementName.equals(OscConstants.ELEMENT__LATERAL_DISTANCE_ACTION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__LATERAL_DISTANCE_ACTION
					};
		}
	}
}

