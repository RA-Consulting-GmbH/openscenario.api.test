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
import net.asam.openscenario.v1_0.api.IAddEntityAction;
import net.asam.openscenario.v1_0.api.IDeleteEntityAction;
import net.asam.openscenario.v1_0.api.IEntity;
import net.asam.openscenario.v1_0.api.IEntityAction;
import net.asam.openscenario.v1_0.api.writer.IAddEntityActionWriter;
import net.asam.openscenario.v1_0.api.writer.IDeleteEntityActionWriter;
import net.asam.openscenario.v1_0.api.writer.IEntityActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IEntityAction. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IEntityAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class EntityActionImpl extends BaseImpl implements IEntityActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__ENTITY_REF, SimpleType.STRING);
  }

  private INamedReference<IEntity> entityRef;
  private IAddEntityActionWriter addEntityAction;
  private IDeleteEntityActionWriter deleteEntityAction;

  /** Default constructor */
  public EntityActionImpl() {
    super();
    addAdapter(EntityActionImpl.class, this);
    addAdapter(IEntityAction.class, this);
    addAdapter(IEntityActionWriter.class, this);
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
  public IAddEntityAction getAddEntityAction() {
    return this.addEntityAction;
  }

  @Override
  public IDeleteEntityAction getDeleteEntityAction() {
    return this.deleteEntityAction;
  }

  @Override
  public void setEntityRef(INamedReference<IEntity> entityRef) {
    this.entityRef = entityRef;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__ENTITY_REF);
  }

  @Override
  public void setAddEntityAction(IAddEntityActionWriter addEntityAction) {
    this.addEntityAction = addEntityAction;
    this.deleteEntityAction = null;
  }

  @Override
  public void setDeleteEntityAction(IDeleteEntityActionWriter deleteEntityAction) {
    this.deleteEntityAction = deleteEntityAction;
    this.addEntityAction = null;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__ENTITY_REF)) {
      // Proxy
      NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<>(parameterLiteralValue);
      this.entityRef = proxy;
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

    IAddEntityActionWriter addEntityAction = null;
    addEntityAction = getWriterAddEntityAction();
    if (addEntityAction != null) {
      result.add((BaseImpl) addEntityAction);
    }
    IDeleteEntityActionWriter deleteEntityAction = null;
    deleteEntityAction = getWriterDeleteEntityAction();
    if (deleteEntityAction != null) {
      result.add((BaseImpl) deleteEntityAction);
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
  public EntityActionImpl clone() {
    EntityActionImpl clonedObject = new EntityActionImpl();
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
    // clone children
    IAddEntityActionWriter addEntityAction = null;
    addEntityAction = getWriterAddEntityAction();
    if (addEntityAction != null) {
      IAddEntityActionWriter clonedChild = ((AddEntityActionImpl) addEntityAction).clone();
      clonedObject.setAddEntityAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IDeleteEntityActionWriter deleteEntityAction = null;
    deleteEntityAction = getWriterDeleteEntityAction();
    if (deleteEntityAction != null) {
      IDeleteEntityActionWriter clonedChild = ((DeleteEntityActionImpl) deleteEntityAction).clone();
      clonedObject.setDeleteEntityAction(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__ADD_ENTITY_ACTION)) {
      return (IOpenScenarioFlexElement) getAddEntityAction();
    }
    if (key.equals(OscConstants.ELEMENT__DELETE_ENTITY_ACTION)) {
      return (IOpenScenarioFlexElement) getDeleteEntityAction();
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
    return "EntityAction";
  }

  @Override
  public void writeParameterToEntityRef(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__ENTITY_REF, parameterName, null /*no textmarker*/);
    this.entityRef = null;
  }

  @Override
  public String getParameterFromEntityRef() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__ENTITY_REF);
  }

  @Override
  public boolean isEntityRefParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__ENTITY_REF);
  }

  // children
  @Override
  public IAddEntityActionWriter getWriterAddEntityAction() {
    return this.addEntityAction;
  }

  @Override
  public IDeleteEntityActionWriter getWriterDeleteEntityAction() {
    return this.deleteEntityAction;
  }
}
