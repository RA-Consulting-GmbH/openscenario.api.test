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
 * <p>A Writer for the type 'OverrideControllerValueAction' From OpenSCENARIO class model
 * specification: Overrides entity controller values. Mostly suited for motor vehicles.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IOverrideControllerValueActionWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: New value for throttle pedal position or unset
   * value.
   *
   * @return a writer for model property throttle
   */
  public IOverrideThrottleActionWriter getThrottleWriter();
  /**
   * From OpenSCENARIO class model specification: New value for brake position or unset value.
   *
   * @return a writer for model property brake
   */
  public IOverrideBrakeActionWriter getBrakeWriter();
  /**
   * From OpenSCENARIO class model specification: New value for clutch position or unset value.
   *
   * @return a writer for model property clutch
   */
  public IOverrideClutchActionWriter getClutchWriter();
  /**
   * From OpenSCENARIO class model specification: New value for parking brake position or unset
   * value.
   *
   * @return a writer for model property parkingBrake
   */
  public IOverrideParkingBrakeActionWriter getParkingBrakeWriter();
  /**
   * From OpenSCENARIO class model specification: New value for steering wheel position or unset
   * value.
   *
   * @return a writer for model property steeringWheel
   */
  public IOverrideSteeringWheelActionWriter getSteeringWheelWriter();
  /**
   * From OpenSCENARIO class model specification: New value for gear position or unset value.
   *
   * @return a writer for model property gear
   */
  public IOverrideGearActionWriter getGearWriter();

  /**
   * From OpenSCENARIO class model specification: New value for throttle pedal position or unset
   * value.
   *
   * @param throttleWriter writer for the model property throttle
   */
  public void writeToThrottleWriter(IOverrideThrottleActionWriter throttleWriter);
  /**
   * From OpenSCENARIO class model specification: New value for brake position or unset value.
   *
   * @param brakeWriter writer for the model property brake
   */
  public void writeToBrakeWriter(IOverrideBrakeActionWriter brakeWriter);
  /**
   * From OpenSCENARIO class model specification: New value for clutch position or unset value.
   *
   * @param clutchWriter writer for the model property clutch
   */
  public void writeToClutchWriter(IOverrideClutchActionWriter clutchWriter);
  /**
   * From OpenSCENARIO class model specification: New value for parking brake position or unset
   * value.
   *
   * @param parkingBrakeWriter writer for the model property parkingBrake
   */
  public void writeToParkingBrakeWriter(IOverrideParkingBrakeActionWriter parkingBrakeWriter);
  /**
   * From OpenSCENARIO class model specification: New value for steering wheel position or unset
   * value.
   *
   * @param steeringWheelWriter writer for the model property steeringWheel
   */
  public void writeToSteeringWheelWriter(IOverrideSteeringWheelActionWriter steeringWheelWriter);
  /**
   * From OpenSCENARIO class model specification: New value for gear position or unset value.
   *
   * @param gearWriter writer for the model property gear
   */
  public void writeToGearWriter(IOverrideGearActionWriter gearWriter);
}
