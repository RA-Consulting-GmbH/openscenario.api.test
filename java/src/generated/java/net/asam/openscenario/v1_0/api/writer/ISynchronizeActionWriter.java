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
import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.v1_0.api.IEntity;
import net.asam.openscenario.v1_0.api.ISynchronizeAction;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'SynchronizeAction' From OpenSCENARIO class model specification:
 * Synchronizes an entity's arrival at a destination with a master entity. Both entities are
 * provided with their own reference position which shall be reached at the same time. Final speed
 * can be specified. Note that the reference positions can be different or identical.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ISynchronizeActionWriter extends ISynchronizeAction, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: A reference to the master entity.
   *
   * @param masterEntityRef value of model property masterEntityRef
   */
  public void setMasterEntityRef(INamedReference<IEntity> masterEntityRef);
  /**
   * From OpenSCENARIO class model specification: The target position for the master entity.
   *
   * @param targetPositionMaster value of model property targetPositionMaster
   */
  public void setTargetPositionMaster(IPositionWriter targetPositionMaster);
  /**
   * From OpenSCENARIO class model specification: The target position for the entity that should be
   * synchronized.
   *
   * @param targetPosition value of model property targetPosition
   */
  public void setTargetPosition(IPositionWriter targetPosition);
  /**
   * From OpenSCENARIO class model specification: The speed that the synchronized entity should have
   * at its target position.
   *
   * @param finalSpeed value of model property finalSpeed
   */
  public void setFinalSpeed(IFinalSpeedWriter finalSpeed);

  /**
   * Set a parameter for the attribute masterEntityRef
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToMasterEntityRef(String parameterName);

  /**
   * Get the parameter for the attribute masterEntityRef
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromMasterEntityRef();

  /**
   * Retrieves whether the attribute masterEntityRef is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isMasterEntityRefParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: The target position for the master entity.
   *
   * @return a writer for model property targetPositionMaster
   */
  public IPositionWriter getWriterTargetPositionMaster();
  /**
   * From OpenSCENARIO class model specification: The target position for the entity that should be
   * synchronized.
   *
   * @return a writer for model property targetPosition
   */
  public IPositionWriter getWriterTargetPosition();
  /**
   * From OpenSCENARIO class model specification: The speed that the synchronized entity should have
   * at its target position.
   *
   * @return a writer for model property finalSpeed
   */
  public IFinalSpeedWriter getWriterFinalSpeed();
}
