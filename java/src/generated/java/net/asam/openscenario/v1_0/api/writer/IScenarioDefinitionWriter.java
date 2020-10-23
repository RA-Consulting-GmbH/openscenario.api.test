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
import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'ScenarioDefinition' From OpenSCENARIO class model specification: Top
 * level container containing all scenario elements.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IScenarioDefinitionWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: A list of locations to look up catalog files. Each
   * catalog element type has its own list.
   *
   * @return a writer for model property catalogLocations
   */
  public ICatalogLocationsWriter getCatalogLocationsWriter();
  /**
   * From OpenSCENARIO class model specification: Reference to the road network.
   *
   * @return a writer for model property roadNetwork
   */
  public IRoadNetworkWriter getRoadNetworkWriter();
  /**
   * From OpenSCENARIO class model specification: Container for entity selections and scenario
   * object definitions. Instances of ScenarioObject, of EntitySelection and of SpawnedObject
   * considered instances of Entity.
   *
   * @return a writer for model property entities
   */
  public IEntitiesWriter getEntitiesWriter();
  /**
   * From OpenSCENARIO class model specification: Container for the dynamic content of the scenario.
   *
   * @return a writer for model property storyboard
   */
  public IStoryboardWriter getStoryboardWriter();

  /**
   * From OpenSCENARIO class model specification: A list of locations to look up catalog files. Each
   * catalog element type has its own list.
   *
   * @param catalogLocationsWriter writer for the model property catalogLocations
   */
  public void writeToCatalogLocationsWriter(ICatalogLocationsWriter catalogLocationsWriter);
  /**
   * From OpenSCENARIO class model specification: Reference to the road network.
   *
   * @param roadNetworkWriter writer for the model property roadNetwork
   */
  public void writeToRoadNetworkWriter(IRoadNetworkWriter roadNetworkWriter);
  /**
   * From OpenSCENARIO class model specification: Container for entity selections and scenario
   * object definitions. Instances of ScenarioObject, of EntitySelection and of SpawnedObject
   * considered instances of Entity.
   *
   * @param entitiesWriter writer for the model property entities
   */
  public void writeToEntitiesWriter(IEntitiesWriter entitiesWriter);
  /**
   * From OpenSCENARIO class model specification: Container for the dynamic content of the scenario.
   *
   * @param storyboardWriter writer for the model property storyboard
   */
  public void writeToStoryboardWriter(IStoryboardWriter storyboardWriter);

  /**
   * From OpenSCENARIO class model specification: Global Parameter declaration. Some parameter
   * represent placeholders to be resolved when the scenario file is loaded. Some parameters
   * represent runtime values that can be controlled with ParameterActions and ParameterConditions
   * during simulation time.
   *
   * @return a list of writers for model property parameterDeclarations
   */
  public List<IParameterDeclarationWriter> getParameterDeclarationsWriter();

  /**
   * From OpenSCENARIO class model specification: Global Parameter declaration. Some parameter
   * represent placeholders to be resolved when the scenario file is loaded. Some parameters
   * represent runtime values that can be controlled with ParameterActions and ParameterConditions
   * during simulation time.
   *
   * @param parameterDeclarationsWriters list of writers for the model property
   *     parameterDeclarations
   */
  public void setParameterDeclarationsWriter(
      List<IParameterDeclarationWriter> parameterDeclarationsWriters);
}
