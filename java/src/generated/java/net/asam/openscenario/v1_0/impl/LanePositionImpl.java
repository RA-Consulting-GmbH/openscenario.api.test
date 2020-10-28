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
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.ILanePosition;
import net.asam.openscenario.v1_0.api.IOrientation;
import net.asam.openscenario.v1_0.api.writer.ILanePositionWriter;
import net.asam.openscenario.v1_0.api.writer.IOrientationWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ILanePosition. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ILanePosition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class LanePositionImpl extends BaseImpl implements ILanePositionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__ROAD_ID, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__LANE_ID, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__OFFSET, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__S, SimpleType.DOUBLE);
  }

  private String roadId;
  private String laneId;
  private Double offset;
  private Double s;
  private IOrientationWriter orientation;

  /** Default constructor */
  public LanePositionImpl() {
    super();
    addAdapter(LanePositionImpl.class, this);
    addAdapter(ILanePosition.class, this);
    addAdapter(ILanePositionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public String getRoadId() {
    return this.roadId;
  }

  @Override
  public String getLaneId() {
    return this.laneId;
  }

  @Override
  public Double getOffset() {
    return this.offset;
  }

  @Override
  public Double getS() {
    return this.s;
  }

  @Override
  public IOrientation getOrientation() {
    return this.orientation;
  }

  @Override
  public void setRoadId(String roadId) {
    this.roadId = roadId;
  }

  @Override
  public void setLaneId(String laneId) {
    this.laneId = laneId;
  }

  @Override
  public void setOffset(Double offset) {
    this.offset = offset;
  }

  @Override
  public void setS(Double s) {
    this.s = s;
  }

  @Override
  public void setOrientation(IOrientationWriter orientation) {
    this.orientation = orientation;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__ROAD_ID)) {
      // Simple type
      this.roadId =
          ParserHelper.parseString(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__LANE_ID)) {
      // Simple type
      this.laneId =
          ParserHelper.parseString(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__OFFSET)) {
      // Simple type
      this.offset =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__S)) {
      // Simple type
      this.s = ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);
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

    IOrientationWriter orientation = null;
    orientation = getWriterOrientation();
    if (orientation != null) {
      result.add((BaseImpl) orientation);
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
  public LanePositionImpl clone() {
    LanePositionImpl clonedObject = new LanePositionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setRoadId(getRoadId());
    // Simple type
    clonedObject.setLaneId(getLaneId());
    // Simple type
    clonedObject.setOffset(getOffset());
    // Simple type
    clonedObject.setS(getS());
    // clone children
    IOrientationWriter orientation = null;
    orientation = getWriterOrientation();
    if (orientation != null) {
      IOrientationWriter clonedChild = ((OrientationImpl) orientation).clone();
      clonedObject.setOrientation(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    return clonedObject;
  }

  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException {
    // proxies and string attributes
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__ROAD_ID)) {
      return getRoadId();
    } else if (key.equals(OscConstants.ATTRIBUTE__LANE_ID)) {
      return getLaneId();
    }
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__OFFSET)) {
      return getOffset();
    } else if (key.equals(OscConstants.ATTRIBUTE__S)) {
      return getS();
    }
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
    if (key.equals(OscConstants.ELEMENT__ORIENTATION)) {
      return (IOpenScenarioFlexElement) getOrientation();
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
    return "LanePosition";
  }

  @Override
  public void writeParameterToRoadId(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__ROAD_ID, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToLaneId(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__LANE_ID, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToOffset(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__OFFSET, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToS(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__S, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromRoadId() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__ROAD_ID);
  }

  @Override
  public String getParameterFromLaneId() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__LANE_ID);
  }

  @Override
  public String getParameterFromOffset() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__OFFSET);
  }

  @Override
  public String getParameterFromS() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__S);
  }

  @Override
  public boolean isRoadIdParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__ROAD_ID);
  }

  @Override
  public boolean isLaneIdParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__LANE_ID);
  }

  @Override
  public boolean isOffsetParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__OFFSET);
  }

  @Override
  public boolean isSParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__S);
  }

  // children
  @Override
  public IOrientationWriter getWriterOrientation() {
    return this.orientation;
  }
}
