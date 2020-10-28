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
import net.asam.openscenario.v1_0.api.IPerformance;
import net.asam.openscenario.v1_0.api.writer.IPerformanceWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IPerformance. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IPerformance)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class PerformanceImpl extends BaseImpl implements IPerformanceWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__MAX_SPEED, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__MAX_ACCELERATION, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__MAX_DECELERATION, SimpleType.DOUBLE);
  }

  private Double maxSpeed;
  private Double maxAcceleration;
  private Double maxDeceleration;

  /** Default constructor */
  public PerformanceImpl() {
    super();
    addAdapter(PerformanceImpl.class, this);
    addAdapter(IPerformance.class, this);
    addAdapter(IPerformanceWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public Double getMaxSpeed() {
    return this.maxSpeed;
  }

  @Override
  public Double getMaxAcceleration() {
    return this.maxAcceleration;
  }

  @Override
  public Double getMaxDeceleration() {
    return this.maxDeceleration;
  }

  @Override
  public void setMaxSpeed(Double maxSpeed) {
    this.maxSpeed = maxSpeed;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__MAX_SPEED);
  }

  @Override
  public void setMaxAcceleration(Double maxAcceleration) {
    this.maxAcceleration = maxAcceleration;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__MAX_ACCELERATION);
  }

  @Override
  public void setMaxDeceleration(Double maxDeceleration) {
    this.maxDeceleration = maxDeceleration;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__MAX_DECELERATION);
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__MAX_SPEED)) {
      // Simple type
      this.maxSpeed =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__MAX_ACCELERATION)) {
      // Simple type
      this.maxAcceleration =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__MAX_DECELERATION)) {
      // Simple type
      this.maxDeceleration =
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
  public PerformanceImpl clone() {
    PerformanceImpl clonedObject = new PerformanceImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.maxSpeed = getMaxSpeed();
    // Simple type
    clonedObject.maxAcceleration = getMaxAcceleration();
    // Simple type
    clonedObject.maxDeceleration = getMaxDeceleration();
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
    if (key.equals(OscConstants.ATTRIBUTE__MAX_SPEED)) {
      return getMaxSpeed();
    } else if (key.equals(OscConstants.ATTRIBUTE__MAX_ACCELERATION)) {
      return getMaxAcceleration();
    } else if (key.equals(OscConstants.ATTRIBUTE__MAX_DECELERATION)) {
      return getMaxDeceleration();
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
    return "Performance";
  }

  @Override
  public void writeParameterToMaxSpeed(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__MAX_SPEED, parameterName, null /*no textmarker*/);
    this.maxSpeed = null;
  }

  @Override
  public void writeParameterToMaxAcceleration(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__MAX_ACCELERATION, parameterName, null /*no textmarker*/);
    this.maxAcceleration = null;
  }

  @Override
  public void writeParameterToMaxDeceleration(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__MAX_DECELERATION, parameterName, null /*no textmarker*/);
    this.maxDeceleration = null;
  }

  @Override
  public String getParameterFromMaxSpeed() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__MAX_SPEED);
  }

  @Override
  public String getParameterFromMaxAcceleration() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__MAX_ACCELERATION);
  }

  @Override
  public String getParameterFromMaxDeceleration() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__MAX_DECELERATION);
  }

  @Override
  public boolean isMaxSpeedParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__MAX_SPEED);
  }

  @Override
  public boolean isMaxAccelerationParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__MAX_ACCELERATION);
  }

  @Override
  public boolean isMaxDecelerationParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__MAX_DECELERATION);
  }

  // children

}
