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

import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>From OpenSCENARIO class model specification: Non-uniform rational b-spline (NURBS) trajectory
 * specification.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface INurbs extends IOpenScenarioModelElement {
  /**
   * From OpenSCENARIO class model specification: Order of the NURBS trajectory. This is the order
   * of the curve, not the degree of the polynomials, which will be one less than the order of the
   * curve. Range [2..inf[.
   *
   * @return value of model property order
   */
  public Long getOrder();
  /**
   * From OpenSCENARIO class model specification: Control point vector of the NURBS trajectory. The
   * number of control points must be greater or equal to the order of the curve.
   *
   * @return value of model property controlPoints
   */
  public Iterable<IControlPoint> getControlPoints();
  /**
   * From OpenSCENARIO class model specification: Knot vector of the NURBS trajectory. Knot values
   * must be given in ascending order. The number of knot vector values must be equal to the number
   * of control points plus the order of the curve.
   *
   * @return value of model property knots
   */
  public Iterable<IKnot> getKnots();

  /**
   * Retrieves the size of the list
   *
   * @return the size of the list
   */
  public int getControlPointsSize();
  /**
   * The element at specific index
   *
   * @param index the index of the list
   * @return the element at index
   */
  public IControlPoint getControlPointsAtIndex(int index);
  /**
   * Retrieves the size of the list
   *
   * @return the size of the list
   */
  public int getKnotsSize();
  /**
   * The element at specific index
   *
   * @param index the index of the list
   * @return the element at index
   */
  public IKnot getKnotsAtIndex(int index);
}
