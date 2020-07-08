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


import net.asam.openscenario.api.IOpenScenarioFlexElement;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Position along a route defined in terms of PositionInRoadCoordinates, PositionInLaneCoordinates or current position of a
 * reference object. Orientation definition is optional.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRoutePosition extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference to the route the position is calculated from.
	 * 
	 * @return value of model property routeRef
	*/
	public IRouteRef getRouteRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the referenced road's s and t coordinates, to the current lane's s
	 * and t coordinates or to the orientation of the reference entity.
	 * 
	 * @return value of model property orientation
	*/
	public IOrientation getOrientation();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position along the route.
	 * 
	 * @return value of model property inRoutePosition
	*/
	public IInRoutePosition getInRoutePosition();
}
