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
 * <p>From OpenSCENARIO class model specification: A distribution for vehicle in traffic. Category
 * of vehicles and their weight (measure of relative likelihood, check
 * VehicleCategoryDistributionEntry).
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IVehicleCategoryDistribution extends IOpenScenarioModelElement {
  /**
   * From OpenSCENARIO class model specification: List of elements that pair vehicle categories and
   * their weight within the distribution.
   *
   * @return value of model property vehicleCategoryDistributionEntries
   */
  public Iterable<IVehicleCategoryDistributionEntry> getVehicleCategoryDistributionEntries();

  /**
   * Retrieves the size of the list
   *
   * @return the size of the list
   */
  public int getVehicleCategoryDistributionEntriesSize();
  /**
   * The element at specific index
   *
   * @param index the index of the list
   * @return the element at index
   */
  public IVehicleCategoryDistributionEntry getVehicleCategoryDistributionEntriesAtIndex(int index);
}
