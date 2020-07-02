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
 * Position defined in terms of road ID, distance (s) along that road segment and offset from reference lane (t) at that
 * point. Orientation is optional.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRoadPosition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Identifier of the road, defined in the road network definition file (external to ASAM OpenSCENARIO).
	 * 
	 * @return value of model property roadId
	*/
	public String getRoadId();

	/**
	 * From OpenSCENARIO class model specification:
	 * Represents s coordinate along the reference line of the road.
	 * 
	 * @return value of model property s
	*/
	public Double getS();

	/**
	 * From OpenSCENARIO class model specification:
	 * Represents t coordinate orthogonal to the reference line of the road.
	 * 
	 * @return value of model property t
	*/
	public Double getT();

	/**
	 * From OpenSCENARIO class model specification:
	 * Orientation. The relative reference context refers to the referenced road's s and t coordinates.
	 * 
	 * @return value of model property orientation
	*/
	public IOrientation getOrientation();
}
