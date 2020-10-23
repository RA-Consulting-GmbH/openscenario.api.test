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
import net.asam.openscenario.v1_0.api.IByType;
import net.asam.openscenario.v1_0.api.IEntityRef;
import net.asam.openscenario.v1_0.api.ISelectedEntities;
import net.asam.openscenario.v1_0.api.writer.IByTypeWriter;
import net.asam.openscenario.v1_0.api.writer.IEntityRefWriter;
import net.asam.openscenario.v1_0.api.writer.ISelectedEntitiesWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ISelectedEntities. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ISelectedEntities)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class SelectedEntitiesImpl extends BaseImpl
    implements ISelectedEntities, ISelectedEntitiesWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private List<IEntityRef> entityRef;
  private List<IByType> byType;

  private List<IEntityRefWriter> entityRefWriters;
  private List<IByTypeWriter> byTypeWriters;

  /** Default constructor */
  public SelectedEntitiesImpl() {
    super();
    addAdapter(SelectedEntitiesImpl.class, this);
    addAdapter(ISelectedEntities.class, this);
    addAdapter(ISelectedEntitiesWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public List<IEntityRef> getEntityRef() {
    return this.entityRef;
  }

  @Override
  public List<IByType> getByType() {
    return this.byType;
  }
  /**
   * Sets the value of model property entityRef
   *
   * @param entityRef from OpenSCENARIO class model specification: [References to the selected
   *     entities.]
   */
  public void setEntityRef(List<IEntityRef> entityRef) {
    this.entityRef = entityRef;
  }
  /**
   * Sets the value of model property byType
   *
   * @param byType from OpenSCENARIO class model specification: [Defines the type to determine that
   *     all entities of a specific type are members.]
   */
  public void setByType(List<IByType> byType) {
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

    List<IEntityRef> entityRef = null;
    entityRef = getEntityRef();
    if (entityRef != null) {
      for (IEntityRef item : entityRef) {
        result.add((BaseImpl) item);
      }
    }
    List<IByType> byType = null;
    byType = getByType();
    if (byType != null) {
      for (IByType item : byType) {
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
  public SelectedEntitiesImpl clone() {
    SelectedEntitiesImpl clonedObject = new SelectedEntitiesImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    List<IEntityRef> entityRef = null;
    entityRef = getEntityRef();
    if (entityRef != null) {
      List<IEntityRef> clonedList = new ArrayList<>();
      for (IEntityRef item : entityRef) {
        EntityRefImpl clonedChild = ((EntityRefImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setEntityRef(clonedList);
    }
    List<IByType> byType = null;
    byType = getByType();
    if (byType != null) {
      List<IByType> clonedList = new ArrayList<>();
      for (IByType item : byType) {
        ByTypeImpl clonedChild = ((ByTypeImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setByType(clonedList);
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
    throw new KeyNotSupportedException();
  }

  @SuppressWarnings("unchecked")
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key)
      throws KeyNotSupportedException {

    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ELEMENT__ENTITY_REF)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getEntityRef();
    }
    if (key.equals(OscConstants.ELEMENT__BY_TYPE)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getByType();
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
    throw new KeyNotSupportedException();
  }

  @Override
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "SelectedEntities";
  }

  // children

  @Override
  public List<IEntityRefWriter> getEntityRefWriter() {
    return this.entityRefWriters;
  }

  @Override
  public List<IByTypeWriter> getByTypeWriter() {
    return this.byTypeWriters;
  }

  @Override
  public void setEntityRefWriter(List<IEntityRefWriter> entityRefWriters) {
    this.entityRefWriters = entityRefWriters;
  }

  @Override
  public void setByTypeWriter(List<IByTypeWriter> byTypeWriters) {
    this.byTypeWriters = byTypeWriters;
  }
}
