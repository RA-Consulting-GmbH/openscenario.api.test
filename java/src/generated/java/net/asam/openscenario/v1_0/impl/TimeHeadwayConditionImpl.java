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
import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.impl.NamedReferenceProxy;
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.IEntity;
import net.asam.openscenario.v1_0.api.ITimeHeadwayCondition;
import net.asam.openscenario.v1_0.api.Rule;
import net.asam.openscenario.v1_0.api.writer.ITimeHeadwayConditionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ITimeHeadwayCondition. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ITimeHeadwayCondition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class TimeHeadwayConditionImpl extends BaseImpl
    implements ITimeHeadwayCondition, ITimeHeadwayConditionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__ENTITY_REF, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__VALUE, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__FREESPACE, SimpleType.BOOLEAN);
    propertyToType.put(OscConstants.ATTRIBUTE__ALONG_ROUTE, SimpleType.BOOLEAN);
    propertyToType.put(OscConstants.ATTRIBUTE__RULE, SimpleType.ENUM_TYPE);
  }

  private NamedReferenceProxy<IEntity> entityRef;
  private Double value;
  private Boolean freespace;
  private Boolean alongRoute;
  private Rule rule;
  /** Default constructor */
  public TimeHeadwayConditionImpl() {
    super();
    addAdapter(TimeHeadwayConditionImpl.class, this);
    addAdapter(ITimeHeadwayCondition.class, this);
    addAdapter(ITimeHeadwayConditionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public INamedReference<IEntity> getEntityRef() {
    return this.entityRef;
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
  /**
   * Sets the value of model property entityRef
   *
   * @param entityRef from OpenSCENARIO class model specification: [Reference entity to which the
   *     time headway is computed.]
   */
  public void setEntityRef(NamedReferenceProxy<IEntity> entityRef) {
    this.entityRef = entityRef;
  }
  /**
   * Sets the value of model property value
   *
   * @param value from OpenSCENARIO class model specification: [The time headway value. Unit: s;
   *     Range: [0..inf[.]
   */
  public void setValue(Double value) {
    this.value = value;
  }
  /**
   * Sets the value of model property freespace
   *
   * @param freespace from OpenSCENARIO class model specification: [True: time headway is measured
   *     using the distance between closest bounding box points. False: reference point distance ,
   *     is used.]
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

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__ENTITY_REF)) {
      // Proxy
      NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<>(parameterLiteralValue);
      this.entityRef = proxy;
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__VALUE)) {
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

    return result;
  }

  /**
   * Making a (deep) clone this object. This is useful and used for importing elements from
   * catalogs.
   *
   * @return a deep copy of the object.
   */
  @Override
  public TimeHeadwayConditionImpl clone() {
    TimeHeadwayConditionImpl clonedObject = new TimeHeadwayConditionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Proxy
    NamedReferenceProxy<IEntity> proxy = ((NamedReferenceProxy<IEntity>) getEntityRef()).clone();
    clonedObject.setEntityRef(proxy);
    proxy.setParent(clonedObject);
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
    return clonedObject;
  }

  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException {
    // proxies and string attributes
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__ENTITY_REF)) {
      // Get the Proxy
      INamedReference<IEntity> entityRef = getEntityRef();
      return entityRef != null ? entityRef.getNameRef() : null;
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__ENTITY_REF)) {
      // Get the Proxy
      INamedReference<IEntity> entityRef = getEntityRef();
      return entityRef != null ? (IOpenScenarioFlexElement) entityRef.getTargetObject() : null;
    }
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
    return "TimeHeadwayCondition";
  }

  @Override
  public void writeToEntityRef(INamedReference<IEntity> entityRef) {
    // empty
  }

  @Override
  public void writeToValue(Double value) {
    // empty
  }

  @Override
  public void writeToFreespace(Boolean freespace) {
    // empty
  }

  @Override
  public void writeToAlongRoute(Boolean alongRoute) {
    // empty
  }

  @Override
  public void writeToRule(Rule rule) {
    // empty
  }

  @Override
  public void writeParameterToEntityRef(String parameterName) {
    // empty
  }

  @Override
  public void writeParameterToValue(String parameterName) {
    // empty
  }

  @Override
  public void writeParameterToFreespace(String parameterName) {
    // empty
  }

  @Override
  public void writeParameterToAlongRoute(String parameterName) {
    // empty
  }

  @Override
  public void writeParameterToRule(String parameterName) {
    // empty
  }

  @Override
  public String getParameterFromEntityRef() {
    return null;
  }

  @Override
  public String getParameterFromValue() {
    return null;
  }

  @Override
  public String getParameterFromFreespace() {
    return null;
  }

  @Override
  public String getParameterFromAlongRoute() {
    return null;
  }

  @Override
  public String getParameterFromRule() {
    return null;
  }

  @Override
  public boolean isEntityRefParameterized() {
    return false;
  }

  @Override
  public boolean isValueParameterized() {
    return false;
  }

  @Override
  public boolean isFreespaceParameterized() {
    return false;
  }

  @Override
  public boolean isAlongRouteParameterized() {
    return false;
  }

  @Override
  public boolean isRuleParameterized() {
    return false;
  }

  // children

}
