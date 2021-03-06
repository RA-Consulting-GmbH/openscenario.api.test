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
package net.asam.openscenario.v1_0.api;

import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.common.INamedReference;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>From OpenSCENARIO class model specification: Position defined in terms of delta x, y, (z)
 * relative to a reference entity's position. Optionally, an orientation can be defined in either
 * absolute or relative values.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IRelativeWorldPosition extends IOpenScenarioModelElement {
  /**
   * From OpenSCENARIO class model specification: Reference entity from which the relative world
   * position is measured.
   *
   * @return value of model property entityRef
   */
  public INamedReference<IEntity> getEntityRef();
  /**
   * From OpenSCENARIO class model specification: Relative x coordinate in the world coordinate
   * system.
   *
   * @return value of model property dx
   */
  public Double getDx();
  /**
   * From OpenSCENARIO class model specification: Relative y coordinate in the world coordinate
   * system.
   *
   * @return value of model property dy
   */
  public Double getDy();
  /**
   * From OpenSCENARIO class model specification: Relative z coordinate in the world coordinate
   * system.
   *
   * @return value of model property dz
   */
  public Double getDz();
  /**
   * From OpenSCENARIO class model specification: Orientation. The relative reference context refers
   * to the reference entity's orientation.
   *
   * @return value of model property orientation
   */
  public IOrientation getOrientation();
}
