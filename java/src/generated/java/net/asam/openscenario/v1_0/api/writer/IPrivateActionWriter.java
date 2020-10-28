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
import net.asam.openscenario.v1_0.api.IPrivateAction;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'PrivateAction' From OpenSCENARIO class model specification: Actions
 * applied to one or multiple entities. Either the entities are referenced in the actors of the
 * enclosing maneuver group or the single entity is referenced in the enclosing Private instance.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IPrivateActionWriter extends IPrivateAction, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Applies longitudinal control behavior on the
   * reference entity/entities. Either a SpeedAction or a LongitudinalDistanceAction.
   *
   * @param longitudinalAction value of model property longitudinalAction
   */
  public void setLongitudinalAction(ILongitudinalActionWriter longitudinalAction);
  /**
   * From OpenSCENARIO class model specification: Applies lateral control behavior on the reference
   * entity/entities. Either a LaneChangeAction, LaneOffsetAction or a LateralDistanceAction.
   *
   * @param lateralAction value of model property lateralAction
   */
  public void setLateralAction(ILateralActionWriter lateralAction);
  /**
   * From OpenSCENARIO class model specification: Sets visibility attributes on the reference
   * entity/entities.
   *
   * @param visibilityAction value of model property visibilityAction
   */
  public void setVisibilityAction(IVisibilityActionWriter visibilityAction);
  /**
   * From OpenSCENARIO class model specification: Synchronizes the reference entity/entities with a
   * master entity. A target position is provided for the entity and for the master entity to be
   * reached at the same time.
   *
   * @param synchronizeAction value of model property synchronizeAction
   */
  public void setSynchronizeAction(ISynchronizeActionWriter synchronizeAction);
  /**
   * From OpenSCENARIO class model specification: Activates/ deactivates a controller on the
   * reference entity/entities.
   *
   * @param activateControllerAction value of model property activateControllerAction
   */
  public void setActivateControllerAction(IActivateControllerActionWriter activateControllerAction);
  /**
   * From OpenSCENARIO class model specification: Assigns a controller to the reference
   * entity/entities.
   *
   * @param controllerAction value of model property controllerAction
   */
  public void setControllerAction(IControllerActionWriter controllerAction);
  /**
   * From OpenSCENARIO class model specification: Assigns a position to the reference
   * entity/entities.
   *
   * @param teleportAction value of model property teleportAction
   */
  public void setTeleportAction(ITeleportActionWriter teleportAction);
  /**
   * From OpenSCENARIO class model specification: Applies an AssignRouteAction, a
   * FollowTrajectoryAction or an AcquirePositionAction to the reference entity/entities.
   *
   * @param routingAction value of model property routingAction
   */
  public void setRoutingAction(IRoutingActionWriter routingAction);

  // children
  /**
   * From OpenSCENARIO class model specification: Applies longitudinal control behavior on the
   * reference entity/entities. Either a SpeedAction or a LongitudinalDistanceAction.
   *
   * @return a writer for model property longitudinalAction
   */
  public ILongitudinalActionWriter getWriterLongitudinalAction();
  /**
   * From OpenSCENARIO class model specification: Applies lateral control behavior on the reference
   * entity/entities. Either a LaneChangeAction, LaneOffsetAction or a LateralDistanceAction.
   *
   * @return a writer for model property lateralAction
   */
  public ILateralActionWriter getWriterLateralAction();
  /**
   * From OpenSCENARIO class model specification: Sets visibility attributes on the reference
   * entity/entities.
   *
   * @return a writer for model property visibilityAction
   */
  public IVisibilityActionWriter getWriterVisibilityAction();
  /**
   * From OpenSCENARIO class model specification: Synchronizes the reference entity/entities with a
   * master entity. A target position is provided for the entity and for the master entity to be
   * reached at the same time.
   *
   * @return a writer for model property synchronizeAction
   */
  public ISynchronizeActionWriter getWriterSynchronizeAction();
  /**
   * From OpenSCENARIO class model specification: Activates/ deactivates a controller on the
   * reference entity/entities.
   *
   * @return a writer for model property activateControllerAction
   */
  public IActivateControllerActionWriter getWriterActivateControllerAction();
  /**
   * From OpenSCENARIO class model specification: Assigns a controller to the reference
   * entity/entities.
   *
   * @return a writer for model property controllerAction
   */
  public IControllerActionWriter getWriterControllerAction();
  /**
   * From OpenSCENARIO class model specification: Assigns a position to the reference
   * entity/entities.
   *
   * @return a writer for model property teleportAction
   */
  public ITeleportActionWriter getWriterTeleportAction();
  /**
   * From OpenSCENARIO class model specification: Applies an AssignRouteAction, a
   * FollowTrajectoryAction or an AcquirePositionAction to the reference entity/entities.
   *
   * @return a writer for model property routingAction
   */
  public IRoutingActionWriter getWriterRoutingAction();
}
