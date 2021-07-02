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
import net.asam.openscenario.v1_0.api.ICatalogLocations;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'CatalogLocations' From OpenSCENARIO class model specification: Set of
 * catalogs which are referenced in a scenario.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ICatalogLocationsWriter extends ICatalogLocations, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on vehicle types.
   *
   * @param vehicleCatalog value of model property vehicleCatalog
   */
  public void setVehicleCatalog(IVehicleCatalogLocationWriter vehicleCatalog);
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on controller types.
   *
   * @param controllerCatalog value of model property controllerCatalog
   */
  public void setControllerCatalog(IControllerCatalogLocationWriter controllerCatalog);
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on pedestrian types.
   *
   * @param pedestrianCatalog value of model property pedestrianCatalog
   */
  public void setPedestrianCatalog(IPedestrianCatalogLocationWriter pedestrianCatalog);
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on miscellaneous object types.
   *
   * @param miscObjectCatalog value of model property miscObjectCatalog
   */
  public void setMiscObjectCatalog(IMiscObjectCatalogLocationWriter miscObjectCatalog);
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on environment types.
   *
   * @param environmentCatalog value of model property environmentCatalog
   */
  public void setEnvironmentCatalog(IEnvironmentCatalogLocationWriter environmentCatalog);
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on maneuver types.
   *
   * @param maneuverCatalog value of model property maneuverCatalog
   */
  public void setManeuverCatalog(IManeuverCatalogLocationWriter maneuverCatalog);
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on trajectory types.
   *
   * @param trajectoryCatalog value of model property trajectoryCatalog
   */
  public void setTrajectoryCatalog(ITrajectoryCatalogLocationWriter trajectoryCatalog);
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on route types.
   *
   * @param routeCatalog value of model property routeCatalog
   */
  public void setRouteCatalog(IRouteCatalogLocationWriter routeCatalog);

  // children
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on vehicle types.
   *
   * @return a writer for model property vehicleCatalog
   */
  public IVehicleCatalogLocationWriter getWriterVehicleCatalog();
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on controller types.
   *
   * @return a writer for model property controllerCatalog
   */
  public IControllerCatalogLocationWriter getWriterControllerCatalog();
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on pedestrian types.
   *
   * @return a writer for model property pedestrianCatalog
   */
  public IPedestrianCatalogLocationWriter getWriterPedestrianCatalog();
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on miscellaneous object types.
   *
   * @return a writer for model property miscObjectCatalog
   */
  public IMiscObjectCatalogLocationWriter getWriterMiscObjectCatalog();
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on environment types.
   *
   * @return a writer for model property environmentCatalog
   */
  public IEnvironmentCatalogLocationWriter getWriterEnvironmentCatalog();
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on maneuver types.
   *
   * @return a writer for model property maneuverCatalog
   */
  public IManeuverCatalogLocationWriter getWriterManeuverCatalog();
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on trajectory types.
   *
   * @return a writer for model property trajectoryCatalog
   */
  public ITrajectoryCatalogLocationWriter getWriterTrajectoryCatalog();
  /**
   * From OpenSCENARIO class model specification: This catalog location is the first choice to
   * resolve CatalogReferences on route types.
   *
   * @return a writer for model property routeCatalog
   */
  public IRouteCatalogLocationWriter getWriterRouteCatalog();
}
