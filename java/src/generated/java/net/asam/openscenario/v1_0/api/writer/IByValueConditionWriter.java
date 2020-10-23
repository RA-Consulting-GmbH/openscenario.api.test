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
 * <p>A Writer for the type 'ByValueCondition' From OpenSCENARIO class model specification:
 * Conditions referring a runtime value.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IByValueConditionWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: A current parameter value is compared to a
   * reference value.
   *
   * @return a writer for model property parameterCondition
   */
  public IParameterConditionWriter getParameterConditionWriter();
  /**
   * From OpenSCENARIO class model specification: The current time of day is compared to a reference
   * value.
   *
   * @return a writer for model property timeOfDayCondition
   */
  public ITimeOfDayConditionWriter getTimeOfDayConditionWriter();
  /**
   * From OpenSCENARIO class model specification: The current simulation time is compared to a
   * reference value.
   *
   * @return a writer for model property simulationTimeCondition
   */
  public ISimulationTimeConditionWriter getSimulationTimeConditionWriter();
  /**
   * From OpenSCENARIO class model specification: Condition becomes true if the referenced
   * StoryboardElement terminates according to the given rule.
   *
   * @return a writer for model property storyboardElementStateCondition
   */
  public IStoryboardElementStateConditionWriter getStoryboardElementStateConditionWriter();
  /**
   * From OpenSCENARIO class model specification: The current value of an externally defined named
   * value is compared to a reference value (less, greater, equal).
   *
   * @return a writer for model property userDefinedValueCondition
   */
  public IUserDefinedValueConditionWriter getUserDefinedValueConditionWriter();
  /**
   * From OpenSCENARIO class model specification: Condition becomes true if the referenced signal
   * reaches the indicated state.
   *
   * @return a writer for model property trafficSignalCondition
   */
  public ITrafficSignalConditionWriter getTrafficSignalConditionWriter();
  /**
   * From OpenSCENARIO class model specification: Condition becomes true if the referenced signal
   * controller reaches the indicated state.
   *
   * @return a writer for model property trafficSignalControllerCondition
   */
  public ITrafficSignalControllerConditionWriter getTrafficSignalControllerConditionWriter();

  /**
   * From OpenSCENARIO class model specification: A current parameter value is compared to a
   * reference value.
   *
   * @param parameterConditionWriter writer for the model property parameterCondition
   */
  public void writeToParameterConditionWriter(IParameterConditionWriter parameterConditionWriter);
  /**
   * From OpenSCENARIO class model specification: The current time of day is compared to a reference
   * value.
   *
   * @param timeOfDayConditionWriter writer for the model property timeOfDayCondition
   */
  public void writeToTimeOfDayConditionWriter(ITimeOfDayConditionWriter timeOfDayConditionWriter);
  /**
   * From OpenSCENARIO class model specification: The current simulation time is compared to a
   * reference value.
   *
   * @param simulationTimeConditionWriter writer for the model property simulationTimeCondition
   */
  public void writeToSimulationTimeConditionWriter(
      ISimulationTimeConditionWriter simulationTimeConditionWriter);
  /**
   * From OpenSCENARIO class model specification: Condition becomes true if the referenced
   * StoryboardElement terminates according to the given rule.
   *
   * @param storyboardElementStateConditionWriter writer for the model property
   *     storyboardElementStateCondition
   */
  public void writeToStoryboardElementStateConditionWriter(
      IStoryboardElementStateConditionWriter storyboardElementStateConditionWriter);
  /**
   * From OpenSCENARIO class model specification: The current value of an externally defined named
   * value is compared to a reference value (less, greater, equal).
   *
   * @param userDefinedValueConditionWriter writer for the model property userDefinedValueCondition
   */
  public void writeToUserDefinedValueConditionWriter(
      IUserDefinedValueConditionWriter userDefinedValueConditionWriter);
  /**
   * From OpenSCENARIO class model specification: Condition becomes true if the referenced signal
   * reaches the indicated state.
   *
   * @param trafficSignalConditionWriter writer for the model property trafficSignalCondition
   */
  public void writeToTrafficSignalConditionWriter(
      ITrafficSignalConditionWriter trafficSignalConditionWriter);
  /**
   * From OpenSCENARIO class model specification: Condition becomes true if the referenced signal
   * controller reaches the indicated state.
   *
   * @param trafficSignalControllerConditionWriter writer for the model property
   *     trafficSignalControllerCondition
   */
  public void writeToTrafficSignalControllerConditionWriter(
      ITrafficSignalControllerConditionWriter trafficSignalControllerConditionWriter);
}
