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
 * Defines a target speed relative to a reference entity's speed.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IRelativeTargetSpeed extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Reference entity.
	 * 
	 * @return value of model property entityRef
	*/
	public INamedReference<IEntity> getEntityRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Value of the relative speed. This value is either given as a delta or as a factor. E.g. value=10 together with
	 * valueType=delta means the entity/entities are supposed to drive 10m/s faster than the target reference entity. E.g.
	 * value=1.1 together with valueType=factor means that the entity/entities are supposed to drive 10% faster than the target
	 * reference entity. Unit: m/s or 1.
	 * 
	 * @return value of model property value
	*/
	public Double getValue();

	/**
	 * From OpenSCENARIO class model specification:
	 * The value is either a delta (Unit m/s) or a factor (no Unit).
	 * 
	 * @return value of model property speedTargetValueType
	*/
	public SpeedTargetValueType getSpeedTargetValueType();

	/**
	 * From OpenSCENARIO class model specification:
	 * By setting continuous to true a controller comes into place and tries to maintain a continuous relative speed. This may
	 * not be used together with Dynamics.time or Dynamics.distance.
	 * 
	 * @return value of model property continuous
	*/
	public Boolean getContinuous();
}
