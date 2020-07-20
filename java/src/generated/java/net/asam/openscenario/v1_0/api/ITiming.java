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

import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>From OpenSCENARIO class model specification: Adjust the timing within time references by scale
 * and offset.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ITiming extends IOpenScenarioModelElement {
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
}
