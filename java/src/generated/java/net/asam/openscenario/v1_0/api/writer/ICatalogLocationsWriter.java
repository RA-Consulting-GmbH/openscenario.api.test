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
 * <p>A Writer for the type 'CatalogLocations' From OpenSCENARIO class model specification: Set of
 * catalogs which are referenced in a scenario.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ICatalogLocationsWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on vehicle types.
   *
   * @return a writer for model property vehicleCatalog
   */
  public IVehicleCatalogLocationWriter getVehicleCatalogWriter();
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on controller types.
   *
   * @return a writer for model property controllerCatalog
   */
  public IControllerCatalogLocationWriter getControllerCatalogWriter();
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on pedestrian types.
   *
   * @return a writer for model property pedestrianCatalog
   */
  public IPedestrianCatalogLocationWriter getPedestrianCatalogWriter();
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on miscellaneous object types.
   *
   * @return a writer for model property miscObjectCatalog
   */
  public IMiscObjectCatalogLocationWriter getMiscObjectCatalogWriter();
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on environment types.
   *
   * @return a writer for model property environmentCatalog
   */
  public IEnvironmentCatalogLocationWriter getEnvironmentCatalogWriter();
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on maneuver types.
   *
   * @return a writer for model property maneuverCatalog
   */
  public IManeuverCatalogLocationWriter getManeuverCatalogWriter();
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on trajectory types.
   *
   * @return a writer for model property trajectoryCatalog
   */
  public ITrajectoryCatalogLocationWriter getTrajectoryCatalogWriter();
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on route types.
   *
   * @return a writer for model property routeCatalog
   */
  public IRouteCatalogLocationWriter getRouteCatalogWriter();

  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on vehicle types.
   *
   * @param vehicleCatalogWriter writer for the model property vehicleCatalog
   */
  public void writeToVehicleCatalogWriter(IVehicleCatalogLocationWriter vehicleCatalogWriter);
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on controller types.
   *
   * @param controllerCatalogWriter writer for the model property controllerCatalog
   */
  public void writeToControllerCatalogWriter(
      IControllerCatalogLocationWriter controllerCatalogWriter);
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on pedestrian types.
   *
   * @param pedestrianCatalogWriter writer for the model property pedestrianCatalog
   */
  public void writeToPedestrianCatalogWriter(
      IPedestrianCatalogLocationWriter pedestrianCatalogWriter);
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on miscellaneous object types.
   *
   * @param miscObjectCatalogWriter writer for the model property miscObjectCatalog
   */
  public void writeToMiscObjectCatalogWriter(
      IMiscObjectCatalogLocationWriter miscObjectCatalogWriter);
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on environment types.
   *
   * @param environmentCatalogWriter writer for the model property environmentCatalog
   */
  public void writeToEnvironmentCatalogWriter(
      IEnvironmentCatalogLocationWriter environmentCatalogWriter);
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on maneuver types.
   *
   * @param maneuverCatalogWriter writer for the model property maneuverCatalog
   */
  public void writeToManeuverCatalogWriter(IManeuverCatalogLocationWriter maneuverCatalogWriter);
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on trajectory types.
   *
   * @param trajectoryCatalogWriter writer for the model property trajectoryCatalog
   */
  public void writeToTrajectoryCatalogWriter(
      ITrajectoryCatalogLocationWriter trajectoryCatalogWriter);
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on route types.
   *
   * @param routeCatalogWriter writer for the model property routeCatalog
   */
  public void writeToRouteCatalogWriter(IRouteCatalogLocationWriter routeCatalogWriter);
}
