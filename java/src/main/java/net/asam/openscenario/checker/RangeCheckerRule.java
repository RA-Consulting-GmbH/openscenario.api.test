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

import java.util.ArrayList;
import java.util.List;

import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.checker.tree.PropertyTreeContext;
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.ITreeMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.common.TreeContentMessage;

/**
 * An abstract implementation of ICheckerRule to check ranges of object's properties.
 *
 * @author Andreas Hege - RA Consulting
 * @param <T> the OpenSCENARIO model element type.
 */
public abstract class RangeCheckerRule<T extends IOpenScenarioModelElement>
    implements ICheckerRule<T> {

  /** Constructor */
  public RangeCheckerRule() {}

  /**
   * Logging a range error violation in file context
   *
   * @param object The object that is tested.
   * @param messageLogger to log the message if violation is detected
   * @param propertyName name of the property that is checked
   * @param propertyValue the actual value of the property that was evaluated
   * @param operator operator that was evaluated
   * @param comparedValue the value the actual value is compared to.
   * @param attributeKey the attribute key that is used to locate the violation.
   */
  public void logFileContentMessage(
      IOpenScenarioModelElement object,
      IParserMessageLogger messageLogger,
      String propertyName,
      String propertyValue,
      String operator,
      String comparedValue,
      String attributeKey) {

    ILocator locator = (ILocator) object.getAdapter(ILocator.class);
    Textmarker textmarker = null;

    if (locator != null) {
      textmarker = locator.getStartMarkerOfProperty(attributeKey);
    }
    messageLogger.logMessage(
        new FileContentMessage(
            getMessage(propertyName, propertyValue, operator, comparedValue),
            ErrorLevel.ERROR,
            textmarker));
  }
  
  /**
   * Logging a range error violation in treeContext
   *
   * @param object The object that is tested.
   * @param messageLogger to log the message if violation is detected
   * @param propertyName name of the property that is checked
   * @param propertyValue the actual value of the property that was evaluated
   * @param operator operator that was evaluated
   * @param comparedValue the value the actual value is compared to.
   * @param attributeKey the attribute key that is used to locate the violation.
   */
  public void logTreeContentMessage(
      IOpenScenarioModelElement object,
      ITreeMessageLogger messageLogger,
      String propertyName,
      String propertyValue,
      String operator,
      String comparedValue,
      String attributeKey) {
    
    List<String> attributeKeyList = new ArrayList<>();
    attributeKeyList.add(attributeKey);

    messageLogger.logMessage(
        new TreeContentMessage(
            getMessage(propertyName, propertyValue, operator, comparedValue),
            ErrorLevel.ERROR,
            new PropertyTreeContext(object, attributeKeyList)));
  }

  /**
   * Creating amessage.
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
