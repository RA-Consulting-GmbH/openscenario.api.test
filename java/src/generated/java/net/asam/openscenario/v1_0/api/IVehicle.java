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

import java.util.List;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>From OpenSCENARIO class model specification: Definition of a vehicle type in a scenario or in
 * a catalog.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IVehicle extends ICatalogElement {
  /**
   * From OpenSCENARIO class model specification: Name of the vehicle type.
   *
   * @return value of model property name
   */
  public String getName();
  /**
   * From OpenSCENARIO class model specification: Category of the vehicle (bicycle, train,...).
   *
   * @return value of model property vehicleCategory
   */
  public VehicleCategory getVehicleCategory();
  /**
   * From OpenSCENARIO class model specification: Definition of additional parameters.
   *
   * @return value of model property parameterDeclarations
   */
  public List<IParameterDeclaration> getParameterDeclarations();
  /**
   * From OpenSCENARIO class model specification: The three dimensional bounding box that encloses
   * the vehicle.
   *
   * @return value of model property boundingBox
   */
  public IBoundingBox getBoundingBox();
  /**
   * From OpenSCENARIO class model specification: Performance properties of the vehicle.
   *
   * @return value of model property performance
   */
  public IPerformance getPerformance();
  /**
   * From OpenSCENARIO class model specification: A set of axles (front, rear, additional) and their
   * geometric locations.
   *
   * @return value of model property axles
   */
  public IAxles getAxles();
  /**
   * From OpenSCENARIO class model specification: Additional properties as name value pairs.
   *
   * @return value of model property properties
   */
  public IProperties getProperties();
}
