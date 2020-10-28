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
import net.asam.openscenario.v1_0.api.IControllerCatalogLocation;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'ControllerCatalogLocation' From OpenSCENARIO class model specification:
 * The directory where to look up controller catalogs.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IControllerCatalogLocationWriter
    extends IControllerCatalogLocation, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: All catalog files in this directory must be
   * evaluated.
   *
   * @param directory value of model property directory
   */
  public void setDirectory(IDirectoryWriter directory);

  // children
  /**
   * From OpenSCENARIO class model specification: All catalog files in this directory must be
   * evaluated.
   *
   * @return a writer for model property directory
   */
  public IDirectoryWriter getWriterDirectory();
}
