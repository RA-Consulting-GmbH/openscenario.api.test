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
 * <p>From OpenSCENARIO class model specification: Definition of cloud states.
 *
 * <p>Values from OpenSCENARIO class model specification:
 *
 * <ul>
 *   <li>Turns off the sky visualization.
 *   <li>Cloud free conditions.
 *   <li>Cloudy. There are more clouds than sunshine.
 *   <li>Overcast sky. Dull and gray looking.
 *   <li>Rain clouds.
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public enum CloudState {
  SKY_OFF("skyOff"),
  FREE("free"),
  CLOUDY("cloudy"),
  OVERCAST("overcast"),
  RAINY("rainy");

  private final String literal;

  /**
   * The literal from this enumeration value.
   *
   * @return the literal as defined in OpenSCENARIO
   */
  public String getLiteral() {
    return this.literal;
  }

  /**
   * Constructor using the literal
   *
   * @param the literal as defined in OpenSCENARIO
   */
  CloudState(String literal) {
    this.literal = literal;
  }
  /**
   * The enumeration value from the literal
   *
   * @param literal as defined in OpenSCENARIO
   * @return the enumeration value
   */
  public static CloudState getFromLiteral(String literal) {
    if (literal.equals("skyOff")) {
      return SKY_OFF;
    } else if (literal.equals("free")) {
      return FREE;
    } else if (literal.equals("cloudy")) {
      return CLOUDY;
    } else if (literal.equals("overcast")) {
      return OVERCAST;
    } else if (literal.equals("rainy")) {
      return RAINY;
    } else {
      return null;
    }
  }
}
