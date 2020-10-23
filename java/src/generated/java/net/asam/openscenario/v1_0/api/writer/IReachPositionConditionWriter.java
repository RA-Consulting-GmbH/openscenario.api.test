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
 * <p>A Writer for the type 'ReachPositionCondition' From OpenSCENARIO class model specification:
 * Checks if a triggering entity/entities has reached a given position, within some user specified
 * tolerance.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IReachPositionConditionWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Radius of tolerance circle around given position.
   * Unit: m; Range: [0..inf[.
   *
   * @return value of model property tolerance
   */
  public Double getTolerance();

  /**
   * From OpenSCENARIO class model specification: Radius of tolerance circle around given position.
   * Unit: m; Range: [0..inf[.
   *
   * @param tolerance value of model property tolerance
   */
  public void writeToTolerance(Double tolerance);

  /**
   * Set a parameter for the attribute tolerance
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToTolerance(String parameterName);

  /**
   * Get the parameter for the attribute tolerance
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromTolerance();

  /**
   * Retrieves whether the attribute tolerance is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isToleranceParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: The position to be reached with the defined
   * tolerance.
   *
   * @return a writer for model property position
   */
  public IPositionWriter getPositionWriter();

  /**
   * From OpenSCENARIO class model specification: The position to be reached with the defined
   * tolerance.
   *
   * @param positionWriter writer for the model property position
   */
  public void writeToPositionWriter(IPositionWriter positionWriter);
}
