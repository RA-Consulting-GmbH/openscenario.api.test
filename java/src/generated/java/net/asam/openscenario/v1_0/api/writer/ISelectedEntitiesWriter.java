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
import net.asam.openscenario.v1_0.api.ISelectedEntities;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'SelectedEntities' From OpenSCENARIO class model specification:
 * Collection of entities that includes entities explicitly by their reference or includes the
 * entities by their type.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ISelectedEntitiesWriter extends ISelectedEntities, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: References to the selected entities.
   *
   * @param entityRef value of model property entityRef
   */
  public void setEntityRef(List<IEntityRefWriter> entityRef);
  /**
   * From OpenSCENARIO class model specification: Defines the type to determine that all entities of
   * a specific type are members.
   *
   * @param byType value of model property byType
   */
  public void setByType(List<IByTypeWriter> byType);

  // children

  /**
   * From OpenSCENARIO class model specification: References to the selected entities.
   *
   * @return a list of writers for model property entityRef
   */
  public List<IEntityRefWriter> getWriterEntityRef();
  /**
   * From OpenSCENARIO class model specification: Defines the type to determine that all entities of
   * a specific type are members.
   *
   * @return a list of writers for model property byType
   */
  public List<IByTypeWriter> getWriterByType();
}
