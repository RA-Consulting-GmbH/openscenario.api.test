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
import net.asam.openscenario.v1_0.api.ITrafficSwarmAction;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'TrafficSwarmAction' From OpenSCENARIO class model specification:
 * Defines swarm traffic within an elliptical planview around a given central entity. The
 * innerRadius defines the minimum distance between the central vehicle and swarm traffic. The
 * latter is set up in the free space between the circular area defined by innerRadius and the
 * outline of the ellipsis defined by the two semi axis attributes. While vehicles are created in
 * this area, they are removed if they leave it crossing the it ellipsis’ outline. Within the
 * innerRadius, vehicles are neither set up nor removed. Optionally, the swarm area can be
 * longitudinally offset to the central scenario object.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface ITrafficSwarmActionWriter extends ITrafficSwarmAction, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Shape of the swarm traffic distribution area is
   * given as an ellipsis around a central entity. SemiMajorAxis defines the half length of the
   * major axis of this ellipsis. Unit: m; Range: [0..inf[.
   *
   * @param semiMajorAxis value of model property semiMajorAxis
   */
  public void setSemiMajorAxis(Double semiMajorAxis);
  /**
   * From OpenSCENARIO class model specification: Shape of the swarm traffic distribution area is
   * given as an ellipsis around a central entity. SemiMinorAxis defines the half length of the
   * minor axis of this ellipsis. Unit: m; Range: [0..inf[.
   *
   * @param semiMinorAxis value of model property semiMinorAxis
   */
  public void setSemiMinorAxis(Double semiMinorAxis);
  /**
   * From OpenSCENARIO class model specification: Radius of the inner circular area around the
   * central entity. Unit: m; Range: [0..inf[.
   *
   * @param innerRadius value of model property innerRadius
   */
  public void setInnerRadius(Double innerRadius);
  /**
   * From OpenSCENARIO class model specification: Offset in longitudinal direction related to the
   * x-axis of the central entity. Unit: m;.
   *
   * @param offset value of model property offset
   */
  public void setOffset(Double offset);
  /**
   * From OpenSCENARIO class model specification: The maximum number of vehicles surrounding the
   * central entity. Depending on the current road situation less than numberOfVehicles might be set
   * up. Range: [0..inf[.
   *
   * @param numberOfVehicles value of model property numberOfVehicles
   */
  public void setNumberOfVehicles(Long numberOfVehicles);
  /**
   * From OpenSCENARIO class model specification: The optional starting velocity of a created
   * entity. Unit: m/s; Range: [0..inf[.
   *
   * @param velocity value of model property velocity
   */
  public void setVelocity(Double velocity);
  /**
   * From OpenSCENARIO class model specification: The entity that represents the center of a swarm.
   *
   * @param centralObject value of model property centralObject
   */
  public void setCentralObject(ICentralSwarmObjectWriter centralObject);
  /**
   * From OpenSCENARIO class model specification: Specifies properties of autonomous traffic with
   * respect to vehicle and driver distributions.
   *
   * @param trafficDefinition value of model property trafficDefinition
   */
  public void setTrafficDefinition(ITrafficDefinitionWriter trafficDefinition);

  /**
   * Set a parameter for the attribute semiMajorAxis
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToSemiMajorAxis(String parameterName);
  /**
   * Set a parameter for the attribute semiMinorAxis
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToSemiMinorAxis(String parameterName);
  /**
   * Set a parameter for the attribute innerRadius
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToInnerRadius(String parameterName);
  /**
   * Set a parameter for the attribute offset
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToOffset(String parameterName);
  /**
   * Set a parameter for the attribute numberOfVehicles
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToNumberOfVehicles(String parameterName);
  /**
   * Set a parameter for the attribute velocity
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToVelocity(String parameterName);

  /**
   * Get the parameter for the attribute semiMajorAxis
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromSemiMajorAxis();
  /**
   * Get the parameter for the attribute semiMinorAxis
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromSemiMinorAxis();
  /**
   * Get the parameter for the attribute innerRadius
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromInnerRadius();
  /**
   * Get the parameter for the attribute offset
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromOffset();
  /**
   * Get the parameter for the attribute numberOfVehicles
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromNumberOfVehicles();
  /**
   * Get the parameter for the attribute velocity
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromVelocity();

  /**
   * Retrieves whether the attribute semiMajorAxis is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isSemiMajorAxisParameterized();
  /**
   * Retrieves whether the attribute semiMinorAxis is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isSemiMinorAxisParameterized();
  /**
   * Retrieves whether the attribute innerRadius is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isInnerRadiusParameterized();
  /**
   * Retrieves whether the attribute offset is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isOffsetParameterized();
  /**
   * Retrieves whether the attribute numberOfVehicles is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isNumberOfVehiclesParameterized();
  /**
   * Retrieves whether the attribute velocity is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isVelocityParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: The entity that represents the center of a swarm.
   *
   * @return a writer for model property centralObject
   */
  public ICentralSwarmObjectWriter getWriterCentralObject();
  /**
   * From OpenSCENARIO class model specification: Specifies properties of autonomous traffic with
   * respect to vehicle and driver distributions.
   *
   * @return a writer for model property trafficDefinition
   */
  public ITrafficDefinitionWriter getWriterTrafficDefinition();
}
