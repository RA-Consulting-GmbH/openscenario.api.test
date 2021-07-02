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

import java.util.List;
import net.asam.openscenario.api.writer.IOpenScenarioElementWriter;
import net.asam.openscenario.v1_0.api.IActors;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Actors' From OpenSCENARIO class model specification: A set of entities
 * representing the actors in a maneuver group.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IActorsWriter extends IActors, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Indicates whether the triggering entities are
   * considered actors.
   *
   * @param selectTriggeringEntities value of model property selectTriggeringEntities
   */
  public void setSelectTriggeringEntities(Boolean selectTriggeringEntities);
  /**
   * From OpenSCENARIO class model specification: A list of entities this actor is referencing.
   *
   * @param entityRefs value of model property entityRefs
   */
  public void setEntityRefs(List<IEntityRefWriter> entityRefs);

  /**
   * Set a parameter for the attribute selectTriggeringEntities
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToSelectTriggeringEntities(String parameterName);

  /**
   * Get the parameter for the attribute selectTriggeringEntities
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromSelectTriggeringEntities();

  /**
   * Retrieves whether the attribute selectTriggeringEntities is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isSelectTriggeringEntitiesParameterized();

  // children

  /**
   * From OpenSCENARIO class model specification: A list of entities this actor is referencing.
   *
   * @return a list of writers for model property entityRefs
   */
  public List<IEntityRefWriter> getWriterEntityRefs();
}
