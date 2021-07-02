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
import net.asam.openscenario.v1_0.api.IEntities;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Entities' From OpenSCENARIO class model specification: Definition of
 * entities (scenario objects or entity selections) in a scenario.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IEntitiesWriter extends IEntities, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: A list of scenario object definitions that pairs
   * an entity object and a controller.
   *
   * @param scenarioObjects value of model property scenarioObjects
   */
  public void setScenarioObjects(List<IScenarioObjectWriter> scenarioObjects);
  /**
   * From OpenSCENARIO class model specification: A list of entity selection definitions.
   *
   * @param entitySelections value of model property entitySelections
   */
  public void setEntitySelections(List<IEntitySelectionWriter> entitySelections);

  // children

  /**
   * From OpenSCENARIO class model specification: A list of scenario object definitions that pairs
   * an entity object and a controller.
   *
   * @return a list of writers for model property scenarioObjects
   */
  public List<IScenarioObjectWriter> getWriterScenarioObjects();
  /**
   * From OpenSCENARIO class model specification: A list of entity selection definitions.
   *
   * @return a list of writers for model property entitySelections
   */
  public List<IEntitySelectionWriter> getWriterEntitySelections();
}
