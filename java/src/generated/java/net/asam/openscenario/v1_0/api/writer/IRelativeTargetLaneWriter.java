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
import net.asam.openscenario.v1_0.api.IRelativeTargetLane;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'RelativeTargetLane' From OpenSCENARIO class model specification:
 * Defines the relative lane offset to a reference entity as target for a LaneChangeTarget.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IRelativeTargetLaneWriter extends IRelativeTargetLane, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Reference entity.
   *
   * @param entityRef value of model property entityRef
   */
  public void setEntityRef(INamedReference<IEntity> entityRef);
  /**
   * From OpenSCENARIO class model specification: Signed number of lanes that is offset the
   * reference entity's current lane.
   *
   * @param value value of model property value
   */
  public void setValue(Integer value);

  /**
   * Set a parameter for the attribute entityRef
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToEntityRef(String parameterName);
  /**
   * Set a parameter for the attribute value
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToValue(String parameterName);

  /**
   * Get the parameter for the attribute entityRef
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromEntityRef();
  /**
   * Get the parameter for the attribute value
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromValue();

  /**
   * Retrieves whether the attribute entityRef is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isEntityRefParameterized();
  /**
   * Retrieves whether the attribute value is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isValueParameterized();

  // children

}
