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
 * <p>A Writer for the type 'LaneOffsetTarget' From OpenSCENARIO class model specification: Defines
 * the target lane of the LaneOffsetAction.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ILaneOffsetTargetWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: Relative reference to the lane position of a
   * specific entity.
   *
   * @return a writer for model property relativeTargetLaneOffset
   */
  public IRelativeTargetLaneOffsetWriter getRelativeTargetLaneOffsetWriter();
  /**
   * From OpenSCENARIO class model specification: Absolute reference to the current lane's center
   * line.
   *
   * @return a writer for model property absoluteTargetLaneOffset
   */
  public IAbsoluteTargetLaneOffsetWriter getAbsoluteTargetLaneOffsetWriter();

  /**
   * From OpenSCENARIO class model specification: Relative reference to the lane position of a
   * specific entity.
   *
   * @param relativeTargetLaneOffsetWriter writer for the model property relativeTargetLaneOffset
   */
  public void writeToRelativeTargetLaneOffsetWriter(
      IRelativeTargetLaneOffsetWriter relativeTargetLaneOffsetWriter);
  /**
   * From OpenSCENARIO class model specification: Absolute reference to the current lane's center
   * line.
   *
   * @param absoluteTargetLaneOffsetWriter writer for the model property absoluteTargetLaneOffset
   */
  public void writeToAbsoluteTargetLaneOffsetWriter(
      IAbsoluteTargetLaneOffsetWriter absoluteTargetLaneOffsetWriter);
}
