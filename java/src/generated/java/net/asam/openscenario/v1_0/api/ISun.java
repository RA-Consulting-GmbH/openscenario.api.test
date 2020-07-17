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
 * <p>From OpenSCENARIO class model specification: Specification of sun properties.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ISun extends IOpenScenarioModelElement {

  /**
   * From OpenSCENARIO class model specification: Illuminance of the sun, direct sunlight is around
   * 100,00 lx. Unit: lux; Range: [0..inf[.
   *
   * @return value of model property intensity
   */
  public Double getIntensity();

  /**
   * From OpenSCENARIO class model specification: Azimuth of the sun, counted counterclockwise,
   * 0=north, PI/2 = east, PI=south, 3/2 PI=west. Unit: radian; Range: [0..2PI].
   *
   * @return value of model property azimuth
   */
  public Double getAzimuth();

  /**
   * From OpenSCENARIO class model specification: Solar elevation angle, 0=x/y plane, PI/2=zenith.
   * Unit: rad; Range: [-PI..PI].
   *
   * @return value of model property elevation
   */
  public Double getElevation();
}
