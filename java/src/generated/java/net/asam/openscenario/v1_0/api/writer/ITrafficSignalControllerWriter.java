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
import net.asam.openscenario.v1_0.api.ITrafficSignalController;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'TrafficSignalController' From OpenSCENARIO class model specification:
 * Controls the state of a collection of traffic signals.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ITrafficSignalControllerWriter
    extends ITrafficSignalController, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: ID of the traffic signal controller in the road
   * network.
   *
   * @param name value of model property name
   */
  public void setName(String name);
  /**
   * From OpenSCENARIO class model specification: The delay to the controller in the reference
   * property. A controller having a delay to another one means that its first phase virtually
   * starts delaytime seconds after the start of the reference's first phase. This can be used to
   * define a progressive signal system, but only makes sense, if the total times of all connected
   * controllers are the same. If delay is set, reference is required. Unit: s; Range: [0..inf[.
   *
   * @param delay value of model property delay
   */
  public void setDelay(Double delay);
  /**
   * From OpenSCENARIO class model specification: A reference (ID) to the connected controller in
   * the road network. If reference is set, a delay is required.
   *
   * @param reference value of model property reference
   */
  public void setReference(String reference);
  /**
   * From OpenSCENARIO class model specification: Phases of a TrafficSignalController.
   *
   * @param phases value of model property phases
   */
  public void setPhases(List<IPhaseWriter> phases);

  /**
   * Set a parameter for the attribute name
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToName(String parameterName);
  /**
   * Set a parameter for the attribute delay
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToDelay(String parameterName);
  /**
   * Set a parameter for the attribute reference
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToReference(String parameterName);

  /**
   * Get the parameter for the attribute name
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromName();
  /**
   * Get the parameter for the attribute delay
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromDelay();
  /**
   * Get the parameter for the attribute reference
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromReference();

  /**
   * Retrieves whether the attribute name is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isNameParameterized();
  /**
   * Retrieves whether the attribute delay is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isDelayParameterized();
  /**
   * Retrieves whether the attribute reference is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isReferenceParameterized();

  // children

  /**
   * From OpenSCENARIO class model specification: Phases of a TrafficSignalController.
   *
   * @return a list of writers for model property phases
   */
  public List<IPhaseWriter> getWriterPhases();
}
