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
 * <p>From OpenSCENARIO class model specification: Position defined in terms of distance along a
 * route (pathS) and lateral offset from the route's reference line (t) at that point.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IPositionInRoadCoordinates extends IOpenScenarioModelElement {
  /**
   * From OpenSCENARIO class model specification: Position in s coordinates along the reference line
   * of the road.
   *
   * @return value of model property pathS
   */
  public Double getPathS();
  /**
   * From OpenSCENARIO class model specification: Position in t coordinates orthogonal to the
   * reference line of the road.
   *
   * @return value of model property t
   */
  public Double getT();
}
