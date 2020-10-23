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
 * <p>A Writer for the type 'PrivateAction' From OpenSCENARIO class model specification: Actions
 * applied to one or multiple entities. Either the entities are referenced in the actors of the
 * enclosing maneuver group or the single entity is referenced in the enclosing Private instance.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IPrivateActionWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: Applies longitudinal control behavior on the
   * reference entity/entities. Either a SpeedAction or a LongitudinalDistanceAction.
   *
   * @return a writer for model property longitudinalAction
   */
  public ILongitudinalActionWriter getLongitudinalActionWriter();
  /**
   * From OpenSCENARIO class model specification: Applies lateral control behavior on the reference
   * entity/entities. Either a LaneChangeAction, LaneOffsetAction or a LateralDistanceAction.
   *
   * @return a writer for model property lateralAction
   */
  public ILateralActionWriter getLateralActionWriter();
  /**
   * From OpenSCENARIO class model specification: Sets visibility attributes on the reference
   * entity/entities.
   *
   * @return a writer for model property visibilityAction
   */
  public IVisibilityActionWriter getVisibilityActionWriter();
  /**
   * From OpenSCENARIO class model specification: Synchronizes the reference entity/entities with a
   * master entity. A target position is provided for the entity and for the master entity to be
   * reached at the same time.
   *
   * @return a writer for model property synchronizeAction
   */
  public ISynchronizeActionWriter getSynchronizeActionWriter();
  /**
   * From OpenSCENARIO class model specification: Activates/ deactivates a controller on the
   * reference entity/entities.
   *
   * @return a writer for model property activateControllerAction
   */
  public IActivateControllerActionWriter getActivateControllerActionWriter();
  /**
   * From OpenSCENARIO class model specification: Assigns a controller to the reference
   * entity/entities.
   *
   * @return a writer for model property controllerAction
   */
  public IControllerActionWriter getControllerActionWriter();
  /**
   * From OpenSCENARIO class model specification: Assigns a position to the reference
   * entity/entities.
   *
   * @return a writer for model property teleportAction
   */
  public ITeleportActionWriter getTeleportActionWriter();
  /**
   * From OpenSCENARIO class model specification: Applies an AssignRouteAction, a
   * FollowTrajectoryAction or an AcquirePositionAction to the reference entity/entities.
   *
   * @return a writer for model property routingAction
   */
  public IRoutingActionWriter getRoutingActionWriter();

  /**
   * From OpenSCENARIO class model specification: Applies longitudinal control behavior on the
   * reference entity/entities. Either a SpeedAction or a LongitudinalDistanceAction.
   *
   * @param longitudinalActionWriter writer for the model property longitudinalAction
   */
  public void writeToLongitudinalActionWriter(ILongitudinalActionWriter longitudinalActionWriter);
  /**
   * From OpenSCENARIO class model specification: Applies lateral control behavior on the reference
   * entity/entities. Either a LaneChangeAction, LaneOffsetAction or a LateralDistanceAction.
   *
   * @param lateralActionWriter writer for the model property lateralAction
   */
  public void writeToLateralActionWriter(ILateralActionWriter lateralActionWriter);
  /**
   * From OpenSCENARIO class model specification: Sets visibility attributes on the reference
   * entity/entities.
   *
   * @param visibilityActionWriter writer for the model property visibilityAction
   */
  public void writeToVisibilityActionWriter(IVisibilityActionWriter visibilityActionWriter);
  /**
   * From OpenSCENARIO class model specification: Synchronizes the reference entity/entities with a
   * master entity. A target position is provided for the entity and for the master entity to be
   * reached at the same time.
   *
   * @param synchronizeActionWriter writer for the model property synchronizeAction
   */
  public void writeToSynchronizeActionWriter(ISynchronizeActionWriter synchronizeActionWriter);
  /**
   * From OpenSCENARIO class model specification: Activates/ deactivates a controller on the
   * reference entity/entities.
   *
   * @param activateControllerActionWriter writer for the model property activateControllerAction
   */
  public void writeToActivateControllerActionWriter(
      IActivateControllerActionWriter activateControllerActionWriter);
  /**
   * From OpenSCENARIO class model specification: Assigns a controller to the reference
   * entity/entities.
   *
   * @param controllerActionWriter writer for the model property controllerAction
   */
  public void writeToControllerActionWriter(IControllerActionWriter controllerActionWriter);
  /**
   * From OpenSCENARIO class model specification: Assigns a position to the reference
   * entity/entities.
   *
   * @param teleportActionWriter writer for the model property teleportAction
   */
  public void writeToTeleportActionWriter(ITeleportActionWriter teleportActionWriter);
  /**
   * From OpenSCENARIO class model specification: Applies an AssignRouteAction, a
   * FollowTrajectoryAction or an AcquirePositionAction to the reference entity/entities.
   *
   * @param routingActionWriter writer for the model property routingAction
   */
  public void writeToRoutingActionWriter(IRoutingActionWriter routingActionWriter);
}
