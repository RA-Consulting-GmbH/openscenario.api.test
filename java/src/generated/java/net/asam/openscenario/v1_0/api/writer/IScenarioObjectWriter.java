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

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'ScenarioObject' From OpenSCENARIO class model specification: A scenario
 * object represents a runtime object that is created from an EntityObject (vehicle type, pedestrian
 * type, miscellaneous object type) and a Controller. Miscellaneous objects must not have a
 * controller.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IScenarioObjectWriter extends IEntityWriter {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Identifier of the scenario object.
   *
   * @return value of model property name
   */
  public String getName();

  /**
   * From OpenSCENARIO class model specification: Identifier of the scenario object.
   *
   * @param name value of model property name
   */
  public void writeToName(String name);

  /**
   * Set a parameter for the attribute name
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToName(String parameterName);

  /**
   * Get the parameter for the attribute name
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromName();

  /**
   * Retrieves whether the attribute name is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isNameParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: The EntityObject (either instance of type Vehicle,
   * Pedestrian or MiscObject).
   *
   * @return a writer for model property entityObject
   */
  public IEntityObjectWriter getEntityObjectWriter();
  /**
   * From OpenSCENARIO class model specification: Controller of the EntityObject instance.
   *
   * @return a writer for model property objectController
   */
  public IObjectControllerWriter getObjectControllerWriter();

  /**
   * From OpenSCENARIO class model specification: The EntityObject (either instance of type Vehicle,
   * Pedestrian or MiscObject).
   *
   * @param entityObjectWriter writer for the model property entityObject
   */
  public void writeToEntityObjectWriter(IEntityObjectWriter entityObjectWriter);
  /**
   * From OpenSCENARIO class model specification: Controller of the EntityObject instance.
   *
   * @param objectControllerWriter writer for the model property objectController
   */
  public void writeToObjectControllerWriter(IObjectControllerWriter objectControllerWriter);
}
