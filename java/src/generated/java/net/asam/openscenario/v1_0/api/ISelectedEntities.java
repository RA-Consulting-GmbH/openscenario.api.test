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

import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>From OpenSCENARIO class model specification: Collection of entities that includes entities
 * explicitly by their reference or includes the entities by their type.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ISelectedEntities extends IOpenScenarioModelElement {
  /**
   * From OpenSCENARIO class model specification: References to the selected entities.
   *
   * @return value of model property entityRef
   */
  public Iterable<IEntityRef> getEntityRef();
  /**
   * From OpenSCENARIO class model specification: Defines the type to determine that all entities of
   * a specific type are members.
   *
   * @return value of model property byType
   */
  public Iterable<IByType> getByType();

  /**
   * Retrieves the size of the list
   *
   * @return the size of the list
   */
  public int getEntityRefSize();
  /**
   * The element at specific index
   *
   * @param index the index of the list
   * @return the element at index
   */
  public IEntityRef getEntityRefAtIndex(int index);
  /**
   * Retrieves the size of the list
   *
   * @return the size of the list
   */
  public int getByTypeSize();
  /**
   * The element at specific index
   *
   * @param index the index of the list
   * @return the element at index
   */
  public IByType getByTypeAtIndex(int index);
}
