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
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.v1_0.api.ISpeedAction;
import net.asam.openscenario.v1_0.api.ISpeedActionTarget;
import net.asam.openscenario.v1_0.api.ITransitionDynamics;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ISpeedAction. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ISpeedAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class SpeedActionImpl extends BaseImpl implements ISpeedAction {
  protected static Hashtable<String, Class<?>> propertyToType = new Hashtable<>();

  private ITransitionDynamics speedActionDynamics;
  private ISpeedActionTarget speedActionTarget;
  /** Default constructor */
  public SpeedActionImpl() {
    super();
    addAdapter(SpeedActionImpl.class, this);
    addAdapter(ISpeedAction.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public ITransitionDynamics getSpeedActionDynamics() {
    return this.speedActionDynamics;
  }

  @Override
  public ISpeedActionTarget getSpeedActionTarget() {
    return this.speedActionTarget;
  }
  /**
   * Sets the value of model property speedActionDynamics
   *
   * @param speedActionDynamics from OpenSCENARIO class model specification: [Defines how the target
   *     speed is reached.]
   */
  public void setSpeedActionDynamics(ITransitionDynamics speedActionDynamics) {
    this.speedActionDynamics = speedActionDynamics;
  }
  /**
   * Sets the value of model property speedActionTarget
   *
   * @param speedActionTarget from OpenSCENARIO class model specification: [Defines the target speed
   *     which should be reached.]
   */
  public void setSpeedActionTarget(ISpeedActionTarget speedActionTarget) {
    this.speedActionTarget = speedActionTarget;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    // Empty
  }

  @Override
  public Class<?> getTypeFromAttributeName(String attributeKey) {
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

    ITransitionDynamics speedActionDynamics = null;
    speedActionDynamics = getSpeedActionDynamics();
    if (speedActionDynamics != null) {
      result.add((BaseImpl) speedActionDynamics);
    }
    ISpeedActionTarget speedActionTarget = null;
    speedActionTarget = getSpeedActionTarget();
    if (speedActionTarget != null) {
      result.add((BaseImpl) speedActionTarget);
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
  public SpeedActionImpl clone() {
    SpeedActionImpl clonedObject = new SpeedActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    ITransitionDynamics speedActionDynamics = null;
    speedActionDynamics = getSpeedActionDynamics();
    if (speedActionDynamics != null) {
      TransitionDynamicsImpl clonedChild = ((TransitionDynamicsImpl) speedActionDynamics).clone();
      clonedObject.setSpeedActionDynamics(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ISpeedActionTarget speedActionTarget = null;
    speedActionTarget = getSpeedActionTarget();
    if (speedActionTarget != null) {
      SpeedActionTargetImpl clonedChild = ((SpeedActionTargetImpl) speedActionTarget).clone();
      clonedObject.setSpeedActionTarget(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__SPEED_ACTION_DYNAMICS)) {
      return (IOpenScenarioFlexElement) getSpeedActionDynamics();
    }
    if (key.equals(OscConstants.ELEMENT__SPEED_ACTION_TARGET)) {
      return (IOpenScenarioFlexElement) getSpeedActionTarget();
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
    return "SpeedAction";
  }
}
