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
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.impl.NamedReferenceProxy;
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.IEntity;
import net.asam.openscenario.v1_0.api.IRelativeSpeedCondition;
import net.asam.openscenario.v1_0.api.Rule;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IRelativeSpeedCondition. With setter methods to fill the
 * properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IRelativeSpeedCondition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class RelativeSpeedConditionImpl extends BaseImpl
    implements IRelativeSpeedCondition, Cloneable {
  protected static Hashtable<String, Class<?>> propertyToType = new Hashtable<String, Class<?>>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__ENTITY_REF, String.class);
    propertyToType.put(OscConstants.ATTRIBUTE__VALUE, Double.class);
    propertyToType.put(OscConstants.ATTRIBUTE__RULE, String.class);
  }

  private NamedReferenceProxy<IEntity> entityRef;
  private Double value;
  private Rule rule;
  /** Default constructor */
  public RelativeSpeedConditionImpl() {
    super();
    addAdapter(RelativeSpeedConditionImpl.class, this);
    addAdapter(IRelativeSpeedCondition.class, this);
  }

  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public INamedReference<IEntity> getEntityRef() {
    return entityRef;
  }

  @Override
  public Double getValue() {
    return value;
  }

  @Override
  public Rule getRule() {
    return rule;
  }
  /**
   * Sets the value of model property entityRef
   *
   * @param entityRef from OpenSCENARIO class model specification: [Reference entity.]
   */
  public void setEntityRef(NamedReferenceProxy<IEntity> entityRef) {
    this.entityRef = entityRef;
  }
  /**
   * Sets the value of model property value
   *
   * @param value from OpenSCENARIO class model specification: [Relative speed value. Unit: m/s.]
   */
  public void setValue(Double value) {
    this.value = value;
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
      NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<IEntity>(parameterLiteralValue);
      entityRef = proxy;
      removeResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__VALUE)) {
      // Simple type
      value = ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      removeResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__RULE)) {
      // Enumeration Type
      Rule result = Rule.getFromLiteral(parameterLiteralValue);
      if (result != null) {
        rule = result;
        removeResolvedParameter(attributeKey);
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
  public Class<?> getTypeFromAttributeName(String attributeKey) {
    return propertyToType.get(attributeKey);
  }

  /**
   * A list of all aggregated children (lists are flattened). This may be used for applying a
   * specific method for any child.
   *
   * @return a list with all children (as BaseImpl)
   */
  public List<BaseImpl> getChildren() {
    List<BaseImpl> result = new ArrayList<BaseImpl>();

    return result;
  }

  /**
   * Making a (deep) clone this object. This is useful and used for importing elements from
   * catalogs.
   *
   * @return a deep copy of the object.
   */
  public RelativeSpeedConditionImpl clone() {
    RelativeSpeedConditionImpl clonedObject = new RelativeSpeedConditionImpl();
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
    } else {
      throw new KeyNotSupportedException();
    }
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
    } else {
      throw new KeyNotSupportedException();
    }
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__ENTITY_REF)) {
      // Get the Proxy
      INamedReference<IEntity> entityRef = getEntityRef();
      return entityRef != null ? (IOpenScenarioFlexElement) entityRef.getTargetObject() : null;
    } else {
      throw new KeyNotSupportedException();
    }
  }

  @Override
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException {
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__RULE)) {
      Rule rule = getRule();
      return rule != null ? rule.getLiteral() : null;
    } else {
      throw new KeyNotSupportedException();
    }
  }

  @Override
  public String getModelType() {
    return "RelativeSpeedCondition";
  }
}
