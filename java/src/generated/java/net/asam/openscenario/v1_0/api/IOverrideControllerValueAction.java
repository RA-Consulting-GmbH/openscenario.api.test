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
package net.asam.openscenario.v1_0.api;

import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>From OpenSCENARIO class model specification: Overrides entity controller values. Mostly suited
 * for motor vehicles.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IOverrideControllerValueAction extends IOpenScenarioModelElement {
  /**
   * From OpenSCENARIO class model specification: New value for throttle pedal position or unset
   * value.
   *
   * @return value of model property throttle
   */
  public IOverrideThrottleAction getThrottle();
  /**
   * From OpenSCENARIO class model specification: New value for brake position or unset value.
   *
   * @return value of model property brake
   */
  public IOverrideBrakeAction getBrake();
  /**
   * From OpenSCENARIO class model specification: New value for clutch position or unset value.
   *
   * @return value of model property clutch
   */
  public IOverrideClutchAction getClutch();
  /**
   * From OpenSCENARIO class model specification: New value for parking brake position or unset
   * value.
   *
   * @return value of model property parkingBrake
   */
  public IOverrideParkingBrakeAction getParkingBrake();
  /**
   * From OpenSCENARIO class model specification: New value for steering wheel position or unset
   * value.
   *
   * @return value of model property steeringWheel
   */
  public IOverrideSteeringWheelAction getSteeringWheel();
  /**
   * From OpenSCENARIO class model specification: New value for gear position or unset value.
   *
   * @return value of model property gear
   */
  public IOverrideGearAction getGear();
}
