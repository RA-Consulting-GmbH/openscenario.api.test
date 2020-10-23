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
import net.asam.openscenario.v1_0.api.ParameterType;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'ParameterDeclaration' From OpenSCENARIO class model specification:
 * Declaration of a parameter.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IParameterDeclarationWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Type of the parameter.
   *
   * @return value of model property parameterType
   */
  public ParameterType getParameterType();
  /**
   * From OpenSCENARIO class model specification: Value of the parameter as its default value.
   *
   * @return value of model property value
   */
  public String getValue();

  /**
   * From OpenSCENARIO class model specification: Type of the parameter.
   *
   * @param parameterType value of model property parameterType
   */
  public void writeToParameterType(ParameterType parameterType);
  /**
   * From OpenSCENARIO class model specification: Value of the parameter as its default value.
   *
   * @param value value of model property value
   */
  public void writeToValue(String value);

  /**
   * Set a parameter for the attribute parameterType
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToParameterType(String parameterName);
  /**
   * Set a parameter for the attribute value
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToValue(String parameterName);

  /**
   * Get the parameter for the attribute parameterType
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromParameterType();
  /**
   * Get the parameter for the attribute value
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromValue();

  /**
   * Retrieves whether the attribute parameterType is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isParameterTypeParameterized();
  /**
   * Retrieves whether the attribute value is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isValueParameterized();

  // children

}
