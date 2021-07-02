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
package net.asam.openscenario.v1_0.checker.model;

import java.util.ArrayList;
import java.util.List;
import net.asam.openscenario.checker.model.UnionCheckerRule;
import net.asam.openscenario.checker.tree.PropertyTreeContext;
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.ITreeMessageLogger;
import net.asam.openscenario.common.TreeContentMessage;
import net.asam.openscenario.v1_0.api.IEntityCondition;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0 A
 * union checker rule class for the type IEntityCondition according to OpenSCENARIO standard all xor
 * elements are checked
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class EntityConditionUnionCheckerRule extends UnionCheckerRule<IEntityCondition> {

  /** Default constructor */
  public EntityConditionUnionCheckerRule() {
    super();
  }

  @Override
  public void applyRuleInFileContext(IParserMessageLogger messageLogger, IEntityCondition object) {
    List<String> propertyNamesNotNull = getNotNullChildren(object);
    if (propertyNamesNotNull.size() > 1) {
      messageLogger.logMessage(
          new FileContentMessage(
              getTooManyMessage(propertyNamesNotNull), ErrorLevel.ERROR, getTextmarker(object)));
    }
  }

  private List<String> getNotNullChildren(IEntityCondition object) {
    List<String> propertyNamesNotNull = new ArrayList<>();
    if (object.getEndOfRoadCondition() != null) {
      propertyNamesNotNull.add(OscConstants.ELEMENT__END_OF_ROAD_CONDITION);
    }

    if (object.getCollisionCondition() != null) {
      propertyNamesNotNull.add(OscConstants.ELEMENT__COLLISION_CONDITION);
    }

    if (object.getOffroadCondition() != null) {
      propertyNamesNotNull.add(OscConstants.ELEMENT__OFFROAD_CONDITION);
    }

    if (object.getTimeHeadwayCondition() != null) {
      propertyNamesNotNull.add(OscConstants.ELEMENT__TIME_HEADWAY_CONDITION);
    }

    if (object.getTimeToCollisionCondition() != null) {
      propertyNamesNotNull.add(OscConstants.ELEMENT__TIME_TO_COLLISION_CONDITION);
    }

    if (object.getAccelerationCondition() != null) {
      propertyNamesNotNull.add(OscConstants.ELEMENT__ACCELERATION_CONDITION);
    }

    if (object.getStandStillCondition() != null) {
      propertyNamesNotNull.add(OscConstants.ELEMENT__STAND_STILL_CONDITION);
    }

    if (object.getSpeedCondition() != null) {
      propertyNamesNotNull.add(OscConstants.ELEMENT__SPEED_CONDITION);
    }

    if (object.getRelativeSpeedCondition() != null) {
      propertyNamesNotNull.add(OscConstants.ELEMENT__RELATIVE_SPEED_CONDITION);
    }

    if (object.getTraveledDistanceCondition() != null) {
      propertyNamesNotNull.add(OscConstants.ELEMENT__TRAVELED_DISTANCE_CONDITION);
    }

    if (object.getReachPositionCondition() != null) {
      propertyNamesNotNull.add(OscConstants.ELEMENT__REACH_POSITION_CONDITION);
    }

    if (object.getDistanceCondition() != null) {
      propertyNamesNotNull.add(OscConstants.ELEMENT__DISTANCE_CONDITION);
    }

    if (object.getRelativeDistanceCondition() != null) {
      propertyNamesNotNull.add(OscConstants.ELEMENT__RELATIVE_DISTANCE_CONDITION);
    }

    return propertyNamesNotNull;
  }

  @Override
  public void applyRuleInTreeContext(ITreeMessageLogger messageLogger, IEntityCondition object) {
    List<String> propertyNamesNotNull = getNotNullChildren(object);
    if (propertyNamesNotNull.size() > 1) {
      messageLogger.logMessage(
          new TreeContentMessage(
              getTooManyMessage(propertyNamesNotNull),
              ErrorLevel.ERROR,
              new PropertyTreeContext(object, propertyNamesNotNull)));
    }
  }
}
