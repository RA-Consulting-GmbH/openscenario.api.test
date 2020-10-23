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
package net.asam.openscenario.v1_0.api.writer;

import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'CollisionCondition' From OpenSCENARIO class model specification:
 * Condition becomes true when the triggering entity/entities collide with another given entity or
 * any entity of a specific type.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ICollisionConditionWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: Name of a specific entity.
   *
   * @return a writer for model property entityRef
   */
  public IEntityRefWriter getEntityRefWriter();
  /**
   * From OpenSCENARIO class model specification: Entities of this type can trigger the condition
   * when collide.
   *
   * @return a writer for model property byType
   */
  public IByObjectTypeWriter getByTypeWriter();

  /**
   * From OpenSCENARIO class model specification: Name of a specific entity.
   *
   * @param entityRefWriter writer for the model property entityRef
   */
  public void writeToEntityRefWriter(IEntityRefWriter entityRefWriter);
  /**
   * From OpenSCENARIO class model specification: Entities of this type can trigger the condition
   * when collide.
   *
   * @param byTypeWriter writer for the model property byType
   */
  public void writeToByTypeWriter(IByObjectTypeWriter byTypeWriter);
}
