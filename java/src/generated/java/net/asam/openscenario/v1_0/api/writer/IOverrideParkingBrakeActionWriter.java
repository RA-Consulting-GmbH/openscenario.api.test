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
 * <p>A Writer for the type 'OverrideParkingBrakeAction' From OpenSCENARIO class model
 * specification: Defines the state of the parking brake of a vehicle, when overriding a parking
 * brake value in a ControllerAction.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IOverrideParkingBrakeActionWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Parking brake value. Unit: %; Range: [0..1]. The
   * value 1 represent the maximum parking brake state.
   *
   * @return value of model property value
   */
  public Double getValue();
  /**
   * From OpenSCENARIO class model specification: True: override; false: stop overriding.
   *
   * @return value of model property active
   */
  public Boolean getActive();

  /**
   * From OpenSCENARIO class model specification: Parking brake value. Unit: %; Range: [0..1]. The
   * value 1 represent the maximum parking brake state.
   *
   * @param value value of model property value
   */
  public void writeToValue(Double value);
  /**
   * From OpenSCENARIO class model specification: True: override; false: stop overriding.
   *
   * @param active value of model property active
   */
  public void writeToActive(Boolean active);

  /**
   * Set a parameter for the attribute value
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToValue(String parameterName);
  /**
   * Set a parameter for the attribute active
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToActive(String parameterName);

  /**
   * Get the parameter for the attribute value
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromValue();
  /**
   * Get the parameter for the attribute active
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromActive();

  /**
   * Retrieves whether the attribute value is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isValueParameterized();
  /**
   * Retrieves whether the attribute active is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isActiveParameterized();

  // children

}
