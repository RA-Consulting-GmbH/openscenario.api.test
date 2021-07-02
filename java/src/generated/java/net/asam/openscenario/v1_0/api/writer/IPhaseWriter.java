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
import net.asam.openscenario.v1_0.api.IPhase;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Phase' From OpenSCENARIO class model specification: Phase of a
 * TrafficSignalController. A TrafficSignalController has sequential phases. Each phase has multiple
 * TrafficSignalStates.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IPhaseWriter extends IPhase, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Name of the phase.
   *
   * @param name value of model property name
   */
  public void setName(String name);
  /**
   * From OpenSCENARIO class model specification: Duration of the phase. Unit: s; Range: [0..inf[.
   *
   * @param duration value of model property duration
   */
  public void setDuration(Double duration);
  /**
   * From OpenSCENARIO class model specification: Each phase has multiple TrafficSignalStates. One
   * for each TrafficSignal that is controlled. E.g. phase1 (trafficSignal1:true;false;false,
   * trafficSignal2:false;false;true).
   *
   * @param trafficSignalStates value of model property trafficSignalStates
   */
  public void setTrafficSignalStates(List<ITrafficSignalStateWriter> trafficSignalStates);

  /**
   * Set a parameter for the attribute name
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToName(String parameterName);
  /**
   * Set a parameter for the attribute duration
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToDuration(String parameterName);

  /**
   * Get the parameter for the attribute name
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromName();
  /**
   * Get the parameter for the attribute duration
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromDuration();

  /**
   * Retrieves whether the attribute name is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isNameParameterized();
  /**
   * Retrieves whether the attribute duration is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isDurationParameterized();

  // children

  /**
   * From OpenSCENARIO class model specification: Each phase has multiple TrafficSignalStates. One
   * for each TrafficSignal that is controlled. E.g. phase1 (trafficSignal1:true;false;false,
   * trafficSignal2:false;false;true).
   *
   * @return a list of writers for model property trafficSignalStates
   */
  public List<ITrafficSignalStateWriter> getWriterTrafficSignalStates();
}
