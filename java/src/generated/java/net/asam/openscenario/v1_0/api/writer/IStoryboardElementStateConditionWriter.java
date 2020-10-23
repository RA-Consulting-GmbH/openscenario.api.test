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
import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.v1_0.api.IStoryboardElement;
import net.asam.openscenario.v1_0.api.StoryboardElementState;
import net.asam.openscenario.v1_0.api.StoryboardElementType;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'StoryboardElementStateCondition' From OpenSCENARIO class model
 * specification: Considered true if a referenced storyboard element has reached a given runtime
 * state (standbyState, runningState, completeState) or if the referenced storyboard element
 * undergoes a specific transition (startTransition, stopTransition, endTransition, skipTransition)
 * at a discrete time.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IStoryboardElementStateConditionWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
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

  /**
   * From OpenSCENARIO class model specification: Type of storyboard element instance.
   *
   * @param storyboardElementType value of model property storyboardElementType
   */
  public void writeToStoryboardElementType(StoryboardElementType storyboardElementType);
  /**
   * From OpenSCENARIO class model specification: Name of the referenced Storyboard instance.
   *
   * @param storyboardElementRef value of model property storyboardElementRef
   */
  public void writeToStoryboardElementRef(INamedReference<IStoryboardElement> storyboardElementRef);
  /**
   * From OpenSCENARIO class model specification: The state or the transition of the storyboard
   * element instance for which the condition becomes true.
   *
   * @param state value of model property state
   */
  public void writeToState(StoryboardElementState state);

  /**
   * Set a parameter for the attribute storyboardElementType
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToStoryboardElementType(String parameterName);
  /**
   * Set a parameter for the attribute storyboardElementRef
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToStoryboardElementRef(String parameterName);
  /**
   * Set a parameter for the attribute state
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToState(String parameterName);

  /**
   * Get the parameter for the attribute storyboardElementType
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromStoryboardElementType();
  /**
   * Get the parameter for the attribute storyboardElementRef
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromStoryboardElementRef();
  /**
   * Get the parameter for the attribute state
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromState();

  /**
   * Retrieves whether the attribute storyboardElementType is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isStoryboardElementTypeParameterized();
  /**
   * Retrieves whether the attribute storyboardElementRef is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isStoryboardElementRefParameterized();
  /**
   * Retrieves whether the attribute state is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isStateParameterized();

  // children

}
