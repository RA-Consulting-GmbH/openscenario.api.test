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
 * Defines the current position in a given route, either through a position in the lane coordinate system, a position in a
 * road coordinate system or through the current position of an entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IInRoutePosition extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * The position is defined through the current position of a given entity.
	 * 
	 * @return value of model property fromCurrentEntity
	*/
	public IPositionOfCurrentEntity getFromCurrentEntity();

	/**
	 * From OpenSCENARIO class model specification:
	 * Route position in road coordinate system.
	 * 
	 * @return value of model property fromRoadCoordinates
	*/
	public IPositionInRoadCoordinates getFromRoadCoordinates();

	/**
	 * From OpenSCENARIO class model specification:
	 * Route position in lane coordinate system.
	 * 
	 * @return value of model property fromLaneCoordinates
	*/
	public IPositionInLaneCoordinates getFromLaneCoordinates();
}
