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
 * <p>From OpenSCENARIO class model specification: This action describes a continuously kept lane
 * offset of an entity and its initial transition to the new lane offset. The lane offset may be
 * given in absolute or relative terms. The dynamics are specified by providing the maxLateralAcc
 * used to keep the lane offset. Lane offset keeping starts immediately at start of the action and
 * ends after the given duration. Different shapes can be used for the initial transition. Step
 * defines an immediate transition, i.e. a jump from the current lane offset to the target lane
 * offset. Usage of time and distance does not make any sense in combination with step; linear will
 * result in a linear movement between the start and target lane offset; cubic and sinusoidal will
 * result in smooth transitions (basically s-shaped) between start and end state. A smooth
 * transition is only given with cubic and sinusoidal shape.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ILaneOffsetAction extends IOpenScenarioModelElement {
  /**
   * From OpenSCENARIO class model specification: If false, the action ends when the target lane is
   * reached. If true it does not end but has to be stopped.
   *
   * @return value of model property continuous
   */
  public Boolean getContinuous();
  /**
   * From OpenSCENARIO class model specification: Parameters defining the dynamics of the
   * LaneOffsetAction.
   *
   * @return value of model property laneOffsetActionDynamics
   */
  public ILaneOffsetActionDynamics getLaneOffsetActionDynamics();
  /**
   * From OpenSCENARIO class model specification: Parameters indicating if the lane offset is
   * defined relative to another entity or absolute to the current lane's center line.
   *
   * @return value of model property laneOffsetTarget
   */
  public ILaneOffsetTarget getLaneOffsetTarget();
}
