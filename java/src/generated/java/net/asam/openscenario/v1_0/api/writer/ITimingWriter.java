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

import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.v1_0.api.ReferenceContext;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Timing' From OpenSCENARIO class model specification: Adjust the timing
 * within time references by scale and offset.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ITimingWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Definition of time value context as either
   * absolute or relative.
   *
   * @return value of model property domainAbsoluteRelative
   */
  public ReferenceContext getDomainAbsoluteRelative();
  /**
   * From OpenSCENARIO class model specification: Scaling factor for time values. While values
   * smaller than 1.0 represent negative scaling, values larger than 1.0 will result in positive
   * scaling. A value of 1.0 means no scaling. Range: ]0..inf[.
   *
   * @return value of model property scale
   */
  public Double getScale();
  /**
   * From OpenSCENARIO class model specification: Introduction of a global offset for all time
   * values. Unit: s; Range: ]-inf..inf[.
   *
   * @return value of model property offset
   */
  public Double getOffset();

  /**
   * From OpenSCENARIO class model specification: Definition of time value context as either
   * absolute or relative.
   *
   * @param domainAbsoluteRelative value of model property domainAbsoluteRelative
   */
  public void writeToDomainAbsoluteRelative(ReferenceContext domainAbsoluteRelative);
  /**
   * From OpenSCENARIO class model specification: Scaling factor for time values. While values
   * smaller than 1.0 represent negative scaling, values larger than 1.0 will result in positive
   * scaling. A value of 1.0 means no scaling. Range: ]0..inf[.
   *
   * @param scale value of model property scale
   */
  public void writeToScale(Double scale);
  /**
   * From OpenSCENARIO class model specification: Introduction of a global offset for all time
   * values. Unit: s; Range: ]-inf..inf[.
   *
   * @param offset value of model property offset
   */
  public void writeToOffset(Double offset);

  /**
   * Set a parameter for the attribute domainAbsoluteRelative
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToDomainAbsoluteRelative(String parameterName);
  /**
   * Set a parameter for the attribute scale
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToScale(String parameterName);
  /**
   * Set a parameter for the attribute offset
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToOffset(String parameterName);

  /**
   * Get the parameter for the attribute domainAbsoluteRelative
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromDomainAbsoluteRelative();
  /**
   * Get the parameter for the attribute scale
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromScale();
  /**
   * Get the parameter for the attribute offset
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromOffset();

  /**
   * Retrieves whether the attribute domainAbsoluteRelative is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isDomainAbsoluteRelativeParameterized();
  /**
   * Retrieves whether the attribute scale is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isScaleParameterized();
  /**
   * Retrieves whether the attribute offset is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isOffsetParameterized();

  // children

}
