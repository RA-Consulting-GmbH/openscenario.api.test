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
import net.asam.openscenario.v1_0.api.ITimeToCollisionConditionTarget;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'TimeToCollisionConditionTarget' From OpenSCENARIO class model
 * specification: Target position used in the TimeToCollisionCondition. Can be defined as either an
 * explicit position, or the position of a reference entity.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ITimeToCollisionConditionTargetWriter
    extends ITimeToCollisionConditionTarget, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Position.
   *
   * @param position value of model property position
   */
  public void setPosition(IPositionWriter position);
  /**
   * From OpenSCENARIO class model specification: Reference entity.
   *
   * @param entityRef value of model property entityRef
   */
  public void setEntityRef(IEntityRefWriter entityRef);

  // children
  /**
   * From OpenSCENARIO class model specification: Position.
   *
   * @return a writer for model property position
   */
  public IPositionWriter getWriterPosition();
  /**
   * From OpenSCENARIO class model specification: Reference entity.
   *
   * @return a writer for model property entityRef
   */
  public IEntityRefWriter getWriterEntityRef();
}
