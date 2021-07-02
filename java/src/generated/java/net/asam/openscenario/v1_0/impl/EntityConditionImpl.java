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
package net.asam.openscenario.v1_0.impl;

import java.util.ArrayList;
import java.util.Date;
import java.util.Hashtable;
import java.util.List;
import net.asam.openscenario.api.IOpenScenarioFlexElement;
import net.asam.openscenario.api.KeyNotSupportedException;
import net.asam.openscenario.api.SimpleType;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.v1_0.api.IAccelerationCondition;
import net.asam.openscenario.v1_0.api.ICollisionCondition;
import net.asam.openscenario.v1_0.api.IDistanceCondition;
import net.asam.openscenario.v1_0.api.IEndOfRoadCondition;
import net.asam.openscenario.v1_0.api.IEntityCondition;
import net.asam.openscenario.v1_0.api.IOffroadCondition;
import net.asam.openscenario.v1_0.api.IReachPositionCondition;
import net.asam.openscenario.v1_0.api.IRelativeDistanceCondition;
import net.asam.openscenario.v1_0.api.IRelativeSpeedCondition;
import net.asam.openscenario.v1_0.api.ISpeedCondition;
import net.asam.openscenario.v1_0.api.IStandStillCondition;
import net.asam.openscenario.v1_0.api.ITimeHeadwayCondition;
import net.asam.openscenario.v1_0.api.ITimeToCollisionCondition;
import net.asam.openscenario.v1_0.api.ITraveledDistanceCondition;
import net.asam.openscenario.v1_0.api.writer.IAccelerationConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ICollisionConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IDistanceConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IEndOfRoadConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IEntityConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IOffroadConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IReachPositionConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeDistanceConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeSpeedConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ISpeedConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IStandStillConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITimeHeadwayConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITimeToCollisionConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITraveledDistanceConditionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IEntityCondition. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IEntityCondition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class EntityConditionImpl extends BaseImpl implements IEntityConditionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IEndOfRoadConditionWriter endOfRoadCondition;
  private ICollisionConditionWriter collisionCondition;
  private IOffroadConditionWriter offroadCondition;
  private ITimeHeadwayConditionWriter timeHeadwayCondition;
  private ITimeToCollisionConditionWriter timeToCollisionCondition;
  private IAccelerationConditionWriter accelerationCondition;
  private IStandStillConditionWriter standStillCondition;
  private ISpeedConditionWriter speedCondition;
  private IRelativeSpeedConditionWriter relativeSpeedCondition;
  private ITraveledDistanceConditionWriter traveledDistanceCondition;
  private IReachPositionConditionWriter reachPositionCondition;
  private IDistanceConditionWriter distanceCondition;
  private IRelativeDistanceConditionWriter relativeDistanceCondition;

  /** Default constructor */
  public EntityConditionImpl() {
    super();
    addAdapter(EntityConditionImpl.class, this);
    addAdapter(IEntityCondition.class, this);
    addAdapter(IEntityConditionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IEndOfRoadCondition getEndOfRoadCondition() {
    return this.endOfRoadCondition;
  }

  @Override
  public ICollisionCondition getCollisionCondition() {
    return this.collisionCondition;
  }

  @Override
  public IOffroadCondition getOffroadCondition() {
    return this.offroadCondition;
  }

  @Override
  public ITimeHeadwayCondition getTimeHeadwayCondition() {
    return this.timeHeadwayCondition;
  }

  @Override
  public ITimeToCollisionCondition getTimeToCollisionCondition() {
    return this.timeToCollisionCondition;
  }

  @Override
  public IAccelerationCondition getAccelerationCondition() {
    return this.accelerationCondition;
  }

  @Override
  public IStandStillCondition getStandStillCondition() {
    return this.standStillCondition;
  }

  @Override
  public ISpeedCondition getSpeedCondition() {
    return this.speedCondition;
  }

  @Override
  public IRelativeSpeedCondition getRelativeSpeedCondition() {
    return this.relativeSpeedCondition;
  }

  @Override
  public ITraveledDistanceCondition getTraveledDistanceCondition() {
    return this.traveledDistanceCondition;
  }

  @Override
  public IReachPositionCondition getReachPositionCondition() {
    return this.reachPositionCondition;
  }

  @Override
  public IDistanceCondition getDistanceCondition() {
    return this.distanceCondition;
  }

  @Override
  public IRelativeDistanceCondition getRelativeDistanceCondition() {
    return this.relativeDistanceCondition;
  }

  @Override
  public void setEndOfRoadCondition(IEndOfRoadConditionWriter endOfRoadCondition) {
    this.endOfRoadCondition = endOfRoadCondition;
    this.collisionCondition = null;
    this.offroadCondition = null;
    this.timeHeadwayCondition = null;
    this.timeToCollisionCondition = null;
    this.accelerationCondition = null;
    this.standStillCondition = null;
    this.speedCondition = null;
    this.relativeSpeedCondition = null;
    this.traveledDistanceCondition = null;
    this.reachPositionCondition = null;
    this.distanceCondition = null;
    this.relativeDistanceCondition = null;
  }

  @Override
  public void setCollisionCondition(ICollisionConditionWriter collisionCondition) {
    this.collisionCondition = collisionCondition;
    this.endOfRoadCondition = null;
    this.offroadCondition = null;
    this.timeHeadwayCondition = null;
    this.timeToCollisionCondition = null;
    this.accelerationCondition = null;
    this.standStillCondition = null;
    this.speedCondition = null;
    this.relativeSpeedCondition = null;
    this.traveledDistanceCondition = null;
    this.reachPositionCondition = null;
    this.distanceCondition = null;
    this.relativeDistanceCondition = null;
  }

  @Override
  public void setOffroadCondition(IOffroadConditionWriter offroadCondition) {
    this.offroadCondition = offroadCondition;
    this.endOfRoadCondition = null;
    this.collisionCondition = null;
    this.timeHeadwayCondition = null;
    this.timeToCollisionCondition = null;
    this.accelerationCondition = null;
    this.standStillCondition = null;
    this.speedCondition = null;
    this.relativeSpeedCondition = null;
    this.traveledDistanceCondition = null;
    this.reachPositionCondition = null;
    this.distanceCondition = null;
    this.relativeDistanceCondition = null;
  }

  @Override
  public void setTimeHeadwayCondition(ITimeHeadwayConditionWriter timeHeadwayCondition) {
    this.timeHeadwayCondition = timeHeadwayCondition;
    this.endOfRoadCondition = null;
    this.collisionCondition = null;
    this.offroadCondition = null;
    this.timeToCollisionCondition = null;
    this.accelerationCondition = null;
    this.standStillCondition = null;
    this.speedCondition = null;
    this.relativeSpeedCondition = null;
    this.traveledDistanceCondition = null;
    this.reachPositionCondition = null;
    this.distanceCondition = null;
    this.relativeDistanceCondition = null;
  }

  @Override
  public void setTimeToCollisionCondition(
      ITimeToCollisionConditionWriter timeToCollisionCondition) {
    this.timeToCollisionCondition = timeToCollisionCondition;
    this.endOfRoadCondition = null;
    this.collisionCondition = null;
    this.offroadCondition = null;
    this.timeHeadwayCondition = null;
    this.accelerationCondition = null;
    this.standStillCondition = null;
    this.speedCondition = null;
    this.relativeSpeedCondition = null;
    this.traveledDistanceCondition = null;
    this.reachPositionCondition = null;
    this.distanceCondition = null;
    this.relativeDistanceCondition = null;
  }

  @Override
  public void setAccelerationCondition(IAccelerationConditionWriter accelerationCondition) {
    this.accelerationCondition = accelerationCondition;
    this.endOfRoadCondition = null;
    this.collisionCondition = null;
    this.offroadCondition = null;
    this.timeHeadwayCondition = null;
    this.timeToCollisionCondition = null;
    this.standStillCondition = null;
    this.speedCondition = null;
    this.relativeSpeedCondition = null;
    this.traveledDistanceCondition = null;
    this.reachPositionCondition = null;
    this.distanceCondition = null;
    this.relativeDistanceCondition = null;
  }

  @Override
  public void setStandStillCondition(IStandStillConditionWriter standStillCondition) {
    this.standStillCondition = standStillCondition;
    this.endOfRoadCondition = null;
    this.collisionCondition = null;
    this.offroadCondition = null;
    this.timeHeadwayCondition = null;
    this.timeToCollisionCondition = null;
    this.accelerationCondition = null;
    this.speedCondition = null;
    this.relativeSpeedCondition = null;
    this.traveledDistanceCondition = null;
    this.reachPositionCondition = null;
    this.distanceCondition = null;
    this.relativeDistanceCondition = null;
  }

  @Override
  public void setSpeedCondition(ISpeedConditionWriter speedCondition) {
    this.speedCondition = speedCondition;
    this.endOfRoadCondition = null;
    this.collisionCondition = null;
    this.offroadCondition = null;
    this.timeHeadwayCondition = null;
    this.timeToCollisionCondition = null;
    this.accelerationCondition = null;
    this.standStillCondition = null;
    this.relativeSpeedCondition = null;
    this.traveledDistanceCondition = null;
    this.reachPositionCondition = null;
    this.distanceCondition = null;
    this.relativeDistanceCondition = null;
  }

  @Override
  public void setRelativeSpeedCondition(IRelativeSpeedConditionWriter relativeSpeedCondition) {
    this.relativeSpeedCondition = relativeSpeedCondition;
    this.endOfRoadCondition = null;
    this.collisionCondition = null;
    this.offroadCondition = null;
    this.timeHeadwayCondition = null;
    this.timeToCollisionCondition = null;
    this.accelerationCondition = null;
    this.standStillCondition = null;
    this.speedCondition = null;
    this.traveledDistanceCondition = null;
    this.reachPositionCondition = null;
    this.distanceCondition = null;
    this.relativeDistanceCondition = null;
  }

  @Override
  public void setTraveledDistanceCondition(
      ITraveledDistanceConditionWriter traveledDistanceCondition) {
    this.traveledDistanceCondition = traveledDistanceCondition;
    this.endOfRoadCondition = null;
    this.collisionCondition = null;
    this.offroadCondition = null;
    this.timeHeadwayCondition = null;
    this.timeToCollisionCondition = null;
    this.accelerationCondition = null;
    this.standStillCondition = null;
    this.speedCondition = null;
    this.relativeSpeedCondition = null;
    this.reachPositionCondition = null;
    this.distanceCondition = null;
    this.relativeDistanceCondition = null;
  }

  @Override
  public void setReachPositionCondition(IReachPositionConditionWriter reachPositionCondition) {
    this.reachPositionCondition = reachPositionCondition;
    this.endOfRoadCondition = null;
    this.collisionCondition = null;
    this.offroadCondition = null;
    this.timeHeadwayCondition = null;
    this.timeToCollisionCondition = null;
    this.accelerationCondition = null;
    this.standStillCondition = null;
    this.speedCondition = null;
    this.relativeSpeedCondition = null;
    this.traveledDistanceCondition = null;
    this.distanceCondition = null;
    this.relativeDistanceCondition = null;
  }

  @Override
  public void setDistanceCondition(IDistanceConditionWriter distanceCondition) {
    this.distanceCondition = distanceCondition;
    this.endOfRoadCondition = null;
    this.collisionCondition = null;
    this.offroadCondition = null;
    this.timeHeadwayCondition = null;
    this.timeToCollisionCondition = null;
    this.accelerationCondition = null;
    this.standStillCondition = null;
    this.speedCondition = null;
    this.relativeSpeedCondition = null;
    this.traveledDistanceCondition = null;
    this.reachPositionCondition = null;
    this.relativeDistanceCondition = null;
  }

  @Override
  public void setRelativeDistanceCondition(
      IRelativeDistanceConditionWriter relativeDistanceCondition) {
    this.relativeDistanceCondition = relativeDistanceCondition;
    this.endOfRoadCondition = null;
    this.collisionCondition = null;
    this.offroadCondition = null;
    this.timeHeadwayCondition = null;
    this.timeToCollisionCondition = null;
    this.accelerationCondition = null;
    this.standStillCondition = null;
    this.speedCondition = null;
    this.relativeSpeedCondition = null;
    this.traveledDistanceCondition = null;
    this.reachPositionCondition = null;
    this.distanceCondition = null;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    // Empty
  }

  @Override
  public SimpleType getTypeFromAttributeName(String attributeKey) {
    return propertyToType.get(attributeKey);
  }

  /**
   * A list of all aggregated children (lists are flattened). This may be used for applying a
   * specific method for any child.
   *
   * @return a list with all children (as BaseImpl)
   */
  @Override
  public List<BaseImpl> getChildren() {
    List<BaseImpl> result = new ArrayList<>();

    IEndOfRoadConditionWriter endOfRoadCondition = null;
    endOfRoadCondition = getWriterEndOfRoadCondition();
    if (endOfRoadCondition != null) {
      result.add((BaseImpl) endOfRoadCondition);
    }
    ICollisionConditionWriter collisionCondition = null;
    collisionCondition = getWriterCollisionCondition();
    if (collisionCondition != null) {
      result.add((BaseImpl) collisionCondition);
    }
    IOffroadConditionWriter offroadCondition = null;
    offroadCondition = getWriterOffroadCondition();
    if (offroadCondition != null) {
      result.add((BaseImpl) offroadCondition);
    }
    ITimeHeadwayConditionWriter timeHeadwayCondition = null;
    timeHeadwayCondition = getWriterTimeHeadwayCondition();
    if (timeHeadwayCondition != null) {
      result.add((BaseImpl) timeHeadwayCondition);
    }
    ITimeToCollisionConditionWriter timeToCollisionCondition = null;
    timeToCollisionCondition = getWriterTimeToCollisionCondition();
    if (timeToCollisionCondition != null) {
      result.add((BaseImpl) timeToCollisionCondition);
    }
    IAccelerationConditionWriter accelerationCondition = null;
    accelerationCondition = getWriterAccelerationCondition();
    if (accelerationCondition != null) {
      result.add((BaseImpl) accelerationCondition);
    }
    IStandStillConditionWriter standStillCondition = null;
    standStillCondition = getWriterStandStillCondition();
    if (standStillCondition != null) {
      result.add((BaseImpl) standStillCondition);
    }
    ISpeedConditionWriter speedCondition = null;
    speedCondition = getWriterSpeedCondition();
    if (speedCondition != null) {
      result.add((BaseImpl) speedCondition);
    }
    IRelativeSpeedConditionWriter relativeSpeedCondition = null;
    relativeSpeedCondition = getWriterRelativeSpeedCondition();
    if (relativeSpeedCondition != null) {
      result.add((BaseImpl) relativeSpeedCondition);
    }
    ITraveledDistanceConditionWriter traveledDistanceCondition = null;
    traveledDistanceCondition = getWriterTraveledDistanceCondition();
    if (traveledDistanceCondition != null) {
      result.add((BaseImpl) traveledDistanceCondition);
    }
    IReachPositionConditionWriter reachPositionCondition = null;
    reachPositionCondition = getWriterReachPositionCondition();
    if (reachPositionCondition != null) {
      result.add((BaseImpl) reachPositionCondition);
    }
    IDistanceConditionWriter distanceCondition = null;
    distanceCondition = getWriterDistanceCondition();
    if (distanceCondition != null) {
      result.add((BaseImpl) distanceCondition);
    }
    IRelativeDistanceConditionWriter relativeDistanceCondition = null;
    relativeDistanceCondition = getWriterRelativeDistanceCondition();
    if (relativeDistanceCondition != null) {
      result.add((BaseImpl) relativeDistanceCondition);
    }
    return result;
  }

  /**
   * Making a (deep) clone this object. This is useful and used for importing elements from
   * catalogs.
   *
   * @return a deep copy of the object.
   */
  @Override
  public EntityConditionImpl clone() {
    EntityConditionImpl clonedObject = new EntityConditionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IEndOfRoadConditionWriter endOfRoadCondition = null;
    endOfRoadCondition = getWriterEndOfRoadCondition();
    if (endOfRoadCondition != null) {
      IEndOfRoadConditionWriter clonedChild = ((EndOfRoadConditionImpl) endOfRoadCondition).clone();
      clonedObject.setEndOfRoadCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ICollisionConditionWriter collisionCondition = null;
    collisionCondition = getWriterCollisionCondition();
    if (collisionCondition != null) {
      ICollisionConditionWriter clonedChild = ((CollisionConditionImpl) collisionCondition).clone();
      clonedObject.setCollisionCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IOffroadConditionWriter offroadCondition = null;
    offroadCondition = getWriterOffroadCondition();
    if (offroadCondition != null) {
      IOffroadConditionWriter clonedChild = ((OffroadConditionImpl) offroadCondition).clone();
      clonedObject.setOffroadCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITimeHeadwayConditionWriter timeHeadwayCondition = null;
    timeHeadwayCondition = getWriterTimeHeadwayCondition();
    if (timeHeadwayCondition != null) {
      ITimeHeadwayConditionWriter clonedChild =
          ((TimeHeadwayConditionImpl) timeHeadwayCondition).clone();
      clonedObject.setTimeHeadwayCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITimeToCollisionConditionWriter timeToCollisionCondition = null;
    timeToCollisionCondition = getWriterTimeToCollisionCondition();
    if (timeToCollisionCondition != null) {
      ITimeToCollisionConditionWriter clonedChild =
          ((TimeToCollisionConditionImpl) timeToCollisionCondition).clone();
      clonedObject.setTimeToCollisionCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IAccelerationConditionWriter accelerationCondition = null;
    accelerationCondition = getWriterAccelerationCondition();
    if (accelerationCondition != null) {
      IAccelerationConditionWriter clonedChild =
          ((AccelerationConditionImpl) accelerationCondition).clone();
      clonedObject.setAccelerationCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IStandStillConditionWriter standStillCondition = null;
    standStillCondition = getWriterStandStillCondition();
    if (standStillCondition != null) {
      IStandStillConditionWriter clonedChild =
          ((StandStillConditionImpl) standStillCondition).clone();
      clonedObject.setStandStillCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ISpeedConditionWriter speedCondition = null;
    speedCondition = getWriterSpeedCondition();
    if (speedCondition != null) {
      ISpeedConditionWriter clonedChild = ((SpeedConditionImpl) speedCondition).clone();
      clonedObject.setSpeedCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IRelativeSpeedConditionWriter relativeSpeedCondition = null;
    relativeSpeedCondition = getWriterRelativeSpeedCondition();
    if (relativeSpeedCondition != null) {
      IRelativeSpeedConditionWriter clonedChild =
          ((RelativeSpeedConditionImpl) relativeSpeedCondition).clone();
      clonedObject.setRelativeSpeedCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITraveledDistanceConditionWriter traveledDistanceCondition = null;
    traveledDistanceCondition = getWriterTraveledDistanceCondition();
    if (traveledDistanceCondition != null) {
      ITraveledDistanceConditionWriter clonedChild =
          ((TraveledDistanceConditionImpl) traveledDistanceCondition).clone();
      clonedObject.setTraveledDistanceCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IReachPositionConditionWriter reachPositionCondition = null;
    reachPositionCondition = getWriterReachPositionCondition();
    if (reachPositionCondition != null) {
      IReachPositionConditionWriter clonedChild =
          ((ReachPositionConditionImpl) reachPositionCondition).clone();
      clonedObject.setReachPositionCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IDistanceConditionWriter distanceCondition = null;
    distanceCondition = getWriterDistanceCondition();
    if (distanceCondition != null) {
      IDistanceConditionWriter clonedChild = ((DistanceConditionImpl) distanceCondition).clone();
      clonedObject.setDistanceCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IRelativeDistanceConditionWriter relativeDistanceCondition = null;
    relativeDistanceCondition = getWriterRelativeDistanceCondition();
    if (relativeDistanceCondition != null) {
      IRelativeDistanceConditionWriter clonedChild =
          ((RelativeDistanceConditionImpl) relativeDistanceCondition).clone();
      clonedObject.setRelativeDistanceCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    return clonedObject;
  }

  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException {
    // proxies and string attributes
    throw new KeyNotSupportedException();
  }

  @Override
  public Long getUnsignedIntProperty(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public Integer getIntProperty(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public Double getDoubleProperty(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public Integer getUnsignedShortProperty(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public Boolean getBooleanProperty(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public Date getDateTimeProperty(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public IOpenScenarioFlexElement getChildElement(String key) throws KeyNotSupportedException {
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ELEMENT__END_OF_ROAD_CONDITION)) {
      return (IOpenScenarioFlexElement) getEndOfRoadCondition();
    }
    if (key.equals(OscConstants.ELEMENT__COLLISION_CONDITION)) {
      return (IOpenScenarioFlexElement) getCollisionCondition();
    }
    if (key.equals(OscConstants.ELEMENT__OFFROAD_CONDITION)) {
      return (IOpenScenarioFlexElement) getOffroadCondition();
    }
    if (key.equals(OscConstants.ELEMENT__TIME_HEADWAY_CONDITION)) {
      return (IOpenScenarioFlexElement) getTimeHeadwayCondition();
    }
    if (key.equals(OscConstants.ELEMENT__TIME_TO_COLLISION_CONDITION)) {
      return (IOpenScenarioFlexElement) getTimeToCollisionCondition();
    }
    if (key.equals(OscConstants.ELEMENT__ACCELERATION_CONDITION)) {
      return (IOpenScenarioFlexElement) getAccelerationCondition();
    }
    if (key.equals(OscConstants.ELEMENT__STAND_STILL_CONDITION)) {
      return (IOpenScenarioFlexElement) getStandStillCondition();
    }
    if (key.equals(OscConstants.ELEMENT__SPEED_CONDITION)) {
      return (IOpenScenarioFlexElement) getSpeedCondition();
    }
    if (key.equals(OscConstants.ELEMENT__RELATIVE_SPEED_CONDITION)) {
      return (IOpenScenarioFlexElement) getRelativeSpeedCondition();
    }
    if (key.equals(OscConstants.ELEMENT__TRAVELED_DISTANCE_CONDITION)) {
      return (IOpenScenarioFlexElement) getTraveledDistanceCondition();
    }
    if (key.equals(OscConstants.ELEMENT__REACH_POSITION_CONDITION)) {
      return (IOpenScenarioFlexElement) getReachPositionCondition();
    }
    if (key.equals(OscConstants.ELEMENT__DISTANCE_CONDITION)) {
      return (IOpenScenarioFlexElement) getDistanceCondition();
    }
    if (key.equals(OscConstants.ELEMENT__RELATIVE_DISTANCE_CONDITION)) {
      return (IOpenScenarioFlexElement) getRelativeDistanceCondition();
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key)
      throws KeyNotSupportedException {

    throw new KeyNotSupportedException();
  }

  @Override
  public IOpenScenarioFlexElement getParentFlexElement() {
    return (IOpenScenarioFlexElement) getParent();
  }

  @Override
  public IOpenScenarioFlexElement getReferencedElement(String key, String name)
      throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "EntityCondition";
  }

  // children
  @Override
  public IEndOfRoadConditionWriter getWriterEndOfRoadCondition() {
    return this.endOfRoadCondition;
  }

  @Override
  public ICollisionConditionWriter getWriterCollisionCondition() {
    return this.collisionCondition;
  }

  @Override
  public IOffroadConditionWriter getWriterOffroadCondition() {
    return this.offroadCondition;
  }

  @Override
  public ITimeHeadwayConditionWriter getWriterTimeHeadwayCondition() {
    return this.timeHeadwayCondition;
  }

  @Override
  public ITimeToCollisionConditionWriter getWriterTimeToCollisionCondition() {
    return this.timeToCollisionCondition;
  }

  @Override
  public IAccelerationConditionWriter getWriterAccelerationCondition() {
    return this.accelerationCondition;
  }

  @Override
  public IStandStillConditionWriter getWriterStandStillCondition() {
    return this.standStillCondition;
  }

  @Override
  public ISpeedConditionWriter getWriterSpeedCondition() {
    return this.speedCondition;
  }

  @Override
  public IRelativeSpeedConditionWriter getWriterRelativeSpeedCondition() {
    return this.relativeSpeedCondition;
  }

  @Override
  public ITraveledDistanceConditionWriter getWriterTraveledDistanceCondition() {
    return this.traveledDistanceCondition;
  }

  @Override
  public IReachPositionConditionWriter getWriterReachPositionCondition() {
    return this.reachPositionCondition;
  }

  @Override
  public IDistanceConditionWriter getWriterDistanceCondition() {
    return this.distanceCondition;
  }

  @Override
  public IRelativeDistanceConditionWriter getWriterRelativeDistanceCondition() {
    return this.relativeDistanceCondition;
  }
}
