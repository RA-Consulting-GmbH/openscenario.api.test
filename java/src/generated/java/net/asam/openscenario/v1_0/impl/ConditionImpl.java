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
import net.asam.openscenario.v1_0.api.ConditionEdge;
import net.asam.openscenario.v1_0.api.IByEntityCondition;
import net.asam.openscenario.v1_0.api.IByValueCondition;
import net.asam.openscenario.v1_0.api.ICondition;
import net.asam.openscenario.v1_0.api.writer.IByEntityConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IByValueConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IConditionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ICondition. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ICondition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ConditionImpl extends BaseImpl implements IConditionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__NAME, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__DELAY, SimpleType.DOUBLE);
    propertyToType.put(OscConstants.ATTRIBUTE__CONDITION_EDGE, SimpleType.ENUM_TYPE);
  }

  private String name;
  private Double delay;
  private ConditionEdge conditionEdge;
  private IByEntityConditionWriter byEntityCondition;
  private IByValueConditionWriter byValueCondition;

  /** Default constructor */
  public ConditionImpl() {
    super();
    addAdapter(ConditionImpl.class, this);
    addAdapter(ICondition.class, this);
    addAdapter(IConditionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public String getName() {
    return this.name;
  }

  @Override
  public Double getDelay() {
    return this.delay;
  }

  @Override
  public ConditionEdge getConditionEdge() {
    return this.conditionEdge;
  }

  @Override
  public IByEntityCondition getByEntityCondition() {
    return this.byEntityCondition;
  }

  @Override
  public IByValueCondition getByValueCondition() {
    return this.byValueCondition;
  }

  @Override
  public void setName(String name) {
    this.name = name;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__NAME);
  }

  @Override
  public void setDelay(Double delay) {
    this.delay = delay;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__DELAY);
  }

  @Override
  public void setConditionEdge(ConditionEdge conditionEdge) {
    this.conditionEdge = conditionEdge;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__CONDITION_EDGE);
  }

  @Override
  public void setByEntityCondition(IByEntityConditionWriter byEntityCondition) {
    this.byEntityCondition = byEntityCondition;
    this.byValueCondition = null;
  }

  @Override
  public void setByValueCondition(IByValueConditionWriter byValueCondition) {
    this.byValueCondition = byValueCondition;
    this.byEntityCondition = null;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__NAME)) {
      // Simple type
      this.name =
          ParserHelper.parseString(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__DELAY)) {
      // Simple type
      this.delay =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__CONDITION_EDGE)) {
      // Enumeration Type
      ConditionEdge result = ConditionEdge.getFromLiteral(parameterLiteralValue);
      if (result != null) {
        this.conditionEdge = result;
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

    IByEntityConditionWriter byEntityCondition = null;
    byEntityCondition = getWriterByEntityCondition();
    if (byEntityCondition != null) {
      result.add((BaseImpl) byEntityCondition);
    }
    IByValueConditionWriter byValueCondition = null;
    byValueCondition = getWriterByValueCondition();
    if (byValueCondition != null) {
      result.add((BaseImpl) byValueCondition);
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
  public ConditionImpl clone() {
    ConditionImpl clonedObject = new ConditionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.name = getName();
    // Simple type
    clonedObject.delay = getDelay();
    // Enumeration Type
    ConditionEdge conditionEdge = getConditionEdge();
    if (conditionEdge != null) {
      clonedObject.conditionEdge = ConditionEdge.getFromLiteral(conditionEdge.getLiteral());
    }
    // clone children
    IByEntityConditionWriter byEntityCondition = null;
    byEntityCondition = getWriterByEntityCondition();
    if (byEntityCondition != null) {
      IByEntityConditionWriter clonedChild = ((ByEntityConditionImpl) byEntityCondition).clone();
      clonedObject.setByEntityCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IByValueConditionWriter byValueCondition = null;
    byValueCondition = getWriterByValueCondition();
    if (byValueCondition != null) {
      IByValueConditionWriter clonedChild = ((ByValueConditionImpl) byValueCondition).clone();
      clonedObject.setByValueCondition(clonedChild);
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
    if (key.equals(OscConstants.ATTRIBUTE__NAME)) {
      return getName();
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
    if (key.equals(OscConstants.ATTRIBUTE__DELAY)) {
      return getDelay();
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
    if (key.equals(OscConstants.ELEMENT__BY_ENTITY_CONDITION)) {
      return (IOpenScenarioFlexElement) getByEntityCondition();
    }
    if (key.equals(OscConstants.ELEMENT__BY_VALUE_CONDITION)) {
      return (IOpenScenarioFlexElement) getByValueCondition();
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
    if (key.equals(OscConstants.ATTRIBUTE__CONDITION_EDGE)) {
      ConditionEdge conditionEdge = getConditionEdge();
      return conditionEdge != null ? conditionEdge.getLiteral() : null;
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "Condition";
  }

  @Override
  public void writeParameterToName(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__NAME, parameterName, null /*no textmarker*/);
    this.name = null;
  }

  @Override
  public void writeParameterToDelay(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__DELAY, parameterName, null /*no textmarker*/);
    this.delay = null;
  }

  @Override
  public void writeParameterToConditionEdge(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__CONDITION_EDGE, parameterName, null /*no textmarker*/);
    this.conditionEdge = null;
  }

  @Override
  public String getParameterFromName() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__NAME);
  }

  @Override
  public String getParameterFromDelay() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__DELAY);
  }

  @Override
  public String getParameterFromConditionEdge() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__CONDITION_EDGE);
  }

  @Override
  public boolean isNameParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__NAME);
  }

  @Override
  public boolean isDelayParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__DELAY);
  }

  @Override
  public boolean isConditionEdgeParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__CONDITION_EDGE);
  }

  // children
  @Override
  public IByEntityConditionWriter getWriterByEntityCondition() {
    return this.byEntityCondition;
  }

  @Override
  public IByValueConditionWriter getWriterByValueCondition() {
    return this.byValueCondition;
  }
}
