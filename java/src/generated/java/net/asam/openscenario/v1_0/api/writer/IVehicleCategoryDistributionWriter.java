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

import java.util.List;
import net.asam.openscenario.api.writer.IOpenScenarioElementWriter;
import net.asam.openscenario.v1_0.api.IVehicleCategoryDistribution;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'VehicleCategoryDistribution' From OpenSCENARIO class model
 * specification: A distribution for vehicle in traffic. Category of vehicles and their weight
 * (measure of relative likelihood, check VehicleCategoryDistributionEntry).
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IVehicleCategoryDistributionWriter
    extends IVehicleCategoryDistribution, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: List of elements that pair vehicle categories and
   * their weight within the distribution.
   *
   * @param vehicleCategoryDistributionEntries value of model property
   *     vehicleCategoryDistributionEntries
   */
  public void setVehicleCategoryDistributionEntries(
      List<IVehicleCategoryDistributionEntryWriter> vehicleCategoryDistributionEntries);

  // children

  /**
   * From OpenSCENARIO class model specification: List of elements that pair vehicle categories and
   * their weight within the distribution.
   *
   * @return a list of writers for model property vehicleCategoryDistributionEntries
   */
  public List<IVehicleCategoryDistributionEntryWriter>
      getWriterVehicleCategoryDistributionEntries();
}
