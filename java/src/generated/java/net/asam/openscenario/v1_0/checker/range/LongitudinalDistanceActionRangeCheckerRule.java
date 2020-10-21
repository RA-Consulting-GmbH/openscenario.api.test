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
package net.asam.openscenario.v1_0.checker.range;

import net.asam.openscenario.checker.RangeCheckerRule;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.v1_0.api.ILongitudinalDistanceAction;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0 A
 * range checker rule class for the type ILongitudinalDistanceAction according to OpenSCENARIO
 * standard
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class LongitudinalDistanceActionRangeCheckerRule
    extends RangeCheckerRule<ILongitudinalDistanceAction> {

  /** Default constructor */
  public LongitudinalDistanceActionRangeCheckerRule() {
    super();
  }

  @Override
  public void applyRuleInFileContext(
      IParserMessageLogger messageLogger, ILongitudinalDistanceAction object) {
    Double distance = object.getDistance();
    if (distance != null) {
      if (!(distance >= 0)) {
        logMessage(
            object,
            messageLogger,
            OscConstants.ATTRIBUTE__DISTANCE,
            object.getDistance().toString(),
            ">=",
            "0",
            OscConstants.ATTRIBUTE__DISTANCE);
      }
    }
    Double timeGap = object.getTimeGap();
    if (timeGap != null) {
      if (!(timeGap >= 0)) {
        logMessage(
            object,
            messageLogger,
            OscConstants.ATTRIBUTE__TIME_GAP,
            object.getTimeGap().toString(),
            ">=",
            "0",
            OscConstants.ATTRIBUTE__TIME_GAP);
      }
    }
  }
}
