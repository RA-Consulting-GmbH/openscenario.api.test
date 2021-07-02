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
import net.asam.openscenario.v1_0.api.IActivateControllerAction;
import net.asam.openscenario.v1_0.api.IControllerAction;
import net.asam.openscenario.v1_0.api.ILateralAction;
import net.asam.openscenario.v1_0.api.ILongitudinalAction;
import net.asam.openscenario.v1_0.api.IPrivateAction;
import net.asam.openscenario.v1_0.api.IRoutingAction;
import net.asam.openscenario.v1_0.api.ISynchronizeAction;
import net.asam.openscenario.v1_0.api.ITeleportAction;
import net.asam.openscenario.v1_0.api.IVisibilityAction;
import net.asam.openscenario.v1_0.api.writer.IActivateControllerActionWriter;
import net.asam.openscenario.v1_0.api.writer.IControllerActionWriter;
import net.asam.openscenario.v1_0.api.writer.ILateralActionWriter;
import net.asam.openscenario.v1_0.api.writer.ILongitudinalActionWriter;
import net.asam.openscenario.v1_0.api.writer.IPrivateActionWriter;
import net.asam.openscenario.v1_0.api.writer.IRoutingActionWriter;
import net.asam.openscenario.v1_0.api.writer.ISynchronizeActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITeleportActionWriter;
import net.asam.openscenario.v1_0.api.writer.IVisibilityActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IPrivateAction. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IPrivateAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class PrivateActionImpl extends BaseImpl implements IPrivateActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private ILongitudinalActionWriter longitudinalAction;
  private ILateralActionWriter lateralAction;
  private IVisibilityActionWriter visibilityAction;
  private ISynchronizeActionWriter synchronizeAction;
  private IActivateControllerActionWriter activateControllerAction;
  private IControllerActionWriter controllerAction;
  private ITeleportActionWriter teleportAction;
  private IRoutingActionWriter routingAction;

  /** Default constructor */
  public PrivateActionImpl() {
    super();
    addAdapter(PrivateActionImpl.class, this);
    addAdapter(IPrivateAction.class, this);
    addAdapter(IPrivateActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public ILongitudinalAction getLongitudinalAction() {
    return this.longitudinalAction;
  }

  @Override
  public ILateralAction getLateralAction() {
    return this.lateralAction;
  }

  @Override
  public IVisibilityAction getVisibilityAction() {
    return this.visibilityAction;
  }

  @Override
  public ISynchronizeAction getSynchronizeAction() {
    return this.synchronizeAction;
  }

  @Override
  public IActivateControllerAction getActivateControllerAction() {
    return this.activateControllerAction;
  }

  @Override
  public IControllerAction getControllerAction() {
    return this.controllerAction;
  }

  @Override
  public ITeleportAction getTeleportAction() {
    return this.teleportAction;
  }

  @Override
  public IRoutingAction getRoutingAction() {
    return this.routingAction;
  }

  @Override
  public void setLongitudinalAction(ILongitudinalActionWriter longitudinalAction) {
    this.longitudinalAction = longitudinalAction;
    this.lateralAction = null;
    this.visibilityAction = null;
    this.synchronizeAction = null;
    this.activateControllerAction = null;
    this.controllerAction = null;
    this.teleportAction = null;
    this.routingAction = null;
  }

  @Override
  public void setLateralAction(ILateralActionWriter lateralAction) {
    this.lateralAction = lateralAction;
    this.longitudinalAction = null;
    this.visibilityAction = null;
    this.synchronizeAction = null;
    this.activateControllerAction = null;
    this.controllerAction = null;
    this.teleportAction = null;
    this.routingAction = null;
  }

  @Override
  public void setVisibilityAction(IVisibilityActionWriter visibilityAction) {
    this.visibilityAction = visibilityAction;
    this.longitudinalAction = null;
    this.lateralAction = null;
    this.synchronizeAction = null;
    this.activateControllerAction = null;
    this.controllerAction = null;
    this.teleportAction = null;
    this.routingAction = null;
  }

  @Override
  public void setSynchronizeAction(ISynchronizeActionWriter synchronizeAction) {
    this.synchronizeAction = synchronizeAction;
    this.longitudinalAction = null;
    this.lateralAction = null;
    this.visibilityAction = null;
    this.activateControllerAction = null;
    this.controllerAction = null;
    this.teleportAction = null;
    this.routingAction = null;
  }

  @Override
  public void setActivateControllerAction(
      IActivateControllerActionWriter activateControllerAction) {
    this.activateControllerAction = activateControllerAction;
    this.longitudinalAction = null;
    this.lateralAction = null;
    this.visibilityAction = null;
    this.synchronizeAction = null;
    this.controllerAction = null;
    this.teleportAction = null;
    this.routingAction = null;
  }

  @Override
  public void setControllerAction(IControllerActionWriter controllerAction) {
    this.controllerAction = controllerAction;
    this.longitudinalAction = null;
    this.lateralAction = null;
    this.visibilityAction = null;
    this.synchronizeAction = null;
    this.activateControllerAction = null;
    this.teleportAction = null;
    this.routingAction = null;
  }

  @Override
  public void setTeleportAction(ITeleportActionWriter teleportAction) {
    this.teleportAction = teleportAction;
    this.longitudinalAction = null;
    this.lateralAction = null;
    this.visibilityAction = null;
    this.synchronizeAction = null;
    this.activateControllerAction = null;
    this.controllerAction = null;
    this.routingAction = null;
  }

  @Override
  public void setRoutingAction(IRoutingActionWriter routingAction) {
    this.routingAction = routingAction;
    this.longitudinalAction = null;
    this.lateralAction = null;
    this.visibilityAction = null;
    this.synchronizeAction = null;
    this.activateControllerAction = null;
    this.controllerAction = null;
    this.teleportAction = null;
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

    ILongitudinalActionWriter longitudinalAction = null;
    longitudinalAction = getWriterLongitudinalAction();
    if (longitudinalAction != null) {
      result.add((BaseImpl) longitudinalAction);
    }
    ILateralActionWriter lateralAction = null;
    lateralAction = getWriterLateralAction();
    if (lateralAction != null) {
      result.add((BaseImpl) lateralAction);
    }
    IVisibilityActionWriter visibilityAction = null;
    visibilityAction = getWriterVisibilityAction();
    if (visibilityAction != null) {
      result.add((BaseImpl) visibilityAction);
    }
    ISynchronizeActionWriter synchronizeAction = null;
    synchronizeAction = getWriterSynchronizeAction();
    if (synchronizeAction != null) {
      result.add((BaseImpl) synchronizeAction);
    }
    IActivateControllerActionWriter activateControllerAction = null;
    activateControllerAction = getWriterActivateControllerAction();
    if (activateControllerAction != null) {
      result.add((BaseImpl) activateControllerAction);
    }
    IControllerActionWriter controllerAction = null;
    controllerAction = getWriterControllerAction();
    if (controllerAction != null) {
      result.add((BaseImpl) controllerAction);
    }
    ITeleportActionWriter teleportAction = null;
    teleportAction = getWriterTeleportAction();
    if (teleportAction != null) {
      result.add((BaseImpl) teleportAction);
    }
    IRoutingActionWriter routingAction = null;
    routingAction = getWriterRoutingAction();
    if (routingAction != null) {
      result.add((BaseImpl) routingAction);
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
  public PrivateActionImpl clone() {
    PrivateActionImpl clonedObject = new PrivateActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    ILongitudinalActionWriter longitudinalAction = null;
    longitudinalAction = getWriterLongitudinalAction();
    if (longitudinalAction != null) {
      ILongitudinalActionWriter clonedChild = ((LongitudinalActionImpl) longitudinalAction).clone();
      clonedObject.setLongitudinalAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ILateralActionWriter lateralAction = null;
    lateralAction = getWriterLateralAction();
    if (lateralAction != null) {
      ILateralActionWriter clonedChild = ((LateralActionImpl) lateralAction).clone();
      clonedObject.setLateralAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IVisibilityActionWriter visibilityAction = null;
    visibilityAction = getWriterVisibilityAction();
    if (visibilityAction != null) {
      IVisibilityActionWriter clonedChild = ((VisibilityActionImpl) visibilityAction).clone();
      clonedObject.setVisibilityAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ISynchronizeActionWriter synchronizeAction = null;
    synchronizeAction = getWriterSynchronizeAction();
    if (synchronizeAction != null) {
      ISynchronizeActionWriter clonedChild = ((SynchronizeActionImpl) synchronizeAction).clone();
      clonedObject.setSynchronizeAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IActivateControllerActionWriter activateControllerAction = null;
    activateControllerAction = getWriterActivateControllerAction();
    if (activateControllerAction != null) {
      IActivateControllerActionWriter clonedChild =
          ((ActivateControllerActionImpl) activateControllerAction).clone();
      clonedObject.setActivateControllerAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IControllerActionWriter controllerAction = null;
    controllerAction = getWriterControllerAction();
    if (controllerAction != null) {
      IControllerActionWriter clonedChild = ((ControllerActionImpl) controllerAction).clone();
      clonedObject.setControllerAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITeleportActionWriter teleportAction = null;
    teleportAction = getWriterTeleportAction();
    if (teleportAction != null) {
      ITeleportActionWriter clonedChild = ((TeleportActionImpl) teleportAction).clone();
      clonedObject.setTeleportAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IRoutingActionWriter routingAction = null;
    routingAction = getWriterRoutingAction();
    if (routingAction != null) {
      IRoutingActionWriter clonedChild = ((RoutingActionImpl) routingAction).clone();
      clonedObject.setRoutingAction(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__LONGITUDINAL_ACTION)) {
      return (IOpenScenarioFlexElement) getLongitudinalAction();
    }
    if (key.equals(OscConstants.ELEMENT__LATERAL_ACTION)) {
      return (IOpenScenarioFlexElement) getLateralAction();
    }
    if (key.equals(OscConstants.ELEMENT__VISIBILITY_ACTION)) {
      return (IOpenScenarioFlexElement) getVisibilityAction();
    }
    if (key.equals(OscConstants.ELEMENT__SYNCHRONIZE_ACTION)) {
      return (IOpenScenarioFlexElement) getSynchronizeAction();
    }
    if (key.equals(OscConstants.ELEMENT__ACTIVATE_CONTROLLER_ACTION)) {
      return (IOpenScenarioFlexElement) getActivateControllerAction();
    }
    if (key.equals(OscConstants.ELEMENT__CONTROLLER_ACTION)) {
      return (IOpenScenarioFlexElement) getControllerAction();
    }
    if (key.equals(OscConstants.ELEMENT__TELEPORT_ACTION)) {
      return (IOpenScenarioFlexElement) getTeleportAction();
    }
    if (key.equals(OscConstants.ELEMENT__ROUTING_ACTION)) {
      return (IOpenScenarioFlexElement) getRoutingAction();
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
    return "PrivateAction";
  }

  // children
  @Override
  public ILongitudinalActionWriter getWriterLongitudinalAction() {
    return this.longitudinalAction;
  }

  @Override
  public ILateralActionWriter getWriterLateralAction() {
    return this.lateralAction;
  }

  @Override
  public IVisibilityActionWriter getWriterVisibilityAction() {
    return this.visibilityAction;
  }

  @Override
  public ISynchronizeActionWriter getWriterSynchronizeAction() {
    return this.synchronizeAction;
  }

  @Override
  public IActivateControllerActionWriter getWriterActivateControllerAction() {
    return this.activateControllerAction;
  }

  @Override
  public IControllerActionWriter getWriterControllerAction() {
    return this.controllerAction;
  }

  @Override
  public ITeleportActionWriter getWriterTeleportAction() {
    return this.teleportAction;
  }

  @Override
  public IRoutingActionWriter getWriterRoutingAction() {
    return this.routingAction;
  }
}
