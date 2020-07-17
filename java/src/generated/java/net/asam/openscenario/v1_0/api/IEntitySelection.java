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
 * <p>From OpenSCENARIO class model specification: Grouping of scenario objects by name and/or type.
 * An instance of EntitySelection is considered also an instance of Entity.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IEntitySelection extends IOpenScenarioModelElement, IEntity {

  /**
   * From OpenSCENARIO class model specification: Name of the entity selection. By this name, a
   * selection can be referenced as an entity.
   *
   * @return value of model property name
   */
  public String getName();

  /**
   * From OpenSCENARIO class model specification: Selected entities as members of the entity
   * selection.
   *
   * @return value of model property members
   */
  public ISelectedEntities getMembers();
}
