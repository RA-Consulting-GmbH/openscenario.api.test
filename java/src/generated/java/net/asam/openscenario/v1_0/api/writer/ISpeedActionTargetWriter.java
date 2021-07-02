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
import net.asam.openscenario.v1_0.api.ISpeedActionTarget;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'SpeedActionTarget' From OpenSCENARIO class model specification:
 * Specifies the target speed of a SpeedAction. Can be either an absolute speed value or a speed
 * value relative to another entity.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ISpeedActionTargetWriter extends ISpeedActionTarget, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Defines the target speed as relative speed to a
   * reference entity. Unit: m/s.
   *
   * @param relativeTargetSpeed value of model property relativeTargetSpeed
   */
  public void setRelativeTargetSpeed(IRelativeTargetSpeedWriter relativeTargetSpeed);
  /**
   * From OpenSCENARIO class model specification: Defines the target speed as absolute speed.Unit:
   * m/s.
   *
   * @param absoluteTargetSpeed value of model property absoluteTargetSpeed
   */
  public void setAbsoluteTargetSpeed(IAbsoluteTargetSpeedWriter absoluteTargetSpeed);

  // children
  /**
   * From OpenSCENARIO class model specification: Defines the target speed as relative speed to a
   * reference entity. Unit: m/s.
   *
   * @return a writer for model property relativeTargetSpeed
   */
  public IRelativeTargetSpeedWriter getWriterRelativeTargetSpeed();
  /**
   * From OpenSCENARIO class model specification: Defines the target speed as absolute speed.Unit:
   * m/s.
   *
   * @return a writer for model property absoluteTargetSpeed
   */
  public IAbsoluteTargetSpeedWriter getWriterAbsoluteTargetSpeed();
}
