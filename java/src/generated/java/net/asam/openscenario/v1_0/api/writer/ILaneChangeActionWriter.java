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
import net.asam.openscenario.v1_0.api.ILaneChangeAction;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'LaneChangeAction' From OpenSCENARIO class model specification: This
 * action describes the transition between an entity's current lane and its target lane. The target
 * lane may be given in absolute or relative terms. The dynamics of the transition may be given
 * either by providing the time or the distance required for performing the transition. Time and
 * distance are measured between the start position and the end position of the action.. The
 * transition starts at the current lane position, including the current lane offset and ends at the
 * target lane position, optionally including a targetLaneOffset.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ILaneChangeActionWriter extends ILaneChangeAction, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Lane offset to be reached at the target lane; the
   * action will end there. Unit: m.
   *
   * @param targetLaneOffset value of model property targetLaneOffset
   */
  public void setTargetLaneOffset(Double targetLaneOffset);
  /**
   * From OpenSCENARIO class model specification: Shape/time of lane change action.
   *
   * @param laneChangeActionDynamics value of model property laneChangeActionDynamics
   */
  public void setLaneChangeActionDynamics(ITransitionDynamicsWriter laneChangeActionDynamics);
  /**
   * From OpenSCENARIO class model specification: Direction of lane change action.
   *
   * @param laneChangeTarget value of model property laneChangeTarget
   */
  public void setLaneChangeTarget(ILaneChangeTargetWriter laneChangeTarget);

  /**
   * Set a parameter for the attribute targetLaneOffset
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToTargetLaneOffset(String parameterName);

  /**
   * Get the parameter for the attribute targetLaneOffset
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromTargetLaneOffset();

  /**
   * Retrieves whether the attribute targetLaneOffset is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isTargetLaneOffsetParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: Shape/time of lane change action.
   *
   * @return a writer for model property laneChangeActionDynamics
   */
  public ITransitionDynamicsWriter getWriterLaneChangeActionDynamics();
  /**
   * From OpenSCENARIO class model specification: Direction of lane change action.
   *
   * @return a writer for model property laneChangeTarget
   */
  public ILaneChangeTargetWriter getWriterLaneChangeTarget();
}
