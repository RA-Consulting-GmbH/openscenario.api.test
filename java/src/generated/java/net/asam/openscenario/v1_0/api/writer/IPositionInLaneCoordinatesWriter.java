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
import net.asam.openscenario.v1_0.api.IPositionInLaneCoordinates;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'PositionInLaneCoordinates' From OpenSCENARIO class model specification:
 * Defines a coordinate along a lane with a given s coordinate and lane ID.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IPositionInLaneCoordinatesWriter
    extends IPositionInLaneCoordinates, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: s-coordinate of the actual position. Unit: m;
   * Range: [0..inf[.
   *
   * @param pathS value of model property pathS
   */
  public void setPathS(Double pathS);
  /**
   * From OpenSCENARIO class model specification: Lane ID of the actual position.
   *
   * @param laneId value of model property laneId
   */
  public void setLaneId(String laneId);
  /**
   * From OpenSCENARIO class model specification: Lateral offset (relative to the lane centerline)
   * of the actual position. Unit: m.
   *
   * @param laneOffset value of model property laneOffset
   */
  public void setLaneOffset(Double laneOffset);

  /**
   * Set a parameter for the attribute pathS
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToPathS(String parameterName);
  /**
   * Set a parameter for the attribute laneId
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToLaneId(String parameterName);
  /**
   * Set a parameter for the attribute laneOffset
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToLaneOffset(String parameterName);

  /**
   * Get the parameter for the attribute pathS
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromPathS();
  /**
   * Get the parameter for the attribute laneId
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromLaneId();
  /**
   * Get the parameter for the attribute laneOffset
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromLaneOffset();

  /**
   * Retrieves whether the attribute pathS is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isPathSParameterized();
  /**
   * Retrieves whether the attribute laneId is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isLaneIdParameterized();
  /**
   * Retrieves whether the attribute laneOffset is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isLaneOffsetParameterized();

  // children

}
