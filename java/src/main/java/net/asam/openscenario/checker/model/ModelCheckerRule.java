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
package net.asam.openscenario.checker.model;

import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.checker.ICheckerRule;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.Textmarker;

/**
 * A base class for model validation
 * @author Andreas Hege - RA Consulting
 * @param <T> the type to be checked
 *
 */
public abstract class ModelCheckerRule <T extends IOpenScenarioModelElement> implements ICheckerRule<T>
{

  protected Textmarker getTextmarker(T object) {
    ILocator locator = (ILocator) object.getAdapter(ILocator.class);
    Textmarker textmarker = null;

    if (locator != null) {
      textmarker = locator.getStartMarker();
    }
    return textmarker;
  }
}
