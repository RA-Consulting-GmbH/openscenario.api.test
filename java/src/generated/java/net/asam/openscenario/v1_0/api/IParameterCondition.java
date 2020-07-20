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
 * <p>From OpenSCENARIO class model specification: Compares a named parameter's value to a reference
 * value. The logical operator used for comparison is defined by the rule attribute Less and greater
 * operator will only be supported if the value given as string can unambiguously be converted into
 * a scalar value (e.g. value=5, value=16.667).
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IParameterCondition extends IOpenScenarioModelElement {
  /**
   * From OpenSCENARIO class model specification: Name of the parameter that must be defined.
   *
   * @return value of model property parameterRef
   */
  public INamedReference<IParameterDeclaration> getParameterRef();
  /**
   * From OpenSCENARIO class model specification: Value of the parameter.
   *
   * @return value of model property value
   */
  public String getValue();
  /**
   * From OpenSCENARIO class model specification: The operator (less, greater, equal).
   *
   * @return value of model property rule
   */
  public Rule getRule();
}
