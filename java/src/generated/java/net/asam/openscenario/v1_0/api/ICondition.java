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

import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>From OpenSCENARIO class model specification: A condition represents a set of logical
 * expressions that evaluate the relationship of values provided by the user. These values may be
 * entity states, scenario properties, scenario states or external signals. Conditions are the main
 * components in triggers.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ICondition extends IOpenScenarioModelElement {
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
   * From OpenSCENARIO class model specification: A condition that refers to an entity.
   *
   * @return value of model property byEntityCondition
   */
  public IByEntityCondition getByEntityCondition();
  /**
   * From OpenSCENARIO class model specification: A condition that refers to a runtime value.
   *
   * @return value of model property byValueCondition
   */
  public IByValueCondition getByValueCondition();
}
