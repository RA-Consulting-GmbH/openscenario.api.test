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
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.IActors;
import net.asam.openscenario.v1_0.api.IEntityRef;
import net.asam.openscenario.v1_0.api.writer.IActorsWriter;
import net.asam.openscenario.v1_0.api.writer.IEntityRefWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IActors. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IActors)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ActorsImpl extends BaseImpl implements IActorsWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__SELECT_TRIGGERING_ENTITIES, SimpleType.BOOLEAN);
  }

  private Boolean selectTriggeringEntities;
  private List<IEntityRefWriter> entityRefs = new ArrayList<>();

  /** Default constructor */
  public ActorsImpl() {
    super();
    addAdapter(ActorsImpl.class, this);
    addAdapter(IActors.class, this);
    addAdapter(IActorsWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public Boolean getSelectTriggeringEntities() {
    return this.selectTriggeringEntities;
  }

  @Override
  public List<IEntityRefWriter> getWriterEntityRefs() {
    return this.entityRefs;
  }

  @Override
  public Iterable<IEntityRef> getEntityRefs() {
    return new Iterable<IEntityRef>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IEntityRef> iterator() {
        return new ArrayList<IEntityRef>(ActorsImpl.this.entityRefs).iterator();
      }
    };
  }

  @Override
  public int getEntityRefsSize() {
    if (this.entityRefs != null) return this.entityRefs.size();
    return 0;
  }

  @Override
  public IEntityRef getEntityRefsAtIndex(int index) {
    if (index >= 0 && this.entityRefs != null && this.entityRefs.size() > index) {
      return this.entityRefs.get(index);
    }
    return null;
  }

  @Override
  public void setSelectTriggeringEntities(Boolean selectTriggeringEntities) {
    this.selectTriggeringEntities = selectTriggeringEntities;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__SELECT_TRIGGERING_ENTITIES);
  }

  @Override
  public void setEntityRefs(List<IEntityRefWriter> entityRefs) {
    this.entityRefs = entityRefs;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__SELECT_TRIGGERING_ENTITIES)) {
      // Simple type
      this.selectTriggeringEntities =
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

    List<IEntityRefWriter> entityRefs = null;
    entityRefs = getWriterEntityRefs();
    if (entityRefs != null) {
      for (IEntityRefWriter item : entityRefs) {
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
  public ActorsImpl clone() {
    ActorsImpl clonedObject = new ActorsImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.selectTriggeringEntities = getSelectTriggeringEntities();
    // clone children
    List<IEntityRefWriter> entityRefs = null;
    entityRefs = getWriterEntityRefs();
    if (entityRefs != null) {
      List<IEntityRefWriter> clonedList = new ArrayList<>();
      for (IEntityRefWriter item : entityRefs) {
        IEntityRefWriter clonedChild = ((EntityRefImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setEntityRefs(clonedList);
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__SELECT_TRIGGERING_ENTITIES)) {
      return getSelectTriggeringEntities();
    }
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
      return (List<IOpenScenarioFlexElement>) (List<?>) getEntityRefs();
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
    return "Actors";
  }

  @Override
  public void writeParameterToSelectTriggeringEntities(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__SELECT_TRIGGERING_ENTITIES, parameterName, null /*no textmarker*/);
    this.selectTriggeringEntities = null;
  }

  @Override
  public String getParameterFromSelectTriggeringEntities() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__SELECT_TRIGGERING_ENTITIES);
  }

  @Override
  public boolean isSelectTriggeringEntitiesParameterized() {
    return getParameterizedAttributeKeys()
        .contains(OscConstants.ATTRIBUTE__SELECT_TRIGGERING_ENTITIES);
  }

  // children

}
