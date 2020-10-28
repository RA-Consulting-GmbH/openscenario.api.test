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
import net.asam.openscenario.v1_0.api.IPositionInRoadCoordinates;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'PositionInRoadCoordinates' From OpenSCENARIO class model specification:
 * Position defined in terms of distance along a route (pathS) and lateral offset from the route's
 * reference line (t) at that point.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IPositionInRoadCoordinatesWriter
    extends IPositionInRoadCoordinates, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Position in s coordinates along the reference line
   * of the road.
   *
   * @param pathS value of model property pathS
   */
  public void setPathS(Double pathS);
  /**
   * From OpenSCENARIO class model specification: Position in t coordinates orthogonal to the
   * reference line of the road.
   *
   * @param t value of model property t
   */
  public void setT(Double t);

  /**
   * Set a parameter for the attribute pathS
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToPathS(String parameterName);
  /**
   * Set a parameter for the attribute t
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToT(String parameterName);

  /**
   * Get the parameter for the attribute pathS
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromPathS();
  /**
   * Get the parameter for the attribute t
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromT();

  /**
   * Retrieves whether the attribute pathS is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isPathSParameterized();
  /**
   * Retrieves whether the attribute t is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isTParameterized();

  // children

}
