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
import net.asam.openscenario.v1_0.api.IByObjectType;
import net.asam.openscenario.v1_0.api.ICollisionCondition;
import net.asam.openscenario.v1_0.api.IEntityRef;
import net.asam.openscenario.v1_0.api.writer.IByObjectTypeWriter;
import net.asam.openscenario.v1_0.api.writer.ICollisionConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IEntityRefWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ICollisionCondition. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ICollisionCondition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class CollisionConditionImpl extends BaseImpl
    implements ICollisionCondition, ICollisionConditionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IEntityRef entityRef;
  private IByObjectType byType;
  /** Default constructor */
  public CollisionConditionImpl() {
    super();
    addAdapter(CollisionConditionImpl.class, this);
    addAdapter(ICollisionCondition.class, this);
    addAdapter(ICollisionConditionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IEntityRef getEntityRef() {
    return this.entityRef;
  }

  @Override
  public IByObjectType getByType() {
    return this.byType;
  }
  /**
   * Sets the value of model property entityRef
   *
   * @param entityRef from OpenSCENARIO class model specification: [Name of a specific entity.]
   */
  public void setEntityRef(IEntityRef entityRef) {
    this.entityRef = entityRef;
  }
  /**
   * Sets the value of model property byType
   *
   * @param byType from OpenSCENARIO class model specification: [Entities of this type can trigger
   *     the condition when collide.]
   */
  public void setByType(IByObjectType byType) {
    this.byType = byType;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    // Empty
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

    IEntityRef entityRef = null;
    entityRef = getEntityRef();
    if (entityRef != null) {
      result.add((BaseImpl) entityRef);
    }
    IByObjectType byType = null;
    byType = getByType();
    if (byType != null) {
      result.add((BaseImpl) byType);
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
  public CollisionConditionImpl clone() {
    CollisionConditionImpl clonedObject = new CollisionConditionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IEntityRef entityRef = null;
    entityRef = getEntityRef();
    if (entityRef != null) {
      EntityRefImpl clonedChild = ((EntityRefImpl) entityRef).clone();
      clonedObject.setEntityRef(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IByObjectType byType = null;
    byType = getByType();
    if (byType != null) {
      ByObjectTypeImpl clonedChild = ((ByObjectTypeImpl) byType).clone();
      clonedObject.setByType(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__ENTITY_REF)) {
      return (IOpenScenarioFlexElement) getEntityRef();
    }
    if (key.equals(OscConstants.ELEMENT__BY_TYPE)) {
      return (IOpenScenarioFlexElement) getByType();
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
    return "CollisionCondition";
  }

  // children
  @Override
  public IEntityRefWriter getEntityRefWriter() {
    return null;
  }

  @Override
  public IByObjectTypeWriter getByTypeWriter() {
    return null;
  }

  @Override
  public void writeToEntityRefWriter(IEntityRefWriter entityRefWriter) {
    // empty
  }

  @Override
  public void writeToByTypeWriter(IByObjectTypeWriter byTypeWriter) {
    // empty
  }
}
