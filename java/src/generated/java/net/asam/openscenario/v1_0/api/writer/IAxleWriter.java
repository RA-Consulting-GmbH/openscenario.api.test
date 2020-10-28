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
import net.asam.openscenario.v1_0.api.IAxle;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Axle' From OpenSCENARIO class model specification: The definition of
 * vehicle axle.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IAxleWriter extends IAxle, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Maximum steering angle which can be performed by
   * the wheels on this axle. Unit: rad; Range: [0;PI], symmetrical.
   *
   * @param maxSteering value of model property maxSteering
   */
  public void setMaxSteering(Double maxSteering);
  /**
   * From OpenSCENARIO class model specification: Diameter of the wheels on this axle. Unit: m;
   * Range: ]0..inf[.
   *
   * @param wheelDiameter value of model property wheelDiameter
   */
  public void setWheelDiameter(Double wheelDiameter);
  /**
   * From OpenSCENARIO class model specification: Distance of the wheels center lines at zero
   * steering. Unit: m; Range: [0..inf[.
   *
   * @param trackWidth value of model property trackWidth
   */
  public void setTrackWidth(Double trackWidth);
  /**
   * From OpenSCENARIO class model specification: Longitudinal position of the axle with respect to
   * the vehicles reference point. Unit: m; Range: [0..inf[.
   *
   * @param positionX value of model property positionX
   */
  public void setPositionX(Double positionX);
  /**
   * From OpenSCENARIO class model specification: Z-position of the axle with respect to the
   * vehicles reference point. Usually this is half of wheel diameter. Unit:m; Range:[0..inf[.
   *
   * @param positionZ value of model property positionZ
   */
  public void setPositionZ(Double positionZ);

  /**
   * Set a parameter for the attribute maxSteering
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToMaxSteering(String parameterName);
  /**
   * Set a parameter for the attribute wheelDiameter
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToWheelDiameter(String parameterName);
  /**
   * Set a parameter for the attribute trackWidth
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToTrackWidth(String parameterName);
  /**
   * Set a parameter for the attribute positionX
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToPositionX(String parameterName);
  /**
   * Set a parameter for the attribute positionZ
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToPositionZ(String parameterName);

  /**
   * Get the parameter for the attribute maxSteering
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromMaxSteering();
  /**
   * Get the parameter for the attribute wheelDiameter
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromWheelDiameter();
  /**
   * Get the parameter for the attribute trackWidth
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromTrackWidth();
  /**
   * Get the parameter for the attribute positionX
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromPositionX();
  /**
   * Get the parameter for the attribute positionZ
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromPositionZ();

  /**
   * Retrieves whether the attribute maxSteering is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isMaxSteeringParameterized();
  /**
   * Retrieves whether the attribute wheelDiameter is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isWheelDiameterParameterized();
  /**
   * Retrieves whether the attribute trackWidth is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isTrackWidthParameterized();
  /**
   * Retrieves whether the attribute positionX is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isPositionXParameterized();
  /**
   * Retrieves whether the attribute positionZ is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isPositionZParameterized();

  // children

}
