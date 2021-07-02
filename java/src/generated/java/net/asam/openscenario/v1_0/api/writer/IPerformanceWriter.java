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
import net.asam.openscenario.v1_0.api.IPerformance;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Performance' From OpenSCENARIO class model specification: Container for
 * Performance values of a vehicle.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IPerformanceWriter extends IPerformance, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Maximum speed of the vehicle. Unit: m/s.
   *
   * @param maxSpeed value of model property maxSpeed
   */
  public void setMaxSpeed(Double maxSpeed);
  /**
   * From OpenSCENARIO class model specification: Maximum acceleration of the vehicle. Unit: m/s^2.
   * Range: [0..inf[.
   *
   * @param maxAcceleration value of model property maxAcceleration
   */
  public void setMaxAcceleration(Double maxAcceleration);
  /**
   * From OpenSCENARIO class model specification: Maximum deceleration of the vehicle. Unit: m/s^2.
   * Range: [0..inf[.
   *
   * @param maxDeceleration value of model property maxDeceleration
   */
  public void setMaxDeceleration(Double maxDeceleration);

  /**
   * Set a parameter for the attribute maxSpeed
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToMaxSpeed(String parameterName);
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
   * Get the parameter for the attribute maxSpeed
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromMaxSpeed();
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
   * Retrieves whether the attribute maxSpeed is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isMaxSpeedParameterized();
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

  // children

}
