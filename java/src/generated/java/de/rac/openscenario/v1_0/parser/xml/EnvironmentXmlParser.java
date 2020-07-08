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
import de.rac.openscenario.parser.WrappedListParser;
import java.util.List;
import de.rac.openscenario.v1_0.api.IParameterDeclaration;

import de.rac.openscenario.v1_0.impl.WeatherImpl;
import de.rac.openscenario.v1_0.impl.RoadConditionImpl;
import de.rac.openscenario.v1_0.impl.ParameterDeclarationImpl;
import de.rac.openscenario.v1_0.impl.TimeOfDayImpl;
import de.rac.openscenario.v1_0.impl.EnvironmentImpl;


import de.rac.openscenario.parser.modelgroup.XmlAllParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EnvironmentImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class EnvironmentXmlParser extends XmlComplexTypeParser<EnvironmentImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public EnvironmentXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,EnvironmentImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing Environment", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing Environment", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<EnvironmentImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<EnvironmentImpl>> result  = new Hashtable<String, IAttributeParser<EnvironmentImpl>>();
		result.put(OscConstants.ATTRIBUTE__NAME, new IAttributeParser<EnvironmentImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, EnvironmentImpl object)
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
	private class SubElementParser extends XmlAllParser<EnvironmentImpl>{
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
		protected  List<IElementParser<EnvironmentImpl>> createParserList()
		{
			List<IElementParser<EnvironmentImpl>> result = new ArrayList<IElementParser<EnvironmentImpl>>();
			result.add(new WrappedListParser<EnvironmentImpl>(messageLogger,filename,new SubElementParameterDeclarationsParser(), OscConstants.ELEMENT__PARAMETER_DECLARATIONS) );
			result.add(new SubElementTimeOfDayParser());
			result.add(new SubElementWeatherParser());
			result.add(new SubElementRoadConditionParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement parameterDeclarations
	 */
	private class SubElementParameterDeclarationsParser implements IElementParser<EnvironmentImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementParameterDeclarationsParser()
		{
			super();
			parameterDeclarationXmlParser = new ParameterDeclarationXmlParser(messageLogger, filename);
		}
		private ParameterDeclarationXmlParser parameterDeclarationXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,EnvironmentImpl object)
		{
			ParameterDeclarationImpl parameterDeclarations = new ParameterDeclarationImpl();
			// Setting the parent
			parameterDeclarations.setParent(object);
			parameterDeclarationXmlParser.parseElement(indexedElement,parserContext, parameterDeclarations);
			List<IParameterDeclaration> parameterDeclarationsList = object.getParameterDeclarations();
			if (parameterDeclarationsList == null)
			{
				parameterDeclarationsList = new ArrayList<IParameterDeclaration>();
				object.setParameterDeclarations( parameterDeclarationsList);
			}
			parameterDeclarationsList.add(parameterDeclarations);
			
		}

		@Override
		public int getMinOccur()
		{
			return 0;
		}
		
		@Override
		public int getMaxOccur()
		{
			return -1;
		}
		
		@Override
		public boolean doesMatch(String elementName)
		{
			return elementName.equals(OscConstants.ELEMENT__PARAMETER_DECLARATION);			
		}
		
		@Override
		public String[] getExpectedTagNames()
		{			return new String[]{OscConstants.ELEMENT__PARAMETER_DECLARATION};
		}
	}
	/**
	 * A parser for subelement timeOfDay
	 */
	private class SubElementTimeOfDayParser implements IElementParser<EnvironmentImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementTimeOfDayParser()
		{
			super();
			timeOfDayXmlParser = new TimeOfDayXmlParser(messageLogger, filename);
		}
		private TimeOfDayXmlParser timeOfDayXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,EnvironmentImpl object)
		{
			TimeOfDayImpl timeOfDay = new TimeOfDayImpl();
			// Setting the parent
			timeOfDay.setParent(object);
			timeOfDayXmlParser.parseElement(indexedElement,parserContext, timeOfDay);

			object.setTimeOfDay( timeOfDay);
			
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
				elementName.equals(OscConstants.ELEMENT__TIME_OF_DAY) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__TIME_OF_DAY
					};
		}
	}
	/**
	 * A parser for subelement weather
	 */
	private class SubElementWeatherParser implements IElementParser<EnvironmentImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementWeatherParser()
		{
			super();
			weatherXmlParser = new WeatherXmlParser(messageLogger, filename);
		}
		private WeatherXmlParser weatherXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,EnvironmentImpl object)
		{
			WeatherImpl weather = new WeatherImpl();
			// Setting the parent
			weather.setParent(object);
			weatherXmlParser.parseElement(indexedElement,parserContext, weather);

			object.setWeather( weather);
			
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
				elementName.equals(OscConstants.ELEMENT__WEATHER) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__WEATHER
					};
		}
	}
	/**
	 * A parser for subelement roadCondition
	 */
	private class SubElementRoadConditionParser implements IElementParser<EnvironmentImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementRoadConditionParser()
		{
			super();
			roadConditionXmlParser = new RoadConditionXmlParser(messageLogger, filename);
		}
		private RoadConditionXmlParser roadConditionXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,EnvironmentImpl object)
		{
			RoadConditionImpl roadCondition = new RoadConditionImpl();
			// Setting the parent
			roadCondition.setParent(object);
			roadConditionXmlParser.parseElement(indexedElement,parserContext, roadCondition);

			object.setRoadCondition( roadCondition);
			
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
				elementName.equals(OscConstants.ELEMENT__ROAD_CONDITION) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ROAD_CONDITION
					};
		}
	}
}

