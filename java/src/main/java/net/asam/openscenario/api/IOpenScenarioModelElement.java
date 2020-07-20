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

package net.asam.openscenario.api;

/**
 * Every osc model element does implement this interface
 *
 * @author Andreas Hege - RA Consulting
 */
public interface IOpenScenarioModelElement {
  /**
   * Asks for an adapter of a specific class.
   *
   * @param classifier the class an adapter is requested for.
   * @return an adapter or null, if the specified adapter class is not supported.
   */
  public Object getAdapter(Class<?> classifier);

  /**
   * Provides the parent of this object. It is null for any Object that is not of type IOpenScenario
   * (which is the root)
   *
   * @return the model parent of this object
   */
  public IOpenScenarioModelElement getParent();

  /**
   * Return the flexible interface
   *
   * @return the flexible interface
   */
  public IOpenScenarioFlexElement getOpenScenarioFlexElement();
}
