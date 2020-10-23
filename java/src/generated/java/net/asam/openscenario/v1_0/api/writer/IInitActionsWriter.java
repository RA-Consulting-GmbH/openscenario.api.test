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

import java.util.List;
import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'InitActions' From OpenSCENARIO class model specification: A list of
 * action instances (GlobalAction, UserDefinedAction, PrivateAction instances) which are executed
 * during the initialization phase of a scenario.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IInitActionsWriter extends IOpenScenarioModelElement {

  // children

  /**
   * From OpenSCENARIO class model specification: An optional list of global actions.
   *
   * @return a list of writers for model property globalActions
   */
  public List<IGlobalActionWriter> getGlobalActionsWriter();
  /**
   * From OpenSCENARIO class model specification: An optional list of user defined actions.
   *
   * @return a list of writers for model property userDefinedActions
   */
  public List<IUserDefinedActionWriter> getUserDefinedActionsWriter();
  /**
   * From OpenSCENARIO class model specification: An optional list of private actions.
   *
   * @return a list of writers for model property privates
   */
  public List<IPrivateWriter> getPrivatesWriter();

  /**
   * From OpenSCENARIO class model specification: An optional list of global actions.
   *
   * @param globalActionsWriters list of writers for the model property globalActions
   */
  public void setGlobalActionsWriter(List<IGlobalActionWriter> globalActionsWriters);
  /**
   * From OpenSCENARIO class model specification: An optional list of user defined actions.
   *
   * @param userDefinedActionsWriters list of writers for the model property userDefinedActions
   */
  public void setUserDefinedActionsWriter(List<IUserDefinedActionWriter> userDefinedActionsWriters);
  /**
   * From OpenSCENARIO class model specification: An optional list of private actions.
   *
   * @param privatesWriters list of writers for the model property privates
   */
  public void setPrivatesWriter(List<IPrivateWriter> privatesWriters);
}
