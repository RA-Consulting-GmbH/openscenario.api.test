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
 
package de.rac.openscenario.v1_0.catalog;

import de.rac.openscenario.v1_0.api.ICatalogElement;
import de.rac.openscenario.v1_0.api.IController;
import de.rac.openscenario.v1_0.api.IEnvironment;
import de.rac.openscenario.v1_0.api.IManeuver;
import de.rac.openscenario.v1_0.api.IMiscObject;
import de.rac.openscenario.v1_0.api.IPedestrian;
import de.rac.openscenario.v1_0.api.IRoute;
import de.rac.openscenario.v1_0.api.ITrajectory;
import de.rac.openscenario.v1_0.api.IVehicle;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * A helper class for the catalog elements. This class provides conversion methods for all subclasses of ICatalogElement 
 * and a method for providing the name
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class CatalogHelper {
	
	/**
	 * Tests for the type IController
	 * @param catalogElement the catalog element
	 * @return true if the catalog element is of type IController
	 */
	public static boolean isController(ICatalogElement catalogElement)
	{
		return catalogElement instanceof IController;
	}
	/**
	 * Tests for the type IEnvironment
	 * @param catalogElement the catalog element
	 * @return true if the catalog element is of type IEnvironment
	 */
	public static boolean isEnvironment(ICatalogElement catalogElement)
	{
		return catalogElement instanceof IEnvironment;
	}
	/**
	 * Tests for the type IManeuver
	 * @param catalogElement the catalog element
	 * @return true if the catalog element is of type IManeuver
	 */
	public static boolean isManeuver(ICatalogElement catalogElement)
	{
		return catalogElement instanceof IManeuver;
	}
	/**
	 * Tests for the type IMiscObject
	 * @param catalogElement the catalog element
	 * @return true if the catalog element is of type IMiscObject
	 */
	public static boolean isMiscObject(ICatalogElement catalogElement)
	{
		return catalogElement instanceof IMiscObject;
	}
	/**
	 * Tests for the type IPedestrian
	 * @param catalogElement the catalog element
	 * @return true if the catalog element is of type IPedestrian
	 */
	public static boolean isPedestrian(ICatalogElement catalogElement)
	{
		return catalogElement instanceof IPedestrian;
	}
	/**
	 * Tests for the type IRoute
	 * @param catalogElement the catalog element
	 * @return true if the catalog element is of type IRoute
	 */
	public static boolean isRoute(ICatalogElement catalogElement)
	{
		return catalogElement instanceof IRoute;
	}
	/**
	 * Tests for the type ITrajectory
	 * @param catalogElement the catalog element
	 * @return true if the catalog element is of type ITrajectory
	 */
	public static boolean isTrajectory(ICatalogElement catalogElement)
	{
		return catalogElement instanceof ITrajectory;
	}
	/**
	 * Tests for the type IVehicle
	 * @param catalogElement the catalog element
	 * @return true if the catalog element is of type IVehicle
	 */
	public static boolean isVehicle(ICatalogElement catalogElement)
	{
		return catalogElement instanceof IVehicle;
	}
	
	/**
	 * Conversion to type IController
	 * @param catalogElement the catalog element
	 * @return converted value of type IController or null if the catalogElement 
	 * cannot be converted
	 */
	public static IController asController(ICatalogElement catalogElement)
	{
		if (isController(catalogElement))
		{
			return ( IController) catalogElement;
		}else
		{
			return null;
		}
	}
	/**
	 * Conversion to type IEnvironment
	 * @param catalogElement the catalog element
	 * @return converted value of type IEnvironment or null if the catalogElement 
	 * cannot be converted
	 */
	public static IEnvironment asEnvironment(ICatalogElement catalogElement)
	{
		if (isEnvironment(catalogElement))
		{
			return ( IEnvironment) catalogElement;
		}else
		{
			return null;
		}
	}
	/**
	 * Conversion to type IManeuver
	 * @param catalogElement the catalog element
	 * @return converted value of type IManeuver or null if the catalogElement 
	 * cannot be converted
	 */
	public static IManeuver asManeuver(ICatalogElement catalogElement)
	{
		if (isManeuver(catalogElement))
		{
			return ( IManeuver) catalogElement;
		}else
		{
			return null;
		}
	}
	/**
	 * Conversion to type IMiscObject
	 * @param catalogElement the catalog element
	 * @return converted value of type IMiscObject or null if the catalogElement 
	 * cannot be converted
	 */
	public static IMiscObject asMiscObject(ICatalogElement catalogElement)
	{
		if (isMiscObject(catalogElement))
		{
			return ( IMiscObject) catalogElement;
		}else
		{
			return null;
		}
	}
	/**
	 * Conversion to type IPedestrian
	 * @param catalogElement the catalog element
	 * @return converted value of type IPedestrian or null if the catalogElement 
	 * cannot be converted
	 */
	public static IPedestrian asPedestrian(ICatalogElement catalogElement)
	{
		if (isPedestrian(catalogElement))
		{
			return ( IPedestrian) catalogElement;
		}else
		{
			return null;
		}
	}
	/**
	 * Conversion to type IRoute
	 * @param catalogElement the catalog element
	 * @return converted value of type IRoute or null if the catalogElement 
	 * cannot be converted
	 */
	public static IRoute asRoute(ICatalogElement catalogElement)
	{
		if (isRoute(catalogElement))
		{
			return ( IRoute) catalogElement;
		}else
		{
			return null;
		}
	}
	/**
	 * Conversion to type ITrajectory
	 * @param catalogElement the catalog element
	 * @return converted value of type ITrajectory or null if the catalogElement 
	 * cannot be converted
	 */
	public static ITrajectory asTrajectory(ICatalogElement catalogElement)
	{
		if (isTrajectory(catalogElement))
		{
			return ( ITrajectory) catalogElement;
		}else
		{
			return null;
		}
	}
	/**
	 * Conversion to type IVehicle
	 * @param catalogElement the catalog element
	 * @return converted value of type IVehicle or null if the catalogElement 
	 * cannot be converted
	 */
	public static IVehicle asVehicle(ICatalogElement catalogElement)
	{
		if (isVehicle(catalogElement))
		{
			return ( IVehicle) catalogElement;
		}else
		{
			return null;
		}
	}
	/**
	 * Provides the name of the catalogElement
	 * @param catalogElement the catalog element
	 * @return the name of the catalogElement 
	 * cannot be converted
	 */
	public static String getName(ICatalogElement catalogElement)
	{
		if (isController(catalogElement))
		{
			return (( IController) catalogElement).getName();
		}
		if (isEnvironment(catalogElement))
		{
			return (( IEnvironment) catalogElement).getName();
		}
		if (isManeuver(catalogElement))
		{
			return (( IManeuver) catalogElement).getName();
		}
		if (isMiscObject(catalogElement))
		{
			return (( IMiscObject) catalogElement).getName();
		}
		if (isPedestrian(catalogElement))
		{
			return (( IPedestrian) catalogElement).getName();
		}
		if (isRoute(catalogElement))
		{
			return (( IRoute) catalogElement).getName();
		}
		if (isTrajectory(catalogElement))
		{
			return (( ITrajectory) catalogElement).getName();
		}
		if (isVehicle(catalogElement))
		{
			return (( IVehicle) catalogElement).getName();
		}
		return null;
	}

}
