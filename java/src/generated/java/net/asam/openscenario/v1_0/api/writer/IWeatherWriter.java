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
import net.asam.openscenario.v1_0.api.CloudState;
import net.asam.openscenario.v1_0.api.IWeather;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Weather' From OpenSCENARIO class model specification: Defines the
 * weather conditions in terms of light, fog, precipitation and cloud states.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IWeatherWriter extends IWeather, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Definition of the cloud state, i.e. cloud state
   * and sky visualization settings.
   *
   * @param cloudState value of model property cloudState
   */
  public void setCloudState(CloudState cloudState);
  /**
   * From OpenSCENARIO class model specification: Definition of the sun, i.e. position and
   * intensity.
   *
   * @param sun value of model property sun
   */
  public void setSun(ISunWriter sun);
  /**
   * From OpenSCENARIO class model specification: Definition of fog, i.e. visual range and bounding
   * box.
   *
   * @param fog value of model property fog
   */
  public void setFog(IFogWriter fog);
  /**
   * From OpenSCENARIO class model specification: Definition of precipitation, i.e. type and
   * intensity.
   *
   * @param precipitation value of model property precipitation
   */
  public void setPrecipitation(IPrecipitationWriter precipitation);

  /**
   * Set a parameter for the attribute cloudState
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToCloudState(String parameterName);

  /**
   * Get the parameter for the attribute cloudState
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromCloudState();

  /**
   * Retrieves whether the attribute cloudState is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isCloudStateParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: Definition of the sun, i.e. position and
   * intensity.
   *
   * @return a writer for model property sun
   */
  public ISunWriter getWriterSun();
  /**
   * From OpenSCENARIO class model specification: Definition of fog, i.e. visual range and bounding
   * box.
   *
   * @return a writer for model property fog
   */
  public IFogWriter getWriterFog();
  /**
   * From OpenSCENARIO class model specification: Definition of precipitation, i.e. type and
   * intensity.
   *
   * @return a writer for model property precipitation
   */
  public IPrecipitationWriter getWriterPrecipitation();
}
