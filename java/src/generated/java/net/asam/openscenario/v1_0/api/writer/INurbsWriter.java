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
import net.asam.openscenario.api.writer.IOpenScenarioElementWriter;
import net.asam.openscenario.v1_0.api.INurbs;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Nurbs' From OpenSCENARIO class model specification: Non-uniform
 * rational b-spline (NURBS) trajectory specification.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface INurbsWriter extends INurbs, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Order of the NURBS trajectory. This is the order
   * of the curve, not the degree of the polynomials, which will be one less than the order of the
   * curve. Range [2..inf[.
   *
   * @param order value of model property order
   */
  public void setOrder(Long order);
  /**
   * From OpenSCENARIO class model specification: Control point vector of the NURBS trajectory. The
   * number of control points must be greater or equal to the order of the curve.
   *
   * @param controlPoints value of model property controlPoints
   */
  public void setControlPoints(List<IControlPointWriter> controlPoints);
  /**
   * From OpenSCENARIO class model specification: Knot vector of the NURBS trajectory. Knot values
   * must be given in ascending order. The number of knot vector values must be equal to the number
   * of control points plus the order of the curve.
   *
   * @param knots value of model property knots
   */
  public void setKnots(List<IKnotWriter> knots);

  /**
   * Set a parameter for the attribute order
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToOrder(String parameterName);

  /**
   * Get the parameter for the attribute order
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromOrder();

  /**
   * Retrieves whether the attribute order is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isOrderParameterized();

  // children

  /**
   * From OpenSCENARIO class model specification: Control point vector of the NURBS trajectory. The
   * number of control points must be greater or equal to the order of the curve.
   *
   * @return a list of writers for model property controlPoints
   */
  public List<IControlPointWriter> getWriterControlPoints();
  /**
   * From OpenSCENARIO class model specification: Knot vector of the NURBS trajectory. Knot values
   * must be given in ascending order. The number of knot vector values must be equal to the number
   * of control points plus the order of the curve.
   *
   * @return a list of writers for model property knots
   */
  public List<IKnotWriter> getWriterKnots();
}
