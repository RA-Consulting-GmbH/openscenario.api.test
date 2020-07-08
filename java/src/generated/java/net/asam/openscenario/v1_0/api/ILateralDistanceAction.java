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

import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.api.IOpenScenarioFlexElement;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * This action describes a continuously kept lateral distance of an entity with respect to a reference entity. The distance
 * can be maintained by using a controller, requiring limiting values for lateral acceleration, lateral deceleration and
 * lateral speed. Without this limiting parameters lateral distance is kept rigid. Distance measurement could either be
 * calculated from the distance between the entities' reference points or from the free space between the entities'
 * bounding boxes.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ILateralDistanceAction extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the reference entity the lateral distance shall be kept to.
	 * 
	 * @return value of model property entityRef
	*/
	public INamedReference<IEntity> getEntityRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Lateral distance value. Unit: m; Range: [0..inf[.
	 * 
	 * @return value of model property distance
	*/
	public Double getDistance();

	/**
	 * From OpenSCENARIO class model specification:
	 * True: Lateral distance is measured using the distance between closest bounding box points. False: Reference point
	 * distance is used.
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
	 * Parameter that assigns either unlimited dynamics (if omitted) or limited maxAcceleration/maxDeceleration/maxSpeed to the
	 * action.
	 * 
	 * @return value of model property dynamicConstraints
	*/
	public IDynamicConstraints getDynamicConstraints();
}
