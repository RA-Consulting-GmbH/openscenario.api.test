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
 * <p>A Writer for the type 'RoadPosition' From OpenSCENARIO class model specification: Position
 * defined in terms of road ID, distance (s) along that road segment and offset from reference lane
 * (t) at that point. Orientation is optional.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IRoadPositionWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Identifier of the road, defined in the road
   * network definition file (external to ASAM OpenSCENARIO).
   *
   * @return value of model property roadId
   */
  public String getRoadId();
  /**
   * From OpenSCENARIO class model specification: Represents s coordinate along the reference line
   * of the road.
   *
   * @return value of model property s
   */
  public Double getS();
  /**
   * From OpenSCENARIO class model specification: Represents t coordinate orthogonal to the
   * reference line of the road.
   *
   * @return value of model property t
   */
  public Double getT();

  /**
   * From OpenSCENARIO class model specification: Identifier of the road, defined in the road
   * network definition file (external to ASAM OpenSCENARIO).
   *
   * @param roadId value of model property roadId
   */
  public void writeToRoadId(String roadId);
  /**
   * From OpenSCENARIO class model specification: Represents s coordinate along the reference line
   * of the road.
   *
   * @param s value of model property s
   */
  public void writeToS(Double s);
  /**
   * From OpenSCENARIO class model specification: Represents t coordinate orthogonal to the
   * reference line of the road.
   *
   * @param t value of model property t
   */
  public void writeToT(Double t);

  /**
   * Set a parameter for the attribute roadId
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToRoadId(String parameterName);
  /**
   * Set a parameter for the attribute s
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToS(String parameterName);
  /**
   * Set a parameter for the attribute t
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToT(String parameterName);

  /**
   * Get the parameter for the attribute roadId
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromRoadId();
  /**
   * Get the parameter for the attribute s
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromS();
  /**
   * Get the parameter for the attribute t
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromT();

  /**
   * Retrieves whether the attribute roadId is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isRoadIdParameterized();
  /**
   * Retrieves whether the attribute s is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isSParameterized();
  /**
   * Retrieves whether the attribute t is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isTParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: Orientation. The relative reference context refers
   * to the referenced road's s and t coordinates.
   *
   * @return a writer for model property orientation
   */
  public IOrientationWriter getOrientationWriter();

  /**
   * From OpenSCENARIO class model specification: Orientation. The relative reference context refers
   * to the referenced road's s and t coordinates.
   *
   * @param orientationWriter writer for the model property orientation
   */
  public void writeToOrientationWriter(IOrientationWriter orientationWriter);
}
