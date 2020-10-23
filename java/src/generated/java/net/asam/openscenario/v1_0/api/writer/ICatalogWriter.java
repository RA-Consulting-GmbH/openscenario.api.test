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
import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Catalog' From OpenSCENARIO class model specification: A catalog may be
 * used to make certain OpenSCENARIO elements reusable. In a catalog parameterizable types are
 * maintained and can be referenced to create runtime instances of those types.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ICatalogWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Name of the catalog.
   *
   * @return value of model property name
   */
  public String getName();

  /**
   * From OpenSCENARIO class model specification: Name of the catalog.
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
   * From OpenSCENARIO class model specification: A list of vehicle types that can be reused in a
   * scenario.
   *
   * @return a list of writers for model property vehicles
   */
  public List<IVehicleWriter> getVehiclesWriter();
  /**
   * From OpenSCENARIO class model specification: A list of controller types that can be reused in a
   * scenario.
   *
   * @return a list of writers for model property controllers
   */
  public List<IControllerWriter> getControllersWriter();
  /**
   * From OpenSCENARIO class model specification: A list of pedestrian types that can be reused in a
   * scenario.
   *
   * @return a list of writers for model property pedestrians
   */
  public List<IPedestrianWriter> getPedestriansWriter();
  /**
   * From OpenSCENARIO class model specification: A list of miscellaneous object type that that can
   * be reused in a scenario.
   *
   * @return a list of writers for model property miscObjects
   */
  public List<IMiscObjectWriter> getMiscObjectsWriter();
  /**
   * From OpenSCENARIO class model specification: A list of environment types that can be reused in
   * a scenario.
   *
   * @return a list of writers for model property environments
   */
  public List<IEnvironmentWriter> getEnvironmentsWriter();
  /**
   * From OpenSCENARIO class model specification: A list of maneuver types that can be reused in a
   * scenario.
   *
   * @return a list of writers for model property maneuvers
   */
  public List<IManeuverWriter> getManeuversWriter();
  /**
   * From OpenSCENARIO class model specification: A list of trajectory types that can be reused in a
   * scenario.
   *
   * @return a list of writers for model property trajectories
   */
  public List<ITrajectoryWriter> getTrajectoriesWriter();
  /**
   * From OpenSCENARIO class model specification: A list of route types that can be reused in a
   * scenario.
   *
   * @return a list of writers for model property routes
   */
  public List<IRouteWriter> getRoutesWriter();

  /**
   * From OpenSCENARIO class model specification: A list of vehicle types that can be reused in a
   * scenario.
   *
   * @param vehiclesWriters list of writers for the model property vehicles
   */
  public void setVehiclesWriter(List<IVehicleWriter> vehiclesWriters);
  /**
   * From OpenSCENARIO class model specification: A list of controller types that can be reused in a
   * scenario.
   *
   * @param controllersWriters list of writers for the model property controllers
   */
  public void setControllersWriter(List<IControllerWriter> controllersWriters);
  /**
   * From OpenSCENARIO class model specification: A list of pedestrian types that can be reused in a
   * scenario.
   *
   * @param pedestriansWriters list of writers for the model property pedestrians
   */
  public void setPedestriansWriter(List<IPedestrianWriter> pedestriansWriters);
  /**
   * From OpenSCENARIO class model specification: A list of miscellaneous object type that that can
   * be reused in a scenario.
   *
   * @param miscObjectsWriters list of writers for the model property miscObjects
   */
  public void setMiscObjectsWriter(List<IMiscObjectWriter> miscObjectsWriters);
  /**
   * From OpenSCENARIO class model specification: A list of environment types that can be reused in
   * a scenario.
   *
   * @param environmentsWriters list of writers for the model property environments
   */
  public void setEnvironmentsWriter(List<IEnvironmentWriter> environmentsWriters);
  /**
   * From OpenSCENARIO class model specification: A list of maneuver types that can be reused in a
   * scenario.
   *
   * @param maneuversWriters list of writers for the model property maneuvers
   */
  public void setManeuversWriter(List<IManeuverWriter> maneuversWriters);
  /**
   * From OpenSCENARIO class model specification: A list of trajectory types that can be reused in a
   * scenario.
   *
   * @param trajectoriesWriters list of writers for the model property trajectories
   */
  public void setTrajectoriesWriter(List<ITrajectoryWriter> trajectoriesWriters);
  /**
   * From OpenSCENARIO class model specification: A list of route types that can be reused in a
   * scenario.
   *
   * @param routesWriters list of writers for the model property routes
   */
  public void setRoutesWriter(List<IRouteWriter> routesWriters);
}
