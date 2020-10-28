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
import net.asam.openscenario.v1_0.api.IOverrideControllerValueAction;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'OverrideControllerValueAction' From OpenSCENARIO class model
 * specification: Overrides entity controller values. Mostly suited for motor vehicles.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IOverrideControllerValueActionWriter
    extends IOverrideControllerValueAction, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: New value for throttle pedal position or unset
   * value.
   *
   * @param throttle value of model property throttle
   */
  public void setThrottle(IOverrideThrottleActionWriter throttle);
  /**
   * From OpenSCENARIO class model specification: New value for brake position or unset value.
   *
   * @param brake value of model property brake
   */
  public void setBrake(IOverrideBrakeActionWriter brake);
  /**
   * From OpenSCENARIO class model specification: New value for clutch position or unset value.
   *
   * @param clutch value of model property clutch
   */
  public void setClutch(IOverrideClutchActionWriter clutch);
  /**
   * From OpenSCENARIO class model specification: New value for parking brake position or unset
   * value.
   *
   * @param parkingBrake value of model property parkingBrake
   */
  public void setParkingBrake(IOverrideParkingBrakeActionWriter parkingBrake);
  /**
   * From OpenSCENARIO class model specification: New value for steering wheel position or unset
   * value.
   *
   * @param steeringWheel value of model property steeringWheel
   */
  public void setSteeringWheel(IOverrideSteeringWheelActionWriter steeringWheel);
  /**
   * From OpenSCENARIO class model specification: New value for gear position or unset value.
   *
   * @param gear value of model property gear
   */
  public void setGear(IOverrideGearActionWriter gear);

  // children
  /**
   * From OpenSCENARIO class model specification: New value for throttle pedal position or unset
   * value.
   *
   * @return a writer for model property throttle
   */
  public IOverrideThrottleActionWriter getWriterThrottle();
  /**
   * From OpenSCENARIO class model specification: New value for brake position or unset value.
   *
   * @return a writer for model property brake
   */
  public IOverrideBrakeActionWriter getWriterBrake();
  /**
   * From OpenSCENARIO class model specification: New value for clutch position or unset value.
   *
   * @return a writer for model property clutch
   */
  public IOverrideClutchActionWriter getWriterClutch();
  /**
   * From OpenSCENARIO class model specification: New value for parking brake position or unset
   * value.
   *
   * @return a writer for model property parkingBrake
   */
  public IOverrideParkingBrakeActionWriter getWriterParkingBrake();
  /**
   * From OpenSCENARIO class model specification: New value for steering wheel position or unset
   * value.
   *
   * @return a writer for model property steeringWheel
   */
  public IOverrideSteeringWheelActionWriter getWriterSteeringWheel();
  /**
   * From OpenSCENARIO class model specification: New value for gear position or unset value.
   *
   * @return a writer for model property gear
   */
  public IOverrideGearActionWriter getWriterGear();
}
