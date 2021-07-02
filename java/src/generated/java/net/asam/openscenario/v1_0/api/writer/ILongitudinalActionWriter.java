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
import net.asam.openscenario.v1_0.api.ILongitudinalAction;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'LongitudinalAction' From OpenSCENARIO class model specification:
 * Controls the longitudinal behavior of an entity.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ILongitudinalActionWriter extends ILongitudinalAction, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: This action describes the transition between the
   * current longitudinal speed of an entity and its target speed.
   *
   * @param speedAction value of model property speedAction
   */
  public void setSpeedAction(ISpeedActionWriter speedAction);
  /**
   * From OpenSCENARIO class model specification: This Action defines a continuously kept
   * longitudinal distance to a specific entity.
   *
   * @param longitudinalDistanceAction value of model property longitudinalDistanceAction
   */
  public void setLongitudinalDistanceAction(
      ILongitudinalDistanceActionWriter longitudinalDistanceAction);

  // children
  /**
   * From OpenSCENARIO class model specification: This action describes the transition between the
   * current longitudinal speed of an entity and its target speed.
   *
   * @return a writer for model property speedAction
   */
  public ISpeedActionWriter getWriterSpeedAction();
  /**
   * From OpenSCENARIO class model specification: This Action defines a continuously kept
   * longitudinal distance to a specific entity.
   *
   * @return a writer for model property longitudinalDistanceAction
   */
  public ILongitudinalDistanceActionWriter getWriterLongitudinalDistanceAction();
}
