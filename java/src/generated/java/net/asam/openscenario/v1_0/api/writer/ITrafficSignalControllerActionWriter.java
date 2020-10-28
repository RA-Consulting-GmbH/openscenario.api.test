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
import net.asam.openscenario.api.writer.IOpenScenarioElementWriter;
import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.v1_0.api.IPhase;
import net.asam.openscenario.v1_0.api.ITrafficSignalController;
import net.asam.openscenario.v1_0.api.ITrafficSignalControllerAction;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'TrafficSignalControllerAction' From OpenSCENARIO class model
 * specification: Sets a specific phase of a traffic signal controller, typically affecting a
 * collection of signals.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ITrafficSignalControllerActionWriter
    extends ITrafficSignalControllerAction, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: ID of the signal controller in a road network.
   *
   * @param trafficSignalControllerRef value of model property trafficSignalControllerRef
   */
  public void setTrafficSignalControllerRef(
      INamedReference<ITrafficSignalController> trafficSignalControllerRef);
  /**
   * From OpenSCENARIO class model specification: Targeted phase of the signal controller. The
   * available phases are defined in type RoadNetwork under the property trafficSignalControllers.
   *
   * @param phase value of model property phase
   */
  public void setPhase(String phase);
  /**
   * From OpenSCENARIO class model specification: The reference to the phase (phase is the
   * referential key in the referenced TrafficSignalController).
   *
   * @param phaseRef value of model property phaseRef
   */
  public void setPhaseRef(List<IPhase> phaseRef);

  /**
   * Set a parameter for the attribute trafficSignalControllerRef
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToTrafficSignalControllerRef(String parameterName);
  /**
   * Set a parameter for the attribute phase
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToPhase(String parameterName);

  /**
   * Get the parameter for the attribute trafficSignalControllerRef
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromTrafficSignalControllerRef();
  /**
   * Get the parameter for the attribute phase
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromPhase();

  /**
   * Retrieves whether the attribute trafficSignalControllerRef is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isTrafficSignalControllerRefParameterized();
  /**
   * Retrieves whether the attribute phase is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isPhaseParameterized();

  // children

}
