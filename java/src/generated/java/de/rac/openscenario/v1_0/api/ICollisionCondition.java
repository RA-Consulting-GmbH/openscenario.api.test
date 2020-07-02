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
 * Condition becomes true when the triggering entity/entities collide with another given entity or any entity of a specific
 * type.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ICollisionCondition extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of a specific entity.
	 * 
	 * @return value of model property entityRef
	*/
	public IEntityRef getEntityRef();

	/**
	 * From OpenSCENARIO class model specification:
	 * Entities of this type can trigger the condition when collide.
	 * 
	 * @return value of model property byType
	*/
	public IByObjectType getByType();
}
