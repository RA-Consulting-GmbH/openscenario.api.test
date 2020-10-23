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
 * <p>A Writer for the type 'Dimensions' From OpenSCENARIO class model specification: Dimensions for
 * a three dimensional box. Width, length and height are the absolute extensions in the (y,x,z)
 * coordinate system of the entity's local coordinate system.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IDimensionsWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Width of the entity's bounding box. Unit: m;
   * Range: [0..inf[.
   *
   * @return value of model property width
   */
  public Double getWidth();
  /**
   * From OpenSCENARIO class model specification: Length of the entity's bounding box. Unit: m;
   * Range: [0..inf[.
   *
   * @return value of model property length
   */
  public Double getLength();
  /**
   * From OpenSCENARIO class model specification: Height of the entity's bounding box. Unit: m;
   * Range: [0..inf[.
   *
   * @return value of model property height
   */
  public Double getHeight();

  /**
   * From OpenSCENARIO class model specification: Width of the entity's bounding box. Unit: m;
   * Range: [0..inf[.
   *
   * @param width value of model property width
   */
  public void writeToWidth(Double width);
  /**
   * From OpenSCENARIO class model specification: Length of the entity's bounding box. Unit: m;
   * Range: [0..inf[.
   *
   * @param length value of model property length
   */
  public void writeToLength(Double length);
  /**
   * From OpenSCENARIO class model specification: Height of the entity's bounding box. Unit: m;
   * Range: [0..inf[.
   *
   * @param height value of model property height
   */
  public void writeToHeight(Double height);

  /**
   * Set a parameter for the attribute width
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToWidth(String parameterName);
  /**
   * Set a parameter for the attribute length
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToLength(String parameterName);
  /**
   * Set a parameter for the attribute height
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToHeight(String parameterName);

  /**
   * Get the parameter for the attribute width
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromWidth();
  /**
   * Get the parameter for the attribute length
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromLength();
  /**
   * Get the parameter for the attribute height
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromHeight();

  /**
   * Retrieves whether the attribute width is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isWidthParameterized();
  /**
   * Retrieves whether the attribute length is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isLengthParameterized();
  /**
   * Retrieves whether the attribute height is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isHeightParameterized();

  // children

}
