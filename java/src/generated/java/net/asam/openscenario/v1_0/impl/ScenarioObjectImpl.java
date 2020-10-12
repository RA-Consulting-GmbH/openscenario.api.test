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
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.IEntityObject;
import net.asam.openscenario.v1_0.api.IObjectController;
import net.asam.openscenario.v1_0.api.IScenarioObject;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IScenarioObject. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IScenarioObject)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ScenarioObjectImpl extends BaseImpl implements IScenarioObject {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__NAME, SimpleType.STRING);
  }

  private String name;
  private IEntityObject entityObject;
  private IObjectController objectController;
  /** Default constructor */
  public ScenarioObjectImpl() {
    super();
    addAdapter(ScenarioObjectImpl.class, this);
    addAdapter(IScenarioObject.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public String getName() {
    return this.name;
  }

  @Override
  public IEntityObject getEntityObject() {
    return this.entityObject;
  }

  @Override
  public IObjectController getObjectController() {
    return this.objectController;
  }
  /**
   * Sets the value of model property name
   *
   * @param name from OpenSCENARIO class model specification: [Identifier of the scenario object.]
   */
  public void setName(String name) {
    this.name = name;
  }
  /**
   * Sets the value of model property entityObject
   *
   * @param entityObject from OpenSCENARIO class model specification: [The EntityObject (either
   *     instance of type Vehicle, Pedestrian or MiscObject).]
   */
  public void setEntityObject(IEntityObject entityObject) {
    this.entityObject = entityObject;
  }
  /**
   * Sets the value of model property objectController
   *
   * @param objectController from OpenSCENARIO class model specification: [Controller of the
   *     EntityObject instance.]
   */
  public void setObjectController(IObjectController objectController) {
    this.objectController = objectController;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__NAME)) {
      // Simple type
      this.name =
          ParserHelper.parseString(logger, parameterLiteralValue, getTextmarker(attributeKey));
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

    IEntityObject entityObject = null;
    entityObject = getEntityObject();
    if (entityObject != null) {
      result.add((BaseImpl) entityObject);
    }
    IObjectController objectController = null;
    objectController = getObjectController();
    if (objectController != null) {
      result.add((BaseImpl) objectController);
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
  public ScenarioObjectImpl clone() {
    ScenarioObjectImpl clonedObject = new ScenarioObjectImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setName(getName());
    // clone children
    IEntityObject entityObject = null;
    entityObject = getEntityObject();
    if (entityObject != null) {
      EntityObjectImpl clonedChild = ((EntityObjectImpl) entityObject).clone();
      clonedObject.setEntityObject(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IObjectController objectController = null;
    objectController = getObjectController();
    if (objectController != null) {
      ObjectControllerImpl clonedChild = ((ObjectControllerImpl) objectController).clone();
      clonedObject.setObjectController(clonedChild);
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
    if (key.equals(OscConstants.ATTRIBUTE__NAME)) {
      return getName();
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
    if (key.equals(OscConstants.ELEMENT__ENTITY_OBJECT)) {
      return (IOpenScenarioFlexElement) getEntityObject();
    }
    if (key.equals(OscConstants.ELEMENT__OBJECT_CONTROLLER)) {
      return (IOpenScenarioFlexElement) getObjectController();
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
    return "ScenarioObject";
  }
}
