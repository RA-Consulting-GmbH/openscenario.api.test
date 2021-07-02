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
import net.asam.openscenario.v1_0.api.IPrecipitation;
import net.asam.openscenario.v1_0.api.PrecipitationType;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Precipitation' From OpenSCENARIO class model specification: Defines a
 * precipitation by type and value of a weather.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IPrecipitationWriter extends IPrecipitation, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Type of the precipitation.
   *
   * @param precipitationType value of model property precipitationType
   */
  public void setPrecipitationType(PrecipitationType precipitationType);
  /**
   * From OpenSCENARIO class model specification: The intensity of the precipitation. Range: [0..1].
   *
   * @param intensity value of model property intensity
   */
  public void setIntensity(Double intensity);

  /**
   * Set a parameter for the attribute precipitationType
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToPrecipitationType(String parameterName);
  /**
   * Set a parameter for the attribute intensity
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToIntensity(String parameterName);

  /**
   * Get the parameter for the attribute precipitationType
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromPrecipitationType();
  /**
   * Get the parameter for the attribute intensity
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromIntensity();

  /**
   * Retrieves whether the attribute precipitationType is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isPrecipitationTypeParameterized();
  /**
   * Retrieves whether the attribute intensity is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isIntensityParameterized();

  // children

}
