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

import de.rac.openscenario.v1_0.common.INamedReference;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * This action activates a controller for the longitudinal behavior of an entity in a way that a given distance or time gap
 * to the reference entity is maintained. The dynamic behavior of the controller may be limited by parameters. Choosing a
 * non-limited dynamic behavior represents a rigid time or distance connection between actor and object.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ILongitudinalDistanceAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity the distance shall be kept to.
	 * 
	 * @return value of model property entityRef
	*/
	public INamedReference<IEntity> getEntityRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Distance value, not to be used together with timeGap attribute. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property distance
	*/
	public Double getDistance();

	/**
	 * From OpenSCENARIO class model specification:
	 * Time gap value, not to be used together with distance attribute. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property timeGap
	*/
	public Double getTimeGap();

	/**
	 * From OpenSCENARIO class model specification:
	 * True: Distance is measured using the distance between closest bounding box points False: Reference point distance is
	 * used.
	 * 
	 * @return value of model property freespace
	*/
	public Boolean getFreespace();

	/**
	 * From OpenSCENARIO class model specification:
	 * If false, the action ends when the target distance is reached. If true it does not end and can only be stopped.
	 * 
	 * @return value of model property continuous
	*/
	public Boolean getContinuous();

	/**
	 * From OpenSCENARIO class model specification:
	 * Parameter that assigns either unlimited dynamics (if ommitted) or limited maxAcceleration/maxDeceleration/maxSpeed to
	 * the action.
	 * 
	 * @return value of model property dynamicConstraints
	*/
	public IDynamicConstraints getDynamicConstraints();
}
