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
 * Actions that does not explicitly target an entityâ€™s state.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IGlobalAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Sets the weather state, road conditions, and time of the day.
	 * 
	 * @return value of model property environmentAction
	*/
	public IEnvironmentAction getEnvironmentAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Removing or adding entities.
	 * 
	 * @return value of model property entityAction
	*/
	public IEntityAction getEntityAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Setting/modifying values of parameters.
	 * 
	 * @return value of model property parameterAction
	*/
	public IParameterAction getParameterAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Setting/modifying traffic signals.
	 * 
	 * @return value of model property infrastructureAction
	*/
	public IInfrastructureAction getInfrastructureAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Populating ambient traffic.
	 * 
	 * @return value of model property trafficAction
	*/
	public ITrafficAction getTrafficAction();
}
