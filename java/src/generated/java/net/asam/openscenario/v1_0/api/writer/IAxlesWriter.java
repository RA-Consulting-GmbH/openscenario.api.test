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
import net.asam.openscenario.v1_0.api.IAxles;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'Axles' From OpenSCENARIO class model specification: A set of the axles
 * of a vehicle. A vehicle must have a front axle and a rear axle. It might have additional axles.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IAxlesWriter extends IAxles, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Front axle.
   *
   * @param frontAxle value of model property frontAxle
   */
  public void setFrontAxle(IAxleWriter frontAxle);
  /**
   * From OpenSCENARIO class model specification: Rear axle.
   *
   * @param rearAxle value of model property rearAxle
   */
  public void setRearAxle(IAxleWriter rearAxle);
  /**
   * From OpenSCENARIO class model specification: A list of optional additional axles.
   *
   * @param additionalAxles value of model property additionalAxles
   */
  public void setAdditionalAxles(List<IAxleWriter> additionalAxles);

  // children
  /**
   * From OpenSCENARIO class model specification: Front axle.
   *
   * @return a writer for model property frontAxle
   */
  public IAxleWriter getWriterFrontAxle();
  /**
   * From OpenSCENARIO class model specification: Rear axle.
   *
   * @return a writer for model property rearAxle
   */
  public IAxleWriter getWriterRearAxle();

  /**
   * From OpenSCENARIO class model specification: A list of optional additional axles.
   *
   * @return a list of writers for model property additionalAxles
   */
  public List<IAxleWriter> getWriterAdditionalAxles();
}
