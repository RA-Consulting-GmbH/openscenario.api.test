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
 * A position which is fixed in the inertial reference frame of the simulation environment, the so-called world coordinate
 * system.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IWorldPosition extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * The x coordinate value.
	 * 
	 * @return value of model property x
	*/
	public Double getX();

	/**
	 * From OpenSCENARIO class model specification:
	 * The y coordinate value.
	 * 
	 * @return value of model property y
	*/
	public Double getY();

	/**
	 * From OpenSCENARIO class model specification:
	 * The z coordinate value.
	 * 
	 * @return value of model property z
	*/
	public Double getZ();

	/**
	 * From OpenSCENARIO class model specification:
	 * The heading angle of the object, defining a mathematically positive rotation about the z-axis (see ISO 8855:2011).
	 * 
	 * @return value of model property h
	*/
	public Double getH();

	/**
	 * From OpenSCENARIO class model specification:
	 * The pitch angle of the object, defining a mathematically positive rotation about the y-axis (see ISO 8855:2011).
	 * 
	 * @return value of model property p
	*/
	public Double getP();

	/**
	 * From OpenSCENARIO class model specification:
	 * The roll angle of the object, defining a mathematically positive rotation about the x-axis (see ISO 8855:2011).
	 * 
	 * @return value of model property r
	*/
	public Double getR();
}
