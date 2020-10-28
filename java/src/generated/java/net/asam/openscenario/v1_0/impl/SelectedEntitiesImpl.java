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
public class SelectedEntitiesImpl extends BaseImpl implements ISelectedEntitiesWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private List<IEntityRefWriter> entityRef = new ArrayList<>();
  private List<IByTypeWriter> byType = new ArrayList<>();

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
  public List<IEntityRefWriter> getWriterEntityRef() {
    return this.entityRef;
  }

  @Override
  public Iterable<IEntityRef> getEntityRef() {
    return new Iterable<IEntityRef>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IEntityRef> iterator() {
        return new ArrayList<IEntityRef>(SelectedEntitiesImpl.this.entityRef).iterator();
      }
    };
  }

  @Override
  public int getEntityRefSize() {
    if (this.entityRef != null) return this.entityRef.size();
    return 0;
  }

  @Override
  public IEntityRef getEntityRefAtIndex(int index) {
    if (index >= 0 && this.entityRef != null && this.entityRef.size() > index) {
      return this.entityRef.get(index);
    }
    return null;
  }

  @Override
  public List<IByTypeWriter> getWriterByType() {
    return this.byType;
  }

  @Override
  public Iterable<IByType> getByType() {
    return new Iterable<IByType>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IByType> iterator() {
        return new ArrayList<IByType>(SelectedEntitiesImpl.this.byType).iterator();
      }
    };
  }

  @Override
  public int getByTypeSize() {
    if (this.byType != null) return this.byType.size();
    return 0;
  }

  @Override
  public IByType getByTypeAtIndex(int index) {
    if (index >= 0 && this.byType != null && this.byType.size() > index) {
      return this.byType.get(index);
    }
    return null;
  }

  @Override
  public void setEntityRef(List<IEntityRefWriter> entityRef) {
    this.entityRef = entityRef;
  }

  @Override
  public void setByType(List<IByTypeWriter> byType) {
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

    List<IEntityRefWriter> entityRef = null;
    entityRef = getWriterEntityRef();
    if (entityRef != null) {
      for (IEntityRefWriter item : entityRef) {
        result.add((BaseImpl) item);
      }
    }
    List<IByTypeWriter> byType = null;
    byType = getWriterByType();
    if (byType != null) {
      for (IByTypeWriter item : byType) {
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
    List<IEntityRefWriter> entityRef = null;
    entityRef = getWriterEntityRef();
    if (entityRef != null) {
      List<IEntityRefWriter> clonedList = new ArrayList<>();
      for (IEntityRefWriter item : entityRef) {
        IEntityRefWriter clonedChild = ((EntityRefImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setEntityRef(clonedList);
    }
    List<IByTypeWriter> byType = null;
    byType = getWriterByType();
    if (byType != null) {
      List<IByTypeWriter> clonedList = new ArrayList<>();
      for (IByTypeWriter item : byType) {
        IByTypeWriter clonedChild = ((ByTypeImpl) item).clone();
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

}
