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
import net.asam.openscenario.common.ITreeMessageLogger;
import net.asam.openscenario.v1_0.api.IClothoid;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0 A
 * range checker rule class for the type IClothoid according to OpenSCENARIO standard
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ClothoidRangeCheckerRule extends RangeCheckerRule<IClothoid> {

  /** Default constructor */
  public ClothoidRangeCheckerRule() {
    super();
  }

  @Override
  public void applyRuleInFileContext(IParserMessageLogger messageLogger, IClothoid object) {
    apply(messageLogger, null, object);
  }

  @Override
  public void applyRuleInTreeContext(ITreeMessageLogger messageLogger, IClothoid object) {
    apply(null, messageLogger, object);
  }

  private void apply(
      IParserMessageLogger fileMessageLogger,
      ITreeMessageLogger treeMessageLogger,
      IClothoid object) {
    Double curvatureDot = object.getCurvatureDot();
    if (curvatureDot != null) {
      if (!(curvatureDot >= 0)) {
        if (fileMessageLogger != null) {
          logFileContentMessage(
              object,
              fileMessageLogger,
              OscConstants.ATTRIBUTE__CURVATURE_DOT,
              object.getCurvatureDot().toString(),
              ">=",
              "0",
              OscConstants.ATTRIBUTE__CURVATURE_DOT);
        } else {
          logTreeContentMessage(
              object,
              treeMessageLogger,
              OscConstants.ATTRIBUTE__CURVATURE_DOT,
              object.getCurvatureDot().toString(),
              ">=",
              "0",
              OscConstants.ATTRIBUTE__CURVATURE_DOT);
        }
      }
    }
    Double startTime = object.getStartTime();
    if (startTime != null) {
      if (!(startTime >= 0)) {
        if (fileMessageLogger != null) {
          logFileContentMessage(
              object,
              fileMessageLogger,
              OscConstants.ATTRIBUTE__START_TIME,
              object.getStartTime().toString(),
              ">=",
              "0",
              OscConstants.ATTRIBUTE__START_TIME);
        } else {
          logTreeContentMessage(
              object,
              treeMessageLogger,
              OscConstants.ATTRIBUTE__START_TIME,
              object.getStartTime().toString(),
              ">=",
              "0",
              OscConstants.ATTRIBUTE__START_TIME);
        }
      }
    }
    Double stopTime = object.getStopTime();
    if (stopTime != null) {
      if (!(stopTime > 0)) {
        if (fileMessageLogger != null) {
          logFileContentMessage(
              object,
              fileMessageLogger,
              OscConstants.ATTRIBUTE__STOP_TIME,
              object.getStopTime().toString(),
              ">",
              "0",
              OscConstants.ATTRIBUTE__STOP_TIME);
        } else {
          logTreeContentMessage(
              object,
              treeMessageLogger,
              OscConstants.ATTRIBUTE__STOP_TIME,
              object.getStopTime().toString(),
              ">",
              "0",
              OscConstants.ATTRIBUTE__STOP_TIME);
        }
      }
    }
  }
}
