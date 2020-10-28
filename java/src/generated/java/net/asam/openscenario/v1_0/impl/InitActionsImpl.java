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
public class InitActionsImpl extends BaseImpl implements IInitActionsWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private List<IGlobalActionWriter> globalActions = new ArrayList<>();
  private List<IUserDefinedActionWriter> userDefinedActions = new ArrayList<>();
  private List<IPrivateWriter> privates = new ArrayList<>();

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
  public List<IGlobalActionWriter> getWriterGlobalActions() {
    return this.globalActions;
  }

  @Override
  public Iterable<IGlobalAction> getGlobalActions() {
    return new Iterable<IGlobalAction>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IGlobalAction> iterator() {
        return new ArrayList<IGlobalAction>(InitActionsImpl.this.globalActions).iterator();
      }
    };
  }

  @Override
  public int getGlobalActionsSize() {
    if (this.globalActions != null) return this.globalActions.size();
    return 0;
  }

  @Override
  public IGlobalAction getGlobalActionsAtIndex(int index) {
    if (index >= 0 && this.globalActions != null && this.globalActions.size() > index) {
      return this.globalActions.get(index);
    }
    return null;
  }

  @Override
  public List<IUserDefinedActionWriter> getWriterUserDefinedActions() {
    return this.userDefinedActions;
  }

  @Override
  public Iterable<IUserDefinedAction> getUserDefinedActions() {
    return new Iterable<IUserDefinedAction>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IUserDefinedAction> iterator() {
        return new ArrayList<IUserDefinedAction>(InitActionsImpl.this.userDefinedActions)
            .iterator();
      }
    };
  }

  @Override
  public int getUserDefinedActionsSize() {
    if (this.userDefinedActions != null) return this.userDefinedActions.size();
    return 0;
  }

  @Override
  public IUserDefinedAction getUserDefinedActionsAtIndex(int index) {
    if (index >= 0 && this.userDefinedActions != null && this.userDefinedActions.size() > index) {
      return this.userDefinedActions.get(index);
    }
    return null;
  }

  @Override
  public List<IPrivateWriter> getWriterPrivates() {
    return this.privates;
  }

  @Override
  public Iterable<IPrivate> getPrivates() {
    return new Iterable<IPrivate>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IPrivate> iterator() {
        return new ArrayList<IPrivate>(InitActionsImpl.this.privates).iterator();
      }
    };
  }

  @Override
  public int getPrivatesSize() {
    if (this.privates != null) return this.privates.size();
    return 0;
  }

  @Override
  public IPrivate getPrivatesAtIndex(int index) {
    if (index >= 0 && this.privates != null && this.privates.size() > index) {
      return this.privates.get(index);
    }
    return null;
  }

  @Override
  public void setGlobalActions(List<IGlobalActionWriter> globalActions) {
    this.globalActions = globalActions;
  }

  @Override
  public void setUserDefinedActions(List<IUserDefinedActionWriter> userDefinedActions) {
    this.userDefinedActions = userDefinedActions;
  }

  @Override
  public void setPrivates(List<IPrivateWriter> privates) {
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

    List<IGlobalActionWriter> globalActions = null;
    globalActions = getWriterGlobalActions();
    if (globalActions != null) {
      for (IGlobalActionWriter item : globalActions) {
        result.add((BaseImpl) item);
      }
    }
    List<IUserDefinedActionWriter> userDefinedActions = null;
    userDefinedActions = getWriterUserDefinedActions();
    if (userDefinedActions != null) {
      for (IUserDefinedActionWriter item : userDefinedActions) {
        result.add((BaseImpl) item);
      }
    }
    List<IPrivateWriter> privates = null;
    privates = getWriterPrivates();
    if (privates != null) {
      for (IPrivateWriter item : privates) {
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
    List<IGlobalActionWriter> globalActions = null;
    globalActions = getWriterGlobalActions();
    if (globalActions != null) {
      List<IGlobalActionWriter> clonedList = new ArrayList<>();
      for (IGlobalActionWriter item : globalActions) {
        IGlobalActionWriter clonedChild = ((GlobalActionImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setGlobalActions(clonedList);
    }
    List<IUserDefinedActionWriter> userDefinedActions = null;
    userDefinedActions = getWriterUserDefinedActions();
    if (userDefinedActions != null) {
      List<IUserDefinedActionWriter> clonedList = new ArrayList<>();
      for (IUserDefinedActionWriter item : userDefinedActions) {
        IUserDefinedActionWriter clonedChild = ((UserDefinedActionImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setUserDefinedActions(clonedList);
    }
    List<IPrivateWriter> privates = null;
    privates = getWriterPrivates();
    if (privates != null) {
      List<IPrivateWriter> clonedList = new ArrayList<>();
      for (IPrivateWriter item : privates) {
        IPrivateWriter clonedChild = ((PrivateImpl) item).clone();
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

}
