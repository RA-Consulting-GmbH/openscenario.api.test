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
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.v1_0.api.IOverrideBrakeAction;
import net.asam.openscenario.v1_0.api.IOverrideClutchAction;
import net.asam.openscenario.v1_0.api.IOverrideControllerValueAction;
import net.asam.openscenario.v1_0.api.IOverrideGearAction;
import net.asam.openscenario.v1_0.api.IOverrideParkingBrakeAction;
import net.asam.openscenario.v1_0.api.IOverrideSteeringWheelAction;
import net.asam.openscenario.v1_0.api.IOverrideThrottleAction;
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
    implements IOverrideControllerValueAction, Cloneable {
  protected static Hashtable<String, Class<?>> propertyToType = new Hashtable<String, Class<?>>();

  /** Filling the property to type map */
  static {
  }

  private IOverrideThrottleAction throttle;
  private IOverrideBrakeAction brake;
  private IOverrideClutchAction clutch;
  private IOverrideParkingBrakeAction parkingBrake;
  private IOverrideSteeringWheelAction steeringWheel;
  private IOverrideGearAction gear;
  /** Default constructor */
  public OverrideControllerValueActionImpl() {
    super();
    addAdapter(OverrideControllerValueActionImpl.class, this);
    addAdapter(IOverrideControllerValueAction.class, this);
  }

  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IOverrideThrottleAction getThrottle() {
    return throttle;
  }

  @Override
  public IOverrideBrakeAction getBrake() {
    return brake;
  }

  @Override
  public IOverrideClutchAction getClutch() {
    return clutch;
  }

  @Override
  public IOverrideParkingBrakeAction getParkingBrake() {
    return parkingBrake;
  }

  @Override
  public IOverrideSteeringWheelAction getSteeringWheel() {
    return steeringWheel;
  }

  @Override
  public IOverrideGearAction getGear() {
    return gear;
  }
  /**
   * Sets the value of model property throttle
   *
   * @param throttle from OpenSCENARIO class model specification: [New value for throttle pedal
   *     position or unset value.]
   */
  public void setThrottle(IOverrideThrottleAction throttle) {
    this.throttle = throttle;
  }
  /**
   * Sets the value of model property brake
   *
   * @param brake from OpenSCENARIO class model specification: [New value for brake position or
   *     unset value.]
   */
  public void setBrake(IOverrideBrakeAction brake) {
    this.brake = brake;
  }
  /**
   * Sets the value of model property clutch
   *
   * @param clutch from OpenSCENARIO class model specification: [New value for clutch position or
   *     unset value.]
   */
  public void setClutch(IOverrideClutchAction clutch) {
    this.clutch = clutch;
  }
  /**
   * Sets the value of model property parkingBrake
   *
   * @param parkingBrake from OpenSCENARIO class model specification: [New value for parking brake
   *     position or unset value.]
   */
  public void setParkingBrake(IOverrideParkingBrakeAction parkingBrake) {
    this.parkingBrake = parkingBrake;
  }
  /**
   * Sets the value of model property steeringWheel
   *
   * @param steeringWheel from OpenSCENARIO class model specification: [New value for steering wheel
   *     position or unset value.]
   */
  public void setSteeringWheel(IOverrideSteeringWheelAction steeringWheel) {
    this.steeringWheel = steeringWheel;
  }
  /**
   * Sets the value of model property gear
   *
   * @param gear from OpenSCENARIO class model specification: [New value for gear position or unset
   *     value.]
   */
  public void setGear(IOverrideGearAction gear) {
    this.gear = gear;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {}

  @Override
  public Class<?> getTypeFromAttributeName(String attributeKey) {
    return propertyToType.get(attributeKey);
  }

  /**
   * A list of all aggregated children (lists are flattened). This may be used for applying a
   * specific method for any child.
   *
   * @return a list with all children (as BaseImpl)
   */
  public List<BaseImpl> getChildren() {
    List<BaseImpl> result = new ArrayList<BaseImpl>();

    IOverrideThrottleAction throttle = null;
    throttle = getThrottle();
    if (throttle != null) {
      result.add((BaseImpl) throttle);
    }
    IOverrideBrakeAction brake = null;
    brake = getBrake();
    if (brake != null) {
      result.add((BaseImpl) brake);
    }
    IOverrideClutchAction clutch = null;
    clutch = getClutch();
    if (clutch != null) {
      result.add((BaseImpl) clutch);
    }
    IOverrideParkingBrakeAction parkingBrake = null;
    parkingBrake = getParkingBrake();
    if (parkingBrake != null) {
      result.add((BaseImpl) parkingBrake);
    }
    IOverrideSteeringWheelAction steeringWheel = null;
    steeringWheel = getSteeringWheel();
    if (steeringWheel != null) {
      result.add((BaseImpl) steeringWheel);
    }
    IOverrideGearAction gear = null;
    gear = getGear();
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
  public OverrideControllerValueActionImpl clone() {
    OverrideControllerValueActionImpl clonedObject = new OverrideControllerValueActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IOverrideThrottleAction throttle = null;
    throttle = getThrottle();
    if (throttle != null) {
      OverrideThrottleActionImpl clonedChild = ((OverrideThrottleActionImpl) throttle).clone();
      clonedObject.setThrottle(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IOverrideBrakeAction brake = null;
    brake = getBrake();
    if (brake != null) {
      OverrideBrakeActionImpl clonedChild = ((OverrideBrakeActionImpl) brake).clone();
      clonedObject.setBrake(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IOverrideClutchAction clutch = null;
    clutch = getClutch();
    if (clutch != null) {
      OverrideClutchActionImpl clonedChild = ((OverrideClutchActionImpl) clutch).clone();
      clonedObject.setClutch(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IOverrideParkingBrakeAction parkingBrake = null;
    parkingBrake = getParkingBrake();
    if (parkingBrake != null) {
      OverrideParkingBrakeActionImpl clonedChild =
          ((OverrideParkingBrakeActionImpl) parkingBrake).clone();
      clonedObject.setParkingBrake(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IOverrideSteeringWheelAction steeringWheel = null;
    steeringWheel = getSteeringWheel();
    if (steeringWheel != null) {
      OverrideSteeringWheelActionImpl clonedChild =
          ((OverrideSteeringWheelActionImpl) steeringWheel).clone();
      clonedObject.setSteeringWheel(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IOverrideGearAction gear = null;
    gear = getGear();
    if (gear != null) {
      OverrideGearActionImpl clonedChild = ((OverrideGearActionImpl) gear).clone();
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
    } else if (key.equals(OscConstants.ELEMENT__BRAKE)) {
      return (IOpenScenarioFlexElement) getBrake();
    } else if (key.equals(OscConstants.ELEMENT__CLUTCH)) {
      return (IOpenScenarioFlexElement) getClutch();
    } else if (key.equals(OscConstants.ELEMENT__PARKING_BRAKE)) {
      return (IOpenScenarioFlexElement) getParkingBrake();
    } else if (key.equals(OscConstants.ELEMENT__STEERING_WHEEL)) {
      return (IOpenScenarioFlexElement) getSteeringWheel();
    } else if (key.equals(OscConstants.ELEMENT__GEAR)) {
      return (IOpenScenarioFlexElement) getGear();
    } else {
      throw new KeyNotSupportedException();
    }
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
}
