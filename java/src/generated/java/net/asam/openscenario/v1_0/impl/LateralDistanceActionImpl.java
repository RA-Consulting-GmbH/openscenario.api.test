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
import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.impl.NamedReferenceProxy;
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.IDynamicConstraints;
import net.asam.openscenario.v1_0.api.IEntity;
import net.asam.openscenario.v1_0.api.ILateralDistanceAction;
import net.asam.openscenario.v1_0.api.writer.IDynamicConstraintsWriter;
import net.asam.openscenario.v1_0.api.writer.ILateralDistanceActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ILateralDistanceAction. With setter methods to fill the
 * properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ILateralDistanceAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class LateralDistanceActionImpl extends BaseImpl implements ILateralDistanceActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__ENTITY_REF, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__DISTANCE, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__FREESPACE, SimpleType.BOOLEAN);
    propertyToType.put(OscConstants.ATTRIBUTE__CONTINUOUS, SimpleType.BOOLEAN);
  }

  private INamedReference<IEntity> entityRef;
  private Double distance;
  private Boolean freespace;
  private Boolean continuous;
  private IDynamicConstraintsWriter dynamicConstraints;

  /** Default constructor */
  public LateralDistanceActionImpl() {
    super();
    addAdapter(LateralDistanceActionImpl.class, this);
    addAdapter(ILateralDistanceAction.class, this);
    addAdapter(ILateralDistanceActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public INamedReference<IEntity> getEntityRef() {
    return this.entityRef;
  }

  @Override
  public Double getDistance() {
    return this.distance;
  }

  @Override
  public Boolean getFreespace() {
    return this.freespace;
  }

  @Override
  public Boolean getContinuous() {
    return this.continuous;
  }

  @Override
  public IDynamicConstraints getDynamicConstraints() {
    return this.dynamicConstraints;
  }

  @Override
  public void setEntityRef(INamedReference<IEntity> entityRef) {
    this.entityRef = entityRef;
  }

  @Override
  public void setDistance(Double distance) {
    this.distance = distance;
  }

  @Override
  public void setFreespace(Boolean freespace) {
    this.freespace = freespace;
  }

  @Override
  public void setContinuous(Boolean continuous) {
    this.continuous = continuous;
  }

  @Override
  public void setDynamicConstraints(IDynamicConstraintsWriter dynamicConstraints) {
    this.dynamicConstraints = dynamicConstraints;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__ENTITY_REF)) {
      // Proxy
      NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<>(parameterLiteralValue);
      this.entityRef = proxy;
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__DISTANCE)) {
      // Simple type
      this.distance =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__FREESPACE)) {
      // Simple type
      this.freespace =
          ParserHelper.parseBoolean(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__CONTINUOUS)) {
      // Simple type
      this.continuous =
          ParserHelper.parseBoolean(logger, parameterLiteralValue, getTextmarker(attributeKey));
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

    IDynamicConstraintsWriter dynamicConstraints = null;
    dynamicConstraints = getWriterDynamicConstraints();
    if (dynamicConstraints != null) {
      result.add((BaseImpl) dynamicConstraints);
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
  public LateralDistanceActionImpl clone() {
    LateralDistanceActionImpl clonedObject = new LateralDistanceActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Proxy
    NamedReferenceProxy<IEntity> proxy = ((NamedReferenceProxy<IEntity>) getEntityRef()).clone();
    clonedObject.setEntityRef(proxy);
    proxy.setParent(clonedObject);
    // Simple type
    clonedObject.setDistance(getDistance());
    // Simple type
    clonedObject.setFreespace(getFreespace());
    // Simple type
    clonedObject.setContinuous(getContinuous());
    // clone children
    IDynamicConstraintsWriter dynamicConstraints = null;
    dynamicConstraints = getWriterDynamicConstraints();
    if (dynamicConstraints != null) {
      IDynamicConstraintsWriter clonedChild = ((DynamicConstraintsImpl) dynamicConstraints).clone();
      clonedObject.setDynamicConstraints(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    return clonedObject;
  }

  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException {
    // proxies and string attributes
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__ENTITY_REF)) {
      // Get the Proxy
      INamedReference<IEntity> entityRef = getEntityRef();
      return entityRef != null ? entityRef.getNameRef() : null;
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__DISTANCE)) {
      return getDistance();
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public Integer getUnsignedShortProperty(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public Boolean getBooleanProperty(String key) throws KeyNotSupportedException {
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__FREESPACE)) {
      return getFreespace();
    } else if (key.equals(OscConstants.ATTRIBUTE__CONTINUOUS)) {
      return getContinuous();
    }
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
    if (key.equals(OscConstants.ELEMENT__DYNAMIC_CONSTRAINTS)) {
      return (IOpenScenarioFlexElement) getDynamicConstraints();
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__ENTITY_REF)) {
      // Get the Proxy
      INamedReference<IEntity> entityRef = getEntityRef();
      return entityRef != null ? (IOpenScenarioFlexElement) entityRef.getTargetObject() : null;
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "LateralDistanceAction";
  }

  @Override
  public void writeParameterToEntityRef(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__ENTITY_REF, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToDistance(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__DISTANCE, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToFreespace(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__FREESPACE, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToContinuous(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__CONTINUOUS, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromEntityRef() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__ENTITY_REF);
  }

  @Override
  public String getParameterFromDistance() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__DISTANCE);
  }

  @Override
  public String getParameterFromFreespace() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__FREESPACE);
  }

  @Override
  public String getParameterFromContinuous() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__CONTINUOUS);
  }

  @Override
  public boolean isEntityRefParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__ENTITY_REF);
  }

  @Override
  public boolean isDistanceParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__DISTANCE);
  }

  @Override
  public boolean isFreespaceParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__FREESPACE);
  }

  @Override
  public boolean isContinuousParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__CONTINUOUS);
  }

  // children
  @Override
  public IDynamicConstraintsWriter getWriterDynamicConstraints() {
    return this.dynamicConstraints;
  }
}
