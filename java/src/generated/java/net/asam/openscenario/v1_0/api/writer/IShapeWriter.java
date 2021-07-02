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
import net.asam.openscenario.v1_0.api.IShape;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Shape' From OpenSCENARIO class model specification: Shape for use in
 * trajectories. Supported types: Polyline (line segments), Clothoid, Nurbs.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IShapeWriter extends IShape, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Polyline property of a shape.
   *
   * @param polyline value of model property polyline
   */
  public void setPolyline(IPolylineWriter polyline);
  /**
   * From OpenSCENARIO class model specification: Clothoid property of a shape.
   *
   * @param clothoid value of model property clothoid
   */
  public void setClothoid(IClothoidWriter clothoid);
  /**
   * From OpenSCENARIO class model specification: NURBS property of a shape.
   *
   * @param nurbs value of model property nurbs
   */
  public void setNurbs(INurbsWriter nurbs);

  // children
  /**
   * From OpenSCENARIO class model specification: Polyline property of a shape.
   *
   * @return a writer for model property polyline
   */
  public IPolylineWriter getWriterPolyline();
  /**
   * From OpenSCENARIO class model specification: Clothoid property of a shape.
   *
   * @return a writer for model property clothoid
   */
  public IClothoidWriter getWriterClothoid();
  /**
   * From OpenSCENARIO class model specification: NURBS property of a shape.
   *
   * @return a writer for model property nurbs
   */
  public INurbsWriter getWriterNurbs();
}
