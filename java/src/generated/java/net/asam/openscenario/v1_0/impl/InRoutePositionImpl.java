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
import net.asam.openscenario.v1_0.api.IInRoutePosition;
import net.asam.openscenario.v1_0.api.IPositionInLaneCoordinates;
import net.asam.openscenario.v1_0.api.IPositionInRoadCoordinates;
import net.asam.openscenario.v1_0.api.IPositionOfCurrentEntity;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IInRoutePosition. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IInRoutePosition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class InRoutePositionImpl extends BaseImpl implements IInRoutePosition {
  protected static Hashtable<String, Class<?>> propertyToType = new Hashtable<>();

  private IPositionOfCurrentEntity fromCurrentEntity;
  private IPositionInRoadCoordinates fromRoadCoordinates;
  private IPositionInLaneCoordinates fromLaneCoordinates;
  /** Default constructor */
  public InRoutePositionImpl() {
    super();
    addAdapter(InRoutePositionImpl.class, this);
    addAdapter(IInRoutePosition.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IPositionOfCurrentEntity getFromCurrentEntity() {
    return this.fromCurrentEntity;
  }

  @Override
  public IPositionInRoadCoordinates getFromRoadCoordinates() {
    return this.fromRoadCoordinates;
  }

  @Override
  public IPositionInLaneCoordinates getFromLaneCoordinates() {
    return this.fromLaneCoordinates;
  }
  /**
   * Sets the value of model property fromCurrentEntity
   *
   * @param fromCurrentEntity from OpenSCENARIO class model specification: [The position is defined
   *     through the current position of a given entity.]
   */
  public void setFromCurrentEntity(IPositionOfCurrentEntity fromCurrentEntity) {
    this.fromCurrentEntity = fromCurrentEntity;
  }
  /**
   * Sets the value of model property fromRoadCoordinates
   *
   * @param fromRoadCoordinates from OpenSCENARIO class model specification: [Route position in road
   *     coordinate system.]
   */
  public void setFromRoadCoordinates(IPositionInRoadCoordinates fromRoadCoordinates) {
    this.fromRoadCoordinates = fromRoadCoordinates;
  }
  /**
   * Sets the value of model property fromLaneCoordinates
   *
   * @param fromLaneCoordinates from OpenSCENARIO class model specification: [Route position in lane
   *     coordinate system.]
   */
  public void setFromLaneCoordinates(IPositionInLaneCoordinates fromLaneCoordinates) {
    this.fromLaneCoordinates = fromLaneCoordinates;
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

    IPositionOfCurrentEntity fromCurrentEntity = null;
    fromCurrentEntity = getFromCurrentEntity();
    if (fromCurrentEntity != null) {
      result.add((BaseImpl) fromCurrentEntity);
    }
    IPositionInRoadCoordinates fromRoadCoordinates = null;
    fromRoadCoordinates = getFromRoadCoordinates();
    if (fromRoadCoordinates != null) {
      result.add((BaseImpl) fromRoadCoordinates);
    }
    IPositionInLaneCoordinates fromLaneCoordinates = null;
    fromLaneCoordinates = getFromLaneCoordinates();
    if (fromLaneCoordinates != null) {
      result.add((BaseImpl) fromLaneCoordinates);
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
  public InRoutePositionImpl clone() {
    InRoutePositionImpl clonedObject = new InRoutePositionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IPositionOfCurrentEntity fromCurrentEntity = null;
    fromCurrentEntity = getFromCurrentEntity();
    if (fromCurrentEntity != null) {
      PositionOfCurrentEntityImpl clonedChild =
          ((PositionOfCurrentEntityImpl) fromCurrentEntity).clone();
      clonedObject.setFromCurrentEntity(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IPositionInRoadCoordinates fromRoadCoordinates = null;
    fromRoadCoordinates = getFromRoadCoordinates();
    if (fromRoadCoordinates != null) {
      PositionInRoadCoordinatesImpl clonedChild =
          ((PositionInRoadCoordinatesImpl) fromRoadCoordinates).clone();
      clonedObject.setFromRoadCoordinates(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IPositionInLaneCoordinates fromLaneCoordinates = null;
    fromLaneCoordinates = getFromLaneCoordinates();
    if (fromLaneCoordinates != null) {
      PositionInLaneCoordinatesImpl clonedChild =
          ((PositionInLaneCoordinatesImpl) fromLaneCoordinates).clone();
      clonedObject.setFromLaneCoordinates(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__FROM_CURRENT_ENTITY)) {
      return (IOpenScenarioFlexElement) getFromCurrentEntity();
    }
    if (key.equals(OscConstants.ELEMENT__FROM_ROAD_COORDINATES)) {
      return (IOpenScenarioFlexElement) getFromRoadCoordinates();
    }
    if (key.equals(OscConstants.ELEMENT__FROM_LANE_COORDINATES)) {
      return (IOpenScenarioFlexElement) getFromLaneCoordinates();
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
    return "InRoutePosition";
  }
}
