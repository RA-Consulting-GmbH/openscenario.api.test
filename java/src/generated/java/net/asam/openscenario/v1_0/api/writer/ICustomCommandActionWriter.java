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
 * <p>A Writer for the type 'CustomCommandAction' From OpenSCENARIO class model specification: Used
 * to activate a custom action native to the specific user environment
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ICustomCommandActionWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Type that is defined as a contract between the
   * simulation environment provider and the author of a scenario.
   *
   * @return value of model property type
   */
  public String getType();
  /**
   * From OpenSCENARIO class model specification: The command that is defined as a contract between
   * the simulation environment provider and the author of a scenario.
   *
   * @return value of model property content
   */
  public String getContent();

  /**
   * From OpenSCENARIO class model specification: Type that is defined as a contract between the
   * simulation environment provider and the author of a scenario.
   *
   * @param type value of model property type
   */
  public void writeToType(String type);
  /**
   * From OpenSCENARIO class model specification: The command that is defined as a contract between
   * the simulation environment provider and the author of a scenario.
   *
   * @param content value of model property content
   */
  public void writeToContent(String content);

  /**
   * Set a parameter for the attribute type
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToType(String parameterName);
  /**
   * Set a parameter for the attribute content
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToContent(String parameterName);

  /**
   * Get the parameter for the attribute type
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromType();
  /**
   * Get the parameter for the attribute content
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromContent();

  /**
   * Retrieves whether the attribute type is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isTypeParameterized();
  /**
   * Retrieves whether the attribute content is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isContentParameterized();

  // children

}
