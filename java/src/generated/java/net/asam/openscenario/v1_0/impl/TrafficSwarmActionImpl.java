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
import net.asam.openscenario.v1_0.api.ICentralSwarmObject;
import net.asam.openscenario.v1_0.api.ITrafficDefinition;
import net.asam.openscenario.v1_0.api.ITrafficSwarmAction;
import net.asam.openscenario.v1_0.api.writer.ICentralSwarmObjectWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficDefinitionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSwarmActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ITrafficSwarmAction. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ITrafficSwarmAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class TrafficSwarmActionImpl extends BaseImpl implements ITrafficSwarmActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__INNER_RADIUS, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__OFFSET, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__NUMBER_OF_VEHICLES, SimpleType.UNSIGNED_INT);
    propertyToType.put(OscConstants.ATTRIBUTE__VELOCITY, SimpleType.DOUBLE);
  }

  private Double semiMajorAxis;
  private Double semiMinorAxis;
  private Double innerRadius;
  private Double offset;
  private Long numberOfVehicles;
  private Double velocity;
  private ICentralSwarmObjectWriter centralObject;
  private ITrafficDefinitionWriter trafficDefinition;

  /** Default constructor */
  public TrafficSwarmActionImpl() {
    super();
    addAdapter(TrafficSwarmActionImpl.class, this);
    addAdapter(ITrafficSwarmAction.class, this);
    addAdapter(ITrafficSwarmActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public Double getSemiMajorAxis() {
    return this.semiMajorAxis;
  }

  @Override
  public Double getSemiMinorAxis() {
    return this.semiMinorAxis;
  }

  @Override
  public Double getInnerRadius() {
    return this.innerRadius;
  }

  @Override
  public Double getOffset() {
    return this.offset;
  }

  @Override
  public Long getNumberOfVehicles() {
    return this.numberOfVehicles;
  }

  @Override
  public Double getVelocity() {
    return this.velocity;
  }

  @Override
  public ICentralSwarmObject getCentralObject() {
    return this.centralObject;
  }

  @Override
  public ITrafficDefinition getTrafficDefinition() {
    return this.trafficDefinition;
  }

  @Override
  public void setSemiMajorAxis(Double semiMajorAxis) {
    this.semiMajorAxis = semiMajorAxis;
  }

  @Override
  public void setSemiMinorAxis(Double semiMinorAxis) {
    this.semiMinorAxis = semiMinorAxis;
  }

  @Override
  public void setInnerRadius(Double innerRadius) {
    this.innerRadius = innerRadius;
  }

  @Override
  public void setOffset(Double offset) {
    this.offset = offset;
  }

  @Override
  public void setNumberOfVehicles(Long numberOfVehicles) {
    this.numberOfVehicles = numberOfVehicles;
  }

  @Override
  public void setVelocity(Double velocity) {
    this.velocity = velocity;
  }

  @Override
  public void setCentralObject(ICentralSwarmObjectWriter centralObject) {
    this.centralObject = centralObject;
  }

  @Override
  public void setTrafficDefinition(ITrafficDefinitionWriter trafficDefinition) {
    this.trafficDefinition = trafficDefinition;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS)) {
      // Simple type
      this.semiMajorAxis =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS)) {
      // Simple type
      this.semiMinorAxis =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__INNER_RADIUS)) {
      // Simple type
      this.innerRadius =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__OFFSET)) {
      // Simple type
      this.offset =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__NUMBER_OF_VEHICLES)) {
      // Simple type
      this.numberOfVehicles =
          ParserHelper.parseUnsignedInt(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__VELOCITY)) {
      // Simple type
      this.velocity =
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

    ICentralSwarmObjectWriter centralObject = null;
    centralObject = getWriterCentralObject();
    if (centralObject != null) {
      result.add((BaseImpl) centralObject);
    }
    ITrafficDefinitionWriter trafficDefinition = null;
    trafficDefinition = getWriterTrafficDefinition();
    if (trafficDefinition != null) {
      result.add((BaseImpl) trafficDefinition);
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
  public TrafficSwarmActionImpl clone() {
    TrafficSwarmActionImpl clonedObject = new TrafficSwarmActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setSemiMajorAxis(getSemiMajorAxis());
    // Simple type
    clonedObject.setSemiMinorAxis(getSemiMinorAxis());
    // Simple type
    clonedObject.setInnerRadius(getInnerRadius());
    // Simple type
    clonedObject.setOffset(getOffset());
    // Simple type
    clonedObject.setNumberOfVehicles(getNumberOfVehicles());
    // Simple type
    clonedObject.setVelocity(getVelocity());
    // clone children
    ICentralSwarmObjectWriter centralObject = null;
    centralObject = getWriterCentralObject();
    if (centralObject != null) {
      ICentralSwarmObjectWriter clonedChild = ((CentralSwarmObjectImpl) centralObject).clone();
      clonedObject.setCentralObject(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITrafficDefinitionWriter trafficDefinition = null;
    trafficDefinition = getWriterTrafficDefinition();
    if (trafficDefinition != null) {
      ITrafficDefinitionWriter clonedChild = ((TrafficDefinitionImpl) trafficDefinition).clone();
      clonedObject.setTrafficDefinition(clonedChild);
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__NUMBER_OF_VEHICLES)) {
      return getNumberOfVehicles();
    }
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
    if (key.equals(OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS)) {
      return getSemiMajorAxis();
    } else if (key.equals(OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS)) {
      return getSemiMinorAxis();
    } else if (key.equals(OscConstants.ATTRIBUTE__INNER_RADIUS)) {
      return getInnerRadius();
    } else if (key.equals(OscConstants.ATTRIBUTE__OFFSET)) {
      return getOffset();
    } else if (key.equals(OscConstants.ATTRIBUTE__VELOCITY)) {
      return getVelocity();
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
    if (key.equals(OscConstants.ELEMENT__CENTRAL_OBJECT)) {
      return (IOpenScenarioFlexElement) getCentralObject();
    }
    if (key.equals(OscConstants.ELEMENT__TRAFFIC_DEFINITION)) {
      return (IOpenScenarioFlexElement) getTrafficDefinition();
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
    return "TrafficSwarmAction";
  }

  @Override
  public void writeParameterToSemiMajorAxis(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToSemiMinorAxis(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToInnerRadius(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__INNER_RADIUS, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToOffset(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__OFFSET, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToNumberOfVehicles(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__NUMBER_OF_VEHICLES, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToVelocity(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__VELOCITY, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromSemiMajorAxis() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS);
  }

  @Override
  public String getParameterFromSemiMinorAxis() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS);
  }

  @Override
  public String getParameterFromInnerRadius() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__INNER_RADIUS);
  }

  @Override
  public String getParameterFromOffset() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__OFFSET);
  }

  @Override
  public String getParameterFromNumberOfVehicles() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__NUMBER_OF_VEHICLES);
  }

  @Override
  public String getParameterFromVelocity() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__VELOCITY);
  }

  @Override
  public boolean isSemiMajorAxisParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS);
  }

  @Override
  public boolean isSemiMinorAxisParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS);
  }

  @Override
  public boolean isInnerRadiusParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__INNER_RADIUS);
  }

  @Override
  public boolean isOffsetParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__OFFSET);
  }

  @Override
  public boolean isNumberOfVehiclesParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__NUMBER_OF_VEHICLES);
  }

  @Override
  public boolean isVelocityParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__VELOCITY);
  }

  // children
  @Override
  public ICentralSwarmObjectWriter getWriterCentralObject() {
    return this.centralObject;
  }

  @Override
  public ITrafficDefinitionWriter getWriterTrafficDefinition() {
    return this.trafficDefinition;
  }
}
