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
import net.asam.openscenario.v1_0.api.ITrafficAction;
import net.asam.openscenario.v1_0.api.ITrafficSinkAction;
import net.asam.openscenario.v1_0.api.ITrafficSourceAction;
import net.asam.openscenario.v1_0.api.ITrafficSwarmAction;
import net.asam.openscenario.v1_0.api.writer.ITrafficActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSinkActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSourceActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSwarmActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ITrafficAction. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ITrafficAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class TrafficActionImpl extends BaseImpl implements ITrafficAction, ITrafficActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private ITrafficSourceAction trafficSourceAction;
  private ITrafficSinkAction trafficSinkAction;
  private ITrafficSwarmAction trafficSwarmAction;
  /** Default constructor */
  public TrafficActionImpl() {
    super();
    addAdapter(TrafficActionImpl.class, this);
    addAdapter(ITrafficAction.class, this);
    addAdapter(ITrafficActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public ITrafficSourceAction getTrafficSourceAction() {
    return this.trafficSourceAction;
  }

  @Override
  public ITrafficSinkAction getTrafficSinkAction() {
    return this.trafficSinkAction;
  }

  @Override
  public ITrafficSwarmAction getTrafficSwarmAction() {
    return this.trafficSwarmAction;
  }
  /**
   * Sets the value of model property trafficSourceAction
   *
   * @param trafficSourceAction from OpenSCENARIO class model specification: [Defines a source of
   *     traffic at a specific position.]
   */
  public void setTrafficSourceAction(ITrafficSourceAction trafficSourceAction) {
    this.trafficSourceAction = trafficSourceAction;
  }
  /**
   * Sets the value of model property trafficSinkAction
   *
   * @param trafficSinkAction from OpenSCENARIO class model specification: [Defines a sink of
   *     traffic at a specific position.]
   */
  public void setTrafficSinkAction(ITrafficSinkAction trafficSinkAction) {
    this.trafficSinkAction = trafficSinkAction;
  }
  /**
   * Sets the value of model property trafficSwarmAction
   *
   * @param trafficSwarmAction from OpenSCENARIO class model specification: [Defines swarm traffic
   *     around a given central entity.]
   */
  public void setTrafficSwarmAction(ITrafficSwarmAction trafficSwarmAction) {
    this.trafficSwarmAction = trafficSwarmAction;
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

    ITrafficSourceAction trafficSourceAction = null;
    trafficSourceAction = getTrafficSourceAction();
    if (trafficSourceAction != null) {
      result.add((BaseImpl) trafficSourceAction);
    }
    ITrafficSinkAction trafficSinkAction = null;
    trafficSinkAction = getTrafficSinkAction();
    if (trafficSinkAction != null) {
      result.add((BaseImpl) trafficSinkAction);
    }
    ITrafficSwarmAction trafficSwarmAction = null;
    trafficSwarmAction = getTrafficSwarmAction();
    if (trafficSwarmAction != null) {
      result.add((BaseImpl) trafficSwarmAction);
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
  public TrafficActionImpl clone() {
    TrafficActionImpl clonedObject = new TrafficActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    ITrafficSourceAction trafficSourceAction = null;
    trafficSourceAction = getTrafficSourceAction();
    if (trafficSourceAction != null) {
      TrafficSourceActionImpl clonedChild = ((TrafficSourceActionImpl) trafficSourceAction).clone();
      clonedObject.setTrafficSourceAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITrafficSinkAction trafficSinkAction = null;
    trafficSinkAction = getTrafficSinkAction();
    if (trafficSinkAction != null) {
      TrafficSinkActionImpl clonedChild = ((TrafficSinkActionImpl) trafficSinkAction).clone();
      clonedObject.setTrafficSinkAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITrafficSwarmAction trafficSwarmAction = null;
    trafficSwarmAction = getTrafficSwarmAction();
    if (trafficSwarmAction != null) {
      TrafficSwarmActionImpl clonedChild = ((TrafficSwarmActionImpl) trafficSwarmAction).clone();
      clonedObject.setTrafficSwarmAction(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__TRAFFIC_SOURCE_ACTION)) {
      return (IOpenScenarioFlexElement) getTrafficSourceAction();
    }
    if (key.equals(OscConstants.ELEMENT__TRAFFIC_SINK_ACTION)) {
      return (IOpenScenarioFlexElement) getTrafficSinkAction();
    }
    if (key.equals(OscConstants.ELEMENT__TRAFFIC_SWARM_ACTION)) {
      return (IOpenScenarioFlexElement) getTrafficSwarmAction();
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
    return "TrafficAction";
  }

  // children
  @Override
  public ITrafficSourceActionWriter getTrafficSourceActionWriter() {
    return null;
  }

  @Override
  public ITrafficSinkActionWriter getTrafficSinkActionWriter() {
    return null;
  }

  @Override
  public ITrafficSwarmActionWriter getTrafficSwarmActionWriter() {
    return null;
  }

  @Override
  public void writeToTrafficSourceActionWriter(
      ITrafficSourceActionWriter trafficSourceActionWriter) {
    // empty
  }

  @Override
  public void writeToTrafficSinkActionWriter(ITrafficSinkActionWriter trafficSinkActionWriter) {
    // empty
  }

  @Override
  public void writeToTrafficSwarmActionWriter(ITrafficSwarmActionWriter trafficSwarmActionWriter) {
    // empty
  }
}
