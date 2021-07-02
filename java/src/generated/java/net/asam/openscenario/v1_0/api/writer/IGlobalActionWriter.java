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
import net.asam.openscenario.v1_0.api.IGlobalAction;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'GlobalAction' From OpenSCENARIO class model specification: Actions that
 * does not explicitly target an entity’s state.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IGlobalActionWriter extends IGlobalAction, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Sets the weather state, road conditions, and time
   * of the day.
   *
   * @param environmentAction value of model property environmentAction
   */
  public void setEnvironmentAction(IEnvironmentActionWriter environmentAction);
  /**
   * From OpenSCENARIO class model specification: Removing or adding entities.
   *
   * @param entityAction value of model property entityAction
   */
  public void setEntityAction(IEntityActionWriter entityAction);
  /**
   * From OpenSCENARIO class model specification: Setting/modifying values of parameters.
   *
   * @param parameterAction value of model property parameterAction
   */
  public void setParameterAction(IParameterActionWriter parameterAction);
  /**
   * From OpenSCENARIO class model specification: Setting/modifying traffic signals.
   *
   * @param infrastructureAction value of model property infrastructureAction
   */
  public void setInfrastructureAction(IInfrastructureActionWriter infrastructureAction);
  /**
   * From OpenSCENARIO class model specification: Populating ambient traffic.
   *
   * @param trafficAction value of model property trafficAction
   */
  public void setTrafficAction(ITrafficActionWriter trafficAction);

  // children
  /**
   * From OpenSCENARIO class model specification: Sets the weather state, road conditions, and time
   * of the day.
   *
   * @return a writer for model property environmentAction
   */
  public IEnvironmentActionWriter getWriterEnvironmentAction();
  /**
   * From OpenSCENARIO class model specification: Removing or adding entities.
   *
   * @return a writer for model property entityAction
   */
  public IEntityActionWriter getWriterEntityAction();
  /**
   * From OpenSCENARIO class model specification: Setting/modifying values of parameters.
   *
   * @return a writer for model property parameterAction
   */
  public IParameterActionWriter getWriterParameterAction();
  /**
   * From OpenSCENARIO class model specification: Setting/modifying traffic signals.
   *
   * @return a writer for model property infrastructureAction
   */
  public IInfrastructureActionWriter getWriterInfrastructureAction();
  /**
   * From OpenSCENARIO class model specification: Populating ambient traffic.
   *
   * @return a writer for model property trafficAction
   */
  public ITrafficActionWriter getWriterTrafficAction();
}
