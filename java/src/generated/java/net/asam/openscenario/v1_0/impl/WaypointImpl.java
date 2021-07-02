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
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.v1_0.api.IPosition;
import net.asam.openscenario.v1_0.api.IWaypoint;
import net.asam.openscenario.v1_0.api.RouteStrategy;
import net.asam.openscenario.v1_0.api.writer.IPositionWriter;
import net.asam.openscenario.v1_0.api.writer.IWaypointWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IWaypoint. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IWaypoint)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class WaypointImpl extends BaseImpl implements IWaypointWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__ROUTE_STRATEGY, SimpleType.ENUM_TYPE);
  }

  private RouteStrategy routeStrategy;
  private IPositionWriter position;

  /** Default constructor */
  public WaypointImpl() {
    super();
    addAdapter(WaypointImpl.class, this);
    addAdapter(IWaypoint.class, this);
    addAdapter(IWaypointWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public RouteStrategy getRouteStrategy() {
    return this.routeStrategy;
  }

  @Override
  public IPosition getPosition() {
    return this.position;
  }

  @Override
  public void setRouteStrategy(RouteStrategy routeStrategy) {
    this.routeStrategy = routeStrategy;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__ROUTE_STRATEGY);
  }

  @Override
  public void setPosition(IPositionWriter position) {
    this.position = position;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__ROUTE_STRATEGY)) {
      // Enumeration Type
      RouteStrategy result = RouteStrategy.getFromLiteral(parameterLiteralValue);
      if (result != null) {
        this.routeStrategy = result;
        addResolvedParameter(attributeKey);
      } else {
        logger.logMessage(
            new FileContentMessage(
                "Value '" + parameterLiteralValue + "' is not allowed.",
                ErrorLevel.ERROR,
                getTextmarker(attributeKey)));
      }
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

    IPositionWriter position = null;
    position = getWriterPosition();
    if (position != null) {
      result.add((BaseImpl) position);
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
  public WaypointImpl clone() {
    WaypointImpl clonedObject = new WaypointImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Enumeration Type
    RouteStrategy routeStrategy = getRouteStrategy();
    if (routeStrategy != null) {
      clonedObject.routeStrategy = RouteStrategy.getFromLiteral(routeStrategy.getLiteral());
    }
    // clone children
    IPositionWriter position = null;
    position = getWriterPosition();
    if (position != null) {
      IPositionWriter clonedChild = ((PositionImpl) position).clone();
      clonedObject.setPosition(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__POSITION)) {
      return (IOpenScenarioFlexElement) getPosition();
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__ROUTE_STRATEGY)) {
      RouteStrategy routeStrategy = getRouteStrategy();
      return routeStrategy != null ? routeStrategy.getLiteral() : null;
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "Waypoint";
  }

  @Override
  public void writeParameterToRouteStrategy(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__ROUTE_STRATEGY, parameterName, null /*no textmarker*/);
    this.routeStrategy = null;
  }

  @Override
  public String getParameterFromRouteStrategy() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__ROUTE_STRATEGY);
  }

  @Override
  public boolean isRouteStrategyParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__ROUTE_STRATEGY);
  }

  // children
  @Override
  public IPositionWriter getWriterPosition() {
    return this.position;
  }
}
