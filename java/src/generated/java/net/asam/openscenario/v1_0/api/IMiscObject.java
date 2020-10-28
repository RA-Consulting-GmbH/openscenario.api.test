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
 * <p>From OpenSCENARIO class model specification: Definition of a miscellaneous object type. A
 * miscellaneous object has no controller.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IMiscObject extends ICatalogElement {
  /**
   * From OpenSCENARIO class model specification: Categorization of the miscellaneous object.
   *
   * @return value of model property miscObjectCategory
   */
  public MiscObjectCategory getMiscObjectCategory();
  /**
   * From OpenSCENARIO class model specification: Mass of the miscellaneous object. Unit: kg; Range:
   * [0..inf[.
   *
   * @return value of model property mass
   */
  public Double getMass();
  /**
   * From OpenSCENARIO class model specification: Name of the miscellaneous object type.
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
   * From OpenSCENARIO class model specification: Bounding box definition for the miscellaneous
   * object.
   *
   * @return value of model property boundingBox
   */
  public IBoundingBox getBoundingBox();
  /**
   * From OpenSCENARIO class model specification: Property definitions for the miscellaneous object.
   *
   * @return value of model property properties
   */
  public IProperties getProperties();

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
}
