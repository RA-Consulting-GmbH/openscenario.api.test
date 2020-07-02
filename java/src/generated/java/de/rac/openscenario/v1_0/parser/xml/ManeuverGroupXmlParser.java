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
import de.rac.openscenario.v1_0.api.IManeuver;
import de.rac.openscenario.v1_0.api.ICatalogReference;

import de.rac.openscenario.v1_0.impl.ActorsImpl;
import de.rac.openscenario.v1_0.impl.ManeuverGroupImpl;
import de.rac.openscenario.v1_0.impl.ManeuverImpl;
import de.rac.openscenario.v1_0.impl.CatalogReferenceImpl;


import de.rac.openscenario.v1_0.parser.modelgroup.XmlSequenceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a ManeuverGroupImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ManeuverGroupXmlParser extends XmlComplexTypeParser<ManeuverGroupImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public ManeuverGroupXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,ManeuverGroupImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing ManeuverGroup", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing ManeuverGroup", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<ManeuverGroupImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<ManeuverGroupImpl>> result  = new Hashtable<String, IAttributeParser<ManeuverGroupImpl>>();
		result.put(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, new IAttributeParser<ManeuverGroupImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, ManeuverGroupImpl object)
			{
				
				Textmarker startMarker = new Textmarker(startPosition.getLine(), startPosition.getColumn(),filename);
				Textmarker endMarker = new Textmarker(endPosition.getLine(), endPosition.getColumn(),filename);
				if (isParametrized(attributeValue))
				{
					object.setAttributeParameter(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, stripDollarSign(attributeValue), startMarker); 
				}else
				{
					// Parse value
					// Simple type
					object.setMaximumExecutionCount(parseUnsignedInt(attributeValue,startMarker));
				}
				object.putPropertyStartMarker(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, startMarker);
				object.putPropertyEndMarker(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, endMarker);
				
			}
			

			@Override
			public int getMinOccur() {
				return 1;
			}
			
		});
		result.put(OscConstants.ATTRIBUTE__NAME, new IAttributeParser<ManeuverGroupImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, ManeuverGroupImpl object)
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
	private class SubElementParser extends XmlSequenceParser<ManeuverGroupImpl>{
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
		protected  List<IElementParser<ManeuverGroupImpl>> createParserList()
		{
			List<IElementParser<ManeuverGroupImpl>> result = new ArrayList<IElementParser<ManeuverGroupImpl>>();
			result.add(new SubElementActorsParser());
			result.add(new SubElementCatalogReferencesParser());
			result.add(new SubElementManeuversParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement actors
	 */
	private class SubElementActorsParser implements IElementParser<ManeuverGroupImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementActorsParser()
		{
			super();
			actorsXmlParser = new ActorsXmlParser(messageLogger, filename);
		}
		private ActorsXmlParser actorsXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ManeuverGroupImpl object)
		{
			ActorsImpl actors = new ActorsImpl();
			// Setting the parent
			actors.setParent(object);
			actorsXmlParser.parseElement(indexedElement,parserContext, actors);

			object.setActors( actors);
			
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
				elementName.equals(OscConstants.ELEMENT__ACTORS) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ACTORS
					};
		}
	}
	/**
	 * A parser for subelement catalogReferences
	 */
	private class SubElementCatalogReferencesParser implements IElementParser<ManeuverGroupImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementCatalogReferencesParser()
		{
			super();
			catalogReferenceXmlParser = new CatalogReferenceXmlParser(messageLogger, filename);
		}
		private CatalogReferenceXmlParser catalogReferenceXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ManeuverGroupImpl object)
		{
			CatalogReferenceImpl catalogReferences = new CatalogReferenceImpl();
			// Setting the parent
			catalogReferences.setParent(object);
			catalogReferenceXmlParser.parseElement(indexedElement,parserContext, catalogReferences);
			List<ICatalogReference> catalogReferencesList = object.getCatalogReferences();
			if (catalogReferencesList == null)
			{
				catalogReferencesList = new ArrayList<ICatalogReference>();
				object.setCatalogReferences( catalogReferencesList);
			}
			catalogReferencesList.add(catalogReferences);
			parserContext.addCatalogReference(catalogReferences);
			
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
			return
				elementName.equals(OscConstants.ELEMENT__CATALOG_REFERENCE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__CATALOG_REFERENCE
					};
		}
	}
	/**
	 * A parser for subelement maneuvers
	 */
	private class SubElementManeuversParser implements IElementParser<ManeuverGroupImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementManeuversParser()
		{
			super();
			maneuverXmlParser = new ManeuverXmlParser(messageLogger, filename);
		}
		private ManeuverXmlParser maneuverXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,ManeuverGroupImpl object)
		{
			ManeuverImpl maneuvers = new ManeuverImpl();
			// Setting the parent
			maneuvers.setParent(object);
			maneuverXmlParser.parseElement(indexedElement,parserContext, maneuvers);
			List<IManeuver> maneuversList = object.getManeuvers();
			if (maneuversList == null)
			{
				maneuversList = new ArrayList<IManeuver>();
				object.setManeuvers( maneuversList);
			}
			maneuversList.add(maneuvers);
			
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
			return
				elementName.equals(OscConstants.ELEMENT__MANEUVER) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__MANEUVER
					};
		}
	}
}

