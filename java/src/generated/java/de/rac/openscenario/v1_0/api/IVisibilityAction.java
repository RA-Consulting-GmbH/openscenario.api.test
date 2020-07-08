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
 * Action that toggles (on or off) an entity's visibility attributes, with respect to sensors, other traffic or the
 * graphics engine.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IVisibilityAction extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * True: actor is visible in image generator(s). False: actor is not visible in image generator(s).
	 * 
	 * @return value of model property graphics
	*/
	public Boolean getGraphics();

	/**
	 * From OpenSCENARIO class model specification:
	 * True: actor is visible for other traffic participants, particularly for autonomous driver models. False: actor is not
	 * visible for other traffic participants.
	 * 
	 * @return value of model property traffic
	*/
	public Boolean getTraffic();

	/**
	 * From OpenSCENARIO class model specification:
	 * True: actor is visible in sensor(s). False: actor is not visible in sensor(s).
	 * 
	 * @return value of model property sensors
	*/
	public Boolean getSensors();
}
