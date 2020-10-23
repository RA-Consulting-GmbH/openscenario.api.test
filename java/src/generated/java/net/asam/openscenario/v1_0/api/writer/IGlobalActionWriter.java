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
 * <p>A Writer for the type 'GlobalAction' From OpenSCENARIO class model specification: Actions that
 * does not explicitly target an entity’s state.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IGlobalActionWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: Sets the weather state, road conditions, and time
   * of the day.
   *
   * @return a writer for model property environmentAction
   */
  public IEnvironmentActionWriter getEnvironmentActionWriter();
  /**
   * From OpenSCENARIO class model specification: Removing or adding entities.
   *
   * @return a writer for model property entityAction
   */
  public IEntityActionWriter getEntityActionWriter();
  /**
   * From OpenSCENARIO class model specification: Setting/modifying values of parameters.
   *
   * @return a writer for model property parameterAction
   */
  public IParameterActionWriter getParameterActionWriter();
  /**
   * From OpenSCENARIO class model specification: Setting/modifying traffic signals.
   *
   * @return a writer for model property infrastructureAction
   */
  public IInfrastructureActionWriter getInfrastructureActionWriter();
  /**
   * From OpenSCENARIO class model specification: Populating ambient traffic.
   *
   * @return a writer for model property trafficAction
   */
  public ITrafficActionWriter getTrafficActionWriter();

  /**
   * From OpenSCENARIO class model specification: Sets the weather state, road conditions, and time
   * of the day.
   *
   * @param environmentActionWriter writer for the model property environmentAction
   */
  public void writeToEnvironmentActionWriter(IEnvironmentActionWriter environmentActionWriter);
  /**
   * From OpenSCENARIO class model specification: Removing or adding entities.
   *
   * @param entityActionWriter writer for the model property entityAction
   */
  public void writeToEntityActionWriter(IEntityActionWriter entityActionWriter);
  /**
   * From OpenSCENARIO class model specification: Setting/modifying values of parameters.
   *
   * @param parameterActionWriter writer for the model property parameterAction
   */
  public void writeToParameterActionWriter(IParameterActionWriter parameterActionWriter);
  /**
   * From OpenSCENARIO class model specification: Setting/modifying traffic signals.
   *
   * @param infrastructureActionWriter writer for the model property infrastructureAction
   */
  public void writeToInfrastructureActionWriter(
      IInfrastructureActionWriter infrastructureActionWriter);
  /**
   * From OpenSCENARIO class model specification: Populating ambient traffic.
   *
   * @param trafficActionWriter writer for the model property trafficAction
   */
  public void writeToTrafficActionWriter(ITrafficActionWriter trafficActionWriter);
}
