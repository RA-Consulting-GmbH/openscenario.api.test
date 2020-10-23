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
 * <p>A Writer for the type 'OpenScenarioCategory' From OpenSCENARIO class model specification:
 * Indicates if the following content defines a scenario or a catalog.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IOpenScenarioCategoryWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: Definition of a scenario.
   *
   * @return a writer for model property scenarioDefinition
   */
  public IScenarioDefinitionWriter getScenarioDefinitionWriter();
  /**
   * From OpenSCENARIO class model specification: Definition of a catalog.
   *
   * @return a writer for model property catalogDefinition
   */
  public ICatalogDefinitionWriter getCatalogDefinitionWriter();

  /**
   * From OpenSCENARIO class model specification: Definition of a scenario.
   *
   * @param scenarioDefinitionWriter writer for the model property scenarioDefinition
   */
  public void writeToScenarioDefinitionWriter(IScenarioDefinitionWriter scenarioDefinitionWriter);
  /**
   * From OpenSCENARIO class model specification: Definition of a catalog.
   *
   * @param catalogDefinitionWriter writer for the model property catalogDefinition
   */
  public void writeToCatalogDefinitionWriter(ICatalogDefinitionWriter catalogDefinitionWriter);
}
