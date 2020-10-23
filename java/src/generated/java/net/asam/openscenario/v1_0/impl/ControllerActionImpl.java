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
import net.asam.openscenario.v1_0.api.IAssignControllerAction;
import net.asam.openscenario.v1_0.api.IControllerAction;
import net.asam.openscenario.v1_0.api.IOverrideControllerValueAction;
import net.asam.openscenario.v1_0.api.writer.IAssignControllerActionWriter;
import net.asam.openscenario.v1_0.api.writer.IControllerActionWriter;
import net.asam.openscenario.v1_0.api.writer.IOverrideControllerValueActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IControllerAction. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IControllerAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ControllerActionImpl extends BaseImpl
    implements IControllerAction, IControllerActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IAssignControllerAction assignControllerAction;
  private IOverrideControllerValueAction overrideControllerValueAction;
  /** Default constructor */
  public ControllerActionImpl() {
    super();
    addAdapter(ControllerActionImpl.class, this);
    addAdapter(IControllerAction.class, this);
    addAdapter(IControllerActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IAssignControllerAction getAssignControllerAction() {
    return this.assignControllerAction;
  }

  @Override
  public IOverrideControllerValueAction getOverrideControllerValueAction() {
    return this.overrideControllerValueAction;
  }
  /**
   * Sets the value of model property assignControllerAction
   *
   * @param assignControllerAction from OpenSCENARIO class model specification: [Assign a controller
   *     to an entity.]
   */
  public void setAssignControllerAction(IAssignControllerAction assignControllerAction) {
    this.assignControllerAction = assignControllerAction;
  }
  /**
   * Sets the value of model property overrideControllerValueAction
   *
   * @param overrideControllerValueAction from OpenSCENARIO class model specification: [Values for
   *     throttle, brake, clutch, parking brake, steering wheel or gear.]
   */
  public void setOverrideControllerValueAction(
      IOverrideControllerValueAction overrideControllerValueAction) {
    this.overrideControllerValueAction = overrideControllerValueAction;
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

    IAssignControllerAction assignControllerAction = null;
    assignControllerAction = getAssignControllerAction();
    if (assignControllerAction != null) {
      result.add((BaseImpl) assignControllerAction);
    }
    IOverrideControllerValueAction overrideControllerValueAction = null;
    overrideControllerValueAction = getOverrideControllerValueAction();
    if (overrideControllerValueAction != null) {
      result.add((BaseImpl) overrideControllerValueAction);
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
  public ControllerActionImpl clone() {
    ControllerActionImpl clonedObject = new ControllerActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IAssignControllerAction assignControllerAction = null;
    assignControllerAction = getAssignControllerAction();
    if (assignControllerAction != null) {
      AssignControllerActionImpl clonedChild =
          ((AssignControllerActionImpl) assignControllerAction).clone();
      clonedObject.setAssignControllerAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IOverrideControllerValueAction overrideControllerValueAction = null;
    overrideControllerValueAction = getOverrideControllerValueAction();
    if (overrideControllerValueAction != null) {
      OverrideControllerValueActionImpl clonedChild =
          ((OverrideControllerValueActionImpl) overrideControllerValueAction).clone();
      clonedObject.setOverrideControllerValueAction(clonedChild);
      clonedChild.setParent(clonedObject);
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ELEMENT__ASSIGN_CONTROLLER_ACTION)) {
      return (IOpenScenarioFlexElement) getAssignControllerAction();
    }
    if (key.equals(OscConstants.ELEMENT__OVERRIDE_CONTROLLER_VALUE_ACTION)) {
      return (IOpenScenarioFlexElement) getOverrideControllerValueAction();
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
    return "ControllerAction";
  }

  // children
  @Override
  public IAssignControllerActionWriter getAssignControllerActionWriter() {
    return null;
  }

  @Override
  public IOverrideControllerValueActionWriter getOverrideControllerValueActionWriter() {
    return null;
  }

  @Override
  public void writeToAssignControllerActionWriter(
      IAssignControllerActionWriter assignControllerActionWriter) {
    // empty
  }

  @Override
  public void writeToOverrideControllerValueActionWriter(
      IOverrideControllerValueActionWriter overrideControllerValueActionWriter) {
    // empty
  }
}
