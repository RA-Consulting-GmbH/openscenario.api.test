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
import net.asam.openscenario.v1_0.api.DynamicsShape;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'LaneOffsetActionDynamics' From OpenSCENARIO class model specification:
 * Defines shape, duration and lateral acceleration which are used to do the lane offset action.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ILaneOffsetActionDynamicsWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Maximum lateral acceleration used to initially
   * reach and afterwards keep the lane offset. Unit: m/s2; Range: [0..inf[.
   *
   * @return value of model property maxLateralAcc
   */
  public Double getMaxLateralAcc();
  /**
   * From OpenSCENARIO class model specification: Geometrical shape of the LaneOffsetAction's
   * dynamics.
   *
   * @return value of model property dynamicsShape
   */
  public DynamicsShape getDynamicsShape();

  /**
   * From OpenSCENARIO class model specification: Maximum lateral acceleration used to initially
   * reach and afterwards keep the lane offset. Unit: m/s2; Range: [0..inf[.
   *
   * @param maxLateralAcc value of model property maxLateralAcc
   */
  public void writeToMaxLateralAcc(Double maxLateralAcc);
  /**
   * From OpenSCENARIO class model specification: Geometrical shape of the LaneOffsetAction's
   * dynamics.
   *
   * @param dynamicsShape value of model property dynamicsShape
   */
  public void writeToDynamicsShape(DynamicsShape dynamicsShape);

  /**
   * Set a parameter for the attribute maxLateralAcc
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToMaxLateralAcc(String parameterName);
  /**
   * Set a parameter for the attribute dynamicsShape
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToDynamicsShape(String parameterName);

  /**
   * Get the parameter for the attribute maxLateralAcc
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromMaxLateralAcc();
  /**
   * Get the parameter for the attribute dynamicsShape
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromDynamicsShape();

  /**
   * Retrieves whether the attribute maxLateralAcc is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isMaxLateralAccParameterized();
  /**
   * Retrieves whether the attribute dynamicsShape is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isDynamicsShapeParameterized();

  // children

}
