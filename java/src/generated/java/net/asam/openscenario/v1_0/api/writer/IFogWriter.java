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
 * <p>A Writer for the type 'Fog' From OpenSCENARIO class model specification: Defines fog at
 * simulation runtime.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IFogWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Unit: m; Range: [0..inf[.
   *
   * @return value of model property visualRange
   */
  public Double getVisualRange();

  /**
   * From OpenSCENARIO class model specification: Unit: m; Range: [0..inf[.
   *
   * @param visualRange value of model property visualRange
   */
  public void writeToVisualRange(Double visualRange);

  /**
   * Set a parameter for the attribute visualRange
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToVisualRange(String parameterName);

  /**
   * Get the parameter for the attribute visualRange
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromVisualRange();

  /**
   * Retrieves whether the attribute visualRange is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isVisualRangeParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: Dimensions and center of fog in fixed coordinates.
   *
   * @return a writer for model property boundingBox
   */
  public IBoundingBoxWriter getBoundingBoxWriter();

  /**
   * From OpenSCENARIO class model specification: Dimensions and center of fog in fixed coordinates.
   *
   * @param boundingBoxWriter writer for the model property boundingBox
   */
  public void writeToBoundingBoxWriter(IBoundingBoxWriter boundingBoxWriter);
}
