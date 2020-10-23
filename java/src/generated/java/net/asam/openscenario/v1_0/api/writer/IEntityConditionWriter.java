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
 * <p>A Writer for the type 'EntityCondition' From OpenSCENARIO class model specification: Defines a
 * specific condition on an entity.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IEntityConditionWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: Condition checking for how long the reference
   * entity has reached the end of the road.
   *
   * @return a writer for model property endOfRoadCondition
   */
  public IEndOfRoadConditionWriter getEndOfRoadConditionWriter();
  /**
   * From OpenSCENARIO class model specification: Condition checking whether the reference entity
   * was involved in a collision.
   *
   * @return a writer for model property collisionCondition
   */
  public ICollisionConditionWriter getCollisionConditionWriter();
  /**
   * From OpenSCENARIO class model specification: Condition checking for how long the reference
   * entity has left the road.
   *
   * @return a writer for model property offroadCondition
   */
  public IOffroadConditionWriter getOffroadConditionWriter();
  /**
   * From OpenSCENARIO class model specification: Condition checking the time headway between two
   * entities.
   *
   * @return a writer for model property timeHeadwayCondition
   */
  public ITimeHeadwayConditionWriter getTimeHeadwayConditionWriter();
  /**
   * From OpenSCENARIO class model specification: Condition checking the time to collision between
   * two entities.
   *
   * @return a writer for model property timeToCollisionCondition
   */
  public ITimeToCollisionConditionWriter getTimeToCollisionConditionWriter();
  /**
   * From OpenSCENARIO class model specification: Condition checking the current acceleration of an
   * entity.
   *
   * @return a writer for model property accelerationCondition
   */
  public IAccelerationConditionWriter getAccelerationConditionWriter();
  /**
   * From OpenSCENARIO class model specification: Condition checking for how long the reference
   * entity has not moved.
   *
   * @return a writer for model property standStillCondition
   */
  public IStandStillConditionWriter getStandStillConditionWriter();
  /**
   * From OpenSCENARIO class model specification: Condition checking the current speed of the
   * referenced entities.
   *
   * @return a writer for model property speedCondition
   */
  public ISpeedConditionWriter getSpeedConditionWriter();
  /**
   * From OpenSCENARIO class model specification: Condition checking the relative speed between two
   * entity.
   *
   * @return a writer for model property relativeSpeedCondition
   */
  public IRelativeSpeedConditionWriter getRelativeSpeedConditionWriter();
  /**
   * From OpenSCENARIO class model specification: Condition checking the total traveled distance of
   * the reference entity since the start of the scenario.
   *
   * @return a writer for model property traveledDistanceCondition
   */
  public ITraveledDistanceConditionWriter getTraveledDistanceConditionWriter();
  /**
   * From OpenSCENARIO class model specification: Condition checking whether the reference entity
   * has reached a given position within a given uncertainty.
   *
   * @return a writer for model property reachPositionCondition
   */
  public IReachPositionConditionWriter getReachPositionConditionWriter();
  /**
   * From OpenSCENARIO class model specification: Condition checking the distance between two
   * entities or an entity and a position.
   *
   * @return a writer for model property distanceCondition
   */
  public IDistanceConditionWriter getDistanceConditionWriter();
  /**
   * From OpenSCENARIO class model specification: Condition checking the relative distance between
   * two entities.
   *
   * @return a writer for model property relativeDistanceCondition
   */
  public IRelativeDistanceConditionWriter getRelativeDistanceConditionWriter();

  /**
   * From OpenSCENARIO class model specification: Condition checking for how long the reference
   * entity has reached the end of the road.
   *
   * @param endOfRoadConditionWriter writer for the model property endOfRoadCondition
   */
  public void writeToEndOfRoadConditionWriter(IEndOfRoadConditionWriter endOfRoadConditionWriter);
  /**
   * From OpenSCENARIO class model specification: Condition checking whether the reference entity
   * was involved in a collision.
   *
   * @param collisionConditionWriter writer for the model property collisionCondition
   */
  public void writeToCollisionConditionWriter(ICollisionConditionWriter collisionConditionWriter);
  /**
   * From OpenSCENARIO class model specification: Condition checking for how long the reference
   * entity has left the road.
   *
   * @param offroadConditionWriter writer for the model property offroadCondition
   */
  public void writeToOffroadConditionWriter(IOffroadConditionWriter offroadConditionWriter);
  /**
   * From OpenSCENARIO class model specification: Condition checking the time headway between two
   * entities.
   *
   * @param timeHeadwayConditionWriter writer for the model property timeHeadwayCondition
   */
  public void writeToTimeHeadwayConditionWriter(
      ITimeHeadwayConditionWriter timeHeadwayConditionWriter);
  /**
   * From OpenSCENARIO class model specification: Condition checking the time to collision between
   * two entities.
   *
   * @param timeToCollisionConditionWriter writer for the model property timeToCollisionCondition
   */
  public void writeToTimeToCollisionConditionWriter(
      ITimeToCollisionConditionWriter timeToCollisionConditionWriter);
  /**
   * From OpenSCENARIO class model specification: Condition checking the current acceleration of an
   * entity.
   *
   * @param accelerationConditionWriter writer for the model property accelerationCondition
   */
  public void writeToAccelerationConditionWriter(
      IAccelerationConditionWriter accelerationConditionWriter);
  /**
   * From OpenSCENARIO class model specification: Condition checking for how long the reference
   * entity has not moved.
   *
   * @param standStillConditionWriter writer for the model property standStillCondition
   */
  public void writeToStandStillConditionWriter(
      IStandStillConditionWriter standStillConditionWriter);
  /**
   * From OpenSCENARIO class model specification: Condition checking the current speed of the
   * referenced entities.
   *
   * @param speedConditionWriter writer for the model property speedCondition
   */
  public void writeToSpeedConditionWriter(ISpeedConditionWriter speedConditionWriter);
  /**
   * From OpenSCENARIO class model specification: Condition checking the relative speed between two
   * entity.
   *
   * @param relativeSpeedConditionWriter writer for the model property relativeSpeedCondition
   */
  public void writeToRelativeSpeedConditionWriter(
      IRelativeSpeedConditionWriter relativeSpeedConditionWriter);
  /**
   * From OpenSCENARIO class model specification: Condition checking the total traveled distance of
   * the reference entity since the start of the scenario.
   *
   * @param traveledDistanceConditionWriter writer for the model property traveledDistanceCondition
   */
  public void writeToTraveledDistanceConditionWriter(
      ITraveledDistanceConditionWriter traveledDistanceConditionWriter);
  /**
   * From OpenSCENARIO class model specification: Condition checking whether the reference entity
   * has reached a given position within a given uncertainty.
   *
   * @param reachPositionConditionWriter writer for the model property reachPositionCondition
   */
  public void writeToReachPositionConditionWriter(
      IReachPositionConditionWriter reachPositionConditionWriter);
  /**
   * From OpenSCENARIO class model specification: Condition checking the distance between two
   * entities or an entity and a position.
   *
   * @param distanceConditionWriter writer for the model property distanceCondition
   */
  public void writeToDistanceConditionWriter(IDistanceConditionWriter distanceConditionWriter);
  /**
   * From OpenSCENARIO class model specification: Condition checking the relative distance between
   * two entities.
   *
   * @param relativeDistanceConditionWriter writer for the model property relativeDistanceCondition
   */
  public void writeToRelativeDistanceConditionWriter(
      IRelativeDistanceConditionWriter relativeDistanceConditionWriter);
}
