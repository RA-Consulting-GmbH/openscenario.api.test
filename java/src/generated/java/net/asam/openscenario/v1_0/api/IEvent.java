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
package net.asam.openscenario.v1_0.api;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>From OpenSCENARIO class model specification: Container for Actions. Its priority settings
 * determine how to interact with other events within the same scope (maneuver).
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IEvent extends IStoryboardElement {
  /**
   * From OpenSCENARIO class model specification: Priority of each event.
   *
   * @return value of model property priority
   */
  public Priority getPriority();
  /**
   * From OpenSCENARIO class model specification: Maximum number of executions. Default value is 1.
   * Range: [1..inf[.
   *
   * @return value of model property maximumExecutionCount
   */
  public Long getMaximumExecutionCount();
  /**
   * From OpenSCENARIO class model specification: Name of the event.
   *
   * @return value of model property name
   */
  public String getName();
  /**
   * From OpenSCENARIO class model specification: List of actions in an event.
   *
   * @return value of model property actions
   */
  public Iterable<IAction> getActions();
  /**
   * From OpenSCENARIO class model specification: Actions are executed as soon as the start trigger
   * fires. This point in time represents the start of the event.
   *
   * @return value of model property startTrigger
   */
  public ITrigger getStartTrigger();

  /**
   * Retrieves the size of the list
   *
   * @return the size of the list
   */
  public int getActionsSize();
  /**
   * The element at specific index
   *
   * @param index the index of the list
   * @return the element at index
   */
  public IAction getActionsAtIndex(int index);
}
