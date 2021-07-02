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
import net.asam.openscenario.v1_0.api.IOverrideBrakeAction;
import net.asam.openscenario.v1_0.api.IOverrideClutchAction;
import net.asam.openscenario.v1_0.api.IOverrideControllerValueAction;
import net.asam.openscenario.v1_0.api.IOverrideGearAction;
import net.asam.openscenario.v1_0.api.IOverrideParkingBrakeAction;
import net.asam.openscenario.v1_0.api.IOverrideSteeringWheelAction;
import net.asam.openscenario.v1_0.api.IOverrideThrottleAction;
import net.asam.openscenario.v1_0.api.writer.IOverrideBrakeActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideClutchActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideControllerValueActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideGearActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideParkingBrakeActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideSteeringWheelActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideThrottleActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IOverrideControllerValueAction. With setter methods to fill the
 * properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IOverrideControllerValueAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class OverrideControllerValueActionImpl extends BaseImpl
    implements IOverrideControllerValueActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IOverrideThrottleActionWriter throttle;
  private IOverrideBrakeActionWriter brake;
  private IOverrideClutchActionWriter clutch;
  private IOverrideParkingBrakeActionWriter parkingBrake;
  private IOverrideSteeringWheelActionWriter steeringWheel;
  private IOverrideGearActionWriter gear;

  /** Default constructor */
  public OverrideControllerValueActionImpl() {
    super();
    addAdapter(OverrideControllerValueActionImpl.class, this);
    addAdapter(IOverrideControllerValueAction.class, this);
    addAdapter(IOverrideControllerValueActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IOverrideThrottleAction getThrottle() {
    return this.throttle;
  }

  @Override
  public IOverrideBrakeAction getBrake() {
    return this.brake;
  }

  @Override
  public IOverrideClutchAction getClutch() {
    return this.clutch;
  }

  @Override
  public IOverrideParkingBrakeAction getParkingBrake() {
    return this.parkingBrake;
  }

  @Override
  public IOverrideSteeringWheelAction getSteeringWheel() {
    return this.steeringWheel;
  }

  @Override
  public IOverrideGearAction getGear() {
    return this.gear;
  }

  @Override
  public void setThrottle(IOverrideThrottleActionWriter throttle) {
    this.throttle = throttle;
  }

  @Override
  public void setBrake(IOverrideBrakeActionWriter brake) {
    this.brake = brake;
  }

  @Override
  public void setClutch(IOverrideClutchActionWriter clutch) {
    this.clutch = clutch;
  }

  @Override
  public void setParkingBrake(IOverrideParkingBrakeActionWriter parkingBrake) {
    this.parkingBrake = parkingBrake;
  }

  @Override
  public void setSteeringWheel(IOverrideSteeringWheelActionWriter steeringWheel) {
    this.steeringWheel = steeringWheel;
  }

  @Override
  public void setGear(IOverrideGearActionWriter gear) {
    this.gear = gear;
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

    IOverrideThrottleActionWriter throttle = null;
    throttle = getWriterThrottle();
    if (throttle != null) {
      result.add((BaseImpl) throttle);
    }
    IOverrideBrakeActionWriter brake = null;
    brake = getWriterBrake();
    if (brake != null) {
      result.add((BaseImpl) brake);
    }
    IOverrideClutchActionWriter clutch = null;
    clutch = getWriterClutch();
    if (clutch != null) {
      result.add((BaseImpl) clutch);
    }
    IOverrideParkingBrakeActionWriter parkingBrake = null;
    parkingBrake = getWriterParkingBrake();
    if (parkingBrake != null) {
      result.add((BaseImpl) parkingBrake);
    }
    IOverrideSteeringWheelActionWriter steeringWheel = null;
    steeringWheel = getWriterSteeringWheel();
    if (steeringWheel != null) {
      result.add((BaseImpl) steeringWheel);
    }
    IOverrideGearActionWriter gear = null;
    gear = getWriterGear();
    if (gear != null) {
      result.add((BaseImpl) gear);
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
  public OverrideControllerValueActionImpl clone() {
    OverrideControllerValueActionImpl clonedObject = new OverrideControllerValueActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IOverrideThrottleActionWriter throttle = null;
    throttle = getWriterThrottle();
    if (throttle != null) {
      IOverrideThrottleActionWriter clonedChild = ((OverrideThrottleActionImpl) throttle).clone();
      clonedObject.setThrottle(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IOverrideBrakeActionWriter brake = null;
    brake = getWriterBrake();
    if (brake != null) {
      IOverrideBrakeActionWriter clonedChild = ((OverrideBrakeActionImpl) brake).clone();
      clonedObject.setBrake(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IOverrideClutchActionWriter clutch = null;
    clutch = getWriterClutch();
    if (clutch != null) {
      IOverrideClutchActionWriter clonedChild = ((OverrideClutchActionImpl) clutch).clone();
      clonedObject.setClutch(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IOverrideParkingBrakeActionWriter parkingBrake = null;
    parkingBrake = getWriterParkingBrake();
    if (parkingBrake != null) {
      IOverrideParkingBrakeActionWriter clonedChild =
          ((OverrideParkingBrakeActionImpl) parkingBrake).clone();
      clonedObject.setParkingBrake(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IOverrideSteeringWheelActionWriter steeringWheel = null;
    steeringWheel = getWriterSteeringWheel();
    if (steeringWheel != null) {
      IOverrideSteeringWheelActionWriter clonedChild =
          ((OverrideSteeringWheelActionImpl) steeringWheel).clone();
      clonedObject.setSteeringWheel(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IOverrideGearActionWriter gear = null;
    gear = getWriterGear();
    if (gear != null) {
      IOverrideGearActionWriter clonedChild = ((OverrideGearActionImpl) gear).clone();
      clonedObject.setGear(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__THROTTLE)) {
      return (IOpenScenarioFlexElement) getThrottle();
    }
    if (key.equals(OscConstants.ELEMENT__BRAKE)) {
      return (IOpenScenarioFlexElement) getBrake();
    }
    if (key.equals(OscConstants.ELEMENT__CLUTCH)) {
      return (IOpenScenarioFlexElement) getClutch();
    }
    if (key.equals(OscConstants.ELEMENT__PARKING_BRAKE)) {
      return (IOpenScenarioFlexElement) getParkingBrake();
    }
    if (key.equals(OscConstants.ELEMENT__STEERING_WHEEL)) {
      return (IOpenScenarioFlexElement) getSteeringWheel();
    }
    if (key.equals(OscConstants.ELEMENT__GEAR)) {
      return (IOpenScenarioFlexElement) getGear();
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
    return "OverrideControllerValueAction";
  }

  // children
  @Override
  public IOverrideThrottleActionWriter getWriterThrottle() {
    return this.throttle;
  }

  @Override
  public IOverrideBrakeActionWriter getWriterBrake() {
    return this.brake;
  }

  @Override
  public IOverrideClutchActionWriter getWriterClutch() {
    return this.clutch;
  }

  @Override
  public IOverrideParkingBrakeActionWriter getWriterParkingBrake() {
    return this.parkingBrake;
  }

  @Override
  public IOverrideSteeringWheelActionWriter getWriterSteeringWheel() {
    return this.steeringWheel;
  }

  @Override
  public IOverrideGearActionWriter getWriterGear() {
    return this.gear;
  }
}
