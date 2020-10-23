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
 * <p>A Writer for the type 'AssignControllerAction' From OpenSCENARIO class model specification:
 * This action assigns a controller to the given entity defined in the enclosing PrivateAction.
 * Controllers could be defined inline or by using a catalog reference.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IAssignControllerActionWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: Assigns a controller to a given entity.
   *
   * @return a writer for model property controller
   */
  public IControllerWriter getControllerWriter();
  /**
   * From OpenSCENARIO class model specification: Uses a CatalogReference to assign a controller to
   * a given entity. CatalogReference must point to a Controller type.
   *
   * @return a writer for model property catalogReference
   */
  public ICatalogReferenceWriter getCatalogReferenceWriter();

  /**
   * From OpenSCENARIO class model specification: Assigns a controller to a given entity.
   *
   * @param controllerWriter writer for the model property controller
   */
  public void writeToControllerWriter(IControllerWriter controllerWriter);
  /**
   * From OpenSCENARIO class model specification: Uses a CatalogReference to assign a controller to
   * a given entity. CatalogReference must point to a Controller type.
   *
   * @param catalogReferenceWriter writer for the model property catalogReference
   */
  public void writeToCatalogReferenceWriter(ICatalogReferenceWriter catalogReferenceWriter);
}
