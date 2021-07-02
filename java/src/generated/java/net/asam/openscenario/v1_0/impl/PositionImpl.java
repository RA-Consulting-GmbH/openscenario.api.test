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
import net.asam.openscenario.v1_0.api.ILanePosition;
import net.asam.openscenario.v1_0.api.IPosition;
import net.asam.openscenario.v1_0.api.IRelativeLanePosition;
import net.asam.openscenario.v1_0.api.IRelativeObjectPosition;
import net.asam.openscenario.v1_0.api.IRelativeRoadPosition;
import net.asam.openscenario.v1_0.api.IRelativeWorldPosition;
import net.asam.openscenario.v1_0.api.IRoadPosition;
import net.asam.openscenario.v1_0.api.IRoutePosition;
import net.asam.openscenario.v1_0.api.IWorldPosition;
import net.asam.openscenario.v1_0.api.writer.ILanePositionWriter;
import net.asam.openscenario.v1_0.api.writer.IPositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeLanePositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeObjectPositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeRoadPositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeWorldPositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRoadPositionWriter;
import net.asam.openscenario.v1_0.api.writer.IRoutePositionWriter;
import net.asam.openscenario.v1_0.api.writer.IWorldPositionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IPosition. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IPosition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class PositionImpl extends BaseImpl implements IPositionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IWorldPositionWriter worldPosition;
  private IRelativeWorldPositionWriter relativeWorldPosition;
  private IRelativeObjectPositionWriter relativeObjectPosition;
  private IRoadPositionWriter roadPosition;
  private IRelativeRoadPositionWriter relativeRoadPosition;
  private ILanePositionWriter lanePosition;
  private IRelativeLanePositionWriter relativeLanePosition;
  private IRoutePositionWriter routePosition;

  /** Default constructor */
  public PositionImpl() {
    super();
    addAdapter(PositionImpl.class, this);
    addAdapter(IPosition.class, this);
    addAdapter(IPositionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IWorldPosition getWorldPosition() {
    return this.worldPosition;
  }

  @Override
  public IRelativeWorldPosition getRelativeWorldPosition() {
    return this.relativeWorldPosition;
  }

  @Override
  public IRelativeObjectPosition getRelativeObjectPosition() {
    return this.relativeObjectPosition;
  }

  @Override
  public IRoadPosition getRoadPosition() {
    return this.roadPosition;
  }

  @Override
  public IRelativeRoadPosition getRelativeRoadPosition() {
    return this.relativeRoadPosition;
  }

  @Override
  public ILanePosition getLanePosition() {
    return this.lanePosition;
  }

  @Override
  public IRelativeLanePosition getRelativeLanePosition() {
    return this.relativeLanePosition;
  }

  @Override
  public IRoutePosition getRoutePosition() {
    return this.routePosition;
  }

  @Override
  public void setWorldPosition(IWorldPositionWriter worldPosition) {
    this.worldPosition = worldPosition;
    this.relativeWorldPosition = null;
    this.relativeObjectPosition = null;
    this.roadPosition = null;
    this.relativeRoadPosition = null;
    this.lanePosition = null;
    this.relativeLanePosition = null;
    this.routePosition = null;
  }

  @Override
  public void setRelativeWorldPosition(IRelativeWorldPositionWriter relativeWorldPosition) {
    this.relativeWorldPosition = relativeWorldPosition;
    this.worldPosition = null;
    this.relativeObjectPosition = null;
    this.roadPosition = null;
    this.relativeRoadPosition = null;
    this.lanePosition = null;
    this.relativeLanePosition = null;
    this.routePosition = null;
  }

  @Override
  public void setRelativeObjectPosition(IRelativeObjectPositionWriter relativeObjectPosition) {
    this.relativeObjectPosition = relativeObjectPosition;
    this.worldPosition = null;
    this.relativeWorldPosition = null;
    this.roadPosition = null;
    this.relativeRoadPosition = null;
    this.lanePosition = null;
    this.relativeLanePosition = null;
    this.routePosition = null;
  }

  @Override
  public void setRoadPosition(IRoadPositionWriter roadPosition) {
    this.roadPosition = roadPosition;
    this.worldPosition = null;
    this.relativeWorldPosition = null;
    this.relativeObjectPosition = null;
    this.relativeRoadPosition = null;
    this.lanePosition = null;
    this.relativeLanePosition = null;
    this.routePosition = null;
  }

  @Override
  public void setRelativeRoadPosition(IRelativeRoadPositionWriter relativeRoadPosition) {
    this.relativeRoadPosition = relativeRoadPosition;
    this.worldPosition = null;
    this.relativeWorldPosition = null;
    this.relativeObjectPosition = null;
    this.roadPosition = null;
    this.lanePosition = null;
    this.relativeLanePosition = null;
    this.routePosition = null;
  }

  @Override
  public void setLanePosition(ILanePositionWriter lanePosition) {
    this.lanePosition = lanePosition;
    this.worldPosition = null;
    this.relativeWorldPosition = null;
    this.relativeObjectPosition = null;
    this.roadPosition = null;
    this.relativeRoadPosition = null;
    this.relativeLanePosition = null;
    this.routePosition = null;
  }

  @Override
  public void setRelativeLanePosition(IRelativeLanePositionWriter relativeLanePosition) {
    this.relativeLanePosition = relativeLanePosition;
    this.worldPosition = null;
    this.relativeWorldPosition = null;
    this.relativeObjectPosition = null;
    this.roadPosition = null;
    this.relativeRoadPosition = null;
    this.lanePosition = null;
    this.routePosition = null;
  }

  @Override
  public void setRoutePosition(IRoutePositionWriter routePosition) {
    this.routePosition = routePosition;
    this.worldPosition = null;
    this.relativeWorldPosition = null;
    this.relativeObjectPosition = null;
    this.roadPosition = null;
    this.relativeRoadPosition = null;
    this.lanePosition = null;
    this.relativeLanePosition = null;
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

    IWorldPositionWriter worldPosition = null;
    worldPosition = getWriterWorldPosition();
    if (worldPosition != null) {
      result.add((BaseImpl) worldPosition);
    }
    IRelativeWorldPositionWriter relativeWorldPosition = null;
    relativeWorldPosition = getWriterRelativeWorldPosition();
    if (relativeWorldPosition != null) {
      result.add((BaseImpl) relativeWorldPosition);
    }
    IRelativeObjectPositionWriter relativeObjectPosition = null;
    relativeObjectPosition = getWriterRelativeObjectPosition();
    if (relativeObjectPosition != null) {
      result.add((BaseImpl) relativeObjectPosition);
    }
    IRoadPositionWriter roadPosition = null;
    roadPosition = getWriterRoadPosition();
    if (roadPosition != null) {
      result.add((BaseImpl) roadPosition);
    }
    IRelativeRoadPositionWriter relativeRoadPosition = null;
    relativeRoadPosition = getWriterRelativeRoadPosition();
    if (relativeRoadPosition != null) {
      result.add((BaseImpl) relativeRoadPosition);
    }
    ILanePositionWriter lanePosition = null;
    lanePosition = getWriterLanePosition();
    if (lanePosition != null) {
      result.add((BaseImpl) lanePosition);
    }
    IRelativeLanePositionWriter relativeLanePosition = null;
    relativeLanePosition = getWriterRelativeLanePosition();
    if (relativeLanePosition != null) {
      result.add((BaseImpl) relativeLanePosition);
    }
    IRoutePositionWriter routePosition = null;
    routePosition = getWriterRoutePosition();
    if (routePosition != null) {
      result.add((BaseImpl) routePosition);
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
  public PositionImpl clone() {
    PositionImpl clonedObject = new PositionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IWorldPositionWriter worldPosition = null;
    worldPosition = getWriterWorldPosition();
    if (worldPosition != null) {
      IWorldPositionWriter clonedChild = ((WorldPositionImpl) worldPosition).clone();
      clonedObject.setWorldPosition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IRelativeWorldPositionWriter relativeWorldPosition = null;
    relativeWorldPosition = getWriterRelativeWorldPosition();
    if (relativeWorldPosition != null) {
      IRelativeWorldPositionWriter clonedChild =
          ((RelativeWorldPositionImpl) relativeWorldPosition).clone();
      clonedObject.setRelativeWorldPosition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IRelativeObjectPositionWriter relativeObjectPosition = null;
    relativeObjectPosition = getWriterRelativeObjectPosition();
    if (relativeObjectPosition != null) {
      IRelativeObjectPositionWriter clonedChild =
          ((RelativeObjectPositionImpl) relativeObjectPosition).clone();
      clonedObject.setRelativeObjectPosition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IRoadPositionWriter roadPosition = null;
    roadPosition = getWriterRoadPosition();
    if (roadPosition != null) {
      IRoadPositionWriter clonedChild = ((RoadPositionImpl) roadPosition).clone();
      clonedObject.setRoadPosition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IRelativeRoadPositionWriter relativeRoadPosition = null;
    relativeRoadPosition = getWriterRelativeRoadPosition();
    if (relativeRoadPosition != null) {
      IRelativeRoadPositionWriter clonedChild =
          ((RelativeRoadPositionImpl) relativeRoadPosition).clone();
      clonedObject.setRelativeRoadPosition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ILanePositionWriter lanePosition = null;
    lanePosition = getWriterLanePosition();
    if (lanePosition != null) {
      ILanePositionWriter clonedChild = ((LanePositionImpl) lanePosition).clone();
      clonedObject.setLanePosition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IRelativeLanePositionWriter relativeLanePosition = null;
    relativeLanePosition = getWriterRelativeLanePosition();
    if (relativeLanePosition != null) {
      IRelativeLanePositionWriter clonedChild =
          ((RelativeLanePositionImpl) relativeLanePosition).clone();
      clonedObject.setRelativeLanePosition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IRoutePositionWriter routePosition = null;
    routePosition = getWriterRoutePosition();
    if (routePosition != null) {
      IRoutePositionWriter clonedChild = ((RoutePositionImpl) routePosition).clone();
      clonedObject.setRoutePosition(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__WORLD_POSITION)) {
      return (IOpenScenarioFlexElement) getWorldPosition();
    }
    if (key.equals(OscConstants.ELEMENT__RELATIVE_WORLD_POSITION)) {
      return (IOpenScenarioFlexElement) getRelativeWorldPosition();
    }
    if (key.equals(OscConstants.ELEMENT__RELATIVE_OBJECT_POSITION)) {
      return (IOpenScenarioFlexElement) getRelativeObjectPosition();
    }
    if (key.equals(OscConstants.ELEMENT__ROAD_POSITION)) {
      return (IOpenScenarioFlexElement) getRoadPosition();
    }
    if (key.equals(OscConstants.ELEMENT__RELATIVE_ROAD_POSITION)) {
      return (IOpenScenarioFlexElement) getRelativeRoadPosition();
    }
    if (key.equals(OscConstants.ELEMENT__LANE_POSITION)) {
      return (IOpenScenarioFlexElement) getLanePosition();
    }
    if (key.equals(OscConstants.ELEMENT__RELATIVE_LANE_POSITION)) {
      return (IOpenScenarioFlexElement) getRelativeLanePosition();
    }
    if (key.equals(OscConstants.ELEMENT__ROUTE_POSITION)) {
      return (IOpenScenarioFlexElement) getRoutePosition();
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
    return "Position";
  }

  // children
  @Override
  public IWorldPositionWriter getWriterWorldPosition() {
    return this.worldPosition;
  }

  @Override
  public IRelativeWorldPositionWriter getWriterRelativeWorldPosition() {
    return this.relativeWorldPosition;
  }

  @Override
  public IRelativeObjectPositionWriter getWriterRelativeObjectPosition() {
    return this.relativeObjectPosition;
  }

  @Override
  public IRoadPositionWriter getWriterRoadPosition() {
    return this.roadPosition;
  }

  @Override
  public IRelativeRoadPositionWriter getWriterRelativeRoadPosition() {
    return this.relativeRoadPosition;
  }

  @Override
  public ILanePositionWriter getWriterLanePosition() {
    return this.lanePosition;
  }

  @Override
  public IRelativeLanePositionWriter getWriterRelativeLanePosition() {
    return this.relativeLanePosition;
  }

  @Override
  public IRoutePositionWriter getWriterRoutePosition() {
    return this.routePosition;
  }
}
