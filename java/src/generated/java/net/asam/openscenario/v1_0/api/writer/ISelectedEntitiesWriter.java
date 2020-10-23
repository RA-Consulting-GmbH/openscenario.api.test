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
 * <p>A Writer for the type 'SelectedEntities' From OpenSCENARIO class model specification:
 * Collection of entities that includes entities explicitly by their reference or includes the
 * entities by their type.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ISelectedEntitiesWriter extends IOpenScenarioModelElement {

  // children

  /**
   * From OpenSCENARIO class model specification: References to the selected entities.
   *
   * @return a list of writers for model property entityRef
   */
  public List<IEntityRefWriter> getEntityRefWriter();
  /**
   * From OpenSCENARIO class model specification: Defines the type to determine that all entities of
   * a specific type are members.
   *
   * @return a list of writers for model property byType
   */
  public List<IByTypeWriter> getByTypeWriter();

  /**
   * From OpenSCENARIO class model specification: References to the selected entities.
   *
   * @param entityRefWriters list of writers for the model property entityRef
   */
  public void setEntityRefWriter(List<IEntityRefWriter> entityRefWriters);
  /**
   * From OpenSCENARIO class model specification: Defines the type to determine that all entities of
   * a specific type are members.
   *
   * @param byTypeWriters list of writers for the model property byType
   */
  public void setByTypeWriter(List<IByTypeWriter> byTypeWriters);
}
