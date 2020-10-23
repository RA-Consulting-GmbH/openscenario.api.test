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
 * <p>A Writer for the type 'Shape' From OpenSCENARIO class model specification: Shape for use in
 * trajectories. Supported types: Polyline (line segments), Clothoid, Nurbs.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IShapeWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: Polyline property of a shape.
   *
   * @return a writer for model property polyline
   */
  public IPolylineWriter getPolylineWriter();
  /**
   * From OpenSCENARIO class model specification: Clothoid property of a shape.
   *
   * @return a writer for model property clothoid
   */
  public IClothoidWriter getClothoidWriter();
  /**
   * From OpenSCENARIO class model specification: NURBS property of a shape.
   *
   * @return a writer for model property nurbs
   */
  public INurbsWriter getNurbsWriter();

  /**
   * From OpenSCENARIO class model specification: Polyline property of a shape.
   *
   * @param polylineWriter writer for the model property polyline
   */
  public void writeToPolylineWriter(IPolylineWriter polylineWriter);
  /**
   * From OpenSCENARIO class model specification: Clothoid property of a shape.
   *
   * @param clothoidWriter writer for the model property clothoid
   */
  public void writeToClothoidWriter(IClothoidWriter clothoidWriter);
  /**
   * From OpenSCENARIO class model specification: NURBS property of a shape.
   *
   * @param nurbsWriter writer for the model property nurbs
   */
  public void writeToNurbsWriter(INurbsWriter nurbsWriter);
}
