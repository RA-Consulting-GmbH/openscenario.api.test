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
import net.asam.openscenario.v1_0.api.ITrafficSignalCondition;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'TrafficSignalCondition' From OpenSCENARIO class model specification:
 * Considered true if a referenced traffic signal (e.g. from an OpenDRIVE file) reaches a specific
 * states. Signal IDs are listed in the TrafficSignal list of the RoadNetwork together with their
 * states and their controllers to enable dynamic signal modelling.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ITrafficSignalConditionWriter
    extends ITrafficSignalCondition, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: ID of the referenced signal defined in a road
   * network. The signal ID must be listed in the TrafficSignal list of the RoadNetwork section.
   *
   * @param name value of model property name
   */
  public void setName(String name);
  /**
   * From OpenSCENARIO class model specification: State of the signal to be reached for the
   * condition to become true.
   *
   * @param state value of model property state
   */
  public void setState(String state);

  /**
   * Set a parameter for the attribute name
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToName(String parameterName);
  /**
   * Set a parameter for the attribute state
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToState(String parameterName);

  /**
   * Get the parameter for the attribute name
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromName();
  /**
   * Get the parameter for the attribute state
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromState();

  /**
   * Retrieves whether the attribute name is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isNameParameterized();
  /**
   * Retrieves whether the attribute state is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isStateParameterized();

  // children

}
