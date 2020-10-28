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
import net.asam.openscenario.v1_0.api.IClothoid;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Clothoid' From OpenSCENARIO class model specification: A shape of the
 * trajectory of an entity. A clothoid is a curve whose curvature changes linearly with its curve
 * length.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IClothoidWriter extends IClothoid, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Start curvature of clothoid.
   *
   * @param curvature value of model property curvature
   */
  public void setCurvature(Double curvature);
  /**
   * From OpenSCENARIO class model specification: Rate of change of the curvature of the
   * clothoid.Unit: 1/s;Range [0..inf[.
   *
   * @param curvatureDot value of model property curvatureDot
   */
  public void setCurvatureDot(Double curvatureDot);
  /**
   * From OpenSCENARIO class model specification: Length of clothoid.
   *
   * @param length value of model property length
   */
  public void setLength(Double length);
  /**
   * From OpenSCENARIO class model specification: Optional time specification at the start of the
   * clothoid. Unit: s;Range [0..inf[.
   *
   * @param startTime value of model property startTime
   */
  public void setStartTime(Double startTime);
  /**
   * From OpenSCENARIO class model specification: Optional time specification at the end of the
   * clothoid. Unit: s;Range ]0..inf[.
   *
   * @param stopTime value of model property stopTime
   */
  public void setStopTime(Double stopTime);
  /**
   * From OpenSCENARIO class model specification: Start position of a clothoid.
   *
   * @param position value of model property position
   */
  public void setPosition(IPositionWriter position);

  /**
   * Set a parameter for the attribute curvature
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToCurvature(String parameterName);
  /**
   * Set a parameter for the attribute curvatureDot
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToCurvatureDot(String parameterName);
  /**
   * Set a parameter for the attribute length
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToLength(String parameterName);
  /**
   * Set a parameter for the attribute startTime
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToStartTime(String parameterName);
  /**
   * Set a parameter for the attribute stopTime
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToStopTime(String parameterName);

  /**
   * Get the parameter for the attribute curvature
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromCurvature();
  /**
   * Get the parameter for the attribute curvatureDot
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromCurvatureDot();
  /**
   * Get the parameter for the attribute length
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromLength();
  /**
   * Get the parameter for the attribute startTime
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromStartTime();
  /**
   * Get the parameter for the attribute stopTime
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromStopTime();

  /**
   * Retrieves whether the attribute curvature is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isCurvatureParameterized();
  /**
   * Retrieves whether the attribute curvatureDot is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isCurvatureDotParameterized();
  /**
   * Retrieves whether the attribute length is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isLengthParameterized();
  /**
   * Retrieves whether the attribute startTime is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isStartTimeParameterized();
  /**
   * Retrieves whether the attribute stopTime is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isStopTimeParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: Start position of a clothoid.
   *
   * @return a writer for model property position
   */
  public IPositionWriter getWriterPosition();
}
