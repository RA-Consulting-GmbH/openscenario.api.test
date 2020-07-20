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

import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.common.INamedReference;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>From OpenSCENARIO class model specification: Considered true if a referenced storyboard
 * element has reached a given runtime state (standbyState, runningState, completeState) or if the
 * referenced storyboard element undergoes a specific transition (startTransition, stopTransition,
 * endTransition, skipTransition) at a discrete time.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IStoryboardElementStateCondition extends IOpenScenarioModelElement {
  /**
   * From OpenSCENARIO class model specification: Type of storyboard element instance.
   *
   * @return value of model property storyboardElementType
   */
  public StoryboardElementType getStoryboardElementType();
  /**
   * From OpenSCENARIO class model specification: Name of the referenced Storyboard instance.
   *
   * @return value of model property storyboardElementRef
   */
  public INamedReference<IStoryboardElement> getStoryboardElementRef();
  /**
   * From OpenSCENARIO class model specification: The state or the transition of the storyboard
   * element instance for which the condition becomes true.
   *
   * @return value of model property state
   */
  public StoryboardElementState getState();
}
