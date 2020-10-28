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
import net.asam.openscenario.v1_0.api.IRelativeObjectPosition;
import net.asam.openscenario.v1_0.api.writer.IOrientationWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeObjectPositionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IRelativeObjectPosition. With setter methods to fill the
 * properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IRelativeObjectPosition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class RelativeObjectPositionImpl extends BaseImpl implements IRelativeObjectPositionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__ENTITY_REF, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__DX, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__DY, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__DZ, SimpleType.DOUBLE);
  }

  private INamedReference<IEntity> entityRef;
  private Double dx;
  private Double dy;
  private Double dz;
  private IOrientationWriter orientation;

  /** Default constructor */
  public RelativeObjectPositionImpl() {
    super();
    addAdapter(RelativeObjectPositionImpl.class, this);
    addAdapter(IRelativeObjectPosition.class, this);
    addAdapter(IRelativeObjectPositionWriter.class, this);
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
  public Double getDx() {
    return this.dx;
  }

  @Override
  public Double getDy() {
    return this.dy;
  }

  @Override
  public Double getDz() {
    return this.dz;
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
  public void setDx(Double dx) {
    this.dx = dx;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__DX);
  }

  @Override
  public void setDy(Double dy) {
    this.dy = dy;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__DY);
  }

  @Override
  public void setDz(Double dz) {
    this.dz = dz;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__DZ);
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

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__DX)) {
      // Simple type
      this.dx =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__DY)) {
      // Simple type
      this.dy =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__DZ)) {
      // Simple type
      this.dz =
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
  public RelativeObjectPositionImpl clone() {
    RelativeObjectPositionImpl clonedObject = new RelativeObjectPositionImpl();
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
    clonedObject.dx = getDx();
    // Simple type
    clonedObject.dy = getDy();
    // Simple type
    clonedObject.dz = getDz();
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
    throw new KeyNotSupportedException();
  }

  @Override
  public Double getDoubleProperty(String key) throws KeyNotSupportedException {
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__DX)) {
      return getDx();
    } else if (key.equals(OscConstants.ATTRIBUTE__DY)) {
      return getDy();
    } else if (key.equals(OscConstants.ATTRIBUTE__DZ)) {
      return getDz();
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
    return "RelativeObjectPosition";
  }

  @Override
  public void writeParameterToEntityRef(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__ENTITY_REF, parameterName, null /*no textmarker*/);
    this.entityRef = null;
  }

  @Override
  public void writeParameterToDx(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__DX, parameterName, null /*no textmarker*/);
    this.dx = null;
  }

  @Override
  public void writeParameterToDy(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__DY, parameterName, null /*no textmarker*/);
    this.dy = null;
  }

  @Override
  public void writeParameterToDz(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__DZ, parameterName, null /*no textmarker*/);
    this.dz = null;
  }

  @Override
  public String getParameterFromEntityRef() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__ENTITY_REF);
  }

  @Override
  public String getParameterFromDx() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__DX);
  }

  @Override
  public String getParameterFromDy() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__DY);
  }

  @Override
  public String getParameterFromDz() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__DZ);
  }

  @Override
  public boolean isEntityRefParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__ENTITY_REF);
  }

  @Override
  public boolean isDxParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__DX);
  }

  @Override
  public boolean isDyParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__DY);
  }

  @Override
  public boolean isDzParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__DZ);
  }

  // children
  @Override
  public IOrientationWriter getWriterOrientation() {
    return this.orientation;
  }
}
