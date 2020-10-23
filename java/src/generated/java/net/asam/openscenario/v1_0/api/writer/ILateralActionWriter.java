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
 * <p>A Writer for the type 'LateralAction' From OpenSCENARIO class model specification: Controls
 * the lateral behavior of an entity.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ILateralActionWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: Action defining a lane change.
   *
   * @return a writer for model property laneChangeAction
   */
  public ILaneChangeActionWriter getLaneChangeActionWriter();
  /**
   * From OpenSCENARIO class model specification: Action defining a continuously kept lane offset.
   *
   * @return a writer for model property laneOffsetAction
   */
  public ILaneOffsetActionWriter getLaneOffsetActionWriter();
  /**
   * From OpenSCENARIO class model specification: Action defining a continuously kept lateral
   * distance to a specific entity.
   *
   * @return a writer for model property lateralDistanceAction
   */
  public ILateralDistanceActionWriter getLateralDistanceActionWriter();

  /**
   * From OpenSCENARIO class model specification: Action defining a lane change.
   *
   * @param laneChangeActionWriter writer for the model property laneChangeAction
   */
  public void writeToLaneChangeActionWriter(ILaneChangeActionWriter laneChangeActionWriter);
  /**
   * From OpenSCENARIO class model specification: Action defining a continuously kept lane offset.
   *
   * @param laneOffsetActionWriter writer for the model property laneOffsetAction
   */
  public void writeToLaneOffsetActionWriter(ILaneOffsetActionWriter laneOffsetActionWriter);
  /**
   * From OpenSCENARIO class model specification: Action defining a continuously kept lateral
   * distance to a specific entity.
   *
   * @param lateralDistanceActionWriter writer for the model property lateralDistanceAction
   */
  public void writeToLateralDistanceActionWriter(
      ILateralDistanceActionWriter lateralDistanceActionWriter);
}
