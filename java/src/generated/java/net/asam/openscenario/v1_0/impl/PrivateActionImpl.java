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
public class PrivateActionImpl extends BaseImpl implements IPrivateAction {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private ILongitudinalAction longitudinalAction;
  private ILateralAction lateralAction;
  private IVisibilityAction visibilityAction;
  private ISynchronizeAction synchronizeAction;
  private IActivateControllerAction activateControllerAction;
  private IControllerAction controllerAction;
  private ITeleportAction teleportAction;
  private IRoutingAction routingAction;
  /** Default constructor */
  public PrivateActionImpl() {
    super();
    addAdapter(PrivateActionImpl.class, this);
    addAdapter(IPrivateAction.class, this);
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
  /**
   * Sets the value of model property longitudinalAction
   *
   * @param longitudinalAction from OpenSCENARIO class model specification: [Applies longitudinal
   *     control behavior on the reference entity/entities. Either a SpeedAction or a ,
   *     LongitudinalDistanceAction.]
   */
  public void setLongitudinalAction(ILongitudinalAction longitudinalAction) {
    this.longitudinalAction = longitudinalAction;
  }
  /**
   * Sets the value of model property lateralAction
   *
   * @param lateralAction from OpenSCENARIO class model specification: [Applies lateral control
   *     behavior on the reference entity/entities. Either a LaneChangeAction, LaneOffsetAction or a
   *     , LateralDistanceAction.]
   */
  public void setLateralAction(ILateralAction lateralAction) {
    this.lateralAction = lateralAction;
  }
  /**
   * Sets the value of model property visibilityAction
   *
   * @param visibilityAction from OpenSCENARIO class model specification: [Sets visibility
   *     attributes on the reference entity/entities.]
   */
  public void setVisibilityAction(IVisibilityAction visibilityAction) {
    this.visibilityAction = visibilityAction;
  }
  /**
   * Sets the value of model property synchronizeAction
   *
   * @param synchronizeAction from OpenSCENARIO class model specification: [Synchronizes the
   *     reference entity/entities with a master entity. A target position is provided for the
   *     entity and for , the master entity to be reached at the same time.]
   */
  public void setSynchronizeAction(ISynchronizeAction synchronizeAction) {
    this.synchronizeAction = synchronizeAction;
  }
  /**
   * Sets the value of model property activateControllerAction
   *
   * @param activateControllerAction from OpenSCENARIO class model specification: [Activates/
   *     deactivates a controller on the reference entity/entities.]
   */
  public void setActivateControllerAction(IActivateControllerAction activateControllerAction) {
    this.activateControllerAction = activateControllerAction;
  }
  /**
   * Sets the value of model property controllerAction
   *
   * @param controllerAction from OpenSCENARIO class model specification: [Assigns a controller to
   *     the reference entity/entities.]
   */
  public void setControllerAction(IControllerAction controllerAction) {
    this.controllerAction = controllerAction;
  }
  /**
   * Sets the value of model property teleportAction
   *
   * @param teleportAction from OpenSCENARIO class model specification: [Assigns a position to the
   *     reference entity/entities.]
   */
  public void setTeleportAction(ITeleportAction teleportAction) {
    this.teleportAction = teleportAction;
  }
  /**
   * Sets the value of model property routingAction
   *
   * @param routingAction from OpenSCENARIO class model specification: [Applies an
   *     AssignRouteAction, a FollowTrajectoryAction or an AcquirePositionAction to the reference
   *     entity/entities.]
   */
  public void setRoutingAction(IRoutingAction routingAction) {
    this.routingAction = routingAction;
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

    ILongitudinalAction longitudinalAction = null;
    longitudinalAction = getLongitudinalAction();
    if (longitudinalAction != null) {
      result.add((BaseImpl) longitudinalAction);
    }
    ILateralAction lateralAction = null;
    lateralAction = getLateralAction();
    if (lateralAction != null) {
      result.add((BaseImpl) lateralAction);
    }
    IVisibilityAction visibilityAction = null;
    visibilityAction = getVisibilityAction();
    if (visibilityAction != null) {
      result.add((BaseImpl) visibilityAction);
    }
    ISynchronizeAction synchronizeAction = null;
    synchronizeAction = getSynchronizeAction();
    if (synchronizeAction != null) {
      result.add((BaseImpl) synchronizeAction);
    }
    IActivateControllerAction activateControllerAction = null;
    activateControllerAction = getActivateControllerAction();
    if (activateControllerAction != null) {
      result.add((BaseImpl) activateControllerAction);
    }
    IControllerAction controllerAction = null;
    controllerAction = getControllerAction();
    if (controllerAction != null) {
      result.add((BaseImpl) controllerAction);
    }
    ITeleportAction teleportAction = null;
    teleportAction = getTeleportAction();
    if (teleportAction != null) {
      result.add((BaseImpl) teleportAction);
    }
    IRoutingAction routingAction = null;
    routingAction = getRoutingAction();
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
    ILongitudinalAction longitudinalAction = null;
    longitudinalAction = getLongitudinalAction();
    if (longitudinalAction != null) {
      LongitudinalActionImpl clonedChild = ((LongitudinalActionImpl) longitudinalAction).clone();
      clonedObject.setLongitudinalAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ILateralAction lateralAction = null;
    lateralAction = getLateralAction();
    if (lateralAction != null) {
      LateralActionImpl clonedChild = ((LateralActionImpl) lateralAction).clone();
      clonedObject.setLateralAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IVisibilityAction visibilityAction = null;
    visibilityAction = getVisibilityAction();
    if (visibilityAction != null) {
      VisibilityActionImpl clonedChild = ((VisibilityActionImpl) visibilityAction).clone();
      clonedObject.setVisibilityAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ISynchronizeAction synchronizeAction = null;
    synchronizeAction = getSynchronizeAction();
    if (synchronizeAction != null) {
      SynchronizeActionImpl clonedChild = ((SynchronizeActionImpl) synchronizeAction).clone();
      clonedObject.setSynchronizeAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IActivateControllerAction activateControllerAction = null;
    activateControllerAction = getActivateControllerAction();
    if (activateControllerAction != null) {
      ActivateControllerActionImpl clonedChild =
          ((ActivateControllerActionImpl) activateControllerAction).clone();
      clonedObject.setActivateControllerAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IControllerAction controllerAction = null;
    controllerAction = getControllerAction();
    if (controllerAction != null) {
      ControllerActionImpl clonedChild = ((ControllerActionImpl) controllerAction).clone();
      clonedObject.setControllerAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITeleportAction teleportAction = null;
    teleportAction = getTeleportAction();
    if (teleportAction != null) {
      TeleportActionImpl clonedChild = ((TeleportActionImpl) teleportAction).clone();
      clonedObject.setTeleportAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IRoutingAction routingAction = null;
    routingAction = getRoutingAction();
    if (routingAction != null) {
      RoutingActionImpl clonedChild = ((RoutingActionImpl) routingAction).clone();
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
}
