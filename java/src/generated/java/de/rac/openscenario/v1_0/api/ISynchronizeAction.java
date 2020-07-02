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
 * Synchronizes an entity's arrival at a destination with a master entity. Both entities are provided with their own
 * reference position which shall be reached at the same time. Final speed can be specified. Note that the reference
 * positions can be different or identical.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ISynchronizeAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * A reference to the master entity.
	 * 
	 * @return value of model property masterEntityRef
	*/
	public INamedReference<IEntity> getMasterEntityRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * The target position for the master entity.
	 * 
	 * @return value of model property targetPositionMaster
	*/
	public IPosition getTargetPositionMaster();

	/**
	 * From OpenSCENARIO class model specification:
	 * The target position for the entity that should be synchronized.
	 * 
	 * @return value of model property targetPosition
	*/
	public IPosition getTargetPosition();

	/**
	 * From OpenSCENARIO class model specification:
	 * The speed that the synchronized entity should have at its target position.
	 * 
	 * @return value of model property finalSpeed
	*/
	public IFinalSpeed getFinalSpeed();
}
