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
 * Conditions referring a runtime value.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IByValueCondition extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * A current parameter value is compared to a reference value.
	 * 
	 * @return value of model property parameterCondition
	*/
	public IParameterCondition getParameterCondition();

	/**
	 * From OpenSCENARIO class model specification:
	 * The current time of day is compared to a reference value.
	 * 
	 * @return value of model property timeOfDayCondition
	*/
	public ITimeOfDayCondition getTimeOfDayCondition();

	/**
	 * From OpenSCENARIO class model specification:
	 * The current simulation time is compared to a reference value.
	 * 
	 * @return value of model property simulationTimeCondition
	*/
	public ISimulationTimeCondition getSimulationTimeCondition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition becomes true if the referenced StoryboardElement terminates according to the given rule.
	 * 
	 * @return value of model property storyboardElementStateCondition
	*/
	public IStoryboardElementStateCondition getStoryboardElementStateCondition();

	/**
	 * From OpenSCENARIO class model specification:
	 * The current value of an externally defined named value is compared to a reference value (less, greater, equal).
	 * 
	 * @return value of model property userDefinedValueCondition
	*/
	public IUserDefinedValueCondition getUserDefinedValueCondition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition becomes true if the referenced signal reaches the indicated state.
	 * 
	 * @return value of model property trafficSignalCondition
	*/
	public ITrafficSignalCondition getTrafficSignalCondition();

	/**
	 * From OpenSCENARIO class model specification:
	 * Condition becomes true if the referenced signal controller reaches the indicated state.
	 * 
	 * @return value of model property trafficSignalControllerCondition
	*/
	public ITrafficSignalControllerCondition getTrafficSignalControllerCondition();
}
