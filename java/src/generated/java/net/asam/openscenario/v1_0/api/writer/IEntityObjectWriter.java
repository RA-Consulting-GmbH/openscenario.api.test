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
import net.asam.openscenario.v1_0.api.IEntityObject;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'EntityObject' From OpenSCENARIO class model specification: A vehicle
 * type, pedestrian type or miscellaneous object type.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IEntityObjectWriter extends IEntityObject, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Reference to a catalog entry of type MiscObject,
   * Vehicle or Pedestrian.
   *
   * @param catalogReference value of model property catalogReference
   */
  public void setCatalogReference(ICatalogReferenceWriter catalogReference);
  /**
   * From OpenSCENARIO class model specification: Vehicle definition.
   *
   * @param vehicle value of model property vehicle
   */
  public void setVehicle(IVehicleWriter vehicle);
  /**
   * From OpenSCENARIO class model specification: Pedestrian definition.
   *
   * @param pedestrian value of model property pedestrian
   */
  public void setPedestrian(IPedestrianWriter pedestrian);
  /**
   * From OpenSCENARIO class model specification: Definition of a MiscObject.
   *
   * @param miscObject value of model property miscObject
   */
  public void setMiscObject(IMiscObjectWriter miscObject);

  // children
  /**
   * From OpenSCENARIO class model specification: Reference to a catalog entry of type MiscObject,
   * Vehicle or Pedestrian.
   *
   * @return a writer for model property catalogReference
   */
  public ICatalogReferenceWriter getWriterCatalogReference();
  /**
   * From OpenSCENARIO class model specification: Vehicle definition.
   *
   * @return a writer for model property vehicle
   */
  public IVehicleWriter getWriterVehicle();
  /**
   * From OpenSCENARIO class model specification: Pedestrian definition.
   *
   * @return a writer for model property pedestrian
   */
  public IPedestrianWriter getWriterPedestrian();
  /**
   * From OpenSCENARIO class model specification: Definition of a MiscObject.
   *
   * @return a writer for model property miscObject
   */
  public IMiscObjectWriter getWriterMiscObject();
}
