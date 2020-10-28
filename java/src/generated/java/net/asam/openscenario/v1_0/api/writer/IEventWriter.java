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
import net.asam.openscenario.v1_0.api.IEvent;
import net.asam.openscenario.v1_0.api.Priority;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Event' From OpenSCENARIO class model specification: Container for
 * Actions. Its priority settings determine how to interact with other events within the same scope
 * (maneuver).
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IEventWriter extends IStoryboardElementWriter, IEvent, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Priority of each event.
   *
   * @param priority value of model property priority
   */
  public void setPriority(Priority priority);
  /**
   * From OpenSCENARIO class model specification: Maximum number of executions. Default value is 1.
   * Range: [1..inf[.
   *
   * @param maximumExecutionCount value of model property maximumExecutionCount
   */
  public void setMaximumExecutionCount(Long maximumExecutionCount);
  /**
   * From OpenSCENARIO class model specification: Name of the event.
   *
   * @param name value of model property name
   */
  public void setName(String name);
  /**
   * From OpenSCENARIO class model specification: List of actions in an event.
   *
   * @param actions value of model property actions
   */
  public void setActions(List<IActionWriter> actions);
  /**
   * From OpenSCENARIO class model specification: Actions are executed as soon as the start trigger
   * fires. This point in time represents the start of the event.
   *
   * @param startTrigger value of model property startTrigger
   */
  public void setStartTrigger(ITriggerWriter startTrigger);

  /**
   * Set a parameter for the attribute priority
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToPriority(String parameterName);
  /**
   * Set a parameter for the attribute maximumExecutionCount
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToMaximumExecutionCount(String parameterName);
  /**
   * Set a parameter for the attribute name
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToName(String parameterName);

  /**
   * Get the parameter for the attribute priority
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromPriority();
  /**
   * Get the parameter for the attribute maximumExecutionCount
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromMaximumExecutionCount();
  /**
   * Get the parameter for the attribute name
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromName();

  /**
   * Retrieves whether the attribute priority is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isPriorityParameterized();
  /**
   * Retrieves whether the attribute maximumExecutionCount is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isMaximumExecutionCountParameterized();
  /**
   * Retrieves whether the attribute name is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isNameParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: Actions are executed as soon as the start trigger
   * fires. This point in time represents the start of the event.
   *
   * @return a writer for model property startTrigger
   */
  public ITriggerWriter getWriterStartTrigger();

  /**
   * From OpenSCENARIO class model specification: List of actions in an event.
   *
   * @return a list of writers for model property actions
   */
  public List<IActionWriter> getWriterActions();
}
