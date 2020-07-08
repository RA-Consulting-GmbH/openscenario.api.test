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
 * Controls the longitudinal behavior of an entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ILongitudinalAction extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * This action describes the transition between the current longitudinal speed of an entity and its target speed.
	 * 
	 * @return value of model property speedAction
	*/
	public ISpeedAction getSpeedAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * This Action defines a continuously kept longitudinal distance to a specific entity.
	 * 
	 * @return value of model property longitudinalDistanceAction
	*/
	public ILongitudinalDistanceAction getLongitudinalDistanceAction();
}
