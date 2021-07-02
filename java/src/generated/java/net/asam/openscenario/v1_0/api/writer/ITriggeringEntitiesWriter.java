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
import net.asam.openscenario.v1_0.api.ITriggeringEntities;
import net.asam.openscenario.v1_0.api.TriggeringEntitiesRule;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'TriggeringEntities' From OpenSCENARIO class model specification: A
 * collection of entities evaluated for an EntityCondition to be triggered. It is optional whether
 * the condition must be fulfilled any or all of the objects.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ITriggeringEntitiesWriter extends ITriggeringEntities, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: All or any.
   *
   * @param triggeringEntitiesRule value of model property triggeringEntitiesRule
   */
  public void setTriggeringEntitiesRule(TriggeringEntitiesRule triggeringEntitiesRule);
  /**
   * From OpenSCENARIO class model specification: List of referenced entities that trigger the
   * condition.
   *
   * @param entityRefs value of model property entityRefs
   */
  public void setEntityRefs(List<IEntityRefWriter> entityRefs);

  /**
   * Set a parameter for the attribute triggeringEntitiesRule
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToTriggeringEntitiesRule(String parameterName);

  /**
   * Get the parameter for the attribute triggeringEntitiesRule
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromTriggeringEntitiesRule();

  /**
   * Retrieves whether the attribute triggeringEntitiesRule is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isTriggeringEntitiesRuleParameterized();

  // children

  /**
   * From OpenSCENARIO class model specification: List of referenced entities that trigger the
   * condition.
   *
   * @return a list of writers for model property entityRefs
   */
  public List<IEntityRefWriter> getWriterEntityRefs();
}
