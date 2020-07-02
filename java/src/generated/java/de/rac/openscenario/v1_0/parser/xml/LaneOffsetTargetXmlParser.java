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
import de.rac.openscenario.v1_0.impl.RelativeTargetLaneOffsetImpl;
import de.rac.openscenario.v1_0.impl.AbsoluteTargetLaneOffsetImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlChoiceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a LaneOffsetTargetImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LaneOffsetTargetXmlParser extends XmlComplexTypeParser<LaneOffsetTargetImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public LaneOffsetTargetXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,LaneOffsetTargetImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing LaneOffsetTarget", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing LaneOffsetTarget", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<LaneOffsetTargetImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<LaneOffsetTargetImpl>> result  = new Hashtable<String, IAttributeParser<LaneOffsetTargetImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlChoiceParser<LaneOffsetTargetImpl>{
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
		protected  List<IElementParser<LaneOffsetTargetImpl>> createParserList()
		{
			List<IElementParser<LaneOffsetTargetImpl>> result = new ArrayList<IElementParser<LaneOffsetTargetImpl>>();
			result.add(new SubElementRelativeTargetLaneOffsetParser());
			result.add(new SubElementAbsoluteTargetLaneOffsetParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement relativeTargetLaneOffset
	 */
	private class SubElementRelativeTargetLaneOffsetParser implements IElementParser<LaneOffsetTargetImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementRelativeTargetLaneOffsetParser()
		{
			super();
			relativeTargetLaneOffsetXmlParser = new RelativeTargetLaneOffsetXmlParser(messageLogger, filename);
		}
		private RelativeTargetLaneOffsetXmlParser relativeTargetLaneOffsetXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,LaneOffsetTargetImpl object)
		{
			RelativeTargetLaneOffsetImpl relativeTargetLaneOffset = new RelativeTargetLaneOffsetImpl();
			// Setting the parent
			relativeTargetLaneOffset.setParent(object);
			relativeTargetLaneOffsetXmlParser.parseElement(indexedElement,parserContext, relativeTargetLaneOffset);

			object.setRelativeTargetLaneOffset( relativeTargetLaneOffset);
			
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
				elementName.equals(OscConstants.ELEMENT__RELATIVE_TARGET_LANE_OFFSET) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__RELATIVE_TARGET_LANE_OFFSET
					};
		}
	}
	/**
	 * A parser for subelement absoluteTargetLaneOffset
	 */
	private class SubElementAbsoluteTargetLaneOffsetParser implements IElementParser<LaneOffsetTargetImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementAbsoluteTargetLaneOffsetParser()
		{
			super();
			absoluteTargetLaneOffsetXmlParser = new AbsoluteTargetLaneOffsetXmlParser(messageLogger, filename);
		}
		private AbsoluteTargetLaneOffsetXmlParser absoluteTargetLaneOffsetXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,LaneOffsetTargetImpl object)
		{
			AbsoluteTargetLaneOffsetImpl absoluteTargetLaneOffset = new AbsoluteTargetLaneOffsetImpl();
			// Setting the parent
			absoluteTargetLaneOffset.setParent(object);
			absoluteTargetLaneOffsetXmlParser.parseElement(indexedElement,parserContext, absoluteTargetLaneOffset);

			object.setAbsoluteTargetLaneOffset( absoluteTargetLaneOffset);
			
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
				elementName.equals(OscConstants.ELEMENT__ABSOLUTE_TARGET_LANE_OFFSET) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ABSOLUTE_TARGET_LANE_OFFSET
					};
		}
	}
}

