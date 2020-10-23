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
import net.asam.openscenario.api.IOpenScenarioModelElement;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Axles' From OpenSCENARIO class model specification: A set of the axles
 * of a vehicle. A vehicle must have a front axle and a rear axle. It might have additional axles.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IAxlesWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: Front axle.
   *
   * @return a writer for model property frontAxle
   */
  public IAxleWriter getFrontAxleWriter();
  /**
   * From OpenSCENARIO class model specification: Rear axle.
   *
   * @return a writer for model property rearAxle
   */
  public IAxleWriter getRearAxleWriter();

  /**
   * From OpenSCENARIO class model specification: Front axle.
   *
   * @param frontAxleWriter writer for the model property frontAxle
   */
  public void writeToFrontAxleWriter(IAxleWriter frontAxleWriter);
  /**
   * From OpenSCENARIO class model specification: Rear axle.
   *
   * @param rearAxleWriter writer for the model property rearAxle
   */
  public void writeToRearAxleWriter(IAxleWriter rearAxleWriter);

  /**
   * From OpenSCENARIO class model specification: A list of optional additional axles.
   *
   * @return a list of writers for model property additionalAxles
   */
  public List<IAxleWriter> getAdditionalAxlesWriter();

  /**
   * From OpenSCENARIO class model specification: A list of optional additional axles.
   *
   * @param additionalAxlesWriters list of writers for the model property additionalAxles
   */
  public void setAdditionalAxlesWriter(List<IAxleWriter> additionalAxlesWriters);
}
