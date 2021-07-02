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
import net.asam.openscenario.v1_0.api.IFileHeader;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'FileHeader' From OpenSCENARIO class model specification: File header
 * used in OpenSCENARIO files, e.g. scenario file or catalog files.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IFileHeaderWriter extends IFileHeader, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Major OpenSCENARIO revision, this file conforms to
   * Range: [0..inf[.
   *
   * @param revMajor value of model property revMajor
   */
  public void setRevMajor(Integer revMajor);
  /**
   * From OpenSCENARIO class model specification: Minor OpenSCENARIO revision, this file conforms to
   * Range: [0..inf[.
   *
   * @param revMinor value of model property revMinor
   */
  public void setRevMinor(Integer revMinor);
  /**
   * From OpenSCENARIO class model specification: User specific date and time recommended:
   * YYYY-MM-DDThh:mm:ss.
   *
   * @param date value of model property date
   */
  public void setDate(java.util.Date date);
  /**
   * From OpenSCENARIO class model specification: User specific description.
   *
   * @param description value of model property description
   */
  public void setDescription(String description);
  /**
   * From OpenSCENARIO class model specification: Author of the scenario or the catalog.
   *
   * @param author value of model property author
   */
  public void setAuthor(String author);

  /**
   * Set a parameter for the attribute revMajor
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToRevMajor(String parameterName);
  /**
   * Set a parameter for the attribute revMinor
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToRevMinor(String parameterName);
  /**
   * Set a parameter for the attribute date
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToDate(String parameterName);
  /**
   * Set a parameter for the attribute description
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToDescription(String parameterName);
  /**
   * Set a parameter for the attribute author
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToAuthor(String parameterName);

  /**
   * Get the parameter for the attribute revMajor
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromRevMajor();
  /**
   * Get the parameter for the attribute revMinor
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromRevMinor();
  /**
   * Get the parameter for the attribute date
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromDate();
  /**
   * Get the parameter for the attribute description
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromDescription();
  /**
   * Get the parameter for the attribute author
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromAuthor();

  /**
   * Retrieves whether the attribute revMajor is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isRevMajorParameterized();
  /**
   * Retrieves whether the attribute revMinor is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isRevMinorParameterized();
  /**
   * Retrieves whether the attribute date is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isDateParameterized();
  /**
   * Retrieves whether the attribute description is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isDescriptionParameterized();
  /**
   * Retrieves whether the attribute author is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isAuthorParameterized();

  // children

}
