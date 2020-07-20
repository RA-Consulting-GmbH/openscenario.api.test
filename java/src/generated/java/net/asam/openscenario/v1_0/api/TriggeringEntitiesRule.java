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
 * <p>From OpenSCENARIO class model specification: Rules which determine how triggering entities are
 * used to verify a given condition.
 *
 * <p>Values from OpenSCENARIO class model specification:
 *
 * <ul>
 *   <li>One of the triggering entities reaching the position is enough to trigger the lane change.
 *   <li>All listed triggering entities must reach the specifies position in order to start the lane
 *       change.
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public enum TriggeringEntitiesRule {
  ANY("any"),
  ALL("all");

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
  TriggeringEntitiesRule(String literal) {
    this.literal = literal;
  }
  /**
   * The enumeration value from the literal
   *
   * @param literal as defined in OpenSCENARIO
   * @return the enumeration value
   */
  public static TriggeringEntitiesRule getFromLiteral(String literal) {
    if (literal.equals("any")) {
      return ANY;
    } else if (literal.equals("all")) {
      return ALL;
    } else {
      return null;
    }
  }
}
