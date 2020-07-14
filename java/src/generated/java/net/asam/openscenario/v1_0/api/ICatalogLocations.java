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
package net.asam.openscenario.v1_0.api;


import net.asam.openscenario.api.IOpenScenarioModelElement;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Set of catalogs which are referenced in a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ICatalogLocations extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on vehicle types.
	 * 
	 * @return value of model property vehicleCatalog
	*/
	public IVehicleCatalogLocation getVehicleCatalog();

	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on controller types.
	 * 
	 * @return value of model property controllerCatalog
	*/
	public IControllerCatalogLocation getControllerCatalog();

	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on pedestrian types.
	 * 
	 * @return value of model property pedestrianCatalog
	*/
	public IPedestrianCatalogLocation getPedestrianCatalog();

	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on miscellaneous object types.
	 * 
	 * @return value of model property miscObjectCatalog
	*/
	public IMiscObjectCatalogLocation getMiscObjectCatalog();

	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on environment types.
	 * 
	 * @return value of model property environmentCatalog
	*/
	public IEnvironmentCatalogLocation getEnvironmentCatalog();

	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on maneuver types.
	 * 
	 * @return value of model property maneuverCatalog
	*/
	public IManeuverCatalogLocation getManeuverCatalog();

	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on trajectory types.
	 * 
	 * @return value of model property trajectoryCatalog
	*/
	public ITrajectoryCatalogLocation getTrajectoryCatalog();

	/**
	 * From OpenSCENARIO class model specification:
	 * This catalog location is the first choice to resolve CatalogReferences on route types.
	 * 
	 * @return value of model property routeCatalog
	*/
	public IRouteCatalogLocation getRouteCatalog();
}
