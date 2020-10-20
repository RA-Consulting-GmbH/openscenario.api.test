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
import net.asam.openscenario.common.IErrorMessage;
import net.asam.openscenario.common.IParserMessageLogger;

/**
 * An abstract implementation of ICheckerRule to check ranges of object's properties.
 *
 * @author Andreas Hege - RA Consulting
 */
public abstract class RangeRule
{

  /** Constructor */
  public RangeRule() 
  {}

  /**
   * Logging a range error violation
   *
   * @param object The object that is tested.
   * @param messageLogger to log the message if violation is detected
   * @param propertyName name of the property that is checked
   * @param propertyValue the actual value of the property that was evaluated
   * @param operator operator that was evaluated
   * @param comparedValue the value the actual value is compared to.
   * @param attributeKey the attribute key that is used to locate the violation.
   */
  protected void logMessage(
      IOpenScenarioModelElement object,
      IParserMessageLogger messageLogger,
      String propertyName,
      String propertyValue,
      String operator,
      String comparedValue,
      String attributeKey) {

      messageLogger.logMessage(createMessage(object,getMessage(propertyName, propertyValue, operator, comparedValue), attributeKey));
  }

  protected abstract IErrorMessage createMessage(IOpenScenarioModelElement object, String message, String attributeKey);
  
  /**
   * Logging a range error message.
   *
   * @param propertyName name of the property
   * @param propertyValue the actual value of the property that was evaluated
   * @param operator operator that was evaluated
   * @param comparedValue the value the actual value is compared to.
   * @return the message
   */
  private String getMessage(
      String propertyName, String propertyValue, String operator, String comparedValue) {
    return "Range error: Rule ("
        + propertyName
        + operator
        + comparedValue
        + ") is violated (value: "
        + propertyValue
        + ")";
  }
}
