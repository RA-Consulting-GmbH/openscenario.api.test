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
import net.asam.openscenario.v1_0.api.ReferenceContext;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Orientation' From OpenSCENARIO class model specification: Defines an
 * absolute or relative orientation (heading, pitch and roll).
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IOrientationWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Relative or absolute definition.
   *
   * @return value of model property type
   */
  public ReferenceContext getType();
  /**
   * From OpenSCENARIO class model specification: Heading angle. Unit: rad;.
   *
   * @return value of model property h
   */
  public Double getH();
  /**
   * From OpenSCENARIO class model specification: Pitch angle. Unit: rad;.
   *
   * @return value of model property p
   */
  public Double getP();
  /**
   * From OpenSCENARIO class model specification: Roll angle. Unit: rad;.
   *
   * @return value of model property r
   */
  public Double getR();

  /**
   * From OpenSCENARIO class model specification: Relative or absolute definition.
   *
   * @param type value of model property type
   */
  public void writeToType(ReferenceContext type);
  /**
   * From OpenSCENARIO class model specification: Heading angle. Unit: rad;.
   *
   * @param h value of model property h
   */
  public void writeToH(Double h);
  /**
   * From OpenSCENARIO class model specification: Pitch angle. Unit: rad;.
   *
   * @param p value of model property p
   */
  public void writeToP(Double p);
  /**
   * From OpenSCENARIO class model specification: Roll angle. Unit: rad;.
   *
   * @param r value of model property r
   */
  public void writeToR(Double r);

  /**
   * Set a parameter for the attribute type
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToType(String parameterName);
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
   * Get the parameter for the attribute type
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromType();
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
   * Retrieves whether the attribute type is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isTypeParameterized();
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
