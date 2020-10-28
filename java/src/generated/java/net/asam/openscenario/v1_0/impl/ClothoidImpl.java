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
import net.asam.openscenario.v1_0.api.IClothoid;
import net.asam.openscenario.v1_0.api.IPosition;
import net.asam.openscenario.v1_0.api.writer.IClothoidWriter;
import net.asam.openscenario.v1_0.api.writer.IPositionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IClothoid. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IClothoid)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ClothoidImpl extends BaseImpl implements IClothoidWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__CURVATURE, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__CURVATURE_DOT, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__LENGTH, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__START_TIME, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__STOP_TIME, SimpleType.DOUBLE);
  }

  private Double curvature;
  private Double curvatureDot;
  private Double length;
  private Double startTime;
  private Double stopTime;
  private IPositionWriter position;

  /** Default constructor */
  public ClothoidImpl() {
    super();
    addAdapter(ClothoidImpl.class, this);
    addAdapter(IClothoid.class, this);
    addAdapter(IClothoidWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public Double getCurvature() {
    return this.curvature;
  }

  @Override
  public Double getCurvatureDot() {
    return this.curvatureDot;
  }

  @Override
  public Double getLength() {
    return this.length;
  }

  @Override
  public Double getStartTime() {
    return this.startTime;
  }

  @Override
  public Double getStopTime() {
    return this.stopTime;
  }

  @Override
  public IPosition getPosition() {
    return this.position;
  }

  @Override
  public void setCurvature(Double curvature) {
    this.curvature = curvature;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__CURVATURE);
  }

  @Override
  public void setCurvatureDot(Double curvatureDot) {
    this.curvatureDot = curvatureDot;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__CURVATURE_DOT);
  }

  @Override
  public void setLength(Double length) {
    this.length = length;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__LENGTH);
  }

  @Override
  public void setStartTime(Double startTime) {
    this.startTime = startTime;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__START_TIME);
  }

  @Override
  public void setStopTime(Double stopTime) {
    this.stopTime = stopTime;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__STOP_TIME);
  }

  @Override
  public void setPosition(IPositionWriter position) {
    this.position = position;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__CURVATURE)) {
      // Simple type
      this.curvature =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__CURVATURE_DOT)) {
      // Simple type
      this.curvatureDot =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__LENGTH)) {
      // Simple type
      this.length =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__START_TIME)) {
      // Simple type
      this.startTime =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__STOP_TIME)) {
      // Simple type
      this.stopTime =
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

    IPositionWriter position = null;
    position = getWriterPosition();
    if (position != null) {
      result.add((BaseImpl) position);
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
  public ClothoidImpl clone() {
    ClothoidImpl clonedObject = new ClothoidImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.curvature = getCurvature();
    // Simple type
    clonedObject.curvatureDot = getCurvatureDot();
    // Simple type
    clonedObject.length = getLength();
    // Simple type
    clonedObject.startTime = getStartTime();
    // Simple type
    clonedObject.stopTime = getStopTime();
    // clone children
    IPositionWriter position = null;
    position = getWriterPosition();
    if (position != null) {
      IPositionWriter clonedChild = ((PositionImpl) position).clone();
      clonedObject.setPosition(clonedChild);
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__CURVATURE)) {
      return getCurvature();
    } else if (key.equals(OscConstants.ATTRIBUTE__CURVATURE_DOT)) {
      return getCurvatureDot();
    } else if (key.equals(OscConstants.ATTRIBUTE__LENGTH)) {
      return getLength();
    } else if (key.equals(OscConstants.ATTRIBUTE__START_TIME)) {
      return getStartTime();
    } else if (key.equals(OscConstants.ATTRIBUTE__STOP_TIME)) {
      return getStopTime();
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ELEMENT__POSITION)) {
      return (IOpenScenarioFlexElement) getPosition();
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
    return "Clothoid";
  }

  @Override
  public void writeParameterToCurvature(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__CURVATURE, parameterName, null /*no textmarker*/);
    this.curvature = null;
  }

  @Override
  public void writeParameterToCurvatureDot(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__CURVATURE_DOT, parameterName, null /*no textmarker*/);
    this.curvatureDot = null;
  }

  @Override
  public void writeParameterToLength(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__LENGTH, parameterName, null /*no textmarker*/);
    this.length = null;
  }

  @Override
  public void writeParameterToStartTime(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__START_TIME, parameterName, null /*no textmarker*/);
    this.startTime = null;
  }

  @Override
  public void writeParameterToStopTime(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__STOP_TIME, parameterName, null /*no textmarker*/);
    this.stopTime = null;
  }

  @Override
  public String getParameterFromCurvature() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__CURVATURE);
  }

  @Override
  public String getParameterFromCurvatureDot() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__CURVATURE_DOT);
  }

  @Override
  public String getParameterFromLength() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__LENGTH);
  }

  @Override
  public String getParameterFromStartTime() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__START_TIME);
  }

  @Override
  public String getParameterFromStopTime() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__STOP_TIME);
  }

  @Override
  public boolean isCurvatureParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__CURVATURE);
  }

  @Override
  public boolean isCurvatureDotParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__CURVATURE_DOT);
  }

  @Override
  public boolean isLengthParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__LENGTH);
  }

  @Override
  public boolean isStartTimeParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__START_TIME);
  }

  @Override
  public boolean isStopTimeParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__STOP_TIME);
  }

  // children
  @Override
  public IPositionWriter getWriterPosition() {
    return this.position;
  }
}
