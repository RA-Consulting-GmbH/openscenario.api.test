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
import net.asam.openscenario.v1_0.api.IByValueCondition;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'ByValueCondition' From OpenSCENARIO class model specification:
 * Conditions referring a runtime value.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IByValueConditionWriter extends IByValueCondition, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: A current parameter value is compared to a
   * reference value.
   *
   * @param parameterCondition value of model property parameterCondition
   */
  public void setParameterCondition(IParameterConditionWriter parameterCondition);
  /**
   * From OpenSCENARIO class model specification: The current time of day is compared to a reference
   * value.
   *
   * @param timeOfDayCondition value of model property timeOfDayCondition
   */
  public void setTimeOfDayCondition(ITimeOfDayConditionWriter timeOfDayCondition);
  /**
   * From OpenSCENARIO class model specification: The current simulation time is compared to a
   * reference value.
   *
   * @param simulationTimeCondition value of model property simulationTimeCondition
   */
  public void setSimulationTimeCondition(ISimulationTimeConditionWriter simulationTimeCondition);
  /**
   * From OpenSCENARIO class model specification: Condition becomes true if the referenced
   * StoryboardElement terminates according to the given rule.
   *
   * @param storyboardElementStateCondition value of model property storyboardElementStateCondition
   */
  public void setStoryboardElementStateCondition(
      IStoryboardElementStateConditionWriter storyboardElementStateCondition);
  /**
   * From OpenSCENARIO class model specification: The current value of an externally defined named
   * value is compared to a reference value (less, greater, equal).
   *
   * @param userDefinedValueCondition value of model property userDefinedValueCondition
   */
  public void setUserDefinedValueCondition(
      IUserDefinedValueConditionWriter userDefinedValueCondition);
  /**
   * From OpenSCENARIO class model specification: Condition becomes true if the referenced signal
   * reaches the indicated state.
   *
   * @param trafficSignalCondition value of model property trafficSignalCondition
   */
  public void setTrafficSignalCondition(ITrafficSignalConditionWriter trafficSignalCondition);
  /**
   * From OpenSCENARIO class model specification: Condition becomes true if the referenced signal
   * controller reaches the indicated state.
   *
   * @param trafficSignalControllerCondition value of model property
   *     trafficSignalControllerCondition
   */
  public void setTrafficSignalControllerCondition(
      ITrafficSignalControllerConditionWriter trafficSignalControllerCondition);

  // children
  /**
   * From OpenSCENARIO class model specification: A current parameter value is compared to a
   * reference value.
   *
   * @return a writer for model property parameterCondition
   */
  public IParameterConditionWriter getWriterParameterCondition();
  /**
   * From OpenSCENARIO class model specification: The current time of day is compared to a reference
   * value.
   *
   * @return a writer for model property timeOfDayCondition
   */
  public ITimeOfDayConditionWriter getWriterTimeOfDayCondition();
  /**
   * From OpenSCENARIO class model specification: The current simulation time is compared to a
   * reference value.
   *
   * @return a writer for model property simulationTimeCondition
   */
  public ISimulationTimeConditionWriter getWriterSimulationTimeCondition();
  /**
   * From OpenSCENARIO class model specification: Condition becomes true if the referenced
   * StoryboardElement terminates according to the given rule.
   *
   * @return a writer for model property storyboardElementStateCondition
   */
  public IStoryboardElementStateConditionWriter getWriterStoryboardElementStateCondition();
  /**
   * From OpenSCENARIO class model specification: The current value of an externally defined named
   * value is compared to a reference value (less, greater, equal).
   *
   * @return a writer for model property userDefinedValueCondition
   */
  public IUserDefinedValueConditionWriter getWriterUserDefinedValueCondition();
  /**
   * From OpenSCENARIO class model specification: Condition becomes true if the referenced signal
   * reaches the indicated state.
   *
   * @return a writer for model property trafficSignalCondition
   */
  public ITrafficSignalConditionWriter getWriterTrafficSignalCondition();
  /**
   * From OpenSCENARIO class model specification: Condition becomes true if the referenced signal
   * controller reaches the indicated state.
   *
   * @return a writer for model property trafficSignalControllerCondition
   */
  public ITrafficSignalControllerConditionWriter getWriterTrafficSignalControllerCondition();
}
