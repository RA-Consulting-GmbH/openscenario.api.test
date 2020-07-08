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

import net.asam.openscenario.v1_0.impl.VehicleCatalogLocationImpl;
import net.asam.openscenario.v1_0.impl.MiscObjectCatalogLocationImpl;
import net.asam.openscenario.v1_0.impl.EnvironmentCatalogLocationImpl;
import net.asam.openscenario.v1_0.impl.TrajectoryCatalogLocationImpl;
import net.asam.openscenario.v1_0.impl.RouteCatalogLocationImpl;
import net.asam.openscenario.v1_0.impl.ControllerCatalogLocationImpl;
import net.asam.openscenario.v1_0.impl.ManeuverCatalogLocationImpl;
import net.asam.openscenario.v1_0.impl.PedestrianCatalogLocationImpl;
import net.asam.openscenario.v1_0.impl.CatalogLocationsImpl;


import net.asam.openscenario.parser.modelgroup.XmlAllParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import net.asam.openscenario.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CatalogLocationsImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class CatalogLocationsXmlParser extends XmlComplexTypeParser<CatalogLocationsImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public CatalogLocationsXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,CatalogLocationsImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing CatalogLocations", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing CatalogLocations", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<CatalogLocationsImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<CatalogLocationsImpl>> result  = new Hashtable<String, IAttributeParser<CatalogLocationsImpl>>();
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlAllParser<CatalogLocationsImpl>{
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
		protected  List<IElementParser<CatalogLocationsImpl>> createParserList()
		{
			List<IElementParser<CatalogLocationsImpl>> result = new ArrayList<IElementParser<CatalogLocationsImpl>>();
			result.add(new SubElementVehicleCatalogParser());
			result.add(new SubElementControllerCatalogParser());
			result.add(new SubElementPedestrianCatalogParser());
			result.add(new SubElementMiscObjectCatalogParser());
			result.add(new SubElementEnvironmentCatalogParser());
			result.add(new SubElementManeuverCatalogParser());
			result.add(new SubElementTrajectoryCatalogParser());
			result.add(new SubElementRouteCatalogParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement vehicleCatalog
	 */
	private class SubElementVehicleCatalogParser implements IElementParser<CatalogLocationsImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementVehicleCatalogParser()
		{
			super();
			vehicleCatalogLocationXmlParser = new VehicleCatalogLocationXmlParser(messageLogger, filename);
		}
		private VehicleCatalogLocationXmlParser vehicleCatalogLocationXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,CatalogLocationsImpl object)
		{
			VehicleCatalogLocationImpl vehicleCatalog = new VehicleCatalogLocationImpl();
			// Setting the parent
			vehicleCatalog.setParent(object);
			vehicleCatalogLocationXmlParser.parseElement(indexedElement,parserContext, vehicleCatalog);

			object.setVehicleCatalog( vehicleCatalog);
			
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
				elementName.equals(OscConstants.ELEMENT__VEHICLE_CATALOG) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__VEHICLE_CATALOG
					};
		}
	}
	/**
	 * A parser for subelement controllerCatalog
	 */
	private class SubElementControllerCatalogParser implements IElementParser<CatalogLocationsImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementControllerCatalogParser()
		{
			super();
			controllerCatalogLocationXmlParser = new ControllerCatalogLocationXmlParser(messageLogger, filename);
		}
		private ControllerCatalogLocationXmlParser controllerCatalogLocationXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,CatalogLocationsImpl object)
		{
			ControllerCatalogLocationImpl controllerCatalog = new ControllerCatalogLocationImpl();
			// Setting the parent
			controllerCatalog.setParent(object);
			controllerCatalogLocationXmlParser.parseElement(indexedElement,parserContext, controllerCatalog);

			object.setControllerCatalog( controllerCatalog);
			
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
				elementName.equals(OscConstants.ELEMENT__CONTROLLER_CATALOG) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__CONTROLLER_CATALOG
					};
		}
	}
	/**
	 * A parser for subelement pedestrianCatalog
	 */
	private class SubElementPedestrianCatalogParser implements IElementParser<CatalogLocationsImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementPedestrianCatalogParser()
		{
			super();
			pedestrianCatalogLocationXmlParser = new PedestrianCatalogLocationXmlParser(messageLogger, filename);
		}
		private PedestrianCatalogLocationXmlParser pedestrianCatalogLocationXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,CatalogLocationsImpl object)
		{
			PedestrianCatalogLocationImpl pedestrianCatalog = new PedestrianCatalogLocationImpl();
			// Setting the parent
			pedestrianCatalog.setParent(object);
			pedestrianCatalogLocationXmlParser.parseElement(indexedElement,parserContext, pedestrianCatalog);

			object.setPedestrianCatalog( pedestrianCatalog);
			
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
				elementName.equals(OscConstants.ELEMENT__PEDESTRIAN_CATALOG) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__PEDESTRIAN_CATALOG
					};
		}
	}
	/**
	 * A parser for subelement miscObjectCatalog
	 */
	private class SubElementMiscObjectCatalogParser implements IElementParser<CatalogLocationsImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementMiscObjectCatalogParser()
		{
			super();
			miscObjectCatalogLocationXmlParser = new MiscObjectCatalogLocationXmlParser(messageLogger, filename);
		}
		private MiscObjectCatalogLocationXmlParser miscObjectCatalogLocationXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,CatalogLocationsImpl object)
		{
			MiscObjectCatalogLocationImpl miscObjectCatalog = new MiscObjectCatalogLocationImpl();
			// Setting the parent
			miscObjectCatalog.setParent(object);
			miscObjectCatalogLocationXmlParser.parseElement(indexedElement,parserContext, miscObjectCatalog);

			object.setMiscObjectCatalog( miscObjectCatalog);
			
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
				elementName.equals(OscConstants.ELEMENT__MISC_OBJECT_CATALOG) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__MISC_OBJECT_CATALOG
					};
		}
	}
	/**
	 * A parser for subelement environmentCatalog
	 */
	private class SubElementEnvironmentCatalogParser implements IElementParser<CatalogLocationsImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementEnvironmentCatalogParser()
		{
			super();
			environmentCatalogLocationXmlParser = new EnvironmentCatalogLocationXmlParser(messageLogger, filename);
		}
		private EnvironmentCatalogLocationXmlParser environmentCatalogLocationXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,CatalogLocationsImpl object)
		{
			EnvironmentCatalogLocationImpl environmentCatalog = new EnvironmentCatalogLocationImpl();
			// Setting the parent
			environmentCatalog.setParent(object);
			environmentCatalogLocationXmlParser.parseElement(indexedElement,parserContext, environmentCatalog);

			object.setEnvironmentCatalog( environmentCatalog);
			
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
				elementName.equals(OscConstants.ELEMENT__ENVIRONMENT_CATALOG) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ENVIRONMENT_CATALOG
					};
		}
	}
	/**
	 * A parser for subelement maneuverCatalog
	 */
	private class SubElementManeuverCatalogParser implements IElementParser<CatalogLocationsImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementManeuverCatalogParser()
		{
			super();
			maneuverCatalogLocationXmlParser = new ManeuverCatalogLocationXmlParser(messageLogger, filename);
		}
		private ManeuverCatalogLocationXmlParser maneuverCatalogLocationXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,CatalogLocationsImpl object)
		{
			ManeuverCatalogLocationImpl maneuverCatalog = new ManeuverCatalogLocationImpl();
			// Setting the parent
			maneuverCatalog.setParent(object);
			maneuverCatalogLocationXmlParser.parseElement(indexedElement,parserContext, maneuverCatalog);

			object.setManeuverCatalog( maneuverCatalog);
			
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
				elementName.equals(OscConstants.ELEMENT__MANEUVER_CATALOG) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__MANEUVER_CATALOG
					};
		}
	}
	/**
	 * A parser for subelement trajectoryCatalog
	 */
	private class SubElementTrajectoryCatalogParser implements IElementParser<CatalogLocationsImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementTrajectoryCatalogParser()
		{
			super();
			trajectoryCatalogLocationXmlParser = new TrajectoryCatalogLocationXmlParser(messageLogger, filename);
		}
		private TrajectoryCatalogLocationXmlParser trajectoryCatalogLocationXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,CatalogLocationsImpl object)
		{
			TrajectoryCatalogLocationImpl trajectoryCatalog = new TrajectoryCatalogLocationImpl();
			// Setting the parent
			trajectoryCatalog.setParent(object);
			trajectoryCatalogLocationXmlParser.parseElement(indexedElement,parserContext, trajectoryCatalog);

			object.setTrajectoryCatalog( trajectoryCatalog);
			
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
				elementName.equals(OscConstants.ELEMENT__TRAJECTORY_CATALOG) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__TRAJECTORY_CATALOG
					};
		}
	}
	/**
	 * A parser for subelement routeCatalog
	 */
	private class SubElementRouteCatalogParser implements IElementParser<CatalogLocationsImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementRouteCatalogParser()
		{
			super();
			routeCatalogLocationXmlParser = new RouteCatalogLocationXmlParser(messageLogger, filename);
		}
		private RouteCatalogLocationXmlParser routeCatalogLocationXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,CatalogLocationsImpl object)
		{
			RouteCatalogLocationImpl routeCatalog = new RouteCatalogLocationImpl();
			// Setting the parent
			routeCatalog.setParent(object);
			routeCatalogLocationXmlParser.parseElement(indexedElement,parserContext, routeCatalog);

			object.setRouteCatalog( routeCatalog);
			
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
				elementName.equals(OscConstants.ELEMENT__ROUTE_CATALOG) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ROUTE_CATALOG
					};
		}
	}
}

