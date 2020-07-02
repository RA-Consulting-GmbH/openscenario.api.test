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


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The definition of vehicle axle.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IAxle extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Maximum steering angle which can be performed by the wheels on this axle. Unit: rad; Range: [0;PI], symmetrical.
	 * 
	 * @return value of model property maxSteering
	*/
	public Double getMaxSteering();

	/**
	 * From OpenSCENARIO class model specification:
	 * Diameter of the wheels on this axle. Unit: m; Range: ]0..inf[.
	 * 
	 * @return value of model property wheelDiameter
	*/
	public Double getWheelDiameter();

	/**
	 * From OpenSCENARIO class model specification:
	 * Distance of the wheels center lines at zero steering. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property trackWidth
	*/
	public Double getTrackWidth();

	/**
	 * From OpenSCENARIO class model specification:
	 * Longitudinal position of the axle with respect to the vehicles reference point. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property positionX
	*/
	public Double getPositionX();

	/**
	 * From OpenSCENARIO class model specification:
	 * Z-position of the axle with respect to the vehicles reference point. Usually this is half of wheel diameter. Unit:m;
	 * Range:[0..inf[.
	 * 
	 * @return value of model property positionZ
	*/
	public Double getPositionZ();
}
