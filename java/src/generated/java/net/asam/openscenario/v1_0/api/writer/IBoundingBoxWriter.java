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
import net.asam.openscenario.v1_0.api.IBoundingBox;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'BoundingBox' From OpenSCENARIO class model specification: Defines
 * geometric properties of the entities as a simplified three dimensional bounding box.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IBoundingBoxWriter extends IBoundingBox, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Represents the geometrical center of the bounding
   * box expressed in coordinates that refer to the coordinate system of the entity (e.g. the
   * vehicle coordinate system).
   *
   * @param center value of model property center
   */
  public void setCenter(ICenterWriter center);
  /**
   * From OpenSCENARIO class model specification: Width, length and height of the bounding box.
   *
   * @param dimensions value of model property dimensions
   */
  public void setDimensions(IDimensionsWriter dimensions);

  // children
  /**
   * From OpenSCENARIO class model specification: Represents the geometrical center of the bounding
   * box expressed in coordinates that refer to the coordinate system of the entity (e.g. the
   * vehicle coordinate system).
   *
   * @return a writer for model property center
   */
  public ICenterWriter getWriterCenter();
  /**
   * From OpenSCENARIO class model specification: Width, length and height of the bounding box.
   *
   * @return a writer for model property dimensions
   */
  public IDimensionsWriter getWriterDimensions();
}
