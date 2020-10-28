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
import net.asam.openscenario.v1_0.api.IMiscObject;
import net.asam.openscenario.v1_0.api.MiscObjectCategory;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'MiscObject' From OpenSCENARIO class model specification: Definition of
 * a miscellaneous object type. A miscellaneous object has no controller.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IMiscObjectWriter
    extends ICatalogElementWriter, IMiscObject, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Categorization of the miscellaneous object.
   *
   * @param miscObjectCategory value of model property miscObjectCategory
   */
  public void setMiscObjectCategory(MiscObjectCategory miscObjectCategory);
  /**
   * From OpenSCENARIO class model specification: Mass of the miscellaneous object. Unit: kg; Range:
   * [0..inf[.
   *
   * @param mass value of model property mass
   */
  public void setMass(Double mass);
  /**
   * From OpenSCENARIO class model specification: Name of the miscellaneous object type.
   *
   * @param name value of model property name
   */
  public void setName(String name);
  /**
   * From OpenSCENARIO class model specification: Definition of additional parameters.
   *
   * @param parameterDeclarations value of model property parameterDeclarations
   */
  public void setParameterDeclarations(List<IParameterDeclarationWriter> parameterDeclarations);
  /**
   * From OpenSCENARIO class model specification: Bounding box definition for the miscellaneous
   * object.
   *
   * @param boundingBox value of model property boundingBox
   */
  public void setBoundingBox(IBoundingBoxWriter boundingBox);
  /**
   * From OpenSCENARIO class model specification: Property definitions for the miscellaneous object.
   *
   * @param properties value of model property properties
   */
  public void setProperties(IPropertiesWriter properties);

  /**
   * Set a parameter for the attribute miscObjectCategory
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToMiscObjectCategory(String parameterName);
  /**
   * Set a parameter for the attribute mass
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToMass(String parameterName);
  /**
   * Set a parameter for the attribute name
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToName(String parameterName);

  /**
   * Get the parameter for the attribute miscObjectCategory
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromMiscObjectCategory();
  /**
   * Get the parameter for the attribute mass
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromMass();
  /**
   * Get the parameter for the attribute name
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromName();

  /**
   * Retrieves whether the attribute miscObjectCategory is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isMiscObjectCategoryParameterized();
  /**
   * Retrieves whether the attribute mass is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isMassParameterized();
  /**
   * Retrieves whether the attribute name is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isNameParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: Bounding box definition for the miscellaneous
   * object.
   *
   * @return a writer for model property boundingBox
   */
  public IBoundingBoxWriter getWriterBoundingBox();
  /**
   * From OpenSCENARIO class model specification: Property definitions for the miscellaneous object.
   *
   * @return a writer for model property properties
   */
  public IPropertiesWriter getWriterProperties();

  /**
   * From OpenSCENARIO class model specification: Definition of additional parameters.
   *
   * @return a list of writers for model property parameterDeclarations
   */
  public List<IParameterDeclarationWriter> getWriterParameterDeclarations();
}
