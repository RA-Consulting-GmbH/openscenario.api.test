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
import net.asam.openscenario.v1_0.api.IInRoutePosition;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'InRoutePosition' From OpenSCENARIO class model specification: Defines
 * the current position in a given route, either through a position in the lane coordinate system, a
 * position in a road coordinate system or through the current position of an entity.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IInRoutePositionWriter extends IInRoutePosition, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: The position is defined through the current
   * position of a given entity.
   *
   * @param fromCurrentEntity value of model property fromCurrentEntity
   */
  public void setFromCurrentEntity(IPositionOfCurrentEntityWriter fromCurrentEntity);
  /**
   * From OpenSCENARIO class model specification: Route position in road coordinate system.
   *
   * @param fromRoadCoordinates value of model property fromRoadCoordinates
   */
  public void setFromRoadCoordinates(IPositionInRoadCoordinatesWriter fromRoadCoordinates);
  /**
   * From OpenSCENARIO class model specification: Route position in lane coordinate system.
   *
   * @param fromLaneCoordinates value of model property fromLaneCoordinates
   */
  public void setFromLaneCoordinates(IPositionInLaneCoordinatesWriter fromLaneCoordinates);

  // children
  /**
   * From OpenSCENARIO class model specification: The position is defined through the current
   * position of a given entity.
   *
   * @return a writer for model property fromCurrentEntity
   */
  public IPositionOfCurrentEntityWriter getWriterFromCurrentEntity();
  /**
   * From OpenSCENARIO class model specification: Route position in road coordinate system.
   *
   * @return a writer for model property fromRoadCoordinates
   */
  public IPositionInRoadCoordinatesWriter getWriterFromRoadCoordinates();
  /**
   * From OpenSCENARIO class model specification: Route position in lane coordinate system.
   *
   * @return a writer for model property fromLaneCoordinates
   */
  public IPositionInLaneCoordinatesWriter getWriterFromLaneCoordinates();
}
