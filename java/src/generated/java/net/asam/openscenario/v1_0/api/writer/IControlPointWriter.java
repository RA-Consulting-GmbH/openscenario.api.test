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
 * <p>A Writer for the type 'ControlPoint' From OpenSCENARIO class model specification:
 * Specification of one control point of a NURBS trajectory.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IControlPointWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Optional specification of the time dimension of
   * the control point. Unit: s;Range [0..inf[.
   *
   * @return value of model property time
   */
  public Double getTime();
  /**
   * From OpenSCENARIO class model specification: Optional weight specification of the control
   * point. If unspecified, all control points will be equal weighted. Range ]-inf..inf[.
   *
   * @return value of model property weight
   */
  public Double getWeight();

  /**
   * From OpenSCENARIO class model specification: Optional specification of the time dimension of
   * the control point. Unit: s;Range [0..inf[.
   *
   * @param time value of model property time
   */
  public void writeToTime(Double time);
  /**
   * From OpenSCENARIO class model specification: Optional weight specification of the control
   * point. If unspecified, all control points will be equal weighted. Range ]-inf..inf[.
   *
   * @param weight value of model property weight
   */
  public void writeToWeight(Double weight);

  /**
   * Set a parameter for the attribute time
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToTime(String parameterName);
  /**
   * Set a parameter for the attribute weight
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToWeight(String parameterName);

  /**
   * Get the parameter for the attribute time
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromTime();
  /**
   * Get the parameter for the attribute weight
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromWeight();

  /**
   * Retrieves whether the attribute time is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isTimeParameterized();
  /**
   * Retrieves whether the attribute weight is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isWeightParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: Position of the control point.
   *
   * @return a writer for model property position
   */
  public IPositionWriter getPositionWriter();

  /**
   * From OpenSCENARIO class model specification: Position of the control point.
   *
   * @param positionWriter writer for the model property position
   */
  public void writeToPositionWriter(IPositionWriter positionWriter);
}
