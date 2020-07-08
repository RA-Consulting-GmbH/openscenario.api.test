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
import java.util.List;
import de.rac.openscenario.v1_0.api.IController;
import de.rac.openscenario.v1_0.api.IVehicle;
import de.rac.openscenario.v1_0.api.IManeuver;
import de.rac.openscenario.v1_0.api.IMiscObject;
import de.rac.openscenario.v1_0.api.IPedestrian;
import de.rac.openscenario.v1_0.api.IRoute;
import de.rac.openscenario.v1_0.api.ITrajectory;
import de.rac.openscenario.v1_0.api.IEnvironment;

import de.rac.openscenario.v1_0.impl.VehicleImpl;
import de.rac.openscenario.v1_0.impl.PedestrianImpl;
import de.rac.openscenario.v1_0.impl.RouteImpl;
import de.rac.openscenario.v1_0.impl.ControllerImpl;
import de.rac.openscenario.v1_0.impl.CatalogImpl;
import de.rac.openscenario.v1_0.impl.TrajectoryImpl;
import de.rac.openscenario.v1_0.impl.EnvironmentImpl;
import de.rac.openscenario.v1_0.impl.ManeuverImpl;
import de.rac.openscenario.v1_0.impl.MiscObjectImpl;


import de.rac.openscenario.parser.modelgroup.XmlSequenceParser;
import java.util.Map;
import java.util.Hashtable;
import java.util.ArrayList;
import de.rac.openscenario.parser.type.XmlComplexTypeParser;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * Filling a CatalogImpl instance from an xml tree.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class CatalogXmlParser extends XmlComplexTypeParser<CatalogImpl> {

	/**
	 * Constructor
	 * @param messageLogger to log messages during parsing
	 * @param filename to locate the messages in a file
	 */
	public CatalogXmlParser(IParserMessageLogger messageLogger, String filename) {
		super(messageLogger, filename);
		subElementParser = new SubElementParser(messageLogger, filename);
	}
	@Override
	public void parseElement(IndexedElement indexedElement, ParserContext parserContext,CatalogImpl object) {
		messageLogger.logMessage(new FileContentMessage("Start Parsing Catalog", ErrorLevel.DEBUG, new Textmarker(indexedElement.getStartElementLocation().getLine(), indexedElement.getStartElementLocation().getColumn(), filename))); 
		super.parseElement(indexedElement,  parserContext, object);
		messageLogger.logMessage(new FileContentMessage("End Parsing Catalog", ErrorLevel.DEBUG, new Textmarker(indexedElement.getEndElementLocation().getLine(), indexedElement.getEndElementLocation().getColumn(), filename))); 
	
	}			
	
	@Override
	protected  Map<String, IAttributeParser<CatalogImpl>> getAttributeNameToAttributeParserMap()
	{
		Map<String, IAttributeParser<CatalogImpl>> result  = new Hashtable<String, IAttributeParser<CatalogImpl>>();
		result.put(OscConstants.ATTRIBUTE__NAME, new IAttributeParser<CatalogImpl>() {
			@Override
			public void parse(Position startPosition, Position endPosition, String attributeName, String attributeValue, CatalogImpl object)
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
				return 0;
			}
			
		});
		return result;
	}

	/**
	 * Parser for all subelements
	 */
	private class SubElementParser extends XmlSequenceParser<CatalogImpl>{
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
		protected  List<IElementParser<CatalogImpl>> createParserList()
		{
			List<IElementParser<CatalogImpl>> result = new ArrayList<IElementParser<CatalogImpl>>();
			result.add(new SubElementVehiclesParser());
			result.add(new SubElementControllersParser());
			result.add(new SubElementPedestriansParser());
			result.add(new SubElementMiscObjectsParser());
			result.add(new SubElementEnvironmentsParser());
			result.add(new SubElementManeuversParser());
			result.add(new SubElementTrajectoriesParser());
			result.add(new SubElementRoutesParser());
			return result;
		
		}	
	}
	/**
	 * A parser for subelement vehicles
	 */
	private class SubElementVehiclesParser implements IElementParser<CatalogImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementVehiclesParser()
		{
			super();
			vehicleXmlParser = new VehicleXmlParser(messageLogger, filename);
		}
		private VehicleXmlParser vehicleXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,CatalogImpl object)
		{
			VehicleImpl vehicles = new VehicleImpl();
			// Setting the parent
			vehicles.setParent(object);
			vehicleXmlParser.parseElement(indexedElement,parserContext, vehicles);
			List<IVehicle> vehiclesList = object.getVehicles();
			if (vehiclesList == null)
			{
				vehiclesList = new ArrayList<IVehicle>();
				object.setVehicles( vehiclesList);
			}
			vehiclesList.add(vehicles);
			
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
	 * A parser for subelement controllers
	 */
	private class SubElementControllersParser implements IElementParser<CatalogImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementControllersParser()
		{
			super();
			controllerXmlParser = new ControllerXmlParser(messageLogger, filename);
		}
		private ControllerXmlParser controllerXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,CatalogImpl object)
		{
			ControllerImpl controllers = new ControllerImpl();
			// Setting the parent
			controllers.setParent(object);
			controllerXmlParser.parseElement(indexedElement,parserContext, controllers);
			List<IController> controllersList = object.getControllers();
			if (controllersList == null)
			{
				controllersList = new ArrayList<IController>();
				object.setControllers( controllersList);
			}
			controllersList.add(controllers);
			
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
				elementName.equals(OscConstants.ELEMENT__CONTROLLER) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__CONTROLLER
					};
		}
	}
	/**
	 * A parser for subelement pedestrians
	 */
	private class SubElementPedestriansParser implements IElementParser<CatalogImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementPedestriansParser()
		{
			super();
			pedestrianXmlParser = new PedestrianXmlParser(messageLogger, filename);
		}
		private PedestrianXmlParser pedestrianXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,CatalogImpl object)
		{
			PedestrianImpl pedestrians = new PedestrianImpl();
			// Setting the parent
			pedestrians.setParent(object);
			pedestrianXmlParser.parseElement(indexedElement,parserContext, pedestrians);
			List<IPedestrian> pedestriansList = object.getPedestrians();
			if (pedestriansList == null)
			{
				pedestriansList = new ArrayList<IPedestrian>();
				object.setPedestrians( pedestriansList);
			}
			pedestriansList.add(pedestrians);
			
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
	 * A parser for subelement miscObjects
	 */
	private class SubElementMiscObjectsParser implements IElementParser<CatalogImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementMiscObjectsParser()
		{
			super();
			miscObjectXmlParser = new MiscObjectXmlParser(messageLogger, filename);
		}
		private MiscObjectXmlParser miscObjectXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,CatalogImpl object)
		{
			MiscObjectImpl miscObjects = new MiscObjectImpl();
			// Setting the parent
			miscObjects.setParent(object);
			miscObjectXmlParser.parseElement(indexedElement,parserContext, miscObjects);
			List<IMiscObject> miscObjectsList = object.getMiscObjects();
			if (miscObjectsList == null)
			{
				miscObjectsList = new ArrayList<IMiscObject>();
				object.setMiscObjects( miscObjectsList);
			}
			miscObjectsList.add(miscObjects);
			
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
				elementName.equals(OscConstants.ELEMENT__MISC_OBJECT) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__MISC_OBJECT
					};
		}
	}
	/**
	 * A parser for subelement environments
	 */
	private class SubElementEnvironmentsParser implements IElementParser<CatalogImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementEnvironmentsParser()
		{
			super();
			environmentXmlParser = new EnvironmentXmlParser(messageLogger, filename);
		}
		private EnvironmentXmlParser environmentXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,CatalogImpl object)
		{
			EnvironmentImpl environments = new EnvironmentImpl();
			// Setting the parent
			environments.setParent(object);
			environmentXmlParser.parseElement(indexedElement,parserContext, environments);
			List<IEnvironment> environmentsList = object.getEnvironments();
			if (environmentsList == null)
			{
				environmentsList = new ArrayList<IEnvironment>();
				object.setEnvironments( environmentsList);
			}
			environmentsList.add(environments);
			
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
				elementName.equals(OscConstants.ELEMENT__ENVIRONMENT) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ENVIRONMENT
					};
		}
	}
	/**
	 * A parser for subelement maneuvers
	 */
	private class SubElementManeuversParser implements IElementParser<CatalogImpl> {
	
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
		public void parse(IndexedElement indexedElement, ParserContext parserContext,CatalogImpl object)
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
	/**
	 * A parser for subelement trajectories
	 */
	private class SubElementTrajectoriesParser implements IElementParser<CatalogImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementTrajectoriesParser()
		{
			super();
			trajectoryXmlParser = new TrajectoryXmlParser(messageLogger, filename);
		}
		private TrajectoryXmlParser trajectoryXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,CatalogImpl object)
		{
			TrajectoryImpl trajectories = new TrajectoryImpl();
			// Setting the parent
			trajectories.setParent(object);
			trajectoryXmlParser.parseElement(indexedElement,parserContext, trajectories);
			List<ITrajectory> trajectoriesList = object.getTrajectories();
			if (trajectoriesList == null)
			{
				trajectoriesList = new ArrayList<ITrajectory>();
				object.setTrajectories( trajectoriesList);
			}
			trajectoriesList.add(trajectories);
			
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
				elementName.equals(OscConstants.ELEMENT__TRAJECTORY) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__TRAJECTORY
					};
		}
	}
	/**
	 * A parser for subelement routes
	 */
	private class SubElementRoutesParser implements IElementParser<CatalogImpl> {
	
		/**
		 * Constructor
		 */
		public SubElementRoutesParser()
		{
			super();
			routeXmlParser = new RouteXmlParser(messageLogger, filename);
		}
		private RouteXmlParser routeXmlParser;
		
		@Override
		public void parse(IndexedElement indexedElement, ParserContext parserContext,CatalogImpl object)
		{
			RouteImpl routes = new RouteImpl();
			// Setting the parent
			routes.setParent(object);
			routeXmlParser.parseElement(indexedElement,parserContext, routes);
			List<IRoute> routesList = object.getRoutes();
			if (routesList == null)
			{
				routesList = new ArrayList<IRoute>();
				object.setRoutes( routesList);
			}
			routesList.add(routes);
			
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
				elementName.equals(OscConstants.ELEMENT__ROUTE) ;
		}
		
		@Override
		public String[] getExpectedTagNames()
		{		 	return new String[]{
				OscConstants.ELEMENT__ROUTE
					};
		}
	}
}

