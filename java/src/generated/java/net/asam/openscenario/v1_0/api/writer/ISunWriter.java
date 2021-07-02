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
import net.asam.openscenario.v1_0.api.ISun;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Sun' From OpenSCENARIO class model specification: Specification of sun
 * properties.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ISunWriter extends ISun, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Illuminance of the sun, direct sunlight is around
   * 100,00 lx. Unit: lux; Range: [0..inf[.
   *
   * @param intensity value of model property intensity
   */
  public void setIntensity(Double intensity);
  /**
   * From OpenSCENARIO class model specification: Azimuth of the sun, counted counterclockwise,
   * 0=north, PI/2 = east, PI=south, 3/2 PI=west. Unit: radian; Range: [0..2PI].
   *
   * @param azimuth value of model property azimuth
   */
  public void setAzimuth(Double azimuth);
  /**
   * From OpenSCENARIO class model specification: Solar elevation angle, 0=x/y plane, PI/2=zenith.
   * Unit: rad; Range: [-PI..PI].
   *
   * @param elevation value of model property elevation
   */
  public void setElevation(Double elevation);

  /**
   * Set a parameter for the attribute intensity
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToIntensity(String parameterName);
  /**
   * Set a parameter for the attribute azimuth
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToAzimuth(String parameterName);
  /**
   * Set a parameter for the attribute elevation
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToElevation(String parameterName);

  /**
   * Get the parameter for the attribute intensity
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromIntensity();
  /**
   * Get the parameter for the attribute azimuth
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromAzimuth();
  /**
   * Get the parameter for the attribute elevation
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromElevation();

  /**
   * Retrieves whether the attribute intensity is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isIntensityParameterized();
  /**
   * Retrieves whether the attribute azimuth is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isAzimuthParameterized();
  /**
   * Retrieves whether the attribute elevation is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isElevationParameterized();

  // children

}
