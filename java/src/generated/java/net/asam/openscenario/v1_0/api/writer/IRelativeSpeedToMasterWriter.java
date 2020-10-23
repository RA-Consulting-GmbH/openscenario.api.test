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
import net.asam.openscenario.v1_0.api.SpeedTargetValueType;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'RelativeSpeedToMaster' From OpenSCENARIO class model specification:
 * Speed definition relative to the master entity's speed within a SynchronizeAction.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IRelativeSpeedToMasterWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Relative speed. Unit: m/s. Range: ]-inf..inf[.
   *
   * @return value of model property value
   */
  public Double getValue();
  /**
   * From OpenSCENARIO class model specification: The semantics of the value (delta, offset,
   * factor).
   *
   * @return value of model property speedTargetValueType
   */
  public SpeedTargetValueType getSpeedTargetValueType();

  /**
   * From OpenSCENARIO class model specification: Relative speed. Unit: m/s. Range: ]-inf..inf[.
   *
   * @param value value of model property value
   */
  public void writeToValue(Double value);
  /**
   * From OpenSCENARIO class model specification: The semantics of the value (delta, offset,
   * factor).
   *
   * @param speedTargetValueType value of model property speedTargetValueType
   */
  public void writeToSpeedTargetValueType(SpeedTargetValueType speedTargetValueType);

  /**
   * Set a parameter for the attribute value
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToValue(String parameterName);
  /**
   * Set a parameter for the attribute speedTargetValueType
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToSpeedTargetValueType(String parameterName);

  /**
   * Get the parameter for the attribute value
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromValue();
  /**
   * Get the parameter for the attribute speedTargetValueType
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromSpeedTargetValueType();

  /**
   * Retrieves whether the attribute value is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isValueParameterized();
  /**
   * Retrieves whether the attribute speedTargetValueType is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isSpeedTargetValueTypeParameterized();

  // children

}
