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
import net.asam.openscenario.v1_0.api.ITrafficSignalAction;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'TrafficSignalAction' From OpenSCENARIO class model specification:
 * Action used to set or overwrite a signals state or a signal controllers state.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ITrafficSignalActionWriter
    extends ITrafficSignalAction, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Action used to control the state of a signal.
   *
   * @param trafficSignalControllerAction value of model property trafficSignalControllerAction
   */
  public void setTrafficSignalControllerAction(
      ITrafficSignalControllerActionWriter trafficSignalControllerAction);
  /**
   * From OpenSCENARIO class model specification: Action used to set a specific phase of a signal
   * controller.
   *
   * @param trafficSignalStateAction value of model property trafficSignalStateAction
   */
  public void setTrafficSignalStateAction(ITrafficSignalStateActionWriter trafficSignalStateAction);

  // children
  /**
   * From OpenSCENARIO class model specification: Action used to control the state of a signal.
   *
   * @return a writer for model property trafficSignalControllerAction
   */
  public ITrafficSignalControllerActionWriter getWriterTrafficSignalControllerAction();
  /**
   * From OpenSCENARIO class model specification: Action used to set a specific phase of a signal
   * controller.
   *
   * @return a writer for model property trafficSignalStateAction
   */
  public ITrafficSignalStateActionWriter getWriterTrafficSignalStateAction();
}
