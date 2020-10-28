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
import net.asam.openscenario.v1_0.api.IControllerAction;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'ControllerAction' From OpenSCENARIO class model specification: Action
 * that assigns a new controller or overrides an existing one.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IControllerActionWriter extends IControllerAction, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Assign a controller to an entity.
   *
   * @param assignControllerAction value of model property assignControllerAction
   */
  public void setAssignControllerAction(IAssignControllerActionWriter assignControllerAction);
  /**
   * From OpenSCENARIO class model specification: Values for throttle, brake, clutch, parking brake,
   * steering wheel or gear.
   *
   * @param overrideControllerValueAction value of model property overrideControllerValueAction
   */
  public void setOverrideControllerValueAction(
      IOverrideControllerValueActionWriter overrideControllerValueAction);

  // children
  /**
   * From OpenSCENARIO class model specification: Assign a controller to an entity.
   *
   * @return a writer for model property assignControllerAction
   */
  public IAssignControllerActionWriter getWriterAssignControllerAction();
  /**
   * From OpenSCENARIO class model specification: Values for throttle, brake, clutch, parking brake,
   * steering wheel or gear.
   *
   * @return a writer for model property overrideControllerValueAction
   */
  public IOverrideControllerValueActionWriter getWriterOverrideControllerValueAction();
}
