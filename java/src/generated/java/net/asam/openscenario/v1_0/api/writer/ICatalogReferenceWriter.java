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
 * <p>A Writer for the type 'CatalogReference' From OpenSCENARIO class model specification: A
 * reference to type in a catalog. It is used when importing the type in a scenario. Furthermore, it
 * hands over additional parameter values.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ICatalogReferenceWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Name of the catalog.
   *
   * @return value of model property catalogName
   */
  public String getCatalogName();
  /**
   * From OpenSCENARIO class model specification: Name of catalog entry.
   *
   * @return value of model property entryName
   */
  public String getEntryName();

  /**
   * From OpenSCENARIO class model specification: Name of the catalog.
   *
   * @param catalogName value of model property catalogName
   */
  public void writeToCatalogName(String catalogName);
  /**
   * From OpenSCENARIO class model specification: Name of catalog entry.
   *
   * @param entryName value of model property entryName
   */
  public void writeToEntryName(String entryName);

  /**
   * Set a parameter for the attribute catalogName
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToCatalogName(String parameterName);
  /**
   * Set a parameter for the attribute entryName
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToEntryName(String parameterName);

  /**
   * Get the parameter for the attribute catalogName
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromCatalogName();
  /**
   * Get the parameter for the attribute entryName
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromEntryName();

  /**
   * Retrieves whether the attribute catalogName is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isCatalogNameParameterized();
  /**
   * Retrieves whether the attribute entryName is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isEntryNameParameterized();

  // children

  /**
   * From OpenSCENARIO class model specification: List of parameter assignments for instantiation.
   *
   * @return a list of writers for model property parameterAssignments
   */
  public List<IParameterAssignmentWriter> getParameterAssignmentsWriter();

  /**
   * From OpenSCENARIO class model specification: List of parameter assignments for instantiation.
   *
   * @param parameterAssignmentsWriters list of writers for the model property parameterAssignments
   */
  public void setParameterAssignmentsWriter(
      List<IParameterAssignmentWriter> parameterAssignmentsWriters);
}
