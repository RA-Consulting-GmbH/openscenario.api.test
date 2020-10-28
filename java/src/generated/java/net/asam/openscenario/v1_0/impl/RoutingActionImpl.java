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
import net.asam.openscenario.v1_0.api.IAcquirePositionAction;
import net.asam.openscenario.v1_0.api.IAssignRouteAction;
import net.asam.openscenario.v1_0.api.IFollowTrajectoryAction;
import net.asam.openscenario.v1_0.api.IRoutingAction;
import net.asam.openscenario.v1_0.api.writer.IAcquirePositionActionWriter;
import net.asam.openscenario.v1_0.api.writer.IAssignRouteActionWriter;
import net.asam.openscenario.v1_0.api.writer.IFollowTrajectoryActionWriter;
import net.asam.openscenario.v1_0.api.writer.IRoutingActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IRoutingAction. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IRoutingAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class RoutingActionImpl extends BaseImpl implements IRoutingActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IAssignRouteActionWriter assignRouteAction;
  private IFollowTrajectoryActionWriter followTrajectoryAction;
  private IAcquirePositionActionWriter acquirePositionAction;

  /** Default constructor */
  public RoutingActionImpl() {
    super();
    addAdapter(RoutingActionImpl.class, this);
    addAdapter(IRoutingAction.class, this);
    addAdapter(IRoutingActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IAssignRouteAction getAssignRouteAction() {
    return this.assignRouteAction;
  }

  @Override
  public IFollowTrajectoryAction getFollowTrajectoryAction() {
    return this.followTrajectoryAction;
  }

  @Override
  public IAcquirePositionAction getAcquirePositionAction() {
    return this.acquirePositionAction;
  }

  @Override
  public void setAssignRouteAction(IAssignRouteActionWriter assignRouteAction) {
    this.assignRouteAction = assignRouteAction;
    this.followTrajectoryAction = null;
    this.acquirePositionAction = null;
  }

  @Override
  public void setFollowTrajectoryAction(IFollowTrajectoryActionWriter followTrajectoryAction) {
    this.followTrajectoryAction = followTrajectoryAction;
    this.assignRouteAction = null;
    this.acquirePositionAction = null;
  }

  @Override
  public void setAcquirePositionAction(IAcquirePositionActionWriter acquirePositionAction) {
    this.acquirePositionAction = acquirePositionAction;
    this.assignRouteAction = null;
    this.followTrajectoryAction = null;
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

    IAssignRouteActionWriter assignRouteAction = null;
    assignRouteAction = getWriterAssignRouteAction();
    if (assignRouteAction != null) {
      result.add((BaseImpl) assignRouteAction);
    }
    IFollowTrajectoryActionWriter followTrajectoryAction = null;
    followTrajectoryAction = getWriterFollowTrajectoryAction();
    if (followTrajectoryAction != null) {
      result.add((BaseImpl) followTrajectoryAction);
    }
    IAcquirePositionActionWriter acquirePositionAction = null;
    acquirePositionAction = getWriterAcquirePositionAction();
    if (acquirePositionAction != null) {
      result.add((BaseImpl) acquirePositionAction);
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
  public RoutingActionImpl clone() {
    RoutingActionImpl clonedObject = new RoutingActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IAssignRouteActionWriter assignRouteAction = null;
    assignRouteAction = getWriterAssignRouteAction();
    if (assignRouteAction != null) {
      IAssignRouteActionWriter clonedChild = ((AssignRouteActionImpl) assignRouteAction).clone();
      clonedObject.setAssignRouteAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IFollowTrajectoryActionWriter followTrajectoryAction = null;
    followTrajectoryAction = getWriterFollowTrajectoryAction();
    if (followTrajectoryAction != null) {
      IFollowTrajectoryActionWriter clonedChild =
          ((FollowTrajectoryActionImpl) followTrajectoryAction).clone();
      clonedObject.setFollowTrajectoryAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IAcquirePositionActionWriter acquirePositionAction = null;
    acquirePositionAction = getWriterAcquirePositionAction();
    if (acquirePositionAction != null) {
      IAcquirePositionActionWriter clonedChild =
          ((AcquirePositionActionImpl) acquirePositionAction).clone();
      clonedObject.setAcquirePositionAction(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__ASSIGN_ROUTE_ACTION)) {
      return (IOpenScenarioFlexElement) getAssignRouteAction();
    }
    if (key.equals(OscConstants.ELEMENT__FOLLOW_TRAJECTORY_ACTION)) {
      return (IOpenScenarioFlexElement) getFollowTrajectoryAction();
    }
    if (key.equals(OscConstants.ELEMENT__ACQUIRE_POSITION_ACTION)) {
      return (IOpenScenarioFlexElement) getAcquirePositionAction();
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
    return "RoutingAction";
  }

  // children
  @Override
  public IAssignRouteActionWriter getWriterAssignRouteAction() {
    return this.assignRouteAction;
  }

  @Override
  public IFollowTrajectoryActionWriter getWriterFollowTrajectoryAction() {
    return this.followTrajectoryAction;
  }

  @Override
  public IAcquirePositionActionWriter getWriterAcquirePositionAction() {
    return this.acquirePositionAction;
  }
}
