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
 * <p>From OpenSCENARIO class model specification: A shape of the trajectory of an entity. A
 * clothoid is a curve whose curvature changes linearly with its curve length.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IClothoid extends IOpenScenarioModelElement {
  /**
   * From OpenSCENARIO class model specification: Start curvature of clothoid.
   *
   * @return value of model property curvature
   */
  public Double getCurvature();
  /**
   * From OpenSCENARIO class model specification: Rate of change of the curvature of the
   * clothoid.Unit: 1/s;Range [0..inf[.
   *
   * @return value of model property curvatureDot
   */
  public Double getCurvatureDot();
  /**
   * From OpenSCENARIO class model specification: Length of clothoid.
   *
   * @return value of model property length
   */
  public Double getLength();
  /**
   * From OpenSCENARIO class model specification: Optional time specification at the start of the
   * clothoid. Unit: s;Range [0..inf[.
   *
   * @return value of model property startTime
   */
  public Double getStartTime();
  /**
   * From OpenSCENARIO class model specification: Optional time specification at the end of the
   * clothoid. Unit: s;Range ]0..inf[.
   *
   * @return value of model property stopTime
   */
  public Double getStopTime();
  /**
   * From OpenSCENARIO class model specification: Start position of a clothoid.
   *
   * @return value of model property position
   */
  public IPosition getPosition();
}
