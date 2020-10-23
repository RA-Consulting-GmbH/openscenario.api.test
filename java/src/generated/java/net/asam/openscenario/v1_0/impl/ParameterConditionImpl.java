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
import net.asam.openscenario.v1_0.api.IParameterCondition;
import net.asam.openscenario.v1_0.api.IParameterDeclaration;
import net.asam.openscenario.v1_0.api.Rule;
import net.asam.openscenario.v1_0.api.writer.IParameterConditionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IParameterCondition. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IParameterCondition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ParameterConditionImpl extends BaseImpl
    implements IParameterCondition, IParameterConditionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__PARAMETER_REF, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__VALUE, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__RULE, SimpleType.ENUM_TYPE);
  }

  private NamedReferenceProxy<IParameterDeclaration> parameterRef;
  private String value;
  private Rule rule;

  /** Default constructor */
  public ParameterConditionImpl() {
    super();
    addAdapter(ParameterConditionImpl.class, this);
    addAdapter(IParameterCondition.class, this);
    addAdapter(IParameterConditionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public INamedReference<IParameterDeclaration> getParameterRef() {
    return this.parameterRef;
  }

  @Override
  public String getValue() {
    return this.value;
  }

  @Override
  public Rule getRule() {
    return this.rule;
  }
  /**
   * Sets the value of model property parameterRef
   *
   * @param parameterRef from OpenSCENARIO class model specification: [Name of the parameter that
   *     must be defined.]
   */
  public void setParameterRef(NamedReferenceProxy<IParameterDeclaration> parameterRef) {
    this.parameterRef = parameterRef;
  }
  /**
   * Sets the value of model property value
   *
   * @param value from OpenSCENARIO class model specification: [Value of the parameter.]
   */
  public void setValue(String value) {
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
    if (attributeKey.equals(OscConstants.ATTRIBUTE__PARAMETER_REF)) {
      // Proxy
      NamedReferenceProxy<IParameterDeclaration> proxy =
          new NamedReferenceProxy<>(parameterLiteralValue);
      this.parameterRef = proxy;
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__VALUE)) {
      // Simple type
      this.value =
          ParserHelper.parseString(logger, parameterLiteralValue, getTextmarker(attributeKey));
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
  public ParameterConditionImpl clone() {
    ParameterConditionImpl clonedObject = new ParameterConditionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Proxy
    NamedReferenceProxy<IParameterDeclaration> proxy =
        ((NamedReferenceProxy<IParameterDeclaration>) getParameterRef()).clone();
    clonedObject.setParameterRef(proxy);
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
    if (key.equals(OscConstants.ATTRIBUTE__PARAMETER_REF)) {
      // Get the Proxy
      INamedReference<IParameterDeclaration> parameterRef = getParameterRef();
      return parameterRef != null ? parameterRef.getNameRef() : null;
    } else if (key.equals(OscConstants.ATTRIBUTE__VALUE)) {
      return getValue();
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__PARAMETER_REF)) {
      // Get the Proxy
      INamedReference<IParameterDeclaration> parameterRef = getParameterRef();
      return parameterRef != null
          ? (IOpenScenarioFlexElement) parameterRef.getTargetObject()
          : null;
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
    return "ParameterCondition";
  }

  @Override
  public void writeToParameterRef(INamedReference<IParameterDeclaration> parameterRef) {
    setParameterRef(
        new NamedReferenceProxy<>(parameterRef.getTargetObject(), parameterRef.getNameRef()));
  }

  @Override
  public void writeToValue(String value) {
    setValue(value);
  }

  @Override
  public void writeToRule(Rule rule) {
    setRule(rule);
  }

  @Override
  public void writeParameterToParameterRef(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__PARAMETER_REF, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToValue(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__VALUE, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToRule(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__RULE, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromParameterRef() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__PARAMETER_REF);
  }

  @Override
  public String getParameterFromValue() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__VALUE);
  }

  @Override
  public String getParameterFromRule() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__RULE);
  }

  @Override
  public boolean isParameterRefParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__PARAMETER_REF);
  }

  @Override
  public boolean isValueParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__VALUE);
  }

  @Override
  public boolean isRuleParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__RULE);
  }

  // children

}
