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
import net.asam.openscenario.v1_0.api.IActivateControllerAction;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'ActivateControllerAction' From OpenSCENARIO class model specification:
 * This action activates or deactivates controller defined (e.g. automated, autonomous) behavior on
 * the given entity.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IActivateControllerActionWriter
    extends IActivateControllerAction, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: In lateral domain: Activate or deactivate
   * controller defined (e.g. automated, autonomous) behavior.
   *
   * @param lateral value of model property lateral
   */
  public void setLateral(Boolean lateral);
  /**
   * From OpenSCENARIO class model specification: In longitudinal domain: Activate or deactivate
   * autonomous behavior.
   *
   * @param longitudinal value of model property longitudinal
   */
  public void setLongitudinal(Boolean longitudinal);

  /**
   * Set a parameter for the attribute lateral
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToLateral(String parameterName);
  /**
   * Set a parameter for the attribute longitudinal
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToLongitudinal(String parameterName);

  /**
   * Get the parameter for the attribute lateral
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromLateral();
  /**
   * Get the parameter for the attribute longitudinal
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromLongitudinal();

  /**
   * Retrieves whether the attribute lateral is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isLateralParameterized();
  /**
   * Retrieves whether the attribute longitudinal is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isLongitudinalParameterized();

  // children

}
