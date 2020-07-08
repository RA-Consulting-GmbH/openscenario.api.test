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
 * This condition acts as a wrapper for external custom conditions which are implemented in the user software. This
 * condition is considered true if the given value verifies the specified relation rule (bigger than, smaller than, or
 * equal to) relatively to the provided reference.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IUserDefinedValueCondition extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the external value.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference value the external value is compared to.
	 * 
	 * @return value of model property value
	*/
	public String getValue();

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
	public Rule getRule();
}
