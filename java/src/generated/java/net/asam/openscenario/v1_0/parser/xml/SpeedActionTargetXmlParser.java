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

import net.asam.openscenario.v1_0.impl.SpeedActionTargetImpl;
import net.asam.openscenario.v1_0.impl.RelativeTargetSpeedImpl;
import net.asam.openscenario.v1_0.impl.AbsoluteTargetSpeedImpl;


import net.asam.openscenario.parser.modelgroup.XmlChoiceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a SpeedActionTargetImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class SpeedActionTargetXmlParser extends XmlComplexTypeParser<SpeedActionTargetImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public SpeedActionTargetXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,SpeedActionTargetImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing SpeedActionTarget", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing SpeedActionTarget", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<SpeedActionTargetImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<SpeedActionTargetImpl>> result  = new Hashtable<String, IAttributeParser<SpeedActionTargetImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlChoiceParser<SpeedActionTargetImpl>{
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
		protected  List<IElementParser<SpeedActionTargetImpl>> createParserList()
		{
			List<IElementParser<SpeedActionTargetImpl>> result = new ArrayList<IElementParser<SpeedActionTargetImpl>>();
			result.add(new SubElementRelativeTargetSpeedParser());
			result.add(new SubElementAbsoluteTargetSpeedParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement relativeTargetSpeed
	 */
	private class SubElementRelativeTargetSpeedParser implements IElementParser<SpeedActionTargetImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementRelativeTargetSpeedParser()
		{
			super();
			relativeTargetSpeedXmlParser = new RelativeTargetSpeedXmlParser(messageLogger, filename);
		}
		private RelativeTargetSpeedXmlParser relativeTargetSpeedXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,SpeedActionTargetImpl object)
		{
			RelativeTargetSpeedImpl relativeTargetSpeed = new RelativeTargetSpeedImpl();
			// Setting the parent
			relativeTargetSpeed.setParent(object);
			relativeTargetSpeedXmlParser.parseElement(indexedElement,parserContext, relativeTargetSpeed);

			object.setRelativeTargetSpeed( relativeTargetSpeed);
			
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
				elementName.equals(OscConstants.ELEMENT__RELATIVE_TARGET_SPEED) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__RELATIVE_TARGET_SPEED
					};
		}
	}
	/**
	 * A parser for subelement absoluteTargetSpeed
	 */
	private class SubElementAbsoluteTargetSpeedParser implements IElementParser<SpeedActionTargetImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementAbsoluteTargetSpeedParser()
		{
			super();
			absoluteTargetSpeedXmlParser = new AbsoluteTargetSpeedXmlParser(messageLogger, filename);
		}
		private AbsoluteTargetSpeedXmlParser absoluteTargetSpeedXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,SpeedActionTargetImpl object)
		{
			AbsoluteTargetSpeedImpl absoluteTargetSpeed = new AbsoluteTargetSpeedImpl();
			// Setting the parent
			absoluteTargetSpeed.setParent(object);
			absoluteTargetSpeedXmlParser.parseElement(indexedElement,parserContext, absoluteTargetSpeed);

			object.setAbsoluteTargetSpeed( absoluteTargetSpeed);
			
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
				elementName.equals(OscConstants.ELEMENT__ABSOLUTE_TARGET_SPEED) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ABSOLUTE_TARGET_SPEED
					};
		}
	}
}

