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
import net.asam.openscenario.v1_0.api.IAction;
import net.asam.openscenario.v1_0.api.IGlobalAction;
import net.asam.openscenario.v1_0.api.IPrivateAction;
import net.asam.openscenario.v1_0.api.IUserDefinedAction;
import net.asam.openscenario.v1_0.api.writer.IActionWriter;
import net.asam.openscenario.v1_0.api.writer.IGlobalActionWriter;
import net.asam.openscenario.v1_0.api.writer.IPrivateActionWriter;
import net.asam.openscenario.v1_0.api.writer.IUserDefinedActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IAction. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ActionImpl extends BaseImpl implements IActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__NAME, SimpleType.STRING);
  }

  private String name;
  private IGlobalActionWriter globalAction;
  private IUserDefinedActionWriter userDefinedAction;
  private IPrivateActionWriter privateAction;

  /** Default constructor */
  public ActionImpl() {
    super();
    addAdapter(ActionImpl.class, this);
    addAdapter(IAction.class, this);
    addAdapter(IActionWriter.class, this);
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
  public IGlobalAction getGlobalAction() {
    return this.globalAction;
  }

  @Override
  public IUserDefinedAction getUserDefinedAction() {
    return this.userDefinedAction;
  }

  @Override
  public IPrivateAction getPrivateAction() {
    return this.privateAction;
  }

  @Override
  public void setName(String name) {
    this.name = name;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__NAME);
  }

  @Override
  public void setGlobalAction(IGlobalActionWriter globalAction) {
    this.globalAction = globalAction;
    this.userDefinedAction = null;
    this.privateAction = null;
  }

  @Override
  public void setUserDefinedAction(IUserDefinedActionWriter userDefinedAction) {
    this.userDefinedAction = userDefinedAction;
    this.globalAction = null;
    this.privateAction = null;
  }

  @Override
  public void setPrivateAction(IPrivateActionWriter privateAction) {
    this.privateAction = privateAction;
    this.globalAction = null;
    this.userDefinedAction = null;
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

    IGlobalActionWriter globalAction = null;
    globalAction = getWriterGlobalAction();
    if (globalAction != null) {
      result.add((BaseImpl) globalAction);
    }
    IUserDefinedActionWriter userDefinedAction = null;
    userDefinedAction = getWriterUserDefinedAction();
    if (userDefinedAction != null) {
      result.add((BaseImpl) userDefinedAction);
    }
    IPrivateActionWriter privateAction = null;
    privateAction = getWriterPrivateAction();
    if (privateAction != null) {
      result.add((BaseImpl) privateAction);
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
  public ActionImpl clone() {
    ActionImpl clonedObject = new ActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.name = getName();
    // clone children
    IGlobalActionWriter globalAction = null;
    globalAction = getWriterGlobalAction();
    if (globalAction != null) {
      IGlobalActionWriter clonedChild = ((GlobalActionImpl) globalAction).clone();
      clonedObject.setGlobalAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IUserDefinedActionWriter userDefinedAction = null;
    userDefinedAction = getWriterUserDefinedAction();
    if (userDefinedAction != null) {
      IUserDefinedActionWriter clonedChild = ((UserDefinedActionImpl) userDefinedAction).clone();
      clonedObject.setUserDefinedAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IPrivateActionWriter privateAction = null;
    privateAction = getWriterPrivateAction();
    if (privateAction != null) {
      IPrivateActionWriter clonedChild = ((PrivateActionImpl) privateAction).clone();
      clonedObject.setPrivateAction(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__GLOBAL_ACTION)) {
      return (IOpenScenarioFlexElement) getGlobalAction();
    }
    if (key.equals(OscConstants.ELEMENT__USER_DEFINED_ACTION)) {
      return (IOpenScenarioFlexElement) getUserDefinedAction();
    }
    if (key.equals(OscConstants.ELEMENT__PRIVATE_ACTION)) {
      return (IOpenScenarioFlexElement) getPrivateAction();
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
    return "Action";
  }

  @Override
  public void writeParameterToName(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__NAME, parameterName, null /*no textmarker*/);
    this.name = null;
  }

  @Override
  public String getParameterFromName() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__NAME);
  }

  @Override
  public boolean isNameParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__NAME);
  }

  // children
  @Override
  public IGlobalActionWriter getWriterGlobalAction() {
    return this.globalAction;
  }

  @Override
  public IUserDefinedActionWriter getWriterUserDefinedAction() {
    return this.userDefinedAction;
  }

  @Override
  public IPrivateActionWriter getWriterPrivateAction() {
    return this.privateAction;
  }
}
