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
 * Specification of one control point of a NURBS trajectory.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IControlPoint extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Optional specification of the time dimension of the control point. Unit: s;Range [0..inf[.
	 * 
	 * @return value of model property time
	*/
	public Double getTime();

	/**
	 * From OpenSCENARIO class model specification:
	 * Optional weight specification of the control point. If unspecified, all control points will be equal weighted. Range
	 * ]-inf..inf[.
	 * 
	 * @return value of model property weight
	*/
	public Double getWeight();

	/**
	 * From OpenSCENARIO class model specification:
	 * Position of the control point.
	 * 
	 * @return value of model property position
	*/
	public IPosition getPosition();
}
