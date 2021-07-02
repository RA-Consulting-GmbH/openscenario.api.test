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
import net.asam.openscenario.v1_0.api.IOpenScenario;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'OpenScenario' From OpenSCENARIO class model specification: Top level
 * container for scenarios or catalogs.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IOpenScenarioWriter extends IOpenScenario, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Header information for the scenario or the
   * catalog.
   *
   * @param fileHeader value of model property fileHeader
   */
  public void setFileHeader(IFileHeaderWriter fileHeader);
  /**
   * From OpenSCENARIO class model specification: Category (catalog or scenario) of the OpenSCENARIO
   * description.
   *
   * @param openScenarioCategory value of model property openScenarioCategory
   */
  public void setOpenScenarioCategory(IOpenScenarioCategoryWriter openScenarioCategory);

  // children
  /**
   * From OpenSCENARIO class model specification: Header information for the scenario or the
   * catalog.
   *
   * @return a writer for model property fileHeader
   */
  public IFileHeaderWriter getWriterFileHeader();
  /**
   * From OpenSCENARIO class model specification: Category (catalog or scenario) of the OpenSCENARIO
   * description.
   *
   * @return a writer for model property openScenarioCategory
   */
  public IOpenScenarioCategoryWriter getWriterOpenScenarioCategory();
}
