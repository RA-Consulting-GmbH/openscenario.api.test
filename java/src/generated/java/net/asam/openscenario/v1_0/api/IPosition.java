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
 * Container for position types.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IPosition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Position that uses global coordinates.
	 * 
	 * @return value of model property worldPosition
	*/
	public IWorldPosition getWorldPosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position is given relative to a world position.
	 * 
	 * @return value of model property relativeWorldPosition
	*/
	public IRelativeWorldPosition getRelativeWorldPosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position is given relative to an entity.
	 * 
	 * @return value of model property relativeObjectPosition
	*/
	public IRelativeObjectPosition getRelativeObjectPosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position in road coordinates (t,s) applied to a given road.
	 * 
	 * @return value of model property roadPosition
	*/
	public IRoadPosition getRoadPosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position relative to an entity's road position (ds, dt).
	 * 
	 * @return value of model property relativeRoadPosition
	*/
	public IRelativeRoadPosition getRelativeRoadPosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position that is determined by a lane (lane ID) and the s coordinate of a given road.
	 * 
	 * @return value of model property lanePosition
	*/
	public ILanePosition getLanePosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position that is determined relative to the lane coordinates of a given entity. (Relative lane and relative s to this
	 * entity).
	 * 
	 * @return value of model property relativeLanePosition
	*/
	public IRelativeLanePosition getRelativeLanePosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position that is determined by a given route.
	 * 
	 * @return value of model property routePosition
	*/
	public IRoutePosition getRoutePosition();
}
