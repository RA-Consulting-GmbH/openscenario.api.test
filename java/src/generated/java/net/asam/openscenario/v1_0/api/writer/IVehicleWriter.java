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
import net.asam.openscenario.v1_0.api.IVehicle;
import net.asam.openscenario.v1_0.api.VehicleCategory;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Vehicle' From OpenSCENARIO class model specification: Definition of a
 * vehicle type in a scenario or in a catalog.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IVehicleWriter
    extends ICatalogElementWriter, IVehicle, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Name of the vehicle type.
   *
   * @param name value of model property name
   */
  public void setName(String name);
  /**
   * From OpenSCENARIO class model specification: Category of the vehicle (bicycle, train,...).
   *
   * @param vehicleCategory value of model property vehicleCategory
   */
  public void setVehicleCategory(VehicleCategory vehicleCategory);
  /**
   * From OpenSCENARIO class model specification: Definition of additional parameters.
   *
   * @param parameterDeclarations value of model property parameterDeclarations
   */
  public void setParameterDeclarations(List<IParameterDeclarationWriter> parameterDeclarations);
  /**
   * From OpenSCENARIO class model specification: The three dimensional bounding box that encloses
   * the vehicle.
   *
   * @param boundingBox value of model property boundingBox
   */
  public void setBoundingBox(IBoundingBoxWriter boundingBox);
  /**
   * From OpenSCENARIO class model specification: Performance properties of the vehicle.
   *
   * @param performance value of model property performance
   */
  public void setPerformance(IPerformanceWriter performance);
  /**
   * From OpenSCENARIO class model specification: A set of axles (front, rear, additional) and their
   * geometric locations.
   *
   * @param axles value of model property axles
   */
  public void setAxles(IAxlesWriter axles);
  /**
   * From OpenSCENARIO class model specification: Additional properties as name value pairs.
   *
   * @param properties value of model property properties
   */
  public void setProperties(IPropertiesWriter properties);

  /**
   * Set a parameter for the attribute name
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToName(String parameterName);
  /**
   * Set a parameter for the attribute vehicleCategory
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToVehicleCategory(String parameterName);

  /**
   * Get the parameter for the attribute name
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromName();
  /**
   * Get the parameter for the attribute vehicleCategory
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromVehicleCategory();

  /**
   * Retrieves whether the attribute name is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isNameParameterized();
  /**
   * Retrieves whether the attribute vehicleCategory is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isVehicleCategoryParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: The three dimensional bounding box that encloses
   * the vehicle.
   *
   * @return a writer for model property boundingBox
   */
  public IBoundingBoxWriter getWriterBoundingBox();
  /**
   * From OpenSCENARIO class model specification: Performance properties of the vehicle.
   *
   * @return a writer for model property performance
   */
  public IPerformanceWriter getWriterPerformance();
  /**
   * From OpenSCENARIO class model specification: A set of axles (front, rear, additional) and their
   * geometric locations.
   *
   * @return a writer for model property axles
   */
  public IAxlesWriter getWriterAxles();
  /**
   * From OpenSCENARIO class model specification: Additional properties as name value pairs.
   *
   * @return a writer for model property properties
   */
  public IPropertiesWriter getWriterProperties();

  /**
   * From OpenSCENARIO class model specification: Definition of additional parameters.
   *
   * @return a list of writers for model property parameterDeclarations
   */
  public List<IParameterDeclarationWriter> getWriterParameterDeclarations();
}
