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
import java.util.Iterator;
import java.util.List;
import net.asam.openscenario.api.IOpenScenarioFlexElement;
import net.asam.openscenario.api.KeyNotSupportedException;
import net.asam.openscenario.api.SimpleType;
import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.impl.NamedReferenceProxy;
import net.asam.openscenario.v1_0.api.IEntity;
import net.asam.openscenario.v1_0.api.IPrivate;
import net.asam.openscenario.v1_0.api.IPrivateAction;
import net.asam.openscenario.v1_0.api.writer.IPrivateActionWriter;
import net.asam.openscenario.v1_0.api.writer.IPrivateWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IPrivate. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IPrivate)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class PrivateImpl extends BaseImpl implements IPrivateWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__ENTITY_REF, SimpleType.STRING);
  }

  private INamedReference<IEntity> entityRef;
  private List<IPrivateActionWriter> privateActions = new ArrayList<>();

  /** Default constructor */
  public PrivateImpl() {
    super();
    addAdapter(PrivateImpl.class, this);
    addAdapter(IPrivate.class, this);
    addAdapter(IPrivateWriter.class, this);
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
  public List<IPrivateActionWriter> getWriterPrivateActions() {
    return this.privateActions;
  }

  @Override
  public Iterable<IPrivateAction> getPrivateActions() {
    return new Iterable<IPrivateAction>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IPrivateAction> iterator() {
        return new ArrayList<IPrivateAction>(PrivateImpl.this.privateActions).iterator();
      }
    };
  }

  @Override
  public int getPrivateActionsSize() {
    if (this.privateActions != null) return this.privateActions.size();
    return 0;
  }

  @Override
  public IPrivateAction getPrivateActionsAtIndex(int index) {
    if (index >= 0 && this.privateActions != null && this.privateActions.size() > index) {
      return this.privateActions.get(index);
    }
    return null;
  }

  @Override
  public void setEntityRef(INamedReference<IEntity> entityRef) {
    this.entityRef = entityRef;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__ENTITY_REF);
  }

  @Override
  public void setPrivateActions(List<IPrivateActionWriter> privateActions) {
    this.privateActions = privateActions;
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

    List<IPrivateActionWriter> privateActions = null;
    privateActions = getWriterPrivateActions();
    if (privateActions != null) {
      for (IPrivateActionWriter item : privateActions) {
        result.add((BaseImpl) item);
      }
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
  public PrivateImpl clone() {
    PrivateImpl clonedObject = new PrivateImpl();
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
    List<IPrivateActionWriter> privateActions = null;
    privateActions = getWriterPrivateActions();
    if (privateActions != null) {
      List<IPrivateActionWriter> clonedList = new ArrayList<>();
      for (IPrivateActionWriter item : privateActions) {
        IPrivateActionWriter clonedChild = ((PrivateActionImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setPrivateActions(clonedList);
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
    throw new KeyNotSupportedException();
  }

  @SuppressWarnings("unchecked")
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key)
      throws KeyNotSupportedException {

    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ELEMENT__PRIVATE_ACTION)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getPrivateActions();
    }
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
    return "Private";
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

}
