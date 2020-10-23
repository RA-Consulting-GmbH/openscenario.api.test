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

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'AcquirePositionAction' From OpenSCENARIO class model specification:
 * Controls the entity to acquire a target position.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IAcquirePositionActionWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: A position to acquire.
   *
   * @return a writer for model property position
   */
  public IPositionWriter getPositionWriter();

  /**
   * From OpenSCENARIO class model specification: A position to acquire.
   *
   * @param positionWriter writer for the model property position
   */
  public void writeToPositionWriter(IPositionWriter positionWriter);
}
