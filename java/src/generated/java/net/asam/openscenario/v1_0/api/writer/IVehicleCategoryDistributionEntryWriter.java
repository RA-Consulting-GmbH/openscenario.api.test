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
import net.asam.openscenario.v1_0.api.VehicleCategory;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'VehicleCategoryDistributionEntry' From OpenSCENARIO class model
 * specification: Represents the weight of a given vehicle category within a traffic definition. The
 * relative probability for the occurence of this category is defined by the weight devided by the
 * sum of all weights of this distribution.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IVehicleCategoryDistributionEntryWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: The category of the vehicles that appear in
   * traffic.
   *
   * @return value of model property category
   */
  public VehicleCategory getCategory();
  /**
   * From OpenSCENARIO class model specification: The weight of a vehicle category within a traffic
   * distribution. Range: [0..inf[.
   *
   * @return value of model property weight
   */
  public Double getWeight();

  /**
   * From OpenSCENARIO class model specification: The category of the vehicles that appear in
   * traffic.
   *
   * @param category value of model property category
   */
  public void writeToCategory(VehicleCategory category);
  /**
   * From OpenSCENARIO class model specification: The weight of a vehicle category within a traffic
   * distribution. Range: [0..inf[.
   *
   * @param weight value of model property weight
   */
  public void writeToWeight(Double weight);

  /**
   * Set a parameter for the attribute category
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToCategory(String parameterName);
  /**
   * Set a parameter for the attribute weight
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToWeight(String parameterName);

  /**
   * Get the parameter for the attribute category
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromCategory();
  /**
   * Get the parameter for the attribute weight
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromWeight();

  /**
   * Retrieves whether the attribute category is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isCategoryParameterized();
  /**
   * Retrieves whether the attribute weight is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isWeightParameterized();

  // children

}
