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

import net.asam.openscenario.api.writer.IOpenScenarioElementWriter;
import net.asam.openscenario.v1_0.api.IRoutingAction;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'RoutingAction' From OpenSCENARIO class model specification: Controls
 * entity routing, either by following a predefined route or trajectory, alternatively by specifying
 * a destination position which the entity should aim to reach.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IRoutingActionWriter extends IRoutingAction, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Assigns a route to an entity. The route is defined
   * by at least two waypoints.
   *
   * @param assignRouteAction value of model property assignRouteAction
   */
  public void setAssignRouteAction(IAssignRouteActionWriter assignRouteAction);
  /**
   * From OpenSCENARIO class model specification: Controls an entity to follow a trajectory.
   *
   * @param followTrajectoryAction value of model property followTrajectoryAction
   */
  public void setFollowTrajectoryAction(IFollowTrajectoryActionWriter followTrajectoryAction);
  /**
   * From OpenSCENARIO class model specification: Assigns a route to an entity. The route assigned
   * will be the shortest route (along roads) between the entity's current position and the position
   * specified.
   *
   * @param acquirePositionAction value of model property acquirePositionAction
   */
  public void setAcquirePositionAction(IAcquirePositionActionWriter acquirePositionAction);

  // children
  /**
   * From OpenSCENARIO class model specification: Assigns a route to an entity. The route is defined
   * by at least two waypoints.
   *
   * @return a writer for model property assignRouteAction
   */
  public IAssignRouteActionWriter getWriterAssignRouteAction();
  /**
   * From OpenSCENARIO class model specification: Controls an entity to follow a trajectory.
   *
   * @return a writer for model property followTrajectoryAction
   */
  public IFollowTrajectoryActionWriter getWriterFollowTrajectoryAction();
  /**
   * From OpenSCENARIO class model specification: Assigns a route to an entity. The route assigned
   * will be the shortest route (along roads) between the entity's current position and the position
   * specified.
   *
   * @return a writer for model property acquirePositionAction
   */
  public IAcquirePositionActionWriter getWriterAcquirePositionAction();
}
