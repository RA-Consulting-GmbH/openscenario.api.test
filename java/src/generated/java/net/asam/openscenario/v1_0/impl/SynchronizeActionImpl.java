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
import net.asam.openscenario.v1_0.api.IEntity;
import net.asam.openscenario.v1_0.api.IFinalSpeed;
import net.asam.openscenario.v1_0.api.IPosition;
import net.asam.openscenario.v1_0.api.ISynchronizeAction;
import net.asam.openscenario.v1_0.api.writer.IFinalSpeedWriter;
import net.asam.openscenario.v1_0.api.writer.IPositionWriter;
import net.asam.openscenario.v1_0.api.writer.ISynchronizeActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ISynchronizeAction. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ISynchronizeAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class SynchronizeActionImpl extends BaseImpl implements ISynchronizeActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF, SimpleType.STRING);
  }

  private INamedReference<IEntity> masterEntityRef;
  private IPositionWriter targetPositionMaster;
  private IPositionWriter targetPosition;
  private IFinalSpeedWriter finalSpeed;

  /** Default constructor */
  public SynchronizeActionImpl() {
    super();
    addAdapter(SynchronizeActionImpl.class, this);
    addAdapter(ISynchronizeAction.class, this);
    addAdapter(ISynchronizeActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public INamedReference<IEntity> getMasterEntityRef() {
    return this.masterEntityRef;
  }

  @Override
  public IPosition getTargetPositionMaster() {
    return this.targetPositionMaster;
  }

  @Override
  public IPosition getTargetPosition() {
    return this.targetPosition;
  }

  @Override
  public IFinalSpeed getFinalSpeed() {
    return this.finalSpeed;
  }

  @Override
  public void setMasterEntityRef(INamedReference<IEntity> masterEntityRef) {
    this.masterEntityRef = masterEntityRef;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF);
  }

  @Override
  public void setTargetPositionMaster(IPositionWriter targetPositionMaster) {
    this.targetPositionMaster = targetPositionMaster;
  }

  @Override
  public void setTargetPosition(IPositionWriter targetPosition) {
    this.targetPosition = targetPosition;
  }

  @Override
  public void setFinalSpeed(IFinalSpeedWriter finalSpeed) {
    this.finalSpeed = finalSpeed;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF)) {
      // Proxy
      NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<>(parameterLiteralValue);
      this.masterEntityRef = proxy;
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

    IPositionWriter targetPositionMaster = null;
    targetPositionMaster = getWriterTargetPositionMaster();
    if (targetPositionMaster != null) {
      result.add((BaseImpl) targetPositionMaster);
    }
    IPositionWriter targetPosition = null;
    targetPosition = getWriterTargetPosition();
    if (targetPosition != null) {
      result.add((BaseImpl) targetPosition);
    }
    IFinalSpeedWriter finalSpeed = null;
    finalSpeed = getWriterFinalSpeed();
    if (finalSpeed != null) {
      result.add((BaseImpl) finalSpeed);
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
  public SynchronizeActionImpl clone() {
    SynchronizeActionImpl clonedObject = new SynchronizeActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Proxy
    NamedReferenceProxy<IEntity> proxy =
        ((NamedReferenceProxy<IEntity>) getMasterEntityRef()).clone();
    clonedObject.masterEntityRef = proxy;
    proxy.setParent(clonedObject);
    // clone children
    IPositionWriter targetPositionMaster = null;
    targetPositionMaster = getWriterTargetPositionMaster();
    if (targetPositionMaster != null) {
      IPositionWriter clonedChild = ((PositionImpl) targetPositionMaster).clone();
      clonedObject.setTargetPositionMaster(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IPositionWriter targetPosition = null;
    targetPosition = getWriterTargetPosition();
    if (targetPosition != null) {
      IPositionWriter clonedChild = ((PositionImpl) targetPosition).clone();
      clonedObject.setTargetPosition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IFinalSpeedWriter finalSpeed = null;
    finalSpeed = getWriterFinalSpeed();
    if (finalSpeed != null) {
      IFinalSpeedWriter clonedChild = ((FinalSpeedImpl) finalSpeed).clone();
      clonedObject.setFinalSpeed(clonedChild);
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
    if (key.equals(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF)) {
      // Get the Proxy
      INamedReference<IEntity> masterEntityRef = getMasterEntityRef();
      return masterEntityRef != null ? masterEntityRef.getNameRef() : null;
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
    if (key.equals(OscConstants.ELEMENT__TARGET_POSITION_MASTER)) {
      return (IOpenScenarioFlexElement) getTargetPositionMaster();
    }
    if (key.equals(OscConstants.ELEMENT__TARGET_POSITION)) {
      return (IOpenScenarioFlexElement) getTargetPosition();
    }
    if (key.equals(OscConstants.ELEMENT__FINAL_SPEED)) {
      return (IOpenScenarioFlexElement) getFinalSpeed();
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
    if (key.equals(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF)) {
      // Get the Proxy
      INamedReference<IEntity> masterEntityRef = getMasterEntityRef();
      return masterEntityRef != null
          ? (IOpenScenarioFlexElement) masterEntityRef.getTargetObject()
          : null;
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "SynchronizeAction";
  }

  @Override
  public void writeParameterToMasterEntityRef(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__MASTER_ENTITY_REF, parameterName, null /*no textmarker*/);
    this.masterEntityRef = null;
  }

  @Override
  public String getParameterFromMasterEntityRef() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF);
  }

  @Override
  public boolean isMasterEntityRefParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF);
  }

  // children
  @Override
  public IPositionWriter getWriterTargetPositionMaster() {
    return this.targetPositionMaster;
  }

  @Override
  public IPositionWriter getWriterTargetPosition() {
    return this.targetPosition;
  }

  @Override
  public IFinalSpeedWriter getWriterFinalSpeed() {
    return this.finalSpeed;
  }
}
