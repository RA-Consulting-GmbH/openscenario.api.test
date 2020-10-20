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

package net.asam.openscenario.checker;

import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.IErrorMessage;
import net.asam.openscenario.common.TreeContentMessage;

/**
 * An abstract implementation of ICheckerRule to check ranges of object's
 * properties.
 *
 * @author Andreas Hege - RA Consulting
 * @param <T> the OpenSCENARIO model element type.
 */
public abstract class RangeTreeValidationRule<T extends IOpenScenarioModelElement> extends RangeRule
    implements ITreeValidationRule<T>
{

  /** Constructor */
  public RangeTreeValidationRule()
  {
  }

  @Override
  protected IErrorMessage createMessage(IOpenScenarioModelElement object, String message, String attributeKey)
  {
    return new TreeContentMessage(ErrorLevel.ERROR, object, message);
  }

}
