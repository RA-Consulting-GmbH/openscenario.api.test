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
import net.asam.openscenario.v1_0.api.IModifyRule;
import net.asam.openscenario.v1_0.api.IParameterAddValueRule;
import net.asam.openscenario.v1_0.api.IParameterMultiplyByValueRule;
import net.asam.openscenario.v1_0.api.writer.IModifyRuleWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterAddValueRuleWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterMultiplyByValueRuleWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IModifyRule. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IModifyRule)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ModifyRuleImpl extends BaseImpl implements IModifyRuleWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IParameterAddValueRuleWriter addValue;
  private IParameterMultiplyByValueRuleWriter multiplyByValue;

  /** Default constructor */
  public ModifyRuleImpl() {
    super();
    addAdapter(ModifyRuleImpl.class, this);
    addAdapter(IModifyRule.class, this);
    addAdapter(IModifyRuleWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IParameterAddValueRule getAddValue() {
    return this.addValue;
  }

  @Override
  public IParameterMultiplyByValueRule getMultiplyByValue() {
    return this.multiplyByValue;
  }

  @Override
  public void setAddValue(IParameterAddValueRuleWriter addValue) {
    this.addValue = addValue;
    this.multiplyByValue = null;
  }

  @Override
  public void setMultiplyByValue(IParameterMultiplyByValueRuleWriter multiplyByValue) {
    this.multiplyByValue = multiplyByValue;
    this.addValue = null;
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

    IParameterAddValueRuleWriter addValue = null;
    addValue = getWriterAddValue();
    if (addValue != null) {
      result.add((BaseImpl) addValue);
    }
    IParameterMultiplyByValueRuleWriter multiplyByValue = null;
    multiplyByValue = getWriterMultiplyByValue();
    if (multiplyByValue != null) {
      result.add((BaseImpl) multiplyByValue);
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
  public ModifyRuleImpl clone() {
    ModifyRuleImpl clonedObject = new ModifyRuleImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IParameterAddValueRuleWriter addValue = null;
    addValue = getWriterAddValue();
    if (addValue != null) {
      IParameterAddValueRuleWriter clonedChild = ((ParameterAddValueRuleImpl) addValue).clone();
      clonedObject.setAddValue(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IParameterMultiplyByValueRuleWriter multiplyByValue = null;
    multiplyByValue = getWriterMultiplyByValue();
    if (multiplyByValue != null) {
      IParameterMultiplyByValueRuleWriter clonedChild =
          ((ParameterMultiplyByValueRuleImpl) multiplyByValue).clone();
      clonedObject.setMultiplyByValue(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__ADD_VALUE)) {
      return (IOpenScenarioFlexElement) getAddValue();
    }
    if (key.equals(OscConstants.ELEMENT__MULTIPLY_BY_VALUE)) {
      return (IOpenScenarioFlexElement) getMultiplyByValue();
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
    return "ModifyRule";
  }

  // children
  @Override
  public IParameterAddValueRuleWriter getWriterAddValue() {
    return this.addValue;
  }

  @Override
  public IParameterMultiplyByValueRuleWriter getWriterMultiplyByValue() {
    return this.multiplyByValue;
  }
}
