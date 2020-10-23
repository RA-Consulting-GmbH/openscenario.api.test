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
import net.asam.openscenario.v1_0.api.RouteStrategy;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Waypoint' From OpenSCENARIO class model specification: Reference
 * position used to form a route.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IWaypointWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: The corresponding routing strategy (fastest,
   * shortest, random, leastIntersections).
   *
   * @return value of model property routeStrategy
   */
  public RouteStrategy getRouteStrategy();

  /**
   * From OpenSCENARIO class model specification: The corresponding routing strategy (fastest,
   * shortest, random, leastIntersections).
   *
   * @param routeStrategy value of model property routeStrategy
   */
  public void writeToRouteStrategy(RouteStrategy routeStrategy);

  /**
   * Set a parameter for the attribute routeStrategy
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToRouteStrategy(String parameterName);

  /**
   * Get the parameter for the attribute routeStrategy
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromRouteStrategy();

  /**
   * Retrieves whether the attribute routeStrategy is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isRouteStrategyParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: The reference position to form the route.
   *
   * @return a writer for model property position
   */
  public IPositionWriter getPositionWriter();

  /**
   * From OpenSCENARIO class model specification: The reference position to form the route.
   *
   * @param positionWriter writer for the model property position
   */
  public void writeToPositionWriter(IPositionWriter positionWriter);
}
