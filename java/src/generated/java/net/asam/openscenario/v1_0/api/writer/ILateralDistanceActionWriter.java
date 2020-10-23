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
import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.v1_0.api.IEntity;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'LateralDistanceAction' From OpenSCENARIO class model specification:
 * This action describes a continuously kept lateral distance of an entity with respect to a
 * reference entity. The distance can be maintained by using a controller, requiring limiting values
 * for lateral acceleration, lateral deceleration and lateral speed. Without this limiting
 * parameters lateral distance is kept rigid. Distance measurement could either be calculated from
 * the distance between the entities' reference points or from the free space between the entities'
 * bounding boxes.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ILateralDistanceActionWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Name of the reference entity the lateral distance
   * shall be kept to.
   *
   * @return value of model property entityRef
   */
  public INamedReference<IEntity> getEntityRef();
  /**
   * From OpenSCENARIO class model specification: Lateral distance value. Unit: m; Range: [0..inf[.
   *
   * @return value of model property distance
   */
  public Double getDistance();
  /**
   * From OpenSCENARIO class model specification: True: Lateral distance is measured using the
   * distance between closest bounding box points. False: Reference point distance is used.
   *
   * @return value of model property freespace
   */
  public Boolean getFreespace();
  /**
   * From OpenSCENARIO class model specification: If false, the action ends when the target distance
   * is reached. If true it does not end and can only be stopped.
   *
   * @return value of model property continuous
   */
  public Boolean getContinuous();

  /**
   * From OpenSCENARIO class model specification: Name of the reference entity the lateral distance
   * shall be kept to.
   *
   * @param entityRef value of model property entityRef
   */
  public void writeToEntityRef(INamedReference<IEntity> entityRef);
  /**
   * From OpenSCENARIO class model specification: Lateral distance value. Unit: m; Range: [0..inf[.
   *
   * @param distance value of model property distance
   */
  public void writeToDistance(Double distance);
  /**
   * From OpenSCENARIO class model specification: True: Lateral distance is measured using the
   * distance between closest bounding box points. False: Reference point distance is used.
   *
   * @param freespace value of model property freespace
   */
  public void writeToFreespace(Boolean freespace);
  /**
   * From OpenSCENARIO class model specification: If false, the action ends when the target distance
   * is reached. If true it does not end and can only be stopped.
   *
   * @param continuous value of model property continuous
   */
  public void writeToContinuous(Boolean continuous);

  /**
   * Set a parameter for the attribute entityRef
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToEntityRef(String parameterName);
  /**
   * Set a parameter for the attribute distance
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToDistance(String parameterName);
  /**
   * Set a parameter for the attribute freespace
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToFreespace(String parameterName);
  /**
   * Set a parameter for the attribute continuous
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToContinuous(String parameterName);

  /**
   * Get the parameter for the attribute entityRef
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromEntityRef();
  /**
   * Get the parameter for the attribute distance
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromDistance();
  /**
   * Get the parameter for the attribute freespace
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromFreespace();
  /**
   * Get the parameter for the attribute continuous
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromContinuous();

  /**
   * Retrieves whether the attribute entityRef is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isEntityRefParameterized();
  /**
   * Retrieves whether the attribute distance is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isDistanceParameterized();
  /**
   * Retrieves whether the attribute freespace is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isFreespaceParameterized();
  /**
   * Retrieves whether the attribute continuous is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isContinuousParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: Parameter that assigns either unlimited dynamics
   * (if omitted) or limited maxAcceleration/maxDeceleration/maxSpeed to the action.
   *
   * @return a writer for model property dynamicConstraints
   */
  public IDynamicConstraintsWriter getDynamicConstraintsWriter();

  /**
   * From OpenSCENARIO class model specification: Parameter that assigns either unlimited dynamics
   * (if omitted) or limited maxAcceleration/maxDeceleration/maxSpeed to the action.
   *
   * @param dynamicConstraintsWriter writer for the model property dynamicConstraints
   */
  public void writeToDynamicConstraintsWriter(IDynamicConstraintsWriter dynamicConstraintsWriter);
}
