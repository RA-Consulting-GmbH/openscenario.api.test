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
import net.asam.openscenario.v1_0.api.IEntityCondition;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'EntityCondition' From OpenSCENARIO class model specification: Defines a
 * specific condition on an entity.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IEntityConditionWriter extends IEntityCondition, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Condition checking for how long the reference
   * entity has reached the end of the road.
   *
   * @param endOfRoadCondition value of model property endOfRoadCondition
   */
  public void setEndOfRoadCondition(IEndOfRoadConditionWriter endOfRoadCondition);
  /**
   * From OpenSCENARIO class model specification: Condition checking whether the reference entity
   * was involved in a collision.
   *
   * @param collisionCondition value of model property collisionCondition
   */
  public void setCollisionCondition(ICollisionConditionWriter collisionCondition);
  /**
   * From OpenSCENARIO class model specification: Condition checking for how long the reference
   * entity has left the road.
   *
   * @param offroadCondition value of model property offroadCondition
   */
  public void setOffroadCondition(IOffroadConditionWriter offroadCondition);
  /**
   * From OpenSCENARIO class model specification: Condition checking the time headway between two
   * entities.
   *
   * @param timeHeadwayCondition value of model property timeHeadwayCondition
   */
  public void setTimeHeadwayCondition(ITimeHeadwayConditionWriter timeHeadwayCondition);
  /**
   * From OpenSCENARIO class model specification: Condition checking the time to collision between
   * two entities.
   *
   * @param timeToCollisionCondition value of model property timeToCollisionCondition
   */
  public void setTimeToCollisionCondition(ITimeToCollisionConditionWriter timeToCollisionCondition);
  /**
   * From OpenSCENARIO class model specification: Condition checking the current acceleration of an
   * entity.
   *
   * @param accelerationCondition value of model property accelerationCondition
   */
  public void setAccelerationCondition(IAccelerationConditionWriter accelerationCondition);
  /**
   * From OpenSCENARIO class model specification: Condition checking for how long the reference
   * entity has not moved.
   *
   * @param standStillCondition value of model property standStillCondition
   */
  public void setStandStillCondition(IStandStillConditionWriter standStillCondition);
  /**
   * From OpenSCENARIO class model specification: Condition checking the current speed of the
   * referenced entities.
   *
   * @param speedCondition value of model property speedCondition
   */
  public void setSpeedCondition(ISpeedConditionWriter speedCondition);
  /**
   * From OpenSCENARIO class model specification: Condition checking the relative speed between two
   * entity.
   *
   * @param relativeSpeedCondition value of model property relativeSpeedCondition
   */
  public void setRelativeSpeedCondition(IRelativeSpeedConditionWriter relativeSpeedCondition);
  /**
   * From OpenSCENARIO class model specification: Condition checking the total traveled distance of
   * the reference entity since the start of the scenario.
   *
   * @param traveledDistanceCondition value of model property traveledDistanceCondition
   */
  public void setTraveledDistanceCondition(
      ITraveledDistanceConditionWriter traveledDistanceCondition);
  /**
   * From OpenSCENARIO class model specification: Condition checking whether the reference entity
   * has reached a given position within a given uncertainty.
   *
   * @param reachPositionCondition value of model property reachPositionCondition
   */
  public void setReachPositionCondition(IReachPositionConditionWriter reachPositionCondition);
  /**
   * From OpenSCENARIO class model specification: Condition checking the distance between two
   * entities or an entity and a position.
   *
   * @param distanceCondition value of model property distanceCondition
   */
  public void setDistanceCondition(IDistanceConditionWriter distanceCondition);
  /**
   * From OpenSCENARIO class model specification: Condition checking the relative distance between
   * two entities.
   *
   * @param relativeDistanceCondition value of model property relativeDistanceCondition
   */
  public void setRelativeDistanceCondition(
      IRelativeDistanceConditionWriter relativeDistanceCondition);

  // children
  /**
   * From OpenSCENARIO class model specification: Condition checking for how long the reference
   * entity has reached the end of the road.
   *
   * @return a writer for model property endOfRoadCondition
   */
  public IEndOfRoadConditionWriter getWriterEndOfRoadCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking whether the reference entity
   * was involved in a collision.
   *
   * @return a writer for model property collisionCondition
   */
  public ICollisionConditionWriter getWriterCollisionCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking for how long the reference
   * entity has left the road.
   *
   * @return a writer for model property offroadCondition
   */
  public IOffroadConditionWriter getWriterOffroadCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking the time headway between two
   * entities.
   *
   * @return a writer for model property timeHeadwayCondition
   */
  public ITimeHeadwayConditionWriter getWriterTimeHeadwayCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking the time to collision between
   * two entities.
   *
   * @return a writer for model property timeToCollisionCondition
   */
  public ITimeToCollisionConditionWriter getWriterTimeToCollisionCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking the current acceleration of an
   * entity.
   *
   * @return a writer for model property accelerationCondition
   */
  public IAccelerationConditionWriter getWriterAccelerationCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking for how long the reference
   * entity has not moved.
   *
   * @return a writer for model property standStillCondition
   */
  public IStandStillConditionWriter getWriterStandStillCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking the current speed of the
   * referenced entities.
   *
   * @return a writer for model property speedCondition
   */
  public ISpeedConditionWriter getWriterSpeedCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking the relative speed between two
   * entity.
   *
   * @return a writer for model property relativeSpeedCondition
   */
  public IRelativeSpeedConditionWriter getWriterRelativeSpeedCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking the total traveled distance of
   * the reference entity since the start of the scenario.
   *
   * @return a writer for model property traveledDistanceCondition
   */
  public ITraveledDistanceConditionWriter getWriterTraveledDistanceCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking whether the reference entity
   * has reached a given position within a given uncertainty.
   *
   * @return a writer for model property reachPositionCondition
   */
  public IReachPositionConditionWriter getWriterReachPositionCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking the distance between two
   * entities or an entity and a position.
   *
   * @return a writer for model property distanceCondition
   */
  public IDistanceConditionWriter getWriterDistanceCondition();
  /**
   * From OpenSCENARIO class model specification: Condition checking the relative distance between
   * two entities.
   *
   * @return a writer for model property relativeDistanceCondition
   */
  public IRelativeDistanceConditionWriter getWriterRelativeDistanceCondition();
}
