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

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Act' From OpenSCENARIO class model specification: A container for
 * maneuver groups. Can be executed several times depending on the user provided settings. New
 * executions are only allowed to start when all contained maneuver groups are in the complete
 * state.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IActWriter extends IStoryboardElementWriter {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Name of this act.
   *
   * @return value of model property name
   */
  public String getName();

  /**
   * From OpenSCENARIO class model specification: Name of this act.
   *
   * @param name value of model property name
   */
  public void writeToName(String name);

  /**
   * Set a parameter for the attribute name
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToName(String parameterName);

  /**
   * Get the parameter for the attribute name
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromName();

  /**
   * Retrieves whether the attribute name is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isNameParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: Defines a trigger to that starts the act.
   *
   * @return a writer for model property startTrigger
   */
  public ITriggerWriter getStartTriggerWriter();
  /**
   * From OpenSCENARIO class model specification: Defines a trigger that stops the act.
   *
   * @return a writer for model property stopTrigger
   */
  public ITriggerWriter getStopTriggerWriter();

  /**
   * From OpenSCENARIO class model specification: Defines a trigger to that starts the act.
   *
   * @param startTriggerWriter writer for the model property startTrigger
   */
  public void writeToStartTriggerWriter(ITriggerWriter startTriggerWriter);
  /**
   * From OpenSCENARIO class model specification: Defines a trigger that stops the act.
   *
   * @param stopTriggerWriter writer for the model property stopTrigger
   */
  public void writeToStopTriggerWriter(ITriggerWriter stopTriggerWriter);

  /**
   * From OpenSCENARIO class model specification: A list of maneuver groups representing the act.
   *
   * @return a list of writers for model property maneuverGroups
   */
  public List<IManeuverGroupWriter> getManeuverGroupsWriter();

  /**
   * From OpenSCENARIO class model specification: A list of maneuver groups representing the act.
   *
   * @param maneuverGroupsWriters list of writers for the model property maneuverGroups
   */
  public void setManeuverGroupsWriter(List<IManeuverGroupWriter> maneuverGroupsWriters);
}
