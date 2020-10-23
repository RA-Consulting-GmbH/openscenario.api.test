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
 * <p>A Writer for the type 'ByEntityCondition' From OpenSCENARIO class model specification:
 * Conditions referring an entity need to know which entity shall trigger the condition.
 * TriggeringEntities is a collection of entities whose states are used to verify the given
 * condition. An additional attribute needs to specify if one of the entities is enough for the
 * condition to become true, or if all of them are required.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IByEntityConditionWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: A list of entities triggering this condition.
   *
   * @return a writer for model property triggeringEntities
   */
  public ITriggeringEntitiesWriter getTriggeringEntitiesWriter();
  /**
   * From OpenSCENARIO class model specification: The condition which is related to the triggering
   * entities.
   *
   * @return a writer for model property entityCondition
   */
  public IEntityConditionWriter getEntityConditionWriter();

  /**
   * From OpenSCENARIO class model specification: A list of entities triggering this condition.
   *
   * @param triggeringEntitiesWriter writer for the model property triggeringEntities
   */
  public void writeToTriggeringEntitiesWriter(ITriggeringEntitiesWriter triggeringEntitiesWriter);
  /**
   * From OpenSCENARIO class model specification: The condition which is related to the triggering
   * entities.
   *
   * @param entityConditionWriter writer for the model property entityCondition
   */
  public void writeToEntityConditionWriter(IEntityConditionWriter entityConditionWriter);
}
