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
 * Controls the lateral behavior of an entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ILateralAction extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Action defining a lane change.
	 * 
	 * @return value of model property laneChangeAction
	*/
	public ILaneChangeAction getLaneChangeAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Action defining a continuously kept lane offset.
	 * 
	 * @return value of model property laneOffsetAction
	*/
	public ILaneOffsetAction getLaneOffsetAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Action defining a continuously kept lateral distance to a specific entity.
	 * 
	 * @return value of model property lateralDistanceAction
	*/
	public ILateralDistanceAction getLateralDistanceAction();
}
