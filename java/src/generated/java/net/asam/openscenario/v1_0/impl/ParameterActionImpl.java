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
import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.impl.NamedReferenceProxy;
import net.asam.openscenario.v1_0.api.IParameterAction;
import net.asam.openscenario.v1_0.api.IParameterDeclaration;
import net.asam.openscenario.v1_0.api.IParameterModifyAction;
import net.asam.openscenario.v1_0.api.IParameterSetAction;
import net.asam.openscenario.v1_0.api.writer.IParameterActionWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterModifyActionWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterSetActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IParameterAction. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IParameterAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ParameterActionImpl extends BaseImpl
    implements IParameterAction, IParameterActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__PARAMETER_REF, SimpleType.STRING);
  }

  private NamedReferenceProxy<IParameterDeclaration> parameterRef;
  private IParameterSetAction setAction;
  private IParameterModifyAction modifyAction;
  /** Default constructor */
  public ParameterActionImpl() {
    super();
    addAdapter(ParameterActionImpl.class, this);
    addAdapter(IParameterAction.class, this);
    addAdapter(IParameterActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public INamedReference<IParameterDeclaration> getParameterRef() {
    return this.parameterRef;
  }

  @Override
  public IParameterSetAction getSetAction() {
    return this.setAction;
  }

  @Override
  public IParameterModifyAction getModifyAction() {
    return this.modifyAction;
  }
  /**
   * Sets the value of model property parameterRef
   *
   * @param parameterRef from OpenSCENARIO class model specification: [Name of the parameter.]
   */
  public void setParameterRef(NamedReferenceProxy<IParameterDeclaration> parameterRef) {
    this.parameterRef = parameterRef;
  }
  /**
   * Sets the value of model property setAction
   *
   * @param setAction from OpenSCENARIO class model specification: [New value for the parameter.]
   */
  public void setSetAction(IParameterSetAction setAction) {
    this.setAction = setAction;
  }
  /**
   * Sets the value of model property modifyAction
   *
   * @param modifyAction from OpenSCENARIO class model specification: [Modifying rule for the
   *     parameter (Add value or multiply by value).]
   */
  public void setModifyAction(IParameterModifyAction modifyAction) {
    this.modifyAction = modifyAction;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__PARAMETER_REF)) {
      // Proxy
      NamedReferenceProxy<IParameterDeclaration> proxy =
          new NamedReferenceProxy<>(parameterLiteralValue);
      this.parameterRef = proxy;
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

    IParameterSetAction setAction = null;
    setAction = getSetAction();
    if (setAction != null) {
      result.add((BaseImpl) setAction);
    }
    IParameterModifyAction modifyAction = null;
    modifyAction = getModifyAction();
    if (modifyAction != null) {
      result.add((BaseImpl) modifyAction);
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
  public ParameterActionImpl clone() {
    ParameterActionImpl clonedObject = new ParameterActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Proxy
    NamedReferenceProxy<IParameterDeclaration> proxy =
        ((NamedReferenceProxy<IParameterDeclaration>) getParameterRef()).clone();
    clonedObject.setParameterRef(proxy);
    proxy.setParent(clonedObject);
    // clone children
    IParameterSetAction setAction = null;
    setAction = getSetAction();
    if (setAction != null) {
      ParameterSetActionImpl clonedChild = ((ParameterSetActionImpl) setAction).clone();
      clonedObject.setSetAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IParameterModifyAction modifyAction = null;
    modifyAction = getModifyAction();
    if (modifyAction != null) {
      ParameterModifyActionImpl clonedChild = ((ParameterModifyActionImpl) modifyAction).clone();
      clonedObject.setModifyAction(clonedChild);
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
    if (key.equals(OscConstants.ATTRIBUTE__PARAMETER_REF)) {
      // Get the Proxy
      INamedReference<IParameterDeclaration> parameterRef = getParameterRef();
      return parameterRef != null ? parameterRef.getNameRef() : null;
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
    if (key.equals(OscConstants.ELEMENT__SET_ACTION)) {
      return (IOpenScenarioFlexElement) getSetAction();
    }
    if (key.equals(OscConstants.ELEMENT__MODIFY_ACTION)) {
      return (IOpenScenarioFlexElement) getModifyAction();
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__PARAMETER_REF)) {
      // Get the Proxy
      INamedReference<IParameterDeclaration> parameterRef = getParameterRef();
      return parameterRef != null
          ? (IOpenScenarioFlexElement) parameterRef.getTargetObject()
          : null;
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "ParameterAction";
  }

  @Override
  public void writeToParameterRef(INamedReference<IParameterDeclaration> parameterRef) {
    // empty
  }

  @Override
  public void writeParameterToParameterRef(String parameterName) {
    // empty
  }

  @Override
  public String getParameterFromParameterRef() {
    return null;
  }

  @Override
  public boolean isParameterRefParameterized() {
    return false;
  }

  // children
  @Override
  public IParameterSetActionWriter getSetActionWriter() {
    return null;
  }

  @Override
  public IParameterModifyActionWriter getModifyActionWriter() {
    return null;
  }

  @Override
  public void writeToSetActionWriter(IParameterSetActionWriter setActionWriter) {
    // empty
  }

  @Override
  public void writeToModifyActionWriter(IParameterModifyActionWriter modifyActionWriter) {
    // empty
  }
}
