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
import net.asam.openscenario.v1_0.api.ConditionEdge;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Condition' From OpenSCENARIO class model specification: A condition
 * represents a set of logical expressions that evaluate the relationship of values provided by the
 * user. These values may be entity states, scenario properties, scenario states or external
 * signals. Conditions are the main components in triggers.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IConditionWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Name of the condition.
   *
   * @return value of model property name
   */
  public String getName();
  /**
   * From OpenSCENARIO class model specification: Time elapsed after the edge condition is verified,
   * until the condition returns true to the scenario. Unit: s; Range: [0..inf[.
   *
   * @return value of model property delay
   */
  public Double getDelay();
  /**
   * From OpenSCENARIO class model specification: Specifies the edge when the condition is evaluated
   * to true (rising, falling, any).
   *
   * @return value of model property conditionEdge
   */
  public ConditionEdge getConditionEdge();

  /**
   * From OpenSCENARIO class model specification: Name of the condition.
   *
   * @param name value of model property name
   */
  public void writeToName(String name);
  /**
   * From OpenSCENARIO class model specification: Time elapsed after the edge condition is verified,
   * until the condition returns true to the scenario. Unit: s; Range: [0..inf[.
   *
   * @param delay value of model property delay
   */
  public void writeToDelay(Double delay);
  /**
   * From OpenSCENARIO class model specification: Specifies the edge when the condition is evaluated
   * to true (rising, falling, any).
   *
   * @param conditionEdge value of model property conditionEdge
   */
  public void writeToConditionEdge(ConditionEdge conditionEdge);

  /**
   * Set a parameter for the attribute name
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToName(String parameterName);
  /**
   * Set a parameter for the attribute delay
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToDelay(String parameterName);
  /**
   * Set a parameter for the attribute conditionEdge
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToConditionEdge(String parameterName);

  /**
   * Get the parameter for the attribute name
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromName();
  /**
   * Get the parameter for the attribute delay
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromDelay();
  /**
   * Get the parameter for the attribute conditionEdge
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromConditionEdge();

  /**
   * Retrieves whether the attribute name is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isNameParameterized();
  /**
   * Retrieves whether the attribute delay is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isDelayParameterized();
  /**
   * Retrieves whether the attribute conditionEdge is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isConditionEdgeParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: A condition that refers to an entity.
   *
   * @return a writer for model property byEntityCondition
   */
  public IByEntityConditionWriter getByEntityConditionWriter();
  /**
   * From OpenSCENARIO class model specification: A condition that refers to a runtime value.
   *
   * @return a writer for model property byValueCondition
   */
  public IByValueConditionWriter getByValueConditionWriter();

  /**
   * From OpenSCENARIO class model specification: A condition that refers to an entity.
   *
   * @param byEntityConditionWriter writer for the model property byEntityCondition
   */
  public void writeToByEntityConditionWriter(IByEntityConditionWriter byEntityConditionWriter);
  /**
   * From OpenSCENARIO class model specification: A condition that refers to a runtime value.
   *
   * @param byValueConditionWriter writer for the model property byValueCondition
   */
  public void writeToByValueConditionWriter(IByValueConditionWriter byValueConditionWriter);
}
