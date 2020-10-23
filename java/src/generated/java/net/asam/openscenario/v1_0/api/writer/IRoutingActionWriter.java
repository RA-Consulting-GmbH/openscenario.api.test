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
 * <p>A Writer for the type 'RoutingAction' From OpenSCENARIO class model specification: Controls
 * entity routing, either by following a predefined route or trajectory, alternatively by specifying
 * a destination position which the entity should aim to reach.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IRoutingActionWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: Assigns a route to an entity. The route is defined
   * by at least two waypoints.
   *
   * @return a writer for model property assignRouteAction
   */
  public IAssignRouteActionWriter getAssignRouteActionWriter();
  /**
   * From OpenSCENARIO class model specification: Controls an entity to follow a trajectory.
   *
   * @return a writer for model property followTrajectoryAction
   */
  public IFollowTrajectoryActionWriter getFollowTrajectoryActionWriter();
  /**
   * From OpenSCENARIO class model specification: Assigns a route to an entity. The route assigned
   * will be the shortest route (along roads) between the entity's current position and the position
   * specified.
   *
   * @return a writer for model property acquirePositionAction
   */
  public IAcquirePositionActionWriter getAcquirePositionActionWriter();

  /**
   * From OpenSCENARIO class model specification: Assigns a route to an entity. The route is defined
   * by at least two waypoints.
   *
   * @param assignRouteActionWriter writer for the model property assignRouteAction
   */
  public void writeToAssignRouteActionWriter(IAssignRouteActionWriter assignRouteActionWriter);
  /**
   * From OpenSCENARIO class model specification: Controls an entity to follow a trajectory.
   *
   * @param followTrajectoryActionWriter writer for the model property followTrajectoryAction
   */
  public void writeToFollowTrajectoryActionWriter(
      IFollowTrajectoryActionWriter followTrajectoryActionWriter);
  /**
   * From OpenSCENARIO class model specification: Assigns a route to an entity. The route assigned
   * will be the shortest route (along roads) between the entity's current position and the position
   * specified.
   *
   * @param acquirePositionActionWriter writer for the model property acquirePositionAction
   */
  public void writeToAcquirePositionActionWriter(
      IAcquirePositionActionWriter acquirePositionActionWriter);
}
