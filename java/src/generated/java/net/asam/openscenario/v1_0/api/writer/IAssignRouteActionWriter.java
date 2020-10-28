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
import net.asam.openscenario.v1_0.api.IAssignRouteAction;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'AssignRouteAction' From OpenSCENARIO class model specification:
 * Controls an entity to follow a route using waypoints on the road network. The corresponding route
 * can be instantiated from a catalog type, or defined within this declaration. This action does not
 * override any action that controls either lateral or longitudinal domain.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IAssignRouteActionWriter extends IAssignRouteAction, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: The route definition.
   *
   * @param route value of model property route
   */
  public void setRoute(IRouteWriter route);
  /**
   * From OpenSCENARIO class model specification: A reference to the route definition in a catalog.
   * The reference must point to a route.
   *
   * @param catalogReference value of model property catalogReference
   */
  public void setCatalogReference(ICatalogReferenceWriter catalogReference);

  // children
  /**
   * From OpenSCENARIO class model specification: The route definition.
   *
   * @return a writer for model property route
   */
  public IRouteWriter getWriterRoute();
  /**
   * From OpenSCENARIO class model specification: A reference to the route definition in a catalog.
   * The reference must point to a route.
   *
   * @return a writer for model property catalogReference
   */
  public ICatalogReferenceWriter getWriterCatalogReference();
}
