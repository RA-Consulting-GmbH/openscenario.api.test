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
 * This action activates or deactivates controller defined (e.g. automated, autonomous) behavior on the given entity.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IActivateControllerAction extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * In lateral domain: Activate or deactivate controller defined (e.g. automated, autonomous) behavior.
	 * 
	 * @return value of model property lateral
	*/
	public Boolean getLateral();

	/**
	 * From OpenSCENARIO class model specification:
	 * In longitudinal domain: Activate or deactivate autonomous behavior.
	 * 
	 * @return value of model property longitudinal
	*/
	public Boolean getLongitudinal();
}
