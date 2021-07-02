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

import net.asam.openscenario.api.writer.IOpenScenarioElementWriter;
import net.asam.openscenario.v1_0.api.IObjectController;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'ObjectController' From OpenSCENARIO class model specification:
 * Definition of a controller for a scenario object. Either an inline definition or a catalog
 * reference to a controller.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IObjectControllerWriter extends IObjectController, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Catalog reference to a controller.
   *
   * @param catalogReference value of model property catalogReference
   */
  public void setCatalogReference(ICatalogReferenceWriter catalogReference);
  /**
   * From OpenSCENARIO class model specification: Controller type definition.
   *
   * @param controller value of model property controller
   */
  public void setController(IControllerWriter controller);

  // children
  /**
   * From OpenSCENARIO class model specification: Catalog reference to a controller.
   *
   * @return a writer for model property catalogReference
   */
  public ICatalogReferenceWriter getWriterCatalogReference();
  /**
   * From OpenSCENARIO class model specification: Controller type definition.
   *
   * @return a writer for model property controller
   */
  public IControllerWriter getWriterController();
}
