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
import net.asam.openscenario.v1_0.api.IAbsoluteTargetLaneOffset;
import net.asam.openscenario.v1_0.api.ILaneOffsetTarget;
import net.asam.openscenario.v1_0.api.IRelativeTargetLaneOffset;
import net.asam.openscenario.v1_0.api.writer.IAbsoluteTargetLaneOffsetWriter;
import net.asam.openscenario.v1_0.api.writer.ILaneOffsetTargetWriter;
import net.asam.openscenario.v1_0.api.writer.IRelativeTargetLaneOffsetWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ILaneOffsetTarget. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ILaneOffsetTarget)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class LaneOffsetTargetImpl extends BaseImpl
    implements ILaneOffsetTarget, ILaneOffsetTargetWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IRelativeTargetLaneOffset relativeTargetLaneOffset;
  private IAbsoluteTargetLaneOffset absoluteTargetLaneOffset;

  private IRelativeTargetLaneOffsetWriter relativeTargetLaneOffsetWriter;
  private IAbsoluteTargetLaneOffsetWriter absoluteTargetLaneOffsetWriter;

  /** Default constructor */
  public LaneOffsetTargetImpl() {
    super();
    addAdapter(LaneOffsetTargetImpl.class, this);
    addAdapter(ILaneOffsetTarget.class, this);
    addAdapter(ILaneOffsetTargetWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IRelativeTargetLaneOffset getRelativeTargetLaneOffset() {
    return this.relativeTargetLaneOffset;
  }

  @Override
  public IAbsoluteTargetLaneOffset getAbsoluteTargetLaneOffset() {
    return this.absoluteTargetLaneOffset;
  }
  /**
   * Sets the value of model property relativeTargetLaneOffset
   *
   * @param relativeTargetLaneOffset from OpenSCENARIO class model specification: [Relative
   *     reference to the lane position of a specific entity.]
   */
  public void setRelativeTargetLaneOffset(IRelativeTargetLaneOffset relativeTargetLaneOffset) {
    this.relativeTargetLaneOffset = relativeTargetLaneOffset;
  }
  /**
   * Sets the value of model property absoluteTargetLaneOffset
   *
   * @param absoluteTargetLaneOffset from OpenSCENARIO class model specification: [Absolute
   *     reference to the current lane's center line.]
   */
  public void setAbsoluteTargetLaneOffset(IAbsoluteTargetLaneOffset absoluteTargetLaneOffset) {
    this.absoluteTargetLaneOffset = absoluteTargetLaneOffset;
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

    IRelativeTargetLaneOffset relativeTargetLaneOffset = null;
    relativeTargetLaneOffset = getRelativeTargetLaneOffset();
    if (relativeTargetLaneOffset != null) {
      result.add((BaseImpl) relativeTargetLaneOffset);
    }
    IAbsoluteTargetLaneOffset absoluteTargetLaneOffset = null;
    absoluteTargetLaneOffset = getAbsoluteTargetLaneOffset();
    if (absoluteTargetLaneOffset != null) {
      result.add((BaseImpl) absoluteTargetLaneOffset);
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
  public LaneOffsetTargetImpl clone() {
    LaneOffsetTargetImpl clonedObject = new LaneOffsetTargetImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IRelativeTargetLaneOffset relativeTargetLaneOffset = null;
    relativeTargetLaneOffset = getRelativeTargetLaneOffset();
    if (relativeTargetLaneOffset != null) {
      RelativeTargetLaneOffsetImpl clonedChild =
          ((RelativeTargetLaneOffsetImpl) relativeTargetLaneOffset).clone();
      clonedObject.setRelativeTargetLaneOffset(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IAbsoluteTargetLaneOffset absoluteTargetLaneOffset = null;
    absoluteTargetLaneOffset = getAbsoluteTargetLaneOffset();
    if (absoluteTargetLaneOffset != null) {
      AbsoluteTargetLaneOffsetImpl clonedChild =
          ((AbsoluteTargetLaneOffsetImpl) absoluteTargetLaneOffset).clone();
      clonedObject.setAbsoluteTargetLaneOffset(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__RELATIVE_TARGET_LANE_OFFSET)) {
      return (IOpenScenarioFlexElement) getRelativeTargetLaneOffset();
    }
    if (key.equals(OscConstants.ELEMENT__ABSOLUTE_TARGET_LANE_OFFSET)) {
      return (IOpenScenarioFlexElement) getAbsoluteTargetLaneOffset();
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
    return "LaneOffsetTarget";
  }

  // children
  @Override
  public IRelativeTargetLaneOffsetWriter getRelativeTargetLaneOffsetWriter() {
    return this.relativeTargetLaneOffsetWriter;
  }

  @Override
  public IAbsoluteTargetLaneOffsetWriter getAbsoluteTargetLaneOffsetWriter() {
    return this.absoluteTargetLaneOffsetWriter;
  }

  @Override
  public void writeToRelativeTargetLaneOffsetWriter(
      IRelativeTargetLaneOffsetWriter relativeTargetLaneOffsetWriter) {
    this.relativeTargetLaneOffsetWriter = relativeTargetLaneOffsetWriter;
  }

  @Override
  public void writeToAbsoluteTargetLaneOffsetWriter(
      IAbsoluteTargetLaneOffsetWriter absoluteTargetLaneOffsetWriter) {
    this.absoluteTargetLaneOffsetWriter = absoluteTargetLaneOffsetWriter;
  }
}
