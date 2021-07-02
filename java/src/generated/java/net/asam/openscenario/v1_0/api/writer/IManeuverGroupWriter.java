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
import net.asam.openscenario.v1_0.api.IManeuverGroup;

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
public interface IManeuverGroupWriter
    extends IStoryboardElementWriter, IManeuverGroup, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Number of allowed executions of the maneuver
   * group. Default value is 1. Range: [1..inf[.
   *
   * @param maximumExecutionCount value of model property maximumExecutionCount
   */
  public void setMaximumExecutionCount(Long maximumExecutionCount);
  /**
   * From OpenSCENARIO class model specification: Name of the maneuver group.
   *
   * @param name value of model property name
   */
  public void setName(String name);
  /**
   * From OpenSCENARIO class model specification: Actors of the maneuver group.
   *
   * @param actors value of model property actors
   */
  public void setActors(IActorsWriter actors);
  /**
   * From OpenSCENARIO class model specification: Each element of this list of must reference a
   * maneuver type in a catalog.
   *
   * @param catalogReferences value of model property catalogReferences
   */
  public void setCatalogReferences(List<ICatalogReferenceWriter> catalogReferences);
  /**
   * From OpenSCENARIO class model specification: Maneuver type definitions.
   *
   * @param maneuvers value of model property maneuvers
   */
  public void setManeuvers(List<IManeuverWriter> maneuvers);

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
  public IActorsWriter getWriterActors();

  /**
   * From OpenSCENARIO class model specification: Each element of this list of must reference a
   * maneuver type in a catalog.
   *
   * @return a list of writers for model property catalogReferences
   */
  public List<ICatalogReferenceWriter> getWriterCatalogReferences();
  /**
   * From OpenSCENARIO class model specification: Maneuver type definitions.
   *
   * @return a list of writers for model property maneuvers
   */
  public List<IManeuverWriter> getWriterManeuvers();
}
