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
import net.asam.openscenario.v1_0.api.IEntities;
import net.asam.openscenario.v1_0.api.IEntitySelection;
import net.asam.openscenario.v1_0.api.IScenarioObject;
import net.asam.openscenario.v1_0.api.writer.IEntitiesWriter;
import net.asam.openscenario.v1_0.api.writer.IEntitySelectionWriter;
import net.asam.openscenario.v1_0.api.writer.IScenarioObjectWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IEntities. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IEntities)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class EntitiesImpl extends BaseImpl implements IEntitiesWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private List<IScenarioObjectWriter> scenarioObjects = new ArrayList<>();
  private List<IEntitySelectionWriter> entitySelections = new ArrayList<>();

  /** Default constructor */
  public EntitiesImpl() {
    super();
    addAdapter(EntitiesImpl.class, this);
    addAdapter(IEntities.class, this);
    addAdapter(IEntitiesWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public List<IScenarioObjectWriter> getWriterScenarioObjects() {
    return this.scenarioObjects;
  }

  @Override
  public Iterable<IScenarioObject> getScenarioObjects() {
    return new Iterable<IScenarioObject>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IScenarioObject> iterator() {
        return new ArrayList<IScenarioObject>(EntitiesImpl.this.scenarioObjects).iterator();
      }
    };
  }

  @Override
  public int getScenarioObjectsSize() {
    if (this.scenarioObjects != null) return this.scenarioObjects.size();
    return 0;
  }

  @Override
  public IScenarioObject getScenarioObjectsAtIndex(int index) {
    if (index >= 0 && this.scenarioObjects != null && this.scenarioObjects.size() > index) {
      return this.scenarioObjects.get(index);
    }
    return null;
  }

  @Override
  public List<IEntitySelectionWriter> getWriterEntitySelections() {
    return this.entitySelections;
  }

  @Override
  public Iterable<IEntitySelection> getEntitySelections() {
    return new Iterable<IEntitySelection>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IEntitySelection> iterator() {
        return new ArrayList<IEntitySelection>(EntitiesImpl.this.entitySelections).iterator();
      }
    };
  }

  @Override
  public int getEntitySelectionsSize() {
    if (this.entitySelections != null) return this.entitySelections.size();
    return 0;
  }

  @Override
  public IEntitySelection getEntitySelectionsAtIndex(int index) {
    if (index >= 0 && this.entitySelections != null && this.entitySelections.size() > index) {
      return this.entitySelections.get(index);
    }
    return null;
  }

  @Override
  public void setScenarioObjects(List<IScenarioObjectWriter> scenarioObjects) {
    this.scenarioObjects = scenarioObjects;
  }

  @Override
  public void setEntitySelections(List<IEntitySelectionWriter> entitySelections) {
    this.entitySelections = entitySelections;
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

    List<IScenarioObjectWriter> scenarioObjects = null;
    scenarioObjects = getWriterScenarioObjects();
    if (scenarioObjects != null) {
      for (IScenarioObjectWriter item : scenarioObjects) {
        result.add((BaseImpl) item);
      }
    }
    List<IEntitySelectionWriter> entitySelections = null;
    entitySelections = getWriterEntitySelections();
    if (entitySelections != null) {
      for (IEntitySelectionWriter item : entitySelections) {
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
  public EntitiesImpl clone() {
    EntitiesImpl clonedObject = new EntitiesImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    List<IScenarioObjectWriter> scenarioObjects = null;
    scenarioObjects = getWriterScenarioObjects();
    if (scenarioObjects != null) {
      List<IScenarioObjectWriter> clonedList = new ArrayList<>();
      for (IScenarioObjectWriter item : scenarioObjects) {
        IScenarioObjectWriter clonedChild = ((ScenarioObjectImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setScenarioObjects(clonedList);
    }
    List<IEntitySelectionWriter> entitySelections = null;
    entitySelections = getWriterEntitySelections();
    if (entitySelections != null) {
      List<IEntitySelectionWriter> clonedList = new ArrayList<>();
      for (IEntitySelectionWriter item : entitySelections) {
        IEntitySelectionWriter clonedChild = ((EntitySelectionImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setEntitySelections(clonedList);
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
    if (key.equals(OscConstants.ELEMENT__SCENARIO_OBJECT)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getScenarioObjects();
    }
    if (key.equals(OscConstants.ELEMENT__ENTITY_SELECTION)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getEntitySelections();
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
    return "Entities";
  }

  // children

}
