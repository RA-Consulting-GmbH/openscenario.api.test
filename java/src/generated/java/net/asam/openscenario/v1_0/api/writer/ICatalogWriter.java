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
import net.asam.openscenario.v1_0.api.ICatalog;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Catalog' From OpenSCENARIO class model specification: A catalog may be
 * used to make certain OpenSCENARIO elements reusable. In a catalog parameterizable types are
 * maintained and can be referenced to create runtime instances of those types.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ICatalogWriter extends ICatalog, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Name of the catalog.
   *
   * @param name value of model property name
   */
  public void setName(String name);
  /**
   * From OpenSCENARIO class model specification: A list of vehicle types that can be reused in a
   * scenario.
   *
   * @param vehicles value of model property vehicles
   */
  public void setVehicles(List<IVehicleWriter> vehicles);
  /**
   * From OpenSCENARIO class model specification: A list of controller types that can be reused in a
   * scenario.
   *
   * @param controllers value of model property controllers
   */
  public void setControllers(List<IControllerWriter> controllers);
  /**
   * From OpenSCENARIO class model specification: A list of pedestrian types that can be reused in a
   * scenario.
   *
   * @param pedestrians value of model property pedestrians
   */
  public void setPedestrians(List<IPedestrianWriter> pedestrians);
  /**
   * From OpenSCENARIO class model specification: A list of miscellaneous object type that that can
   * be reused in a scenario.
   *
   * @param miscObjects value of model property miscObjects
   */
  public void setMiscObjects(List<IMiscObjectWriter> miscObjects);
  /**
   * From OpenSCENARIO class model specification: A list of environment types that can be reused in
   * a scenario.
   *
   * @param environments value of model property environments
   */
  public void setEnvironments(List<IEnvironmentWriter> environments);
  /**
   * From OpenSCENARIO class model specification: A list of maneuver types that can be reused in a
   * scenario.
   *
   * @param maneuvers value of model property maneuvers
   */
  public void setManeuvers(List<IManeuverWriter> maneuvers);
  /**
   * From OpenSCENARIO class model specification: A list of trajectory types that can be reused in a
   * scenario.
   *
   * @param trajectories value of model property trajectories
   */
  public void setTrajectories(List<ITrajectoryWriter> trajectories);
  /**
   * From OpenSCENARIO class model specification: A list of route types that can be reused in a
   * scenario.
   *
   * @param routes value of model property routes
   */
  public void setRoutes(List<IRouteWriter> routes);

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
  public List<IVehicleWriter> getWriterVehicles();
  /**
   * From OpenSCENARIO class model specification: A list of controller types that can be reused in a
   * scenario.
   *
   * @return a list of writers for model property controllers
   */
  public List<IControllerWriter> getWriterControllers();
  /**
   * From OpenSCENARIO class model specification: A list of pedestrian types that can be reused in a
   * scenario.
   *
   * @return a list of writers for model property pedestrians
   */
  public List<IPedestrianWriter> getWriterPedestrians();
  /**
   * From OpenSCENARIO class model specification: A list of miscellaneous object type that that can
   * be reused in a scenario.
   *
   * @return a list of writers for model property miscObjects
   */
  public List<IMiscObjectWriter> getWriterMiscObjects();
  /**
   * From OpenSCENARIO class model specification: A list of environment types that can be reused in
   * a scenario.
   *
   * @return a list of writers for model property environments
   */
  public List<IEnvironmentWriter> getWriterEnvironments();
  /**
   * From OpenSCENARIO class model specification: A list of maneuver types that can be reused in a
   * scenario.
   *
   * @return a list of writers for model property maneuvers
   */
  public List<IManeuverWriter> getWriterManeuvers();
  /**
   * From OpenSCENARIO class model specification: A list of trajectory types that can be reused in a
   * scenario.
   *
   * @return a list of writers for model property trajectories
   */
  public List<ITrajectoryWriter> getWriterTrajectories();
  /**
   * From OpenSCENARIO class model specification: A list of route types that can be reused in a
   * scenario.
   *
   * @return a list of writers for model property routes
   */
  public List<IRouteWriter> getWriterRoutes();
}
