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
 * <p>A Writer for the type 'Position' From OpenSCENARIO class model specification: Container for
 * position types.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IPositionWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: Position that uses global coordinates.
   *
   * @return a writer for model property worldPosition
   */
  public IWorldPositionWriter getWorldPositionWriter();
  /**
   * From OpenSCENARIO class model specification: Position is given relative to a world position.
   *
   * @return a writer for model property relativeWorldPosition
   */
  public IRelativeWorldPositionWriter getRelativeWorldPositionWriter();
  /**
   * From OpenSCENARIO class model specification: Position is given relative to an entity.
   *
   * @return a writer for model property relativeObjectPosition
   */
  public IRelativeObjectPositionWriter getRelativeObjectPositionWriter();
  /**
   * From OpenSCENARIO class model specification: Position in road coordinates (t,s) applied to a
   * given road.
   *
   * @return a writer for model property roadPosition
   */
  public IRoadPositionWriter getRoadPositionWriter();
  /**
   * From OpenSCENARIO class model specification: Position relative to an entity's road position
   * (ds, dt).
   *
   * @return a writer for model property relativeRoadPosition
   */
  public IRelativeRoadPositionWriter getRelativeRoadPositionWriter();
  /**
   * From OpenSCENARIO class model specification: Position that is determined by a lane (lane ID)
   * and the s coordinate of a given road.
   *
   * @return a writer for model property lanePosition
   */
  public ILanePositionWriter getLanePositionWriter();
  /**
   * From OpenSCENARIO class model specification: Position that is determined relative to the lane
   * coordinates of a given entity. (Relative lane and relative s to this entity).
   *
   * @return a writer for model property relativeLanePosition
   */
  public IRelativeLanePositionWriter getRelativeLanePositionWriter();
  /**
   * From OpenSCENARIO class model specification: Position that is determined by a given route.
   *
   * @return a writer for model property routePosition
   */
  public IRoutePositionWriter getRoutePositionWriter();

  /**
   * From OpenSCENARIO class model specification: Position that uses global coordinates.
   *
   * @param worldPositionWriter writer for the model property worldPosition
   */
  public void writeToWorldPositionWriter(IWorldPositionWriter worldPositionWriter);
  /**
   * From OpenSCENARIO class model specification: Position is given relative to a world position.
   *
   * @param relativeWorldPositionWriter writer for the model property relativeWorldPosition
   */
  public void writeToRelativeWorldPositionWriter(
      IRelativeWorldPositionWriter relativeWorldPositionWriter);
  /**
   * From OpenSCENARIO class model specification: Position is given relative to an entity.
   *
   * @param relativeObjectPositionWriter writer for the model property relativeObjectPosition
   */
  public void writeToRelativeObjectPositionWriter(
      IRelativeObjectPositionWriter relativeObjectPositionWriter);
  /**
   * From OpenSCENARIO class model specification: Position in road coordinates (t,s) applied to a
   * given road.
   *
   * @param roadPositionWriter writer for the model property roadPosition
   */
  public void writeToRoadPositionWriter(IRoadPositionWriter roadPositionWriter);
  /**
   * From OpenSCENARIO class model specification: Position relative to an entity's road position
   * (ds, dt).
   *
   * @param relativeRoadPositionWriter writer for the model property relativeRoadPosition
   */
  public void writeToRelativeRoadPositionWriter(
      IRelativeRoadPositionWriter relativeRoadPositionWriter);
  /**
   * From OpenSCENARIO class model specification: Position that is determined by a lane (lane ID)
   * and the s coordinate of a given road.
   *
   * @param lanePositionWriter writer for the model property lanePosition
   */
  public void writeToLanePositionWriter(ILanePositionWriter lanePositionWriter);
  /**
   * From OpenSCENARIO class model specification: Position that is determined relative to the lane
   * coordinates of a given entity. (Relative lane and relative s to this entity).
   *
   * @param relativeLanePositionWriter writer for the model property relativeLanePosition
   */
  public void writeToRelativeLanePositionWriter(
      IRelativeLanePositionWriter relativeLanePositionWriter);
  /**
   * From OpenSCENARIO class model specification: Position that is determined by a given route.
   *
   * @param routePositionWriter writer for the model property routePosition
   */
  public void writeToRoutePositionWriter(IRoutePositionWriter routePositionWriter);
}
