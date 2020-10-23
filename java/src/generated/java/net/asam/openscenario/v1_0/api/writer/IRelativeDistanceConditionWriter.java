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
import net.asam.openscenario.v1_0.api.RelativeDistanceType;
import net.asam.openscenario.v1_0.api.Rule;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'RelativeDistanceCondition' From OpenSCENARIO class model specification:
 * The current relative distance of a triggering entity/entities to a reference entity is compared
 * to a given value. The logical operator used for comparison is defined in the rule attribute.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IRelativeDistanceConditionWriter extends IOpenScenarioModelElement {

  // Getters and setter for all attributes
  /**
   * From OpenSCENARIO class model specification: Reference entity.
   *
   * @return value of model property entityRef
   */
  public INamedReference<IEntity> getEntityRef();
  /**
   * From OpenSCENARIO class model specification: The domain the distance is calculated in.
   *
   * @return value of model property relativeDistanceType
   */
  public RelativeDistanceType getRelativeDistanceType();
  /**
   * From OpenSCENARIO class model specification: The distance value. Unit: m; Range: [0..inf[.
   *
   * @return value of model property value
   */
  public Double getValue();
  /**
   * From OpenSCENARIO class model specification: True: distance is measured between closest
   * bounding box points. False: reference point distance is used.
   *
   * @return value of model property freespace
   */
  public Boolean getFreespace();
  /**
   * From OpenSCENARIO class model specification: The operator (less, greater, equal).
   *
   * @return value of model property rule
   */
  public Rule getRule();

  /**
   * From OpenSCENARIO class model specification: Reference entity.
   *
   * @param entityRef value of model property entityRef
   */
  public void writeToEntityRef(INamedReference<IEntity> entityRef);
  /**
   * From OpenSCENARIO class model specification: The domain the distance is calculated in.
   *
   * @param relativeDistanceType value of model property relativeDistanceType
   */
  public void writeToRelativeDistanceType(RelativeDistanceType relativeDistanceType);
  /**
   * From OpenSCENARIO class model specification: The distance value. Unit: m; Range: [0..inf[.
   *
   * @param value value of model property value
   */
  public void writeToValue(Double value);
  /**
   * From OpenSCENARIO class model specification: True: distance is measured between closest
   * bounding box points. False: reference point distance is used.
   *
   * @param freespace value of model property freespace
   */
  public void writeToFreespace(Boolean freespace);
  /**
   * From OpenSCENARIO class model specification: The operator (less, greater, equal).
   *
   * @param rule value of model property rule
   */
  public void writeToRule(Rule rule);

  /**
   * Set a parameter for the attribute entityRef
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToEntityRef(String parameterName);
  /**
   * Set a parameter for the attribute relativeDistanceType
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToRelativeDistanceType(String parameterName);
  /**
   * Set a parameter for the attribute value
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToValue(String parameterName);
  /**
   * Set a parameter for the attribute freespace
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToFreespace(String parameterName);
  /**
   * Set a parameter for the attribute rule
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToRule(String parameterName);

  /**
   * Get the parameter for the attribute entityRef
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromEntityRef();
  /**
   * Get the parameter for the attribute relativeDistanceType
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromRelativeDistanceType();
  /**
   * Get the parameter for the attribute value
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromValue();
  /**
   * Get the parameter for the attribute freespace
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromFreespace();
  /**
   * Get the parameter for the attribute rule
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromRule();

  /**
   * Retrieves whether the attribute entityRef is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isEntityRefParameterized();
  /**
   * Retrieves whether the attribute relativeDistanceType is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isRelativeDistanceTypeParameterized();
  /**
   * Retrieves whether the attribute value is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isValueParameterized();
  /**
   * Retrieves whether the attribute freespace is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isFreespaceParameterized();
  /**
   * Retrieves whether the attribute rule is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isRuleParameterized();

  // children

}
