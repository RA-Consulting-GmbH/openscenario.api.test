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
import net.asam.openscenario.v1_0.api.IRelativeRoadPosition;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'RelativeRoadPosition' From OpenSCENARIO class model specification:
 * Defines an absolute position derived from relative road coordinates delta s [ds] and delta t [dt]
 * to a reference entity.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IRelativeRoadPositionWriter
    extends IRelativeRoadPosition, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: reference entity.
   *
   * @param entityRef value of model property entityRef
   */
  public void setEntityRef(INamedReference<IEntity> entityRef);
  /**
   * From OpenSCENARIO class model specification: Relative ds road coordinate to s coordinate of the
   * reference entity.
   *
   * @param ds value of model property ds
   */
  public void setDs(Double ds);
  /**
   * From OpenSCENARIO class model specification: Relative dt road coordinate to t coordinate of the
   * reference entity.
   *
   * @param dt value of model property dt
   */
  public void setDt(Double dt);
  /**
   * From OpenSCENARIO class model specification: Orientation. The relative reference context refers
   * to the referenced road's s and t coordinates.
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
   * Set a parameter for the attribute ds
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToDs(String parameterName);
  /**
   * Set a parameter for the attribute dt
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToDt(String parameterName);

  /**
   * Get the parameter for the attribute entityRef
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromEntityRef();
  /**
   * Get the parameter for the attribute ds
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromDs();
  /**
   * Get the parameter for the attribute dt
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromDt();

  /**
   * Retrieves whether the attribute entityRef is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isEntityRefParameterized();
  /**
   * Retrieves whether the attribute ds is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isDsParameterized();
  /**
   * Retrieves whether the attribute dt is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isDtParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: Orientation. The relative reference context refers
   * to the referenced road's s and t coordinates.
   *
   * @return a writer for model property orientation
   */
  public IOrientationWriter getWriterOrientation();
}
