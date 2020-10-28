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
import net.asam.openscenario.v1_0.api.ICenter;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Center' From OpenSCENARIO class model specification: Represents the
 * geometrical center of the bounding box expressed in coordinates that refer to the coordinate
 * system of the entity (e.g. the vehicle coordinate system).
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ICenterWriter extends ICenter, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Center offset in x direction.
   *
   * @param x value of model property x
   */
  public void setX(Double x);
  /**
   * From OpenSCENARIO class model specification: Center offset in y direction.
   *
   * @param y value of model property y
   */
  public void setY(Double y);
  /**
   * From OpenSCENARIO class model specification: Center offset in z direction.
   *
   * @param z value of model property z
   */
  public void setZ(Double z);

  /**
   * Set a parameter for the attribute x
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToX(String parameterName);
  /**
   * Set a parameter for the attribute y
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToY(String parameterName);
  /**
   * Set a parameter for the attribute z
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToZ(String parameterName);

  /**
   * Get the parameter for the attribute x
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromX();
  /**
   * Get the parameter for the attribute y
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromY();
  /**
   * Get the parameter for the attribute z
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromZ();

  /**
   * Retrieves whether the attribute x is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isXParameterized();
  /**
   * Retrieves whether the attribute y is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isYParameterized();
  /**
   * Retrieves whether the attribute z is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isZParameterized();

  // children

}
