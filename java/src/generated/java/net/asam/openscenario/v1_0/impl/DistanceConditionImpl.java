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
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.IDistanceCondition;
import net.asam.openscenario.v1_0.api.IPosition;
import net.asam.openscenario.v1_0.api.Rule;
import net.asam.openscenario.v1_0.api.writer.IDistanceConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IPositionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IDistanceCondition. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IDistanceCondition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class DistanceConditionImpl extends BaseImpl
    implements IDistanceCondition, IDistanceConditionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__VALUE, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__FREESPACE, SimpleType.BOOLEAN);
    propertyToType.put(OscConstants.ATTRIBUTE__ALONG_ROUTE, SimpleType.BOOLEAN);
    propertyToType.put(OscConstants.ATTRIBUTE__RULE, SimpleType.ENUM_TYPE);
  }

  private Double value;
  private Boolean freespace;
  private Boolean alongRoute;
  private Rule rule;
  private IPosition position;

  private IPositionWriter positionWriter;

  /** Default constructor */
  public DistanceConditionImpl() {
    super();
    addAdapter(DistanceConditionImpl.class, this);
    addAdapter(IDistanceCondition.class, this);
    addAdapter(IDistanceConditionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public Double getValue() {
    return this.value;
  }

  @Override
  public Boolean getFreespace() {
    return this.freespace;
  }

  @Override
  public Boolean getAlongRoute() {
    return this.alongRoute;
  }

  @Override
  public Rule getRule() {
    return this.rule;
  }

  @Override
  public IPosition getPosition() {
    return this.position;
  }
  /**
   * Sets the value of model property value
   *
   * @param value from OpenSCENARIO class model specification: [The distance value. Unit: s; Range:
   *     [0..inf[.]
   */
  public void setValue(Double value) {
    this.value = value;
  }
  /**
   * Sets the value of model property freespace
   *
   * @param freespace from OpenSCENARIO class model specification: [True: distance is measured
   *     between closest bounding box points. False: reference point distance is used.]
   */
  public void setFreespace(Boolean freespace) {
    this.freespace = freespace;
  }
  /**
   * Sets the value of model property alongRoute
   *
   * @param alongRoute from OpenSCENARIO class model specification: [True: routing is taken into
   *     account, e.g. turns will increase distance. False: straight line distance is used.]
   */
  public void setAlongRoute(Boolean alongRoute) {
    this.alongRoute = alongRoute;
  }
  /**
   * Sets the value of model property rule
   *
   * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
   */
  public void setRule(Rule rule) {
    this.rule = rule;
  }
  /**
   * Sets the value of model property position
   *
   * @param position from OpenSCENARIO class model specification: [The given position the distance
   *     is related to.]
   */
  public void setPosition(IPosition position) {
    this.position = position;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__VALUE)) {
      // Simple type
      this.value =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__FREESPACE)) {
      // Simple type
      this.freespace =
          ParserHelper.parseBoolean(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__ALONG_ROUTE)) {
      // Simple type
      this.alongRoute =
          ParserHelper.parseBoolean(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__RULE)) {
      // Enumeration Type
      Rule result = Rule.getFromLiteral(parameterLiteralValue);
      if (result != null) {
        this.rule = result;
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

    IPosition position = null;
    position = getPosition();
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
  public DistanceConditionImpl clone() {
    DistanceConditionImpl clonedObject = new DistanceConditionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setValue(getValue());
    // Simple type
    clonedObject.setFreespace(getFreespace());
    // Simple type
    clonedObject.setAlongRoute(getAlongRoute());
    // Enumeration Type
    Rule rule = getRule();
    if (rule != null) {
      clonedObject.setRule(Rule.getFromLiteral(rule.getLiteral()));
    }
    // clone children
    IPosition position = null;
    position = getPosition();
    if (position != null) {
      PositionImpl clonedChild = ((PositionImpl) position).clone();
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__VALUE)) {
      return getValue();
    }
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
    if (key.equals(OscConstants.ATTRIBUTE__FREESPACE)) {
      return getFreespace();
    } else if (key.equals(OscConstants.ATTRIBUTE__ALONG_ROUTE)) {
      return getAlongRoute();
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
    if (key.equals(OscConstants.ATTRIBUTE__RULE)) {
      Rule rule = getRule();
      return rule != null ? rule.getLiteral() : null;
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "DistanceCondition";
  }

  @Override
  public void writeToValue(Double value) {
    setValue(value);
  }

  @Override
  public void writeToFreespace(Boolean freespace) {
    setFreespace(freespace);
  }

  @Override
  public void writeToAlongRoute(Boolean alongRoute) {
    setAlongRoute(alongRoute);
  }

  @Override
  public void writeToRule(Rule rule) {
    setRule(rule);
  }

  @Override
  public void writeParameterToValue(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__VALUE, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToFreespace(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__FREESPACE, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToAlongRoute(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__ALONG_ROUTE, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToRule(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__RULE, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromValue() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__VALUE);
  }

  @Override
  public String getParameterFromFreespace() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__FREESPACE);
  }

  @Override
  public String getParameterFromAlongRoute() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__ALONG_ROUTE);
  }

  @Override
  public String getParameterFromRule() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__RULE);
  }

  @Override
  public boolean isValueParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__VALUE);
  }

  @Override
  public boolean isFreespaceParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__FREESPACE);
  }

  @Override
  public boolean isAlongRouteParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__ALONG_ROUTE);
  }

  @Override
  public boolean isRuleParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__RULE);
  }

  // children
  @Override
  public IPositionWriter getPositionWriter() {
    return this.positionWriter;
  }

  @Override
  public void writeToPositionWriter(IPositionWriter positionWriter) {
    this.positionWriter = positionWriter;
  }
}
