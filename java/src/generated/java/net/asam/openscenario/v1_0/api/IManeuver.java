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
 * <p>From OpenSCENARIO class model specification: A container for Events. Can be stored in a
 * maneuver catalog. Allows declaration of parameters within its scope.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IManeuver extends IStoryboardElement, ICatalogElement {
  /**
   * From OpenSCENARIO class model specification: Name of the maneuver.
   *
   * @return value of model property name
   */
  public String getName();
  /**
   * From OpenSCENARIO class model specification: Definition of additional parameters.
   *
   * @return value of model property parameterDeclarations
   */
  public Iterable<IParameterDeclaration> getParameterDeclarations();
  /**
   * From OpenSCENARIO class model specification: List of events that are comprised by the maneuver.
   *
   * @return value of model property events
   */
  public Iterable<IEvent> getEvents();

  /**
   * Retrieves the size of the list
   *
   * @return the size of the list
   */
  public int getParameterDeclarationsSize();
  /**
   * The element at specific index
   *
   * @param index the index of the list
   * @return the element at index
   */
  public IParameterDeclaration getParameterDeclarationsAtIndex(int index);
  /**
   * Retrieves the size of the list
   *
   * @return the size of the list
   */
  public int getEventsSize();
  /**
   * The element at specific index
   *
   * @param index the index of the list
   * @return the element at index
   */
  public IEvent getEventsAtIndex(int index);
}
