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

import java.util.List;
import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>From OpenSCENARIO class model specification: Top level container containing all scenario
 * elements.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IScenarioDefinition extends IOpenScenarioModelElement {
  /**
   * From OpenSCENARIO class model specification: Global Parameter declaration. Some parameter
   * represent placeholders to be resolved when the scenario file is loaded. Some parameters
   * represent runtime values that can be controlled with ParameterActions and ParameterConditions
   * during simulation time.
   *
   * @return value of model property parameterDeclarations
   */
  public List<IParameterDeclaration> getParameterDeclarations();
  /**
   * From OpenSCENARIO class model specification: A list of locations to look up catalog files. Each
   * catalog element type has its own list.
   *
   * @return value of model property catalogLocations
   */
  public ICatalogLocations getCatalogLocations();
  /**
   * From OpenSCENARIO class model specification: Reference to the road network.
   *
   * @return value of model property roadNetwork
   */
  public IRoadNetwork getRoadNetwork();
  /**
   * From OpenSCENARIO class model specification: Container for entity selections and scenario
   * object definitions. Instances of ScenarioObject, of EntitySelection and of SpawnedObject
   * considered instances of Entity.
   *
   * @return value of model property entities
   */
  public IEntities getEntities();
  /**
   * From OpenSCENARIO class model specification: Container for the dynamic content of the scenario.
   *
   * @return value of model property storyboard
   */
  public IStoryboard getStoryboard();
}
