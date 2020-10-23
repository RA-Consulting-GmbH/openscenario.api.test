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

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'ModifyRule' From OpenSCENARIO class model specification: Enclosing type
 * for either adding a value to a parameter or multiply the parameter by a value. Has to be match
 * the parameter type.
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IModifyRuleWriter extends IOpenScenarioModelElement {

  // children
  /**
   * From OpenSCENARIO class model specification: Adding a value to a parameter.
   *
   * @return a writer for model property addValue
   */
  public IParameterAddValueRuleWriter getAddValueWriter();
  /**
   * From OpenSCENARIO class model specification: Multiply a parameter by a value.
   *
   * @return a writer for model property multiplyByValue
   */
  public IParameterMultiplyByValueRuleWriter getMultiplyByValueWriter();

  /**
   * From OpenSCENARIO class model specification: Adding a value to a parameter.
   *
   * @param addValueWriter writer for the model property addValue
   */
  public void writeToAddValueWriter(IParameterAddValueRuleWriter addValueWriter);
  /**
   * From OpenSCENARIO class model specification: Multiply a parameter by a value.
   *
   * @param multiplyByValueWriter writer for the model property multiplyByValue
   */
  public void writeToMultiplyByValueWriter(
      IParameterMultiplyByValueRuleWriter multiplyByValueWriter);
}
