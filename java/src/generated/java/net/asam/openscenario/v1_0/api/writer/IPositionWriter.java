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
import net.asam.openscenario.v1_0.api.IPosition;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Position' From OpenSCENARIO class model specification: Container for
 * position types.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IPositionWriter extends IPosition, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Position that uses global coordinates.
   *
   * @param worldPosition value of model property worldPosition
   */
  public void setWorldPosition(IWorldPositionWriter worldPosition);
  /**
   * From OpenSCENARIO class model specification: Position is given relative to a world position.
   *
   * @param relativeWorldPosition value of model property relativeWorldPosition
   */
  public void setRelativeWorldPosition(IRelativeWorldPositionWriter relativeWorldPosition);
  /**
   * From OpenSCENARIO class model specification: Position is given relative to an entity.
   *
   * @param relativeObjectPosition value of model property relativeObjectPosition
   */
  public void setRelativeObjectPosition(IRelativeObjectPositionWriter relativeObjectPosition);
  /**
   * From OpenSCENARIO class model specification: Position in road coordinates (t,s) applied to a
   * given road.
   *
   * @param roadPosition value of model property roadPosition
   */
  public void setRoadPosition(IRoadPositionWriter roadPosition);
  /**
   * From OpenSCENARIO class model specification: Position relative to an entity's road position
   * (ds, dt).
   *
   * @param relativeRoadPosition value of model property relativeRoadPosition
   */
  public void setRelativeRoadPosition(IRelativeRoadPositionWriter relativeRoadPosition);
  /**
   * From OpenSCENARIO class model specification: Position that is determined by a lane (lane ID)
   * and the s coordinate of a given road.
   *
   * @param lanePosition value of model property lanePosition
   */
  public void setLanePosition(ILanePositionWriter lanePosition);
  /**
   * From OpenSCENARIO class model specification: Position that is determined relative to the lane
   * coordinates of a given entity. (Relative lane and relative s to this entity).
   *
   * @param relativeLanePosition value of model property relativeLanePosition
   */
  public void setRelativeLanePosition(IRelativeLanePositionWriter relativeLanePosition);
  /**
   * From OpenSCENARIO class model specification: Position that is determined by a given route.
   *
   * @param routePosition value of model property routePosition
   */
  public void setRoutePosition(IRoutePositionWriter routePosition);

  // children
  /**
   * From OpenSCENARIO class model specification: Position that uses global coordinates.
   *
   * @return a writer for model property worldPosition
   */
  public IWorldPositionWriter getWriterWorldPosition();
  /**
   * From OpenSCENARIO class model specification: Position is given relative to a world position.
   *
   * @return a writer for model property relativeWorldPosition
   */
  public IRelativeWorldPositionWriter getWriterRelativeWorldPosition();
  /**
   * From OpenSCENARIO class model specification: Position is given relative to an entity.
   *
   * @return a writer for model property relativeObjectPosition
   */
  public IRelativeObjectPositionWriter getWriterRelativeObjectPosition();
  /**
   * From OpenSCENARIO class model specification: Position in road coordinates (t,s) applied to a
   * given road.
   *
   * @return a writer for model property roadPosition
   */
  public IRoadPositionWriter getWriterRoadPosition();
  /**
   * From OpenSCENARIO class model specification: Position relative to an entity's road position
   * (ds, dt).
   *
   * @return a writer for model property relativeRoadPosition
   */
  public IRelativeRoadPositionWriter getWriterRelativeRoadPosition();
  /**
   * From OpenSCENARIO class model specification: Position that is determined by a lane (lane ID)
   * and the s coordinate of a given road.
   *
   * @return a writer for model property lanePosition
   */
  public ILanePositionWriter getWriterLanePosition();
  /**
   * From OpenSCENARIO class model specification: Position that is determined relative to the lane
   * coordinates of a given entity. (Relative lane and relative s to this entity).
   *
   * @return a writer for model property relativeLanePosition
   */
  public IRelativeLanePositionWriter getWriterRelativeLanePosition();
  /**
   * From OpenSCENARIO class model specification: Position that is determined by a given route.
   *
   * @return a writer for model property routePosition
   */
  public IRoutePositionWriter getWriterRoutePosition();
}
