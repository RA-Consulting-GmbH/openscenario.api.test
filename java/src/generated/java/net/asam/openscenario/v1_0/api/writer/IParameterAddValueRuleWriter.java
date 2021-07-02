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

import net.asam.openscenario.api.writer.IOpenScenarioElementWriter;
import net.asam.openscenario.v1_0.api.IParameterAddValueRule;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'ParameterAddValueRule' From OpenSCENARIO class model specification:
 * Defines an addition of a value to a parameter as part of a ModifyRule.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IParameterAddValueRuleWriter
    extends IParameterAddValueRule, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Add value to existing parameter.
   *
   * @param value value of model property value
   */
  public void setValue(Double value);

  /**
   * Set a parameter for the attribute value
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToValue(String parameterName);

  /**
   * Get the parameter for the attribute value
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromValue();

  /**
   * Retrieves whether the attribute value is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isValueParameterized();

  // children

}
