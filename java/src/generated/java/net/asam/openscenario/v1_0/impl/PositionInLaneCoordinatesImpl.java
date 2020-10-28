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
import net.asam.openscenario.v1_0.api.IPositionInLaneCoordinates;
import net.asam.openscenario.v1_0.api.writer.IPositionInLaneCoordinatesWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IPositionInLaneCoordinates. With setter methods to fill the
 * properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IPositionInLaneCoordinates)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class PositionInLaneCoordinatesImpl extends BaseImpl
    implements IPositionInLaneCoordinatesWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__PATH_S, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__LANE_ID, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__LANE_OFFSET, SimpleType.DOUBLE);
  }

  private Double pathS;
  private String laneId;
  private Double laneOffset;

  /** Default constructor */
  public PositionInLaneCoordinatesImpl() {
    super();
    addAdapter(PositionInLaneCoordinatesImpl.class, this);
    addAdapter(IPositionInLaneCoordinates.class, this);
    addAdapter(IPositionInLaneCoordinatesWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public Double getPathS() {
    return this.pathS;
  }

  @Override
  public String getLaneId() {
    return this.laneId;
  }

  @Override
  public Double getLaneOffset() {
    return this.laneOffset;
  }

  @Override
  public void setPathS(Double pathS) {
    this.pathS = pathS;
  }

  @Override
  public void setLaneId(String laneId) {
    this.laneId = laneId;
  }

  @Override
  public void setLaneOffset(Double laneOffset) {
    this.laneOffset = laneOffset;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__PATH_S)) {
      // Simple type
      this.pathS =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__LANE_ID)) {
      // Simple type
      this.laneId =
          ParserHelper.parseString(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__LANE_OFFSET)) {
      // Simple type
      this.laneOffset =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
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

    return result;
  }

  /**
   * Making a (deep) clone this object. This is useful and used for importing elements from
   * catalogs.
   *
   * @return a deep copy of the object.
   */
  @Override
  public PositionInLaneCoordinatesImpl clone() {
    PositionInLaneCoordinatesImpl clonedObject = new PositionInLaneCoordinatesImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setPathS(getPathS());
    // Simple type
    clonedObject.setLaneId(getLaneId());
    // Simple type
    clonedObject.setLaneOffset(getLaneOffset());
    // clone children
    return clonedObject;
  }

  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException {
    // proxies and string attributes
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__LANE_ID)) {
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
    if (key.equals(OscConstants.ATTRIBUTE__PATH_S)) {
      return getPathS();
    } else if (key.equals(OscConstants.ATTRIBUTE__LANE_OFFSET)) {
      return getLaneOffset();
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
    return "PositionInLaneCoordinates";
  }

  @Override
  public void writeParameterToPathS(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__PATH_S, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToLaneId(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__LANE_ID, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToLaneOffset(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__LANE_OFFSET, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromPathS() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__PATH_S);
  }

  @Override
  public String getParameterFromLaneId() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__LANE_ID);
  }

  @Override
  public String getParameterFromLaneOffset() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__LANE_OFFSET);
  }

  @Override
  public boolean isPathSParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__PATH_S);
  }

  @Override
  public boolean isLaneIdParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__LANE_ID);
  }

  @Override
  public boolean isLaneOffsetParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__LANE_OFFSET);
  }

  // children

}
