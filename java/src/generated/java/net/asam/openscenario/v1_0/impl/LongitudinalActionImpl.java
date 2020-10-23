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
import net.asam.openscenario.v1_0.api.ILongitudinalAction;
import net.asam.openscenario.v1_0.api.ILongitudinalDistanceAction;
import net.asam.openscenario.v1_0.api.ISpeedAction;
import net.asam.openscenario.v1_0.api.writer.ILongitudinalActionWriter;
import net.asam.openscenario.v1_0.api.writer.ILongitudinalDistanceActionWriter;
import net.asam.openscenario.v1_0.api.writer.ISpeedActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ILongitudinalAction. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ILongitudinalAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class LongitudinalActionImpl extends BaseImpl
    implements ILongitudinalAction, ILongitudinalActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private ISpeedAction speedAction;
  private ILongitudinalDistanceAction longitudinalDistanceAction;

  private ISpeedActionWriter speedActionWriter;
  private ILongitudinalDistanceActionWriter longitudinalDistanceActionWriter;

  /** Default constructor */
  public LongitudinalActionImpl() {
    super();
    addAdapter(LongitudinalActionImpl.class, this);
    addAdapter(ILongitudinalAction.class, this);
    addAdapter(ILongitudinalActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public ISpeedAction getSpeedAction() {
    return this.speedAction;
  }

  @Override
  public ILongitudinalDistanceAction getLongitudinalDistanceAction() {
    return this.longitudinalDistanceAction;
  }
  /**
   * Sets the value of model property speedAction
   *
   * @param speedAction from OpenSCENARIO class model specification: [This action describes the
   *     transition between the current longitudinal speed of an entity and its target speed.]
   */
  public void setSpeedAction(ISpeedAction speedAction) {
    this.speedAction = speedAction;
  }
  /**
   * Sets the value of model property longitudinalDistanceAction
   *
   * @param longitudinalDistanceAction from OpenSCENARIO class model specification: [This Action
   *     defines a continuously kept longitudinal distance to a specific entity.]
   */
  public void setLongitudinalDistanceAction(
      ILongitudinalDistanceAction longitudinalDistanceAction) {
    this.longitudinalDistanceAction = longitudinalDistanceAction;
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

    ISpeedAction speedAction = null;
    speedAction = getSpeedAction();
    if (speedAction != null) {
      result.add((BaseImpl) speedAction);
    }
    ILongitudinalDistanceAction longitudinalDistanceAction = null;
    longitudinalDistanceAction = getLongitudinalDistanceAction();
    if (longitudinalDistanceAction != null) {
      result.add((BaseImpl) longitudinalDistanceAction);
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
  public LongitudinalActionImpl clone() {
    LongitudinalActionImpl clonedObject = new LongitudinalActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    ISpeedAction speedAction = null;
    speedAction = getSpeedAction();
    if (speedAction != null) {
      SpeedActionImpl clonedChild = ((SpeedActionImpl) speedAction).clone();
      clonedObject.setSpeedAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ILongitudinalDistanceAction longitudinalDistanceAction = null;
    longitudinalDistanceAction = getLongitudinalDistanceAction();
    if (longitudinalDistanceAction != null) {
      LongitudinalDistanceActionImpl clonedChild =
          ((LongitudinalDistanceActionImpl) longitudinalDistanceAction).clone();
      clonedObject.setLongitudinalDistanceAction(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__SPEED_ACTION)) {
      return (IOpenScenarioFlexElement) getSpeedAction();
    }
    if (key.equals(OscConstants.ELEMENT__LONGITUDINAL_DISTANCE_ACTION)) {
      return (IOpenScenarioFlexElement) getLongitudinalDistanceAction();
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
    return "LongitudinalAction";
  }

  // children
  @Override
  public ISpeedActionWriter getSpeedActionWriter() {
    return this.speedActionWriter;
  }

  @Override
  public ILongitudinalDistanceActionWriter getLongitudinalDistanceActionWriter() {
    return this.longitudinalDistanceActionWriter;
  }

  @Override
  public void writeToSpeedActionWriter(ISpeedActionWriter speedActionWriter) {
    this.speedActionWriter = speedActionWriter;
  }

  @Override
  public void writeToLongitudinalDistanceActionWriter(
      ILongitudinalDistanceActionWriter longitudinalDistanceActionWriter) {
    this.longitudinalDistanceActionWriter = longitudinalDistanceActionWriter;
  }
}
