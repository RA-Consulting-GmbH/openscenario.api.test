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
 * <p>A Writer for the type 'VisibilityAction' From OpenSCENARIO class model specification: Action
 * that toggles (on or off) an entity's visibility attributes, with respect to sensors, other
 * traffic or the graphics engine.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IVisibilityActionWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: True: actor is visible in image generator(s).
   * False: actor is not visible in image generator(s).
   *
   * @return value of model property graphics
   */
  public Boolean getGraphics();
  /**
   * From OpenSCENARIO class model specification: True: actor is visible for other traffic
   * participants, particularly for autonomous driver models. False: actor is not visible for other
   * traffic participants.
   *
   * @return value of model property traffic
   */
  public Boolean getTraffic();
  /**
   * From OpenSCENARIO class model specification: True: actor is visible in sensor(s). False: actor
   * is not visible in sensor(s).
   *
   * @return value of model property sensors
   */
  public Boolean getSensors();

  /**
   * From OpenSCENARIO class model specification: True: actor is visible in image generator(s).
   * False: actor is not visible in image generator(s).
   *
   * @param graphics value of model property graphics
   */
  public void writeToGraphics(Boolean graphics);
  /**
   * From OpenSCENARIO class model specification: True: actor is visible for other traffic
   * participants, particularly for autonomous driver models. False: actor is not visible for other
   * traffic participants.
   *
   * @param traffic value of model property traffic
   */
  public void writeToTraffic(Boolean traffic);
  /**
   * From OpenSCENARIO class model specification: True: actor is visible in sensor(s). False: actor
   * is not visible in sensor(s).
   *
   * @param sensors value of model property sensors
   */
  public void writeToSensors(Boolean sensors);

  /**
   * Set a parameter for the attribute graphics
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToGraphics(String parameterName);
  /**
   * Set a parameter for the attribute traffic
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToTraffic(String parameterName);
  /**
   * Set a parameter for the attribute sensors
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToSensors(String parameterName);

  /**
   * Get the parameter for the attribute graphics
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromGraphics();
  /**
   * Get the parameter for the attribute traffic
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromTraffic();
  /**
   * Get the parameter for the attribute sensors
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromSensors();

  /**
   * Retrieves whether the attribute graphics is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isGraphicsParameterized();
  /**
   * Retrieves whether the attribute traffic is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isTrafficParameterized();
  /**
   * Retrieves whether the attribute sensors is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isSensorsParameterized();

  // children

}
