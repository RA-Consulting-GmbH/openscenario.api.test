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
public class EntitiesImpl extends BaseImpl implements IEntities, IEntitiesWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private List<IScenarioObject> scenarioObjects;
  private List<IEntitySelection> entitySelections;

  private List<IScenarioObjectWriter> scenarioObjectsWriters;
  private List<IEntitySelectionWriter> entitySelectionsWriters;

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
  public List<IScenarioObject> getScenarioObjects() {
    return this.scenarioObjects;
  }

  @Override
  public List<IEntitySelection> getEntitySelections() {
    return this.entitySelections;
  }
  /**
   * Sets the value of model property scenarioObjects
   *
   * @param scenarioObjects from OpenSCENARIO class model specification: [A list of scenario object
   *     definitions that pairs an entity object and a controller.]
   */
  public void setScenarioObjects(List<IScenarioObject> scenarioObjects) {
    this.scenarioObjects = scenarioObjects;
  }
  /**
   * Sets the value of model property entitySelections
   *
   * @param entitySelections from OpenSCENARIO class model specification: [A list of entity
   *     selection definitions.]
   */
  public void setEntitySelections(List<IEntitySelection> entitySelections) {
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

    List<IScenarioObject> scenarioObjects = null;
    scenarioObjects = getScenarioObjects();
    if (scenarioObjects != null) {
      for (IScenarioObject item : scenarioObjects) {
        result.add((BaseImpl) item);
      }
    }
    List<IEntitySelection> entitySelections = null;
    entitySelections = getEntitySelections();
    if (entitySelections != null) {
      for (IEntitySelection item : entitySelections) {
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
    List<IScenarioObject> scenarioObjects = null;
    scenarioObjects = getScenarioObjects();
    if (scenarioObjects != null) {
      List<IScenarioObject> clonedList = new ArrayList<>();
      for (IScenarioObject item : scenarioObjects) {
        ScenarioObjectImpl clonedChild = ((ScenarioObjectImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setScenarioObjects(clonedList);
    }
    List<IEntitySelection> entitySelections = null;
    entitySelections = getEntitySelections();
    if (entitySelections != null) {
      List<IEntitySelection> clonedList = new ArrayList<>();
      for (IEntitySelection item : entitySelections) {
        EntitySelectionImpl clonedChild = ((EntitySelectionImpl) item).clone();
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

  @Override
  public List<IScenarioObjectWriter> getScenarioObjectsWriter() {
    return this.scenarioObjectsWriters;
  }

  @Override
  public List<IEntitySelectionWriter> getEntitySelectionsWriter() {
    return this.entitySelectionsWriters;
  }

  @Override
  public void setScenarioObjectsWriter(List<IScenarioObjectWriter> scenarioObjectsWriters) {
    this.scenarioObjectsWriters = scenarioObjectsWriters;
  }

  @Override
  public void setEntitySelectionsWriter(List<IEntitySelectionWriter> entitySelectionsWriters) {
    this.entitySelectionsWriters = entitySelectionsWriters;
  }
}
