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

import net.asam.openscenario.v1_0.impl.VehicleImpl;
import net.asam.openscenario.v1_0.impl.PedestrianImpl;
import net.asam.openscenario.v1_0.impl.EntityObjectImpl;
import net.asam.openscenario.v1_0.impl.MiscObjectImpl;
import net.asam.openscenario.v1_0.impl.CatalogReferenceImpl;


import net.asam.openscenario.parser.modelgroup.XmlChoiceParser;
import java.util.ArrayList;
import net.asam.openscenario.parser.type.XmlGroupParser;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a EntityObjectImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class EntityObjectXmlParser extends XmlGroupParser<EntityObjectImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public EntityObjectXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,EntityObjectImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing EntityObject", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing EntityObject", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlChoiceParser<EntityObjectImpl>{
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
		protected  List<IElementParser<EntityObjectImpl>> createParserList()
		{
			List<IElementParser<EntityObjectImpl>> result = new ArrayList<IElementParser<EntityObjectImpl>>();
			result.add(new SubElementCatalogReferenceParser());
			result.add(new SubElementVehicleParser());
			result.add(new SubElementPedestrianParser());
			result.add(new SubElementMiscObjectParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement catalogReference
	 */
	private class SubElementCatalogReferenceParser implements IElementParser<EntityObjectImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementCatalogReferenceParser()
		{
			super();
			catalogReferenceXmlParser = new CatalogReferenceXmlParser(messageLogger, filename);
		}
		private CatalogReferenceXmlParser catalogReferenceXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,EntityObjectImpl object)
		{
			CatalogReferenceImpl catalogReference = new CatalogReferenceImpl();
			// Setting the parent
			catalogReference.setParent(object);
			catalogReferenceXmlParser.parseElement(indexedElement,parserContext, catalogReference);

			object.setCatalogReference( catalogReference);
			((CatalogReferenceParserContext)parserContext).addCatalogReference(catalogReference);
			
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
	 * A parser for subelement vehicle
	 */
	private class SubElementVehicleParser implements IElementParser<EntityObjectImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementVehicleParser()
		{
			super();
			vehicleXmlParser = new VehicleXmlParser(messageLogger, filename);
		}
		private VehicleXmlParser vehicleXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,EntityObjectImpl object)
		{
			VehicleImpl vehicle = new VehicleImpl();
			// Setting the parent
			vehicle.setParent(object);
			vehicleXmlParser.parseElement(indexedElement,parserContext, vehicle);

			object.setVehicle( vehicle);
			
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
				elementName.equals(OscConstants.ELEMENT__VEHICLE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__VEHICLE
					};
		}
	}
	/**
	 * A parser for subelement pedestrian
	 */
	private class SubElementPedestrianParser implements IElementParser<EntityObjectImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementPedestrianParser()
		{
			super();
			pedestrianXmlParser = new PedestrianXmlParser(messageLogger, filename);
		}
		private PedestrianXmlParser pedestrianXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,EntityObjectImpl object)
		{
			PedestrianImpl pedestrian = new PedestrianImpl();
			// Setting the parent
			pedestrian.setParent(object);
			pedestrianXmlParser.parseElement(indexedElement,parserContext, pedestrian);

			object.setPedestrian( pedestrian);
			
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
				elementName.equals(OscConstants.ELEMENT__PEDESTRIAN) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__PEDESTRIAN
					};
		}
	}
	/**
	 * A parser for subelement miscObject
	 */
	private class SubElementMiscObjectParser implements IElementParser<EntityObjectImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementMiscObjectParser()
		{
			super();
			miscObjectXmlParser = new MiscObjectXmlParser(messageLogger, filename);
		}
		private MiscObjectXmlParser miscObjectXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,EntityObjectImpl object)
		{
			MiscObjectImpl miscObject = new MiscObjectImpl();
			// Setting the parent
			miscObject.setParent(object);
			miscObjectXmlParser.parseElement(indexedElement,parserContext, miscObject);

			object.setMiscObject( miscObject);
			
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
				elementName.equals(OscConstants.ELEMENT__MISC_OBJECT) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__MISC_OBJECT
					};
		}
	}
}

