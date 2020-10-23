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
import net.asam.openscenario.v1_0.api.ITrafficSignalAction;
import net.asam.openscenario.v1_0.api.ITrafficSignalControllerAction;
import net.asam.openscenario.v1_0.api.ITrafficSignalStateAction;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalControllerActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalStateActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ITrafficSignalAction. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ITrafficSignalAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class TrafficSignalActionImpl extends BaseImpl
    implements ITrafficSignalAction, ITrafficSignalActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private ITrafficSignalControllerAction trafficSignalControllerAction;
  private ITrafficSignalStateAction trafficSignalStateAction;
  /** Default constructor */
  public TrafficSignalActionImpl() {
    super();
    addAdapter(TrafficSignalActionImpl.class, this);
    addAdapter(ITrafficSignalAction.class, this);
    addAdapter(ITrafficSignalActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public ITrafficSignalControllerAction getTrafficSignalControllerAction() {
    return this.trafficSignalControllerAction;
  }

  @Override
  public ITrafficSignalStateAction getTrafficSignalStateAction() {
    return this.trafficSignalStateAction;
  }
  /**
   * Sets the value of model property trafficSignalControllerAction
   *
   * @param trafficSignalControllerAction from OpenSCENARIO class model specification: [Action used
   *     to control the state of a signal.]
   */
  public void setTrafficSignalControllerAction(
      ITrafficSignalControllerAction trafficSignalControllerAction) {
    this.trafficSignalControllerAction = trafficSignalControllerAction;
  }
  /**
   * Sets the value of model property trafficSignalStateAction
   *
   * @param trafficSignalStateAction from OpenSCENARIO class model specification: [Action used to
   *     set a specific phase of a signal controller.]
   */
  public void setTrafficSignalStateAction(ITrafficSignalStateAction trafficSignalStateAction) {
    this.trafficSignalStateAction = trafficSignalStateAction;
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

    ITrafficSignalControllerAction trafficSignalControllerAction = null;
    trafficSignalControllerAction = getTrafficSignalControllerAction();
    if (trafficSignalControllerAction != null) {
      result.add((BaseImpl) trafficSignalControllerAction);
    }
    ITrafficSignalStateAction trafficSignalStateAction = null;
    trafficSignalStateAction = getTrafficSignalStateAction();
    if (trafficSignalStateAction != null) {
      result.add((BaseImpl) trafficSignalStateAction);
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
  public TrafficSignalActionImpl clone() {
    TrafficSignalActionImpl clonedObject = new TrafficSignalActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    ITrafficSignalControllerAction trafficSignalControllerAction = null;
    trafficSignalControllerAction = getTrafficSignalControllerAction();
    if (trafficSignalControllerAction != null) {
      TrafficSignalControllerActionImpl clonedChild =
          ((TrafficSignalControllerActionImpl) trafficSignalControllerAction).clone();
      clonedObject.setTrafficSignalControllerAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITrafficSignalStateAction trafficSignalStateAction = null;
    trafficSignalStateAction = getTrafficSignalStateAction();
    if (trafficSignalStateAction != null) {
      TrafficSignalStateActionImpl clonedChild =
          ((TrafficSignalStateActionImpl) trafficSignalStateAction).clone();
      clonedObject.setTrafficSignalStateAction(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_ACTION)) {
      return (IOpenScenarioFlexElement) getTrafficSignalControllerAction();
    }
    if (key.equals(OscConstants.ELEMENT__TRAFFIC_SIGNAL_STATE_ACTION)) {
      return (IOpenScenarioFlexElement) getTrafficSignalStateAction();
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
    return "TrafficSignalAction";
  }

  // children
  @Override
  public ITrafficSignalControllerActionWriter getTrafficSignalControllerActionWriter() {
    return null;
  }

  @Override
  public ITrafficSignalStateActionWriter getTrafficSignalStateActionWriter() {
    return null;
  }

  @Override
  public void writeToTrafficSignalControllerActionWriter(
      ITrafficSignalControllerActionWriter trafficSignalControllerActionWriter) {
    // empty
  }

  @Override
  public void writeToTrafficSignalStateActionWriter(
      ITrafficSignalStateActionWriter trafficSignalStateActionWriter) {
    // empty
  }
}
