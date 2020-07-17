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
import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>From OpenSCENARIO class model specification: A catalog may be used to make certain
 * OpenSCENARIO elements reusable. In a catalog parameterizable types are maintained and can be
 * referenced to create runtime instances of those types.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ICatalog extends IOpenScenarioModelElement {

  /**
   * From OpenSCENARIO class model specification: Name of the catalog.
   *
   * @return value of model property name
   */
  public String getName();

  /**
   * From OpenSCENARIO class model specification: A list of vehicle types that can be reused in a
   * scenario.
   *
   * @return value of model property vehicles
   */
  public List<IVehicle> getVehicles();

  /**
   * From OpenSCENARIO class model specification: A list of controller types that can be reused in a
   * scenario.
   *
   * @return value of model property controllers
   */
  public List<IController> getControllers();

  /**
   * From OpenSCENARIO class model specification: A list of pedestrian types that can be reused in a
   * scenario.
   *
   * @return value of model property pedestrians
   */
  public List<IPedestrian> getPedestrians();

  /**
   * From OpenSCENARIO class model specification: A list of miscellaneous object type that that can
   * be reused in a scenario.
   *
   * @return value of model property miscObjects
   */
  public List<IMiscObject> getMiscObjects();

  /**
   * From OpenSCENARIO class model specification: A list of environment types that can be reused in
   * a scenario.
   *
   * @return value of model property environments
   */
  public List<IEnvironment> getEnvironments();

  /**
   * From OpenSCENARIO class model specification: A list of maneuver types that can be reused in a
   * scenario.
   *
   * @return value of model property maneuvers
   */
  public List<IManeuver> getManeuvers();

  /**
   * From OpenSCENARIO class model specification: A list of trajectory types that can be reused in a
   * scenario.
   *
   * @return value of model property trajectories
   */
  public List<ITrajectory> getTrajectories();

  /**
   * From OpenSCENARIO class model specification: A list of route types that can be reused in a
   * scenario.
   *
   * @return value of model property routes
   */
  public List<IRoute> getRoutes();
}
