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
 * <p>A Writer for the type 'TrafficSignalState' From OpenSCENARIO class model specification:
 * Possible state of traffic signal within a phase. One state per phase.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ITrafficSignalStateWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: ID of the referenced signal in a road network. The
   * signal ID must be listed in TrafficSignal list of the RoadNetwork.
   *
   * @return value of model property trafficSignalId
   */
  public String getTrafficSignalId();
  /**
   * From OpenSCENARIO class model specification: State of the signal. The available states are
   * listed in the TrafficSignal list of the RoadNetwork.
   *
   * @return value of model property state
   */
  public String getState();

  /**
   * From OpenSCENARIO class model specification: ID of the referenced signal in a road network. The
   * signal ID must be listed in TrafficSignal list of the RoadNetwork.
   *
   * @param trafficSignalId value of model property trafficSignalId
   */
  public void writeToTrafficSignalId(String trafficSignalId);
  /**
   * From OpenSCENARIO class model specification: State of the signal. The available states are
   * listed in the TrafficSignal list of the RoadNetwork.
   *
   * @param state value of model property state
   */
  public void writeToState(String state);

  /**
   * Set a parameter for the attribute trafficSignalId
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToTrafficSignalId(String parameterName);
  /**
   * Set a parameter for the attribute state
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToState(String parameterName);

  /**
   * Get the parameter for the attribute trafficSignalId
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromTrafficSignalId();
  /**
   * Get the parameter for the attribute state
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromState();

  /**
   * Retrieves whether the attribute trafficSignalId is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isTrafficSignalIdParameterized();
  /**
   * Retrieves whether the attribute state is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isStateParameterized();

  // children

}
