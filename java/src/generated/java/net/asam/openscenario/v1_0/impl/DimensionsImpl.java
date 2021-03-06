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
import net.asam.openscenario.v1_0.api.IDimensions;
import net.asam.openscenario.v1_0.api.writer.IDimensionsWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IDimensions. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IDimensions)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class DimensionsImpl extends BaseImpl implements IDimensionsWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__WIDTH, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__LENGTH, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__HEIGHT, SimpleType.DOUBLE);
  }

  private Double width;
  private Double length;
  private Double height;

  /** Default constructor */
  public DimensionsImpl() {
    super();
    addAdapter(DimensionsImpl.class, this);
    addAdapter(IDimensions.class, this);
    addAdapter(IDimensionsWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public Double getWidth() {
    return this.width;
  }

  @Override
  public Double getLength() {
    return this.length;
  }

  @Override
  public Double getHeight() {
    return this.height;
  }

  @Override
  public void setWidth(Double width) {
    this.width = width;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__WIDTH);
  }

  @Override
  public void setLength(Double length) {
    this.length = length;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__LENGTH);
  }

  @Override
  public void setHeight(Double height) {
    this.height = height;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__HEIGHT);
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__WIDTH)) {
      // Simple type
      this.width =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__LENGTH)) {
      // Simple type
      this.length =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__HEIGHT)) {
      // Simple type
      this.height =
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
  public DimensionsImpl clone() {
    DimensionsImpl clonedObject = new DimensionsImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.width = getWidth();
    // Simple type
    clonedObject.length = getLength();
    // Simple type
    clonedObject.height = getHeight();
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
    if (key.equals(OscConstants.ATTRIBUTE__WIDTH)) {
      return getWidth();
    } else if (key.equals(OscConstants.ATTRIBUTE__LENGTH)) {
      return getLength();
    } else if (key.equals(OscConstants.ATTRIBUTE__HEIGHT)) {
      return getHeight();
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
    return "Dimensions";
  }

  @Override
  public void writeParameterToWidth(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__WIDTH, parameterName, null /*no textmarker*/);
    this.width = null;
  }

  @Override
  public void writeParameterToLength(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__LENGTH, parameterName, null /*no textmarker*/);
    this.length = null;
  }

  @Override
  public void writeParameterToHeight(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__HEIGHT, parameterName, null /*no textmarker*/);
    this.height = null;
  }

  @Override
  public String getParameterFromWidth() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__WIDTH);
  }

  @Override
  public String getParameterFromLength() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__LENGTH);
  }

  @Override
  public String getParameterFromHeight() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__HEIGHT);
  }

  @Override
  public boolean isWidthParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__WIDTH);
  }

  @Override
  public boolean isLengthParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__LENGTH);
  }

  @Override
  public boolean isHeightParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__HEIGHT);
  }

  // children

}
