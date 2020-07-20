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

import java.util.List;
import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>From OpenSCENARIO class model specification: A reference to type in a catalog. It is used when
 * importing the type in a scenario. Furthermore, it hands over additional parameter values.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ICatalogReference extends IOpenScenarioModelElement {
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
   * From OpenSCENARIO class model specification: List of parameter assignments for instantiation.
   *
   * @return value of model property parameterAssignments
   */
  public List<IParameterAssignment> getParameterAssignments();
  /**
   * From OpenSCENARIO class model specification: The resolved reference to a catalog element (out
   * of the catalogName and entryName). Transient means, that it is not mapped to the schema.
   *
   * @return value of model property ref
   */
  public ICatalogElement getRef();
}
