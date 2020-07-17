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

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>From OpenSCENARIO class model specification: Function type used to represent the change of a
 * given variable over time or distance.
 *
 * <p>Values from OpenSCENARIO class model specification:
 *
 * <ul>
 *   <li>Value changes in a linear function: f(x) = f_0 + rate * x.
 *   <li>Cubical transition f(x)=A*x^3+B*x^2+C*x+D with the constraint that the gradient must be
 *       zero at start and end.
 *   <li>Sinusoidal transition f(x)=A*sin(x)+B with the constraint that the gradient must be zero at
 *       start and end.
 *   <li>Step transition.
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public enum DynamicsShape {
  LINEAR("linear"),
  CUBIC("cubic"),
  SINUSOIDAL("sinusoidal"),
  STEP("step");

  private final String literal;

  /**
   * The literal from this enumeration value.
   *
   * @return the literal as defined in OpenSCENARIO
   */
  public String getLiteral() {
    return literal;
  }

  /**
   * Constructor using the literal
   *
   * @param the literal as defined in OpenSCENARIO
   */
  DynamicsShape(String literal) {
    this.literal = literal;
  }
  /**
   * The enumeration value from the literal
   *
   * @param literal as defined in OpenSCENARIO
   * @return the enumeration value
   */
  public static DynamicsShape getFromLiteral(String literal) {
    if (literal.equals("linear")) {
      return LINEAR;
    } else if (literal.equals("cubic")) {
      return CUBIC;
    } else if (literal.equals("sinusoidal")) {
      return SINUSOIDAL;
    } else if (literal.equals("step")) {
      return STEP;
    } else {
      return null;
    }
  }
}
