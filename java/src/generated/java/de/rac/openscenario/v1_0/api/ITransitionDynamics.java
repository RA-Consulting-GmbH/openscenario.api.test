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
package de.rac.openscenario.v1_0.api;


import de.rac.openscenario.api.IOpenScenarioFlexElement;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Specifies the dynamics of a value transition and defines how the value changes over time or distance. Different shapes
 * can be used for the transition. Step is an immediate transition, i.e. a jump from the current current value to the
 * target value. In this case value for time or distance must be 0. Linear will result in a linear transition between the
 * start and end value. A smooth transition is only given with cubic and sinusoidal shape.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITransitionDynamics extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * The shape of the transition function f(x) between current and target value.
	 * 
	 * @return value of model property dynamicsShape
	*/
	public DynamicsShape getDynamicsShape();

	/**
	 * From OpenSCENARIO class model specification:
	 * The value for a predefined rate (Unit: delta/s), time (Unit: s) or distance (Unit: m) to acquire the target value.
	 * Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/
	public Double getValue();

	/**
	 * From OpenSCENARIO class model specification:
	 * The semantics of the value: 'rate', 'time' or 'distance'.
	 * 
	 * @return value of model property dynamicsDimension
	*/
	public DynamicsDimension getDynamicsDimension();
}
