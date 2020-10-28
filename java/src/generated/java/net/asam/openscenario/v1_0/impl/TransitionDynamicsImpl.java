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
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.DynamicsDimension;
import net.asam.openscenario.v1_0.api.DynamicsShape;
import net.asam.openscenario.v1_0.api.ITransitionDynamics;
import net.asam.openscenario.v1_0.api.writer.ITransitionDynamicsWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ITransitionDynamics. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ITransitionDynamics)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class TransitionDynamicsImpl extends BaseImpl implements ITransitionDynamicsWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__DYNAMICS_SHAPE, SimpleType.ENUM_TYPE);
    propertyToType.put(OscConstants.ATTRIBUTE__VALUE, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__DYNAMICS_DIMENSION, SimpleType.ENUM_TYPE);
  }

  private DynamicsShape dynamicsShape;
  private Double value;
  private DynamicsDimension dynamicsDimension;

  /** Default constructor */
  public TransitionDynamicsImpl() {
    super();
    addAdapter(TransitionDynamicsImpl.class, this);
    addAdapter(ITransitionDynamics.class, this);
    addAdapter(ITransitionDynamicsWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public DynamicsShape getDynamicsShape() {
    return this.dynamicsShape;
  }

  @Override
  public Double getValue() {
    return this.value;
  }

  @Override
  public DynamicsDimension getDynamicsDimension() {
    return this.dynamicsDimension;
  }

  @Override
  public void setDynamicsShape(DynamicsShape dynamicsShape) {
    this.dynamicsShape = dynamicsShape;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__DYNAMICS_SHAPE);
  }

  @Override
  public void setValue(Double value) {
    this.value = value;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__VALUE);
  }

  @Override
  public void setDynamicsDimension(DynamicsDimension dynamicsDimension) {
    this.dynamicsDimension = dynamicsDimension;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__DYNAMICS_DIMENSION);
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__DYNAMICS_SHAPE)) {
      // Enumeration Type
      DynamicsShape result = DynamicsShape.getFromLiteral(parameterLiteralValue);
      if (result != null) {
        this.dynamicsShape = result;
        addResolvedParameter(attributeKey);
      } else {
        logger.logMessage(
            new FileContentMessage(
                "Value '" + parameterLiteralValue + "' is not allowed.",
                ErrorLevel.ERROR,
                getTextmarker(attributeKey)));
      }

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__VALUE)) {
      // Simple type
      this.value =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__DYNAMICS_DIMENSION)) {
      // Enumeration Type
      DynamicsDimension result = DynamicsDimension.getFromLiteral(parameterLiteralValue);
      if (result != null) {
        this.dynamicsDimension = result;
        addResolvedParameter(attributeKey);
      } else {
        logger.logMessage(
            new FileContentMessage(
                "Value '" + parameterLiteralValue + "' is not allowed.",
                ErrorLevel.ERROR,
                getTextmarker(attributeKey)));
      }
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
  public TransitionDynamicsImpl clone() {
    TransitionDynamicsImpl clonedObject = new TransitionDynamicsImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Enumeration Type
    DynamicsShape dynamicsShape = getDynamicsShape();
    if (dynamicsShape != null) {
      clonedObject.dynamicsShape = DynamicsShape.getFromLiteral(dynamicsShape.getLiteral());
    }
    // Simple type
    clonedObject.value = getValue();
    // Enumeration Type
    DynamicsDimension dynamicsDimension = getDynamicsDimension();
    if (dynamicsDimension != null) {
      clonedObject.dynamicsDimension =
          DynamicsDimension.getFromLiteral(dynamicsDimension.getLiteral());
    }
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
    if (key.equals(OscConstants.ATTRIBUTE__VALUE)) {
      return getValue();
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__DYNAMICS_SHAPE)) {
      DynamicsShape dynamicsShape = getDynamicsShape();
      return dynamicsShape != null ? dynamicsShape.getLiteral() : null;
    } else if (key.equals(OscConstants.ATTRIBUTE__DYNAMICS_DIMENSION)) {
      DynamicsDimension dynamicsDimension = getDynamicsDimension();
      return dynamicsDimension != null ? dynamicsDimension.getLiteral() : null;
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "TransitionDynamics";
  }

  @Override
  public void writeParameterToDynamicsShape(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__DYNAMICS_SHAPE, parameterName, null /*no textmarker*/);
    this.dynamicsShape = null;
  }

  @Override
  public void writeParameterToValue(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__VALUE, parameterName, null /*no textmarker*/);
    this.value = null;
  }

  @Override
  public void writeParameterToDynamicsDimension(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__DYNAMICS_DIMENSION, parameterName, null /*no textmarker*/);
    this.dynamicsDimension = null;
  }

  @Override
  public String getParameterFromDynamicsShape() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__DYNAMICS_SHAPE);
  }

  @Override
  public String getParameterFromValue() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__VALUE);
  }

  @Override
  public String getParameterFromDynamicsDimension() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__DYNAMICS_DIMENSION);
  }

  @Override
  public boolean isDynamicsShapeParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__DYNAMICS_SHAPE);
  }

  @Override
  public boolean isValueParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__VALUE);
  }

  @Override
  public boolean isDynamicsDimensionParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__DYNAMICS_DIMENSION);
  }

  // children

}
