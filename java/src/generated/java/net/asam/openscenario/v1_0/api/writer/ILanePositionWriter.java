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
import net.asam.openscenario.v1_0.api.ILanePosition;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'LanePosition' From OpenSCENARIO class model specification: Defines a
 * position along a lane with a given s coordinate, lane ID, road ID and orientation.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ILanePositionWriter extends ILanePosition, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: ID of the current road (ID of a road in road
   * network).
   *
   * @param roadId value of model property roadId
   */
  public void setRoadId(String roadId);
  /**
   * From OpenSCENARIO class model specification: ID of the current lane (ID of a lane in road
   * network).
   *
   * @param laneId value of model property laneId
   */
  public void setLaneId(String laneId);
  /**
   * From OpenSCENARIO class model specification: Lateral offset to the centerline of the current
   * lane. Unit: m.
   *
   * @param offset value of model property offset
   */
  public void setOffset(Double offset);
  /**
   * From OpenSCENARIO class model specification: The s coordinate of the current position. Unit: m;
   * Range: [0..inf[.
   *
   * @param s value of model property s
   */
  public void setS(Double s);
  /**
   * From OpenSCENARIO class model specification: Orientation. The relative reference context refers
   * to the referenced road's s and t coordinates.
   *
   * @param orientation value of model property orientation
   */
  public void setOrientation(IOrientationWriter orientation);

  /**
   * Set a parameter for the attribute roadId
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToRoadId(String parameterName);
  /**
   * Set a parameter for the attribute laneId
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToLaneId(String parameterName);
  /**
   * Set a parameter for the attribute offset
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToOffset(String parameterName);
  /**
   * Set a parameter for the attribute s
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToS(String parameterName);

  /**
   * Get the parameter for the attribute roadId
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromRoadId();
  /**
   * Get the parameter for the attribute laneId
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromLaneId();
  /**
   * Get the parameter for the attribute offset
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromOffset();
  /**
   * Get the parameter for the attribute s
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromS();

  /**
   * Retrieves whether the attribute roadId is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isRoadIdParameterized();
  /**
   * Retrieves whether the attribute laneId is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isLaneIdParameterized();
  /**
   * Retrieves whether the attribute offset is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isOffsetParameterized();
  /**
   * Retrieves whether the attribute s is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isSParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: Orientation. The relative reference context refers
   * to the referenced road's s and t coordinates.
   *
   * @return a writer for model property orientation
   */
  public IOrientationWriter getWriterOrientation();
}
