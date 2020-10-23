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
 * <p>A Writer for the type 'DynamicConstraints' From OpenSCENARIO class model specification:
 * Constraints that are limiting the acceleration, the deceleration and the speed. Used in lateral
 * or longitudinal actions.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IDynamicConstraintsWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Maximum acceleration the distance controller is
   * allowed to use for keeping the distance. Unit: m/s2; Range: [0..inf[.
   *
   * @return value of model property maxAcceleration
   */
  public Double getMaxAcceleration();
  /**
   * From OpenSCENARIO class model specification: Maximum deceleration the distance controller is
   * allowed to use for keeping the distance. Unit: m/s2; Range: [0..inf[.
   *
   * @return value of model property maxDeceleration
   */
  public Double getMaxDeceleration();
  /**
   * From OpenSCENARIO class model specification: Maximum speed the distance controller is allowed
   * to use for keeping the distance. Unit: m/s; Range: [0..inf[.
   *
   * @return value of model property maxSpeed
   */
  public Double getMaxSpeed();

  /**
   * From OpenSCENARIO class model specification: Maximum acceleration the distance controller is
   * allowed to use for keeping the distance. Unit: m/s2; Range: [0..inf[.
   *
   * @param maxAcceleration value of model property maxAcceleration
   */
  public void writeToMaxAcceleration(Double maxAcceleration);
  /**
   * From OpenSCENARIO class model specification: Maximum deceleration the distance controller is
   * allowed to use for keeping the distance. Unit: m/s2; Range: [0..inf[.
   *
   * @param maxDeceleration value of model property maxDeceleration
   */
  public void writeToMaxDeceleration(Double maxDeceleration);
  /**
   * From OpenSCENARIO class model specification: Maximum speed the distance controller is allowed
   * to use for keeping the distance. Unit: m/s; Range: [0..inf[.
   *
   * @param maxSpeed value of model property maxSpeed
   */
  public void writeToMaxSpeed(Double maxSpeed);

  /**
   * Set a parameter for the attribute maxAcceleration
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToMaxAcceleration(String parameterName);
  /**
   * Set a parameter for the attribute maxDeceleration
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToMaxDeceleration(String parameterName);
  /**
   * Set a parameter for the attribute maxSpeed
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToMaxSpeed(String parameterName);

  /**
   * Get the parameter for the attribute maxAcceleration
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromMaxAcceleration();
  /**
   * Get the parameter for the attribute maxDeceleration
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromMaxDeceleration();
  /**
   * Get the parameter for the attribute maxSpeed
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromMaxSpeed();

  /**
   * Retrieves whether the attribute maxAcceleration is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isMaxAccelerationParameterized();
  /**
   * Retrieves whether the attribute maxDeceleration is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isMaxDecelerationParameterized();
  /**
   * Retrieves whether the attribute maxSpeed is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isMaxSpeedParameterized();

  // children

}
