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
 * The current distance between an entity and a reference entity is compared to a given distance (less, greater, equal).
 * Several additional parameters like free space etc. can be defined.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IDistanceCondition extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * The distance value. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property value
	*/
	public Double getValue();

	/**
	 * From OpenSCENARIO class model specification:
	 * True: distance is measured between closest bounding box points. False: reference point distance is used.
	 * 
	 * @return value of model property freespace
	*/
	public Boolean getFreespace();

	/**
	 * From OpenSCENARIO class model specification:
	 * True: routing is taken into account, e.g. turns will increase distance. False: straight line distance is used.
	 * 
	 * @return value of model property alongRoute
	*/
	public Boolean getAlongRoute();

	/**
	 * From OpenSCENARIO class model specification:
	 * The operator (less, greater, equal).
	 * 
	 * @return value of model property rule
	*/
	public Rule getRule();

	/**
	 * From OpenSCENARIO class model specification:
	 * The given position the distance is related to.
	 * 
	 * @return value of model property position
	*/
	public IPosition getPosition();
}
