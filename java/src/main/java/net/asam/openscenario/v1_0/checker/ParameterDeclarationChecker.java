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
package net.asam.openscenario.v1_0.checker;

import net.asam.openscenario.checker.ICheckerRule;
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.IParameterDeclaration;
import net.asam.openscenario.v1_0.api.ParameterType;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * Checks Parameter declarations' value to be parsable (not empty value)
 *
 * @author Andreas Hege - RA Consulting
 */
public class ParameterDeclarationChecker implements ICheckerRule<IParameterDeclaration> {

  @Override
  public void applyRule(IParserMessageLogger messageLogger, IParameterDeclaration object) {
    // Check whether the value is validatable:

    String value = object.getValue();
    ParameterType parameterType = object.getParameterType();
    try {
      if (value != null && !value.isEmpty()) {
        if (parameterType.equals(ParameterType.INTEGER)) {
          ParserHelper.validateInt(value);
        }else if (parameterType.equals(ParameterType.UNSIGNED_INT))
        {
          ParserHelper.validateUnsignedInt(value);          
        }if (parameterType.equals(ParameterType.UNSIGNED_SHORT)) {
          ParserHelper.validateUnsignedShort(value);
        }else if (parameterType.equals(ParameterType.DOUBLE)) {

          ParserHelper.validateDouble(value);
        }else if (parameterType.equals(ParameterType.DATE_TIME)) {

          ParserHelper.validateDateTime(value);
        }else if (parameterType.equals(ParameterType.BOOLEAN)) {

          ParserHelper.validateBoolean(value);
        }
      }

    } catch (Exception e) {
      ILocator locator = (ILocator) object.getAdapter(ILocator.class);
      Textmarker textmarker = null;

      if (locator != null) {
        textmarker = locator.getStartMarkerOfProperty(OscConstants.ATTRIBUTE__VALUE);
      }
      messageLogger.logMessage(
          new FileContentMessage(
              String.format("Value '%s' cannot be parsed into '%s'", value, parameterType.getLiteral()),
              ErrorLevel.ERROR,
              textmarker));
    }
  }
}
