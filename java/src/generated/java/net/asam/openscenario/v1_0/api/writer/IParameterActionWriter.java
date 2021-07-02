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
import net.asam.openscenario.v1_0.api.IParameterAction;
import net.asam.openscenario.v1_0.api.IParameterDeclaration;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>A Writer for the type 'ParameterAction' From OpenSCENARIO class model specification: Set or
 * modify a named parameter. (Be aware of the data type).
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public interface IParameterActionWriter extends IParameterAction, IOpenScenarioElementWriter {

  // Setters for all attributes

  /**
   * From OpenSCENARIO class model specification: Name of the parameter.
   *
   * @param parameterRef value of model property parameterRef
   */
  public void setParameterRef(INamedReference<IParameterDeclaration> parameterRef);
  /**
   * From OpenSCENARIO class model specification: New value for the parameter.
   *
   * @param setAction value of model property setAction
   */
  public void setSetAction(IParameterSetActionWriter setAction);
  /**
   * From OpenSCENARIO class model specification: Modifying rule for the parameter (Add value or
   * multiply by value).
   *
   * @param modifyAction value of model property modifyAction
   */
  public void setModifyAction(IParameterModifyActionWriter modifyAction);

  /**
   * Set a parameter for the attribute parameterRef
   *
   * @param parameterName the name of the parameter (without $)
   */
  public void writeParameterToParameterRef(String parameterName);

  /**
   * Get the parameter for the attribute parameterRef
   *
   * @return the name of the parameter (without $). Null if not parameter set or if attribute is
   *     empty.
   */
  public String getParameterFromParameterRef();

  /**
   * Retrieves whether the attribute parameterRef is parametrized.
   *
   * @return true if ${property.name.toMemberName()} is paramterized.
   */
  public boolean isParameterRefParameterized();

  // children
  /**
   * From OpenSCENARIO class model specification: New value for the parameter.
   *
   * @return a writer for model property setAction
   */
  public IParameterSetActionWriter getWriterSetAction();
  /**
   * From OpenSCENARIO class model specification: Modifying rule for the parameter (Add value or
   * multiply by value).
   *
   * @return a writer for model property modifyAction
   */
  public IParameterModifyActionWriter getWriterModifyAction();
}
