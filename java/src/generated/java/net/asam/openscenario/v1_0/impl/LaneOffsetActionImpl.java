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
import net.asam.openscenario.v1_0.api.ILaneOffsetAction;
import net.asam.openscenario.v1_0.api.ILaneOffsetActionDynamics;
import net.asam.openscenario.v1_0.api.ILaneOffsetTarget;
import net.asam.openscenario.v1_0.api.writer.ILaneOffsetActionDynamicsWriter;
import net.asam.openscenario.v1_0.api.writer.ILaneOffsetActionWriter;
import net.asam.openscenario.v1_0.api.writer.ILaneOffsetTargetWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ILaneOffsetAction. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ILaneOffsetAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class LaneOffsetActionImpl extends BaseImpl implements ILaneOffsetActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__CONTINUOUS, SimpleType.BOOLEAN);
  }

  private Boolean continuous;
  private ILaneOffsetActionDynamicsWriter laneOffsetActionDynamics;
  private ILaneOffsetTargetWriter laneOffsetTarget;

  /** Default constructor */
  public LaneOffsetActionImpl() {
    super();
    addAdapter(LaneOffsetActionImpl.class, this);
    addAdapter(ILaneOffsetAction.class, this);
    addAdapter(ILaneOffsetActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public Boolean getContinuous() {
    return this.continuous;
  }

  @Override
  public ILaneOffsetActionDynamics getLaneOffsetActionDynamics() {
    return this.laneOffsetActionDynamics;
  }

  @Override
  public ILaneOffsetTarget getLaneOffsetTarget() {
    return this.laneOffsetTarget;
  }

  @Override
  public void setContinuous(Boolean continuous) {
    this.continuous = continuous;
  }

  @Override
  public void setLaneOffsetActionDynamics(
      ILaneOffsetActionDynamicsWriter laneOffsetActionDynamics) {
    this.laneOffsetActionDynamics = laneOffsetActionDynamics;
  }

  @Override
  public void setLaneOffsetTarget(ILaneOffsetTargetWriter laneOffsetTarget) {
    this.laneOffsetTarget = laneOffsetTarget;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__CONTINUOUS)) {
      // Simple type
      this.continuous =
          ParserHelper.parseBoolean(logger, parameterLiteralValue, getTextmarker(attributeKey));
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

    ILaneOffsetActionDynamicsWriter laneOffsetActionDynamics = null;
    laneOffsetActionDynamics = getWriterLaneOffsetActionDynamics();
    if (laneOffsetActionDynamics != null) {
      result.add((BaseImpl) laneOffsetActionDynamics);
    }
    ILaneOffsetTargetWriter laneOffsetTarget = null;
    laneOffsetTarget = getWriterLaneOffsetTarget();
    if (laneOffsetTarget != null) {
      result.add((BaseImpl) laneOffsetTarget);
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
  public LaneOffsetActionImpl clone() {
    LaneOffsetActionImpl clonedObject = new LaneOffsetActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setContinuous(getContinuous());
    // clone children
    ILaneOffsetActionDynamicsWriter laneOffsetActionDynamics = null;
    laneOffsetActionDynamics = getWriterLaneOffsetActionDynamics();
    if (laneOffsetActionDynamics != null) {
      ILaneOffsetActionDynamicsWriter clonedChild =
          ((LaneOffsetActionDynamicsImpl) laneOffsetActionDynamics).clone();
      clonedObject.setLaneOffsetActionDynamics(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ILaneOffsetTargetWriter laneOffsetTarget = null;
    laneOffsetTarget = getWriterLaneOffsetTarget();
    if (laneOffsetTarget != null) {
      ILaneOffsetTargetWriter clonedChild = ((LaneOffsetTargetImpl) laneOffsetTarget).clone();
      clonedObject.setLaneOffsetTarget(clonedChild);
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__CONTINUOUS)) {
      return getContinuous();
    }
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
    if (key.equals(OscConstants.ELEMENT__LANE_OFFSET_ACTION_DYNAMICS)) {
      return (IOpenScenarioFlexElement) getLaneOffsetActionDynamics();
    }
    if (key.equals(OscConstants.ELEMENT__LANE_OFFSET_TARGET)) {
      return (IOpenScenarioFlexElement) getLaneOffsetTarget();
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
    return "LaneOffsetAction";
  }

  @Override
  public void writeParameterToContinuous(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__CONTINUOUS, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromContinuous() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__CONTINUOUS);
  }

  @Override
  public boolean isContinuousParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__CONTINUOUS);
  }

  // children
  @Override
  public ILaneOffsetActionDynamicsWriter getWriterLaneOffsetActionDynamics() {
    return this.laneOffsetActionDynamics;
  }

  @Override
  public ILaneOffsetTargetWriter getWriterLaneOffsetTarget() {
    return this.laneOffsetTarget;
  }
}
