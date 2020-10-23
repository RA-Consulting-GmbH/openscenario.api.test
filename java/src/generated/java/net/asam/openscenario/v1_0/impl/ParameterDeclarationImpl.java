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
import net.asam.openscenario.v1_0.api.IParameterDeclaration;
import net.asam.openscenario.v1_0.api.ParameterType;
import net.asam.openscenario.v1_0.api.writer.IParameterDeclarationWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IParameterDeclaration. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IParameterDeclaration)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ParameterDeclarationImpl extends BaseImpl
    implements IParameterDeclaration, IParameterDeclarationWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__PARAMETER_TYPE, SimpleType.ENUM_TYPE);
    propertyToType.put(OscConstants.ATTRIBUTE__VALUE, SimpleType.STRING);
  }

  private String name;
  private ParameterType parameterType;
  private String value;

  /** Default constructor */
  public ParameterDeclarationImpl() {
    super();
    addAdapter(ParameterDeclarationImpl.class, this);
    addAdapter(IParameterDeclaration.class, this);
    addAdapter(IParameterDeclarationWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public String getName() {
    return this.name;
  }

  @Override
  public ParameterType getParameterType() {
    return this.parameterType;
  }

  @Override
  public String getValue() {
    return this.value;
  }
  /**
   * Sets the value of model property name
   *
   * @param name from OpenSCENARIO class model specification: [Name of the parameter.]
   */
  public void setName(String name) {
    this.name = name;
  }
  /**
   * Sets the value of model property parameterType
   *
   * @param parameterType from OpenSCENARIO class model specification: [Type of the parameter.]
   */
  public void setParameterType(ParameterType parameterType) {
    this.parameterType = parameterType;
  }
  /**
   * Sets the value of model property value
   *
   * @param value from OpenSCENARIO class model specification: [Value of the parameter as its
   *     default value.]
   */
  public void setValue(String value) {
    this.value = value;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__PARAMETER_TYPE)) {
      // Enumeration Type
      ParameterType result = ParameterType.getFromLiteral(parameterLiteralValue);
      if (result != null) {
        this.parameterType = result;
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
          ParserHelper.parseString(logger, parameterLiteralValue, getTextmarker(attributeKey));
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
  public ParameterDeclarationImpl clone() {
    ParameterDeclarationImpl clonedObject = new ParameterDeclarationImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setName(getName());
    // Enumeration Type
    ParameterType parameterType = getParameterType();
    if (parameterType != null) {
      clonedObject.setParameterType(ParameterType.getFromLiteral(parameterType.getLiteral()));
    }
    // Simple type
    clonedObject.setValue(getValue());
    // clone children
    return clonedObject;
  }

  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException {
    // proxies and string attributes
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__NAME)) {
      return getName();
    } else if (key.equals(OscConstants.ATTRIBUTE__VALUE)) {
      return getValue();
    }
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
    if (key.equals(OscConstants.ATTRIBUTE__PARAMETER_TYPE)) {
      ParameterType parameterType = getParameterType();
      return parameterType != null ? parameterType.getLiteral() : null;
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "ParameterDeclaration";
  }

  @Override
  public void writeToParameterType(ParameterType parameterType) {
    setParameterType(parameterType);
  }

  @Override
  public void writeToValue(String value) {
    setValue(value);
  }

  @Override
  public void writeParameterToParameterType(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__PARAMETER_TYPE, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToValue(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__VALUE, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromParameterType() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__PARAMETER_TYPE);
  }

  @Override
  public String getParameterFromValue() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__VALUE);
  }

  @Override
  public boolean isParameterTypeParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__PARAMETER_TYPE);
  }

  @Override
  public boolean isValueParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__VALUE);
  }

  // children

}
