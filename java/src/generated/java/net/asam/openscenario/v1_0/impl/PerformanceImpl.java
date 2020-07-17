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
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.IPerformance;
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
public class PerformanceImpl extends BaseImpl implements IPerformance, Cloneable {
  protected static Hashtable<String, Class<?>> propertyToType = new Hashtable<String, Class<?>>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__MAX_SPEED, Double.class);
    propertyToType.put(OscConstants.ATTRIBUTE__MAX_ACCELERATION, Double.class);
    propertyToType.put(OscConstants.ATTRIBUTE__MAX_DECELERATION, Double.class);
  }

  private Double maxSpeed;
  private Double maxAcceleration;
  private Double maxDeceleration;
  /** Default constructor */
  public PerformanceImpl() {
    super();
    addAdapter(PerformanceImpl.class, this);
    addAdapter(IPerformance.class, this);
  }

  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public Double getMaxSpeed() {
    return maxSpeed;
  }

  @Override
  public Double getMaxAcceleration() {
    return maxAcceleration;
  }

  @Override
  public Double getMaxDeceleration() {
    return maxDeceleration;
  }
  /**
   * Sets the value of model property maxSpeed
   *
   * @param maxSpeed from OpenSCENARIO class model specification: [Maximum speed of the vehicle.
   *     Unit: m/s.]
   */
  public void setMaxSpeed(Double maxSpeed) {
    this.maxSpeed = maxSpeed;
  }
  /**
   * Sets the value of model property maxAcceleration
   *
   * @param maxAcceleration from OpenSCENARIO class model specification: [Maximum acceleration of
   *     the vehicle. Unit: m/s^2. Range: [0..inf[.]
   */
  public void setMaxAcceleration(Double maxAcceleration) {
    this.maxAcceleration = maxAcceleration;
  }
  /**
   * Sets the value of model property maxDeceleration
   *
   * @param maxDeceleration from OpenSCENARIO class model specification: [Maximum deceleration of
   *     the vehicle. Unit: m/s^2. Range: [0..inf[.]
   */
  public void setMaxDeceleration(Double maxDeceleration) {
    this.maxDeceleration = maxDeceleration;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__MAX_SPEED)) {
      // Simple type
      maxSpeed =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      removeResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__MAX_ACCELERATION)) {
      // Simple type
      maxAcceleration =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      removeResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__MAX_DECELERATION)) {
      // Simple type
      maxDeceleration =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      removeResolvedParameter(attributeKey);
    }
  }

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

    return result;
  }

  /**
   * Making a (deep) clone this object. This is useful and used for importing elements from
   * catalogs.
   *
   * @return a deep copy of the object.
   */
  public PerformanceImpl clone() {
    PerformanceImpl clonedObject = new PerformanceImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setMaxSpeed(getMaxSpeed());
    // Simple type
    clonedObject.setMaxAcceleration(getMaxAcceleration());
    // Simple type
    clonedObject.setMaxDeceleration(getMaxDeceleration());
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
    } else {
      throw new KeyNotSupportedException();
    }
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
}
