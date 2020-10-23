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
 * <p>A Writer for the type 'ControllerDistributionEntry' From OpenSCENARIO class model
 * specification: Defines that weight in a controller distribution, for the given controller type.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IControllerDistributionEntryWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: The weight of the entry. Range: ]0..inf[.
   *
   * @return value of model property weight
   */
  public Double getWeight();

  /**
   * From OpenSCENARIO class model specification: The weight of the entry. Range: ]0..inf[.
   *
   * @param weight value of model property weight
   */
  public void writeToWeight(Double weight);

  /**
   * Set a parameter for the attribute weight
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToWeight(String parameterName);

  /**
   * Get the parameter for the attribute weight
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromWeight();

  /**
   * Retrieves whether the attribute weight is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isWeightParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: The specified controller type.
   *
   * @return a writer for model property controller
   */
  public IControllerWriter getControllerWriter();
  /**
   * From OpenSCENARIO class model specification: A controller type import from a catalog.
   *
   * @return a writer for model property catalogReference
   */
  public ICatalogReferenceWriter getCatalogReferenceWriter();

  /**
   * From OpenSCENARIO class model specification: The specified controller type.
   *
   * @param controllerWriter writer for the model property controller
   */
  public void writeToControllerWriter(IControllerWriter controllerWriter);
  /**
   * From OpenSCENARIO class model specification: A controller type import from a catalog.
   *
   * @param catalogReferenceWriter writer for the model property catalogReference
   */
  public void writeToCatalogReferenceWriter(ICatalogReferenceWriter catalogReferenceWriter);
}
