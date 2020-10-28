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
import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.v1_0.api.IParameterCondition;
import net.asam.openscenario.v1_0.api.IParameterDeclaration;
import net.asam.openscenario.v1_0.api.Rule;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'ParameterCondition' From OpenSCENARIO class model specification:
 * Compares a named parameter's value to a reference value. The logical operator used for comparison
 * is defined by the rule attribute Less and greater operator will only be supported if the value
 * given as string can unambiguously be converted into a scalar value (e.g. value=5, value=16.667).
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IParameterConditionWriter extends IParameterCondition, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Name of the parameter that must be defined.
   *
   * @param parameterRef value of model property parameterRef
   */
  public void setParameterRef(INamedReference<IParameterDeclaration> parameterRef);
  /**
   * From OpenSCENARIO class model specification: Value of the parameter.
   *
   * @param value value of model property value
   */
  public void setValue(String value);
  /**
   * From OpenSCENARIO class model specification: The operator (less, greater, equal).
   *
   * @param rule value of model property rule
   */
  public void setRule(Rule rule);

  /**
   * Set a parameter for the attribute parameterRef
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToParameterRef(String parameterName);
  /**
   * Set a parameter for the attribute value
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToValue(String parameterName);
  /**
   * Set a parameter for the attribute rule
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToRule(String parameterName);

  /**
   * Get the parameter for the attribute parameterRef
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromParameterRef();
  /**
   * Get the parameter for the attribute value
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromValue();
  /**
   * Get the parameter for the attribute rule
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromRule();

  /**
   * Retrieves whether the attribute parameterRef is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isParameterRefParameterized();
  /**
   * Retrieves whether the attribute value is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isValueParameterized();
  /**
   * Retrieves whether the attribute rule is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isRuleParameterized();

  // children

}
