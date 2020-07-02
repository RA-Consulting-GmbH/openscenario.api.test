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
 
package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ICatalog;
import de.rac.openscenario.v1_0.impl.BaseImpl;
import de.rac.openscenario.v1_0.common.ILocator;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.api.IOpenScenarioModelElement;
import java.lang.Cloneable;
import de.rac.openscenario.v1_0.parser.ParserHelper;
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;

import de.rac.openscenario.v1_0.api.IController;
import de.rac.openscenario.v1_0.api.IVehicle;
import de.rac.openscenario.v1_0.api.IManeuver;
import de.rac.openscenario.v1_0.api.IMiscObject;
import de.rac.openscenario.v1_0.api.IPedestrian;
import de.rac.openscenario.v1_0.api.IRoute;
import de.rac.openscenario.v1_0.api.ITrajectory;
import de.rac.openscenario.v1_0.api.IEnvironment;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ICatalog. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ICatalog)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class CatalogImpl extends BaseImpl implements ICatalog, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__NAME, String.class);
	}
	
	private String name;
	private List<IVehicle> vehicles;
	private List<IController> controllers;
	private List<IPedestrian> pedestrians;
	private List<IMiscObject> miscObjects;
	private List<IEnvironment> environments;
	private List<IManeuver> maneuvers;
	private List<ITrajectory> trajectories;
	private List<IRoute> routes;

	@Override
	public String getName()
	{
		return name;
	}
	@Override
	public List<IVehicle> getVehicles()
	{
		return vehicles;
	}
	@Override
	public List<IController> getControllers()
	{
		return controllers;
	}
	@Override
	public List<IPedestrian> getPedestrians()
	{
		return pedestrians;
	}
	@Override
	public List<IMiscObject> getMiscObjects()
	{
		return miscObjects;
	}
	@Override
	public List<IEnvironment> getEnvironments()
	{
		return environments;
	}
	@Override
	public List<IManeuver> getManeuvers()
	{
		return maneuvers;
	}
	@Override
	public List<ITrajectory> getTrajectories()
	{
		return trajectories;
	}
	@Override
	public List<IRoute> getRoutes()
	{
		return routes;
	}
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the catalog.]
	 * 
	*/
	public  void setName (String name )
	{
		this.name = name;
	}
	/**
	 * Sets the value of model property vehicles
	 * @param vehicles from OpenSCENARIO class model specification: [A list of vehicle types that can be reused in a scenario.]
	 * 
	*/
	public void setVehicles(List<IVehicle> vehicles)
	{
		this.vehicles = vehicles;
	}
	/**
	 * Sets the value of model property controllers
	 * @param controllers from OpenSCENARIO class model specification: [A list of controller types that can be reused in a 
	 * scenario.]
	 * 
	*/
	public void setControllers(List<IController> controllers)
	{
		this.controllers = controllers;
	}
	/**
	 * Sets the value of model property pedestrians
	 * @param pedestrians from OpenSCENARIO class model specification: [A list of pedestrian types that can be reused in a 
	 * scenario.]
	 * 
	*/
	public void setPedestrians(List<IPedestrian> pedestrians)
	{
		this.pedestrians = pedestrians;
	}
	/**
	 * Sets the value of model property miscObjects
	 * @param miscObjects from OpenSCENARIO class model specification: [A list of miscellaneous object type that that can be 
	 * reused in a scenario.]
	 * 
	*/
	public void setMiscObjects(List<IMiscObject> miscObjects)
	{
		this.miscObjects = miscObjects;
	}
	/**
	 * Sets the value of model property environments
	 * @param environments from OpenSCENARIO class model specification: [A list of environment types that can be reused in a 
	 * scenario.]
	 * 
	*/
	public void setEnvironments(List<IEnvironment> environments)
	{
		this.environments = environments;
	}
	/**
	 * Sets the value of model property maneuvers
	 * @param maneuvers from OpenSCENARIO class model specification: [A list of maneuver types that can be reused in a 
	 * scenario.]
	 * 
	*/
	public void setManeuvers(List<IManeuver> maneuvers)
	{
		this.maneuvers = maneuvers;
	}
	/**
	 * Sets the value of model property trajectories
	 * @param trajectories from OpenSCENARIO class model specification: [A list of trajectory types that can be reused in a 
	 * scenario.]
	 * 
	*/
	public void setTrajectories(List<ITrajectory> trajectories)
	{
		this.trajectories = trajectories;
	}
	/**
	 * Sets the value of model property routes
	 * @param routes from OpenSCENARIO class model specification: [A list of route types that can be reused in a scenario.]
	 * 
	*/
	public void setRoutes(List<IRoute> routes)
	{
		this.routes = routes;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__NAME))
		{
			// Simple type
			name = ParserHelper.parseString(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
	}
	
	@Override
	public  Class<?> getTypeFromAttributeName(String attributeKey)
	{
		return propertyToType.get(attributeKey);
	}

	/**
	 * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
	 * method for any child.
	 * @return a list with all children (as BaseImpl)
	 */
	public List<BaseImpl> getChildren()
	{
		List<BaseImpl> result = new ArrayList<BaseImpl>();
		
			List<IVehicle> vehicles = null;
			vehicles =  getVehicles();
			if (vehicles != null)
			{
				for(IVehicle item : vehicles)
				{
					result.add((BaseImpl) item);
				}
			}
			List<IController> controllers = null;
			controllers =  getControllers();
			if (controllers != null)
			{
				for(IController item : controllers)
				{
					result.add((BaseImpl) item);
				}
			}
			List<IPedestrian> pedestrians = null;
			pedestrians =  getPedestrians();
			if (pedestrians != null)
			{
				for(IPedestrian item : pedestrians)
				{
					result.add((BaseImpl) item);
				}
			}
			List<IMiscObject> miscObjects = null;
			miscObjects =  getMiscObjects();
			if (miscObjects != null)
			{
				for(IMiscObject item : miscObjects)
				{
					result.add((BaseImpl) item);
				}
			}
			List<IEnvironment> environments = null;
			environments =  getEnvironments();
			if (environments != null)
			{
				for(IEnvironment item : environments)
				{
					result.add((BaseImpl) item);
				}
			}
			List<IManeuver> maneuvers = null;
			maneuvers =  getManeuvers();
			if (maneuvers != null)
			{
				for(IManeuver item : maneuvers)
				{
					result.add((BaseImpl) item);
				}
			}
			List<ITrajectory> trajectories = null;
			trajectories =  getTrajectories();
			if (trajectories != null)
			{
				for(ITrajectory item : trajectories)
				{
					result.add((BaseImpl) item);
				}
			}
			List<IRoute> routes = null;
			routes =  getRoutes();
			if (routes != null)
			{
				for(IRoute item : routes)
				{
					result.add((BaseImpl) item);
				}
			}
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public CatalogImpl clone()
	{
		CatalogImpl clonedObject = new CatalogImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setName(getName());		
		// clone children
		List<IVehicle> vehicles = null;
			vehicles =  getVehicles();
		if (vehicles != null)
		{
			List<IVehicle> clonedList = new ArrayList<IVehicle>();
			for(IVehicle item : vehicles)
			{
				VehicleImpl clonedChild = ((VehicleImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setVehicles(clonedList);
		}
		List<IController> controllers = null;
			controllers =  getControllers();
		if (controllers != null)
		{
			List<IController> clonedList = new ArrayList<IController>();
			for(IController item : controllers)
			{
				ControllerImpl clonedChild = ((ControllerImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setControllers(clonedList);
		}
		List<IPedestrian> pedestrians = null;
			pedestrians =  getPedestrians();
		if (pedestrians != null)
		{
			List<IPedestrian> clonedList = new ArrayList<IPedestrian>();
			for(IPedestrian item : pedestrians)
			{
				PedestrianImpl clonedChild = ((PedestrianImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setPedestrians(clonedList);
		}
		List<IMiscObject> miscObjects = null;
			miscObjects =  getMiscObjects();
		if (miscObjects != null)
		{
			List<IMiscObject> clonedList = new ArrayList<IMiscObject>();
			for(IMiscObject item : miscObjects)
			{
				MiscObjectImpl clonedChild = ((MiscObjectImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setMiscObjects(clonedList);
		}
		List<IEnvironment> environments = null;
			environments =  getEnvironments();
		if (environments != null)
		{
			List<IEnvironment> clonedList = new ArrayList<IEnvironment>();
			for(IEnvironment item : environments)
			{
				EnvironmentImpl clonedChild = ((EnvironmentImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setEnvironments(clonedList);
		}
		List<IManeuver> maneuvers = null;
			maneuvers =  getManeuvers();
		if (maneuvers != null)
		{
			List<IManeuver> clonedList = new ArrayList<IManeuver>();
			for(IManeuver item : maneuvers)
			{
				ManeuverImpl clonedChild = ((ManeuverImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setManeuvers(clonedList);
		}
		List<ITrajectory> trajectories = null;
			trajectories =  getTrajectories();
		if (trajectories != null)
		{
			List<ITrajectory> clonedList = new ArrayList<ITrajectory>();
			for(ITrajectory item : trajectories)
			{
				TrajectoryImpl clonedChild = ((TrajectoryImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setTrajectories(clonedList);
		}
		List<IRoute> routes = null;
			routes =  getRoutes();
		if (routes != null)
		{
			List<IRoute> clonedList = new ArrayList<IRoute>();
			for(IRoute item : routes)
			{
				RouteImpl clonedChild = ((RouteImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setRoutes(clonedList);
		}
		return clonedObject;
	}
	
	
	
}

