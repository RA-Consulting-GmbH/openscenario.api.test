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
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.IAxle;
import net.asam.openscenario.v1_0.api.writer.IAxleWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IAxle. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IAxle)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class AxleImpl extends BaseImpl implements IAxleWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__MAX_STEERING, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__WHEEL_DIAMETER, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__TRACK_WIDTH, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__POSITION_X, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__POSITION_Z, SimpleType.DOUBLE);
  }

  private Double maxSteering;
  private Double wheelDiameter;
  private Double trackWidth;
  private Double positionX;
  private Double positionZ;

  /** Default constructor */
  public AxleImpl() {
    super();
    addAdapter(AxleImpl.class, this);
    addAdapter(IAxle.class, this);
    addAdapter(IAxleWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public Double getMaxSteering() {
    return this.maxSteering;
  }

  @Override
  public Double getWheelDiameter() {
    return this.wheelDiameter;
  }

  @Override
  public Double getTrackWidth() {
    return this.trackWidth;
  }

  @Override
  public Double getPositionX() {
    return this.positionX;
  }

  @Override
  public Double getPositionZ() {
    return this.positionZ;
  }

  @Override
  public void setMaxSteering(Double maxSteering) {
    this.maxSteering = maxSteering;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__MAX_STEERING);
  }

  @Override
  public void setWheelDiameter(Double wheelDiameter) {
    this.wheelDiameter = wheelDiameter;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__WHEEL_DIAMETER);
  }

  @Override
  public void setTrackWidth(Double trackWidth) {
    this.trackWidth = trackWidth;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__TRACK_WIDTH);
  }

  @Override
  public void setPositionX(Double positionX) {
    this.positionX = positionX;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__POSITION_X);
  }

  @Override
  public void setPositionZ(Double positionZ) {
    this.positionZ = positionZ;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__POSITION_Z);
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__MAX_STEERING)) {
      // Simple type
      this.maxSteering =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__WHEEL_DIAMETER)) {
      // Simple type
      this.wheelDiameter =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__TRACK_WIDTH)) {
      // Simple type
      this.trackWidth =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__POSITION_X)) {
      // Simple type
      this.positionX =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__POSITION_Z)) {
      // Simple type
      this.positionZ =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);
    }
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

    return result;
  }

  /**
   * Making a (deep) clone this object. This is useful and used for importing elements from
   * catalogs.
   *
   * @return a deep copy of the object.
   */
  @Override
  public AxleImpl clone() {
    AxleImpl clonedObject = new AxleImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.maxSteering = getMaxSteering();
    // Simple type
    clonedObject.wheelDiameter = getWheelDiameter();
    // Simple type
    clonedObject.trackWidth = getTrackWidth();
    // Simple type
    clonedObject.positionX = getPositionX();
    // Simple type
    clonedObject.positionZ = getPositionZ();
    // clone children
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__MAX_STEERING)) {
      return getMaxSteering();
    } else if (key.equals(OscConstants.ATTRIBUTE__WHEEL_DIAMETER)) {
      return getWheelDiameter();
    } else if (key.equals(OscConstants.ATTRIBUTE__TRACK_WIDTH)) {
      return getTrackWidth();
    } else if (key.equals(OscConstants.ATTRIBUTE__POSITION_X)) {
      return getPositionX();
    } else if (key.equals(OscConstants.ATTRIBUTE__POSITION_Z)) {
      return getPositionZ();
    }
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
    return "Axle";
  }

  @Override
  public void writeParameterToMaxSteering(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__MAX_STEERING, parameterName, null /*no textmarker*/);
    this.maxSteering = null;
  }

  @Override
  public void writeParameterToWheelDiameter(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__WHEEL_DIAMETER, parameterName, null /*no textmarker*/);
    this.wheelDiameter = null;
  }

  @Override
  public void writeParameterToTrackWidth(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__TRACK_WIDTH, parameterName, null /*no textmarker*/);
    this.trackWidth = null;
  }

  @Override
  public void writeParameterToPositionX(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__POSITION_X, parameterName, null /*no textmarker*/);
    this.positionX = null;
  }

  @Override
  public void writeParameterToPositionZ(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__POSITION_Z, parameterName, null /*no textmarker*/);
    this.positionZ = null;
  }

  @Override
  public String getParameterFromMaxSteering() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__MAX_STEERING);
  }

  @Override
  public String getParameterFromWheelDiameter() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__WHEEL_DIAMETER);
  }

  @Override
  public String getParameterFromTrackWidth() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__TRACK_WIDTH);
  }

  @Override
  public String getParameterFromPositionX() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__POSITION_X);
  }

  @Override
  public String getParameterFromPositionZ() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__POSITION_Z);
  }

  @Override
  public boolean isMaxSteeringParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__MAX_STEERING);
  }

  @Override
  public boolean isWheelDiameterParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__WHEEL_DIAMETER);
  }

  @Override
  public boolean isTrackWidthParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__TRACK_WIDTH);
  }

  @Override
  public boolean isPositionXParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__POSITION_X);
  }

  @Override
  public boolean isPositionZParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__POSITION_Z);
  }

  // children

}
