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
import net.asam.openscenario.v1_0.api.Rule;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'TimeOfDayCondition' From OpenSCENARIO class model specification: The
 * logical expression is considered true if the simulated time and date verifies the specified
 * relation rule (bigger than, smaller than, or equal to) relatively to a given time and date value.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ITimeOfDayConditionWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: The operator (less, greater, equal).
   *
   * @return value of model property rule
   */
  public Rule getRule();
  /**
   * From OpenSCENARIO class model specification: Datetime value for comparison.
   *
   * @return value of model property dateTime
   */
  public java.util.Date getDateTime();

  /**
   * From OpenSCENARIO class model specification: The operator (less, greater, equal).
   *
   * @param rule value of model property rule
   */
  public void writeToRule(Rule rule);
  /**
   * From OpenSCENARIO class model specification: Datetime value for comparison.
   *
   * @param dateTime value of model property dateTime
   */
  public void writeToDateTime(java.util.Date dateTime);

  /**
   * Set a parameter for the attribute rule
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToRule(String parameterName);
  /**
   * Set a parameter for the attribute dateTime
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToDateTime(String parameterName);

  /**
   * Get the parameter for the attribute rule
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromRule();
  /**
   * Get the parameter for the attribute dateTime
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromDateTime();

  /**
   * Retrieves whether the attribute rule is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isRuleParameterized();
  /**
   * Retrieves whether the attribute dateTime is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isDateTimeParameterized();

  // children

}
