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

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Route' From OpenSCENARIO class model specification: A route is defined
 * in a scenario or in a catalog. It represents a continuous path throughout the road network,
 * defined by a series of waypoints.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IRouteWriter extends ICatalogElementWriter {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Name of the route. Required in catalogs.
   *
   * @return value of model property name
   */
  public String getName();
  /**
   * From OpenSCENARIO class model specification: In a closed route, the last waypoint is followed
   * by the first waypoint to create a closed route.
   *
   * @return value of model property closed
   */
  public Boolean getClosed();

  /**
   * From OpenSCENARIO class model specification: Name of the route. Required in catalogs.
   *
   * @param name value of model property name
   */
  public void writeToName(String name);
  /**
   * From OpenSCENARIO class model specification: In a closed route, the last waypoint is followed
   * by the first waypoint to create a closed route.
   *
   * @param closed value of model property closed
   */
  public void writeToClosed(Boolean closed);

  /**
   * Set a parameter for the attribute name
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToName(String parameterName);
  /**
   * Set a parameter for the attribute closed
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToClosed(String parameterName);

  /**
   * Get the parameter for the attribute name
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromName();
  /**
   * Get the parameter for the attribute closed
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromClosed();

  /**
   * Retrieves whether the attribute name is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isNameParameterized();
  /**
   * Retrieves whether the attribute closed is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isClosedParameterized();

  // children

  /**
   * From OpenSCENARIO class model specification: Definition of additional parameters.
   *
   * @return a list of writers for model property parameterDeclarations
   */
  public List<IParameterDeclarationWriter> getParameterDeclarationsWriter();
  /**
   * From OpenSCENARIO class model specification: At least two waypoints are needed to define a
   * route.
   *
   * @return a list of writers for model property waypoints
   */
  public List<IWaypointWriter> getWaypointsWriter();

  /**
   * From OpenSCENARIO class model specification: Definition of additional parameters.
   *
   * @param parameterDeclarationsWriters list of writers for the model property
   *     parameterDeclarations
   */
  public void setParameterDeclarationsWriter(
      List<IParameterDeclarationWriter> parameterDeclarationsWriters);
  /**
   * From OpenSCENARIO class model specification: At least two waypoints are needed to define a
   * route.
   *
   * @param waypointsWriters list of writers for the model property waypoints
   */
  public void setWaypointsWriter(List<IWaypointWriter> waypointsWriters);
}
