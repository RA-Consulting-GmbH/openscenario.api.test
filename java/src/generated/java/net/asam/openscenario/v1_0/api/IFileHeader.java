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
 * <p>From OpenSCENARIO class model specification: File header used in OpenSCENARIO files, e.g.
 * scenario file or catalog files.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IFileHeader extends IOpenScenarioModelElement {

  /**
   * From OpenSCENARIO class model specification: Major OpenSCENARIO revision, this file conforms to
   * Range: [0..inf[.
   *
   * @return value of model property revMajor
   */
  public Integer getRevMajor();

  /**
   * From OpenSCENARIO class model specification: Minor OpenSCENARIO revision, this file conforms to
   * Range: [0..inf[.
   *
   * @return value of model property revMinor
   */
  public Integer getRevMinor();

  /**
   * From OpenSCENARIO class model specification: User specific date and time recommended:
   * YYYY-MM-DDThh:mm:ss.
   *
   * @return value of model property date
   */
  public java.util.Date getDate();

  /**
   * From OpenSCENARIO class model specification: User specific description.
   *
   * @return value of model property description
   */
  public String getDescription();

  /**
   * From OpenSCENARIO class model specification: Author of the scenario or the catalog.
   *
   * @return value of model property author
   */
  public String getAuthor();
}
