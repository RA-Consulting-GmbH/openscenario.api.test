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
import net.asam.openscenario.v1_0.api.IProperties;
import net.asam.openscenario.v1_0.api.IRoadCondition;
import net.asam.openscenario.v1_0.api.writer.IPropertiesWriter;
import net.asam.openscenario.v1_0.api.writer.IRoadConditionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IRoadCondition. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IRoadCondition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class RoadConditionImpl extends BaseImpl implements IRoadConditionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR, SimpleType.DOUBLE);
  }

  private Double frictionScaleFactor;
  private IPropertiesWriter properties;

  /** Default constructor */
  public RoadConditionImpl() {
    super();
    addAdapter(RoadConditionImpl.class, this);
    addAdapter(IRoadCondition.class, this);
    addAdapter(IRoadConditionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public Double getFrictionScaleFactor() {
    return this.frictionScaleFactor;
  }

  @Override
  public IProperties getProperties() {
    return this.properties;
  }

  @Override
  public void setFrictionScaleFactor(Double frictionScaleFactor) {
    this.frictionScaleFactor = frictionScaleFactor;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR);
  }

  @Override
  public void setProperties(IPropertiesWriter properties) {
    this.properties = properties;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR)) {
      // Simple type
      this.frictionScaleFactor =
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

    IPropertiesWriter properties = null;
    properties = getWriterProperties();
    if (properties != null) {
      result.add((BaseImpl) properties);
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
  public RoadConditionImpl clone() {
    RoadConditionImpl clonedObject = new RoadConditionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.frictionScaleFactor = getFrictionScaleFactor();
    // clone children
    IPropertiesWriter properties = null;
    properties = getWriterProperties();
    if (properties != null) {
      IPropertiesWriter clonedChild = ((PropertiesImpl) properties).clone();
      clonedObject.setProperties(clonedChild);
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
    if (key.equals(OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR)) {
      return getFrictionScaleFactor();
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
    if (key.equals(OscConstants.ELEMENT__PROPERTIES)) {
      return (IOpenScenarioFlexElement) getProperties();
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
    return "RoadCondition";
  }

  @Override
  public void writeParameterToFrictionScaleFactor(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR, parameterName, null /*no textmarker*/);
    this.frictionScaleFactor = null;
  }

  @Override
  public String getParameterFromFrictionScaleFactor() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR);
  }

  @Override
  public boolean isFrictionScaleFactorParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR);
  }

  // children
  @Override
  public IPropertiesWriter getWriterProperties() {
    return this.properties;
  }
}
