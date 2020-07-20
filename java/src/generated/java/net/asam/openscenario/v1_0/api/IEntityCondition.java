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

import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>From OpenSCENARIO class model specification: Defines a specific condition on an entity.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IEntityCondition extends IOpenScenarioModelElement {
  /**
   * From OpenSCENARIO class model specification: Condition checking for how long the reference
   * entity has reached the end of the road.
   *
   * @return value of model property endOfRoadCondition
   */
  public IEndOfRoadCondition getEndOfRoadCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking whether the reference entity
   * was involved in a collision.
   *
   * @return value of model property collisionCondition
   */
  public ICollisionCondition getCollisionCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking for how long the reference
   * entity has left the road.
   *
   * @return value of model property offroadCondition
   */
  public IOffroadCondition getOffroadCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking the time headway between two
   * entities.
   *
   * @return value of model property timeHeadwayCondition
   */
  public ITimeHeadwayCondition getTimeHeadwayCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking the time to collision between
   * two entities.
   *
   * @return value of model property timeToCollisionCondition
   */
  public ITimeToCollisionCondition getTimeToCollisionCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking the current acceleration of an
   * entity.
   *
   * @return value of model property accelerationCondition
   */
  public IAccelerationCondition getAccelerationCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking for how long the reference
   * entity has not moved.
   *
   * @return value of model property standStillCondition
   */
  public IStandStillCondition getStandStillCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking the current speed of the
   * referenced entities.
   *
   * @return value of model property speedCondition
   */
  public ISpeedCondition getSpeedCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking the relative speed between two
   * entity.
   *
   * @return value of model property relativeSpeedCondition
   */
  public IRelativeSpeedCondition getRelativeSpeedCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking the total traveled distance of
   * the reference entity since the start of the scenario.
   *
   * @return value of model property traveledDistanceCondition
   */
  public ITraveledDistanceCondition getTraveledDistanceCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking whether the reference entity
   * has reached a given position within a given uncertainty.
   *
   * @return value of model property reachPositionCondition
   */
  public IReachPositionCondition getReachPositionCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking the distance between two
   * entities or an entity and a position.
   *
   * @return value of model property distanceCondition
   */
  public IDistanceCondition getDistanceCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking the relative distance between
   * two entities.
   *
   * @return value of model property relativeDistanceCondition
   */
  public IRelativeDistanceCondition getRelativeDistanceCondition();
}
