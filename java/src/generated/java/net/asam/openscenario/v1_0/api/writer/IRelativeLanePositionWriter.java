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
import net.asam.openscenario.v1_0.api.IRelativeLanePosition;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'RelativeLanePosition' From OpenSCENARIO class model specification:
 * Defines a position derived from relative lane coordinates (dLane, ds and offset) to a reference
 * entity.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IRelativeLanePositionWriter
    extends IRelativeLanePosition, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Reference entity.
   *
   * @param entityRef value of model property entityRef
   */
  public void setEntityRef(INamedReference<IEntity> entityRef);
  /**
   * From OpenSCENARIO class model specification: Relative dlane to the lane of the reference
   * entity.
   *
   * @param dLane value of model property dLane
   */
  public void setDLane(Integer dLane);
  /**
   * From OpenSCENARIO class model specification: Relative ds to the s of reference entity.
   *
   * @param ds value of model property ds
   */
  public void setDs(Double ds);
  /**
   * From OpenSCENARIO class model specification: Lateral offset to the taqrget lane. Unit: m;
   * Range: ]-inf..inf[
   *
   * @param offset value of model property offset
   */
  public void setOffset(Double offset);
  /**
   * From OpenSCENARIO class model specification: Orientation. The relative reference context refers
   * to the referenced lane's s and t coordinates.
   *
   * @param orientation value of model property orientation
   */
  public void setOrientation(IOrientationWriter orientation);

  /**
   * Set a parameter for the attribute entityRef
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToEntityRef(String parameterName);
  /**
   * Set a parameter for the attribute dLane
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToDLane(String parameterName);
  /**
   * Set a parameter for the attribute ds
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToDs(String parameterName);
  /**
   * Set a parameter for the attribute offset
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToOffset(String parameterName);

  /**
   * Get the parameter for the attribute entityRef
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromEntityRef();
  /**
   * Get the parameter for the attribute dLane
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromDLane();
  /**
   * Get the parameter for the attribute ds
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromDs();
  /**
   * Get the parameter for the attribute offset
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromOffset();

  /**
   * Retrieves whether the attribute entityRef is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isEntityRefParameterized();
  /**
   * Retrieves whether the attribute dLane is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isDLaneParameterized();
  /**
   * Retrieves whether the attribute ds is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isDsParameterized();
  /**
   * Retrieves whether the attribute offset is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isOffsetParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: Orientation. The relative reference context refers
   * to the referenced lane's s and t coordinates.
   *
   * @return a writer for model property orientation
   */
  public IOrientationWriter getWriterOrientation();
}
