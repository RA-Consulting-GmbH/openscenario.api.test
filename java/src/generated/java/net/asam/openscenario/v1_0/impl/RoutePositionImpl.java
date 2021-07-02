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
import net.asam.openscenario.v1_0.api.IInRoutePosition;
import net.asam.openscenario.v1_0.api.IOrientation;
import net.asam.openscenario.v1_0.api.IRoutePosition;
import net.asam.openscenario.v1_0.api.IRouteRef;
import net.asam.openscenario.v1_0.api.writer.IInRoutePositionWriter;
import net.asam.openscenario.v1_0.api.writer.IOrientationWriter;
import net.asam.openscenario.v1_0.api.writer.IRoutePositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRouteRefWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IRoutePosition. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IRoutePosition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class RoutePositionImpl extends BaseImpl implements IRoutePositionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IRouteRefWriter routeRef;
  private IOrientationWriter orientation;
  private IInRoutePositionWriter inRoutePosition;

  /** Default constructor */
  public RoutePositionImpl() {
    super();
    addAdapter(RoutePositionImpl.class, this);
    addAdapter(IRoutePosition.class, this);
    addAdapter(IRoutePositionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IRouteRef getRouteRef() {
    return this.routeRef;
  }

  @Override
  public IOrientation getOrientation() {
    return this.orientation;
  }

  @Override
  public IInRoutePosition getInRoutePosition() {
    return this.inRoutePosition;
  }

  @Override
  public void setRouteRef(IRouteRefWriter routeRef) {
    this.routeRef = routeRef;
  }

  @Override
  public void setOrientation(IOrientationWriter orientation) {
    this.orientation = orientation;
  }

  @Override
  public void setInRoutePosition(IInRoutePositionWriter inRoutePosition) {
    this.inRoutePosition = inRoutePosition;
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

    IRouteRefWriter routeRef = null;
    routeRef = getWriterRouteRef();
    if (routeRef != null) {
      result.add((BaseImpl) routeRef);
    }
    IOrientationWriter orientation = null;
    orientation = getWriterOrientation();
    if (orientation != null) {
      result.add((BaseImpl) orientation);
    }
    IInRoutePositionWriter inRoutePosition = null;
    inRoutePosition = getWriterInRoutePosition();
    if (inRoutePosition != null) {
      result.add((BaseImpl) inRoutePosition);
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
  public RoutePositionImpl clone() {
    RoutePositionImpl clonedObject = new RoutePositionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IRouteRefWriter routeRef = null;
    routeRef = getWriterRouteRef();
    if (routeRef != null) {
      IRouteRefWriter clonedChild = ((RouteRefImpl) routeRef).clone();
      clonedObject.setRouteRef(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IOrientationWriter orientation = null;
    orientation = getWriterOrientation();
    if (orientation != null) {
      IOrientationWriter clonedChild = ((OrientationImpl) orientation).clone();
      clonedObject.setOrientation(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IInRoutePositionWriter inRoutePosition = null;
    inRoutePosition = getWriterInRoutePosition();
    if (inRoutePosition != null) {
      IInRoutePositionWriter clonedChild = ((InRoutePositionImpl) inRoutePosition).clone();
      clonedObject.setInRoutePosition(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__ROUTE_REF)) {
      return (IOpenScenarioFlexElement) getRouteRef();
    }
    if (key.equals(OscConstants.ELEMENT__ORIENTATION)) {
      return (IOpenScenarioFlexElement) getOrientation();
    }
    if (key.equals(OscConstants.ELEMENT__IN_ROUTE_POSITION)) {
      return (IOpenScenarioFlexElement) getInRoutePosition();
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
    return "RoutePosition";
  }

  // children
  @Override
  public IRouteRefWriter getWriterRouteRef() {
    return this.routeRef;
  }

  @Override
  public IOrientationWriter getWriterOrientation() {
    return this.orientation;
  }

  @Override
  public IInRoutePositionWriter getWriterInRoutePosition() {
    return this.inRoutePosition;
  }
}
