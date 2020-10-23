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
 * <p>A Writer for the type 'ManeuverGroup' From OpenSCENARIO class model specification: Grouping
 * element connecting a set of actors to a set maneuvers. Multiple maneuver groups can run
 * independently in parallel. Maneuvers can be defined or instantiated from a maneuver type in a
 * catalog.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IManeuverGroupWriter extends IStoryboardElementWriter {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Number of allowed executions of the maneuver
   * group. Default value is 1. Range: [1..inf[.
   *
   * @return value of model property maximumExecutionCount
   */
  public Long getMaximumExecutionCount();
  /**
   * From OpenSCENARIO class model specification: Name of the maneuver group.
   *
   * @return value of model property name
   */
  public String getName();

  /**
   * From OpenSCENARIO class model specification: Number of allowed executions of the maneuver
   * group. Default value is 1. Range: [1..inf[.
   *
   * @param maximumExecutionCount value of model property maximumExecutionCount
   */
  public void writeToMaximumExecutionCount(Long maximumExecutionCount);
  /**
   * From OpenSCENARIO class model specification: Name of the maneuver group.
   *
   * @param name value of model property name
   */
  public void writeToName(String name);

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
   * From OpenSCENARIO class model specification: Actors of the maneuver group.
   *
   * @return a writer for model property actors
   */
  public IActorsWriter getActorsWriter();

  /**
   * From OpenSCENARIO class model specification: Actors of the maneuver group.
   *
   * @param actorsWriter writer for the model property actors
   */
  public void writeToActorsWriter(IActorsWriter actorsWriter);

  /**
   * From OpenSCENARIO class model specification: Each element of this list of must reference a
   * maneuver type in a catalog.
   *
   * @return a list of writers for model property catalogReferences
   */
  public List<ICatalogReferenceWriter> getCatalogReferencesWriter();
  /**
   * From OpenSCENARIO class model specification: Maneuver type definitions.
   *
   * @return a list of writers for model property maneuvers
   */
  public List<IManeuverWriter> getManeuversWriter();

  /**
   * From OpenSCENARIO class model specification: Each element of this list of must reference a
   * maneuver type in a catalog.
   *
   * @param catalogReferencesWriters list of writers for the model property catalogReferences
   */
  public void setCatalogReferencesWriter(List<ICatalogReferenceWriter> catalogReferencesWriters);
  /**
   * From OpenSCENARIO class model specification: Maneuver type definitions.
   *
   * @param maneuversWriters list of writers for the model property maneuvers
   */
  public void setManeuversWriter(List<IManeuverWriter> maneuversWriters);
}
