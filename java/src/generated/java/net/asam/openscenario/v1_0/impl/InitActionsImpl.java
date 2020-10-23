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
import net.asam.openscenario.v1_0.api.IGlobalAction;
import net.asam.openscenario.v1_0.api.IInitActions;
import net.asam.openscenario.v1_0.api.IPrivate;
import net.asam.openscenario.v1_0.api.IUserDefinedAction;
import net.asam.openscenario.v1_0.api.writer.IGlobalActionWriter;
import net.asam.openscenario.v1_0.api.writer.IInitActionsWriter;
import net.asam.openscenario.v1_0.api.writer.IPrivateWriter;
import net.asam.openscenario.v1_0.api.writer.IUserDefinedActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IInitActions. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IInitActions)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class InitActionsImpl extends BaseImpl implements IInitActions, IInitActionsWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private List<IGlobalAction> globalActions;
  private List<IUserDefinedAction> userDefinedActions;
  private List<IPrivate> privates;

  private List<IGlobalActionWriter> globalActionsWriters;
  private List<IUserDefinedActionWriter> userDefinedActionsWriters;
  private List<IPrivateWriter> privatesWriters;

  /** Default constructor */
  public InitActionsImpl() {
    super();
    addAdapter(InitActionsImpl.class, this);
    addAdapter(IInitActions.class, this);
    addAdapter(IInitActionsWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public List<IGlobalAction> getGlobalActions() {
    return this.globalActions;
  }

  @Override
  public List<IUserDefinedAction> getUserDefinedActions() {
    return this.userDefinedActions;
  }

  @Override
  public List<IPrivate> getPrivates() {
    return this.privates;
  }
  /**
   * Sets the value of model property globalActions
   *
   * @param globalActions from OpenSCENARIO class model specification: [An optional list of global
   *     actions.]
   */
  public void setGlobalActions(List<IGlobalAction> globalActions) {
    this.globalActions = globalActions;
  }
  /**
   * Sets the value of model property userDefinedActions
   *
   * @param userDefinedActions from OpenSCENARIO class model specification: [An optional list of
   *     user defined actions.]
   */
  public void setUserDefinedActions(List<IUserDefinedAction> userDefinedActions) {
    this.userDefinedActions = userDefinedActions;
  }
  /**
   * Sets the value of model property privates
   *
   * @param privates from OpenSCENARIO class model specification: [An optional list of private
   *     actions.]
   */
  public void setPrivates(List<IPrivate> privates) {
    this.privates = privates;
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

    List<IGlobalAction> globalActions = null;
    globalActions = getGlobalActions();
    if (globalActions != null) {
      for (IGlobalAction item : globalActions) {
        result.add((BaseImpl) item);
      }
    }
    List<IUserDefinedAction> userDefinedActions = null;
    userDefinedActions = getUserDefinedActions();
    if (userDefinedActions != null) {
      for (IUserDefinedAction item : userDefinedActions) {
        result.add((BaseImpl) item);
      }
    }
    List<IPrivate> privates = null;
    privates = getPrivates();
    if (privates != null) {
      for (IPrivate item : privates) {
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
  public InitActionsImpl clone() {
    InitActionsImpl clonedObject = new InitActionsImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    List<IGlobalAction> globalActions = null;
    globalActions = getGlobalActions();
    if (globalActions != null) {
      List<IGlobalAction> clonedList = new ArrayList<>();
      for (IGlobalAction item : globalActions) {
        GlobalActionImpl clonedChild = ((GlobalActionImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setGlobalActions(clonedList);
    }
    List<IUserDefinedAction> userDefinedActions = null;
    userDefinedActions = getUserDefinedActions();
    if (userDefinedActions != null) {
      List<IUserDefinedAction> clonedList = new ArrayList<>();
      for (IUserDefinedAction item : userDefinedActions) {
        UserDefinedActionImpl clonedChild = ((UserDefinedActionImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setUserDefinedActions(clonedList);
    }
    List<IPrivate> privates = null;
    privates = getPrivates();
    if (privates != null) {
      List<IPrivate> clonedList = new ArrayList<>();
      for (IPrivate item : privates) {
        PrivateImpl clonedChild = ((PrivateImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setPrivates(clonedList);
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
    if (key.equals(OscConstants.ELEMENT__GLOBAL_ACTION)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getGlobalActions();
    }
    if (key.equals(OscConstants.ELEMENT__USER_DEFINED_ACTION)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getUserDefinedActions();
    }
    if (key.equals(OscConstants.ELEMENT__PRIVATE)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getPrivates();
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
    return "InitActions";
  }

  // children

  @Override
  public List<IGlobalActionWriter> getGlobalActionsWriter() {
    return this.globalActionsWriters;
  }

  @Override
  public List<IUserDefinedActionWriter> getUserDefinedActionsWriter() {
    return this.userDefinedActionsWriters;
  }

  @Override
  public List<IPrivateWriter> getPrivatesWriter() {
    return this.privatesWriters;
  }

  @Override
  public void setGlobalActionsWriter(List<IGlobalActionWriter> globalActionsWriters) {
    this.globalActionsWriters = globalActionsWriters;
  }

  @Override
  public void setUserDefinedActionsWriter(
      List<IUserDefinedActionWriter> userDefinedActionsWriters) {
    this.userDefinedActionsWriters = userDefinedActionsWriters;
  }

  @Override
  public void setPrivatesWriter(List<IPrivateWriter> privatesWriters) {
    this.privatesWriters = privatesWriters;
  }
}
