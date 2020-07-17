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
 * <p>From OpenSCENARIO class model specification: Strategy for path selection between waypoints in
 * a route.
 *
 * <p>Values from OpenSCENARIO class model specification:
 *
 * <ul>
 *   <li>Fastest route.
 *   <li>Shortest route.
 *   <li>Route with least number of intersections.
 *   <li>Random route.
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public enum RouteStrategy {
  FASTEST("fastest"),
  SHORTEST("shortest"),
  LEAST_INTERSECTIONS("leastIntersections"),
  RANDOM("random");

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
  RouteStrategy(String literal) {
    this.literal = literal;
  }
  /**
   * The enumeration value from the literal
   *
   * @param literal as defined in OpenSCENARIO
   * @return the enumeration value
   */
  public static RouteStrategy getFromLiteral(String literal) {
    if (literal.equals("fastest")) {
      return FASTEST;
    } else if (literal.equals("shortest")) {
      return SHORTEST;
    } else if (literal.equals("leastIntersections")) {
      return LEAST_INTERSECTIONS;
    } else if (literal.equals("random")) {
      return RANDOM;
    } else {
      return null;
    }
  }
}
