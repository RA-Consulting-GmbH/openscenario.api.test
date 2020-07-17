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

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>From OpenSCENARIO class model specification: Setting weather state, road conditions, and time
 * of the day. An environment can be defined or an environment type from a catalog can be used to
 * instantiate an environment.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IEnvironmentAction extends IOpenScenarioModelElement {

  /**
   * From OpenSCENARIO class model specification: New environment definition.
   *
   * @return value of model property environment
   */
  public IEnvironment getEnvironment();

  /**
   * From OpenSCENARIO class model specification: Reference to a catalog entry of type Environment.
   *
   * @return value of model property catalogReference
   */
  public ICatalogReference getCatalogReference();
}
