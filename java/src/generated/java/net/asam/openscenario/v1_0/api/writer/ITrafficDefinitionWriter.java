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
 * <p>A Writer for the type 'TrafficDefinition' From OpenSCENARIO class model specification:
 * Definition of macroscopic traffic based on vehicle and controller definitions.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ITrafficDefinitionWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Name of the traffic definition.
   *
   * @return value of model property name
   */
  public String getName();

  /**
   * From OpenSCENARIO class model specification: Name of the traffic definition.
   *
   * @param name value of model property name
   */
  public void writeToName(String name);

  /**
   * Set a parameter for the attribute name
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToName(String parameterName);

  /**
   * Get the parameter for the attribute name
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromName();

  /**
   * Retrieves whether the attribute name is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isNameParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: Distribution of vehicle categories within the
   * traffic.
   *
   * @return a writer for model property vehicleCategoryDistribution
   */
  public IVehicleCategoryDistributionWriter getVehicleCategoryDistributionWriter();
  /**
   * From OpenSCENARIO class model specification: Distribution of controllers within this traffic.
   *
   * @return a writer for model property controllerDistribution
   */
  public IControllerDistributionWriter getControllerDistributionWriter();

  /**
   * From OpenSCENARIO class model specification: Distribution of vehicle categories within the
   * traffic.
   *
   * @param vehicleCategoryDistributionWriter writer for the model property
   *     vehicleCategoryDistribution
   */
  public void writeToVehicleCategoryDistributionWriter(
      IVehicleCategoryDistributionWriter vehicleCategoryDistributionWriter);
  /**
   * From OpenSCENARIO class model specification: Distribution of controllers within this traffic.
   *
   * @param controllerDistributionWriter writer for the model property controllerDistribution
   */
  public void writeToControllerDistributionWriter(
      IControllerDistributionWriter controllerDistributionWriter);
}
