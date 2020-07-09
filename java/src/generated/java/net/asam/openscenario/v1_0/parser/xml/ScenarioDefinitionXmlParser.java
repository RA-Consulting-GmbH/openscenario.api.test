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
import net.asam.openscenario.parser.WrappedListParser;
import java.util.List;
import net.asam.openscenario.v1_0.api.IParameterDeclaration;

import net.asam.openscenario.v1_0.impl.ScenarioDefinitionImpl;
import net.asam.openscenario.v1_0.impl.ParameterDeclarationImpl;
import net.asam.openscenario.v1_0.impl.CatalogLocationsImpl;
import net.asam.openscenario.v1_0.impl.RoadNetworkImpl;
import net.asam.openscenario.v1_0.impl.StoryboardImpl;
import net.asam.openscenario.v1_0.impl.EntitiesImpl;


import net.asam.openscenario.parser.modelgroup.XmlSequenceParser;
import java.util.ArrayList;
import net.asam.openscenario.parser.type.XmlGroupParser;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ScenarioDefinitionImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ScenarioDefinitionXmlParser extends XmlGroupParser<ScenarioDefinitionImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public ScenarioDefinitionXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,ScenarioDefinitionImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing ScenarioDefinition", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing ScenarioDefinition", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlSequenceParser<ScenarioDefinitionImpl>{
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
		protected  List<IElementParser<ScenarioDefinitionImpl>> createParserList()
		{
			List<IElementParser<ScenarioDefinitionImpl>> result = new ArrayList<IElementParser<ScenarioDefinitionImpl>>();
			result.add(new WrappedListParser<ScenarioDefinitionImpl>(messageLogger,filename,new SubElementParameterDeclarationsParser(), OscConstants.ELEMENT__PARAMETER_DECLARATIONS) );
			result.add(new SubElementCatalogLocationsParser());
			result.add(new SubElementRoadNetworkParser());
			result.add(new SubElementEntitiesParser());
			result.add(new SubElementStoryboardParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement parameterDeclarations
	 */
	private class SubElementParameterDeclarationsParser implements IElementParser<ScenarioDefinitionImpl> {
	
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
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ScenarioDefinitionImpl object)
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
	 * A parser for subelement catalogLocations
	 */
	private class SubElementCatalogLocationsParser implements IElementParser<ScenarioDefinitionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementCatalogLocationsParser()
		{
			super();
			catalogLocationsXmlParser = new CatalogLocationsXmlParser(messageLogger, filename);
		}
		private CatalogLocationsXmlParser catalogLocationsXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ScenarioDefinitionImpl object)
		{
			CatalogLocationsImpl catalogLocations = new CatalogLocationsImpl();
			// Setting the parent
			catalogLocations.setParent(object);
			catalogLocationsXmlParser.parseElement(indexedElement,parserContext, catalogLocations);

			object.setCatalogLocations( catalogLocations);
			
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
				elementName.equals(OscConstants.ELEMENT__CATALOG_LOCATIONS) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__CATALOG_LOCATIONS
					};
		}
	}
	/**
	 * A parser for subelement roadNetwork
	 */
	private class SubElementRoadNetworkParser implements IElementParser<ScenarioDefinitionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementRoadNetworkParser()
		{
			super();
			roadNetworkXmlParser = new RoadNetworkXmlParser(messageLogger, filename);
		}
		private RoadNetworkXmlParser roadNetworkXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ScenarioDefinitionImpl object)
		{
			RoadNetworkImpl roadNetwork = new RoadNetworkImpl();
			// Setting the parent
			roadNetwork.setParent(object);
			roadNetworkXmlParser.parseElement(indexedElement,parserContext, roadNetwork);

			object.setRoadNetwork( roadNetwork);
			
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
				elementName.equals(OscConstants.ELEMENT__ROAD_NETWORK) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ROAD_NETWORK
					};
		}
	}
	/**
	 * A parser for subelement entities
	 */
	private class SubElementEntitiesParser implements IElementParser<ScenarioDefinitionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementEntitiesParser()
		{
			super();
			entitiesXmlParser = new EntitiesXmlParser(messageLogger, filename);
		}
		private EntitiesXmlParser entitiesXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ScenarioDefinitionImpl object)
		{
			EntitiesImpl entities = new EntitiesImpl();
			// Setting the parent
			entities.setParent(object);
			entitiesXmlParser.parseElement(indexedElement,parserContext, entities);

			object.setEntities( entities);
			
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
				elementName.equals(OscConstants.ELEMENT__ENTITIES) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ENTITIES
					};
		}
	}
	/**
	 * A parser for subelement storyboard
	 */
	private class SubElementStoryboardParser implements IElementParser<ScenarioDefinitionImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementStoryboardParser()
		{
			super();
			storyboardXmlParser = new StoryboardXmlParser(messageLogger, filename);
		}
		private StoryboardXmlParser storyboardXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ScenarioDefinitionImpl object)
		{
			StoryboardImpl storyboard = new StoryboardImpl();
			// Setting the parent
			storyboard.setParent(object);
			storyboardXmlParser.parseElement(indexedElement,parserContext, storyboard);

			object.setStoryboard( storyboard);
			
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
				elementName.equals(OscConstants.ELEMENT__STORYBOARD) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__STORYBOARD
					};
		}
	}
}

