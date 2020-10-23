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
 * <p>A Writer for the type 'WorldPosition' From OpenSCENARIO class model specification: A position
 * which is fixed in the inertial reference frame of the simulation environment, the so-called world
 * coordinate system.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IWorldPositionWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: The x coordinate value.
   *
   * @return value of model property x
   */
  public Double getX();
  /**
   * From OpenSCENARIO class model specification: The y coordinate value.
   *
   * @return value of model property y
   */
  public Double getY();
  /**
   * From OpenSCENARIO class model specification: The z coordinate value.
   *
   * @return value of model property z
   */
  public Double getZ();
  /**
   * From OpenSCENARIO class model specification: The heading angle of the object, defining a
   * mathematically positive rotation about the z-axis (see ISO 8855:2011).
   *
   * @return value of model property h
   */
  public Double getH();
  /**
   * From OpenSCENARIO class model specification: The pitch angle of the object, defining a
   * mathematically positive rotation about the y-axis (see ISO 8855:2011).
   *
   * @return value of model property p
   */
  public Double getP();
  /**
   * From OpenSCENARIO class model specification: The roll angle of the object, defining a
   * mathematically positive rotation about the x-axis (see ISO 8855:2011).
   *
   * @return value of model property r
   */
  public Double getR();

  /**
   * From OpenSCENARIO class model specification: The x coordinate value.
   *
   * @param x value of model property x
   */
  public void writeToX(Double x);
  /**
   * From OpenSCENARIO class model specification: The y coordinate value.
   *
   * @param y value of model property y
   */
  public void writeToY(Double y);
  /**
   * From OpenSCENARIO class model specification: The z coordinate value.
   *
   * @param z value of model property z
   */
  public void writeToZ(Double z);
  /**
   * From OpenSCENARIO class model specification: The heading angle of the object, defining a
   * mathematically positive rotation about the z-axis (see ISO 8855:2011).
   *
   * @param h value of model property h
   */
  public void writeToH(Double h);
  /**
   * From OpenSCENARIO class model specification: The pitch angle of the object, defining a
   * mathematically positive rotation about the y-axis (see ISO 8855:2011).
   *
   * @param p value of model property p
   */
  public void writeToP(Double p);
  /**
   * From OpenSCENARIO class model specification: The roll angle of the object, defining a
   * mathematically positive rotation about the x-axis (see ISO 8855:2011).
   *
   * @param r value of model property r
   */
  public void writeToR(Double r);

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
   * Set a parameter for the attribute h
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToH(String parameterName);
  /**
   * Set a parameter for the attribute p
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToP(String parameterName);
  /**
   * Set a parameter for the attribute r
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToR(String parameterName);

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
   * Get the parameter for the attribute h
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromH();
  /**
   * Get the parameter for the attribute p
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromP();
  /**
   * Get the parameter for the attribute r
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromR();

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
  /**
   * Retrieves whether the attribute h is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isHParameterized();
  /**
   * Retrieves whether the attribute p is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isPParameterized();
  /**
   * Retrieves whether the attribute r is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isRParameterized();

  // children

}
