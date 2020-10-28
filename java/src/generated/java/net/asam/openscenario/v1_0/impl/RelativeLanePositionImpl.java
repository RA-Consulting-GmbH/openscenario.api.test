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
import net.asam.openscenario.v1_0.api.IEntity;
import net.asam.openscenario.v1_0.api.IOrientation;
import net.asam.openscenario.v1_0.api.IRelativeLanePosition;
import net.asam.openscenario.v1_0.api.writer.IOrientationWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeLanePositionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IRelativeLanePosition. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IRelativeLanePosition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class RelativeLanePositionImpl extends BaseImpl implements IRelativeLanePositionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__ENTITY_REF, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__D_LANE, SimpleType.INT);
    propertyToType.put(OscConstants.ATTRIBUTE__DS, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__OFFSET, SimpleType.DOUBLE);
  }

  private INamedReference<IEntity> entityRef;
  private Integer dLane;
  private Double ds;
  private Double offset;
  private IOrientationWriter orientation;

  /** Default constructor */
  public RelativeLanePositionImpl() {
    super();
    addAdapter(RelativeLanePositionImpl.class, this);
    addAdapter(IRelativeLanePosition.class, this);
    addAdapter(IRelativeLanePositionWriter.class, this);
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
  public Integer getDLane() {
    return this.dLane;
  }

  @Override
  public Double getDs() {
    return this.ds;
  }

  @Override
  public Double getOffset() {
    return this.offset;
  }

  @Override
  public IOrientation getOrientation() {
    return this.orientation;
  }

  @Override
  public void setEntityRef(INamedReference<IEntity> entityRef) {
    this.entityRef = entityRef;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__ENTITY_REF);
  }

  @Override
  public void setDLane(Integer dLane) {
    this.dLane = dLane;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__D_LANE);
  }

  @Override
  public void setDs(Double ds) {
    this.ds = ds;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__DS);
  }

  @Override
  public void setOffset(Double offset) {
    this.offset = offset;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__OFFSET);
  }

  @Override
  public void setOrientation(IOrientationWriter orientation) {
    this.orientation = orientation;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__ENTITY_REF)) {
      // Proxy
      NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<>(parameterLiteralValue);
      this.entityRef = proxy;
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__D_LANE)) {
      // Simple type
      this.dLane =
          ParserHelper.parseInt(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__DS)) {
      // Simple type
      this.ds =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__OFFSET)) {
      // Simple type
      this.offset =
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

    IOrientationWriter orientation = null;
    orientation = getWriterOrientation();
    if (orientation != null) {
      result.add((BaseImpl) orientation);
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
  public RelativeLanePositionImpl clone() {
    RelativeLanePositionImpl clonedObject = new RelativeLanePositionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Proxy
    NamedReferenceProxy<IEntity> proxy = ((NamedReferenceProxy<IEntity>) getEntityRef()).clone();
    clonedObject.entityRef = proxy;
    proxy.setParent(clonedObject);
    // Simple type
    clonedObject.dLane = getDLane();
    // Simple type
    clonedObject.ds = getDs();
    // Simple type
    clonedObject.offset = getOffset();
    // clone children
    IOrientationWriter orientation = null;
    orientation = getWriterOrientation();
    if (orientation != null) {
      IOrientationWriter clonedChild = ((OrientationImpl) orientation).clone();
      clonedObject.setOrientation(clonedChild);
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__D_LANE)) {
      return getDLane();
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public Double getDoubleProperty(String key) throws KeyNotSupportedException {
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__DS)) {
      return getDs();
    } else if (key.equals(OscConstants.ATTRIBUTE__OFFSET)) {
      return getOffset();
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
    if (key.equals(OscConstants.ELEMENT__ORIENTATION)) {
      return (IOpenScenarioFlexElement) getOrientation();
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
    return "RelativeLanePosition";
  }

  @Override
  public void writeParameterToEntityRef(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__ENTITY_REF, parameterName, null /*no textmarker*/);
    this.entityRef = null;
  }

  @Override
  public void writeParameterToDLane(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__D_LANE, parameterName, null /*no textmarker*/);
    this.dLane = null;
  }

  @Override
  public void writeParameterToDs(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__DS, parameterName, null /*no textmarker*/);
    this.ds = null;
  }

  @Override
  public void writeParameterToOffset(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__OFFSET, parameterName, null /*no textmarker*/);
    this.offset = null;
  }

  @Override
  public String getParameterFromEntityRef() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__ENTITY_REF);
  }

  @Override
  public String getParameterFromDLane() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__D_LANE);
  }

  @Override
  public String getParameterFromDs() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__DS);
  }

  @Override
  public String getParameterFromOffset() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__OFFSET);
  }

  @Override
  public boolean isEntityRefParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__ENTITY_REF);
  }

  @Override
  public boolean isDLaneParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__D_LANE);
  }

  @Override
  public boolean isDsParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__DS);
  }

  @Override
  public boolean isOffsetParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__OFFSET);
  }

  // children
  @Override
  public IOrientationWriter getWriterOrientation() {
    return this.orientation;
  }
}
