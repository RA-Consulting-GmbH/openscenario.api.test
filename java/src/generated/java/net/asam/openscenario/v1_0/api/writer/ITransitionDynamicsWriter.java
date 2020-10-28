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
import net.asam.openscenario.v1_0.api.DynamicsDimension;
import net.asam.openscenario.v1_0.api.DynamicsShape;
import net.asam.openscenario.v1_0.api.ITransitionDynamics;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'TransitionDynamics' From OpenSCENARIO class model specification:
 * Specifies the dynamics of a value transition and defines how the value changes over time or
 * distance. Different shapes can be used for the transition. Step is an immediate transition, i.e.
 * a jump from the current current value to the target value. In this case value for time or
 * distance must be 0. Linear will result in a linear transition between the start and end value. A
 * smooth transition is only given with cubic and sinusoidal shape.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ITransitionDynamicsWriter extends ITransitionDynamics, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: The shape of the transition function f(x) between
   * current and target value.
   *
   * @param dynamicsShape value of model property dynamicsShape
   */
  public void setDynamicsShape(DynamicsShape dynamicsShape);
  /**
   * From OpenSCENARIO class model specification: The value for a predefined rate (Unit: delta/s),
   * time (Unit: s) or distance (Unit: m) to acquire the target value. Range: [0..inf[.
   *
   * @param value value of model property value
   */
  public void setValue(Double value);
  /**
   * From OpenSCENARIO class model specification: The semantics of the value: 'rate', 'time' or
   * 'distance'.
   *
   * @param dynamicsDimension value of model property dynamicsDimension
   */
  public void setDynamicsDimension(DynamicsDimension dynamicsDimension);

  /**
   * Set a parameter for the attribute dynamicsShape
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToDynamicsShape(String parameterName);
  /**
   * Set a parameter for the attribute value
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToValue(String parameterName);
  /**
   * Set a parameter for the attribute dynamicsDimension
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToDynamicsDimension(String parameterName);

  /**
   * Get the parameter for the attribute dynamicsShape
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromDynamicsShape();
  /**
   * Get the parameter for the attribute value
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromValue();
  /**
   * Get the parameter for the attribute dynamicsDimension
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromDynamicsDimension();

  /**
   * Retrieves whether the attribute dynamicsShape is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isDynamicsShapeParameterized();
  /**
   * Retrieves whether the attribute value is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isValueParameterized();
  /**
   * Retrieves whether the attribute dynamicsDimension is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isDynamicsDimensionParameterized();

  // children

}
