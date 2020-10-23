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
import net.asam.openscenario.v1_0.api.ICustomCommandAction;
import net.asam.openscenario.v1_0.api.writer.ICustomCommandActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ICustomCommandAction. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ICustomCommandAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class CustomCommandActionImpl extends BaseImpl
    implements ICustomCommandAction, ICustomCommandActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__TYPE, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__CONTENT, SimpleType.STRING);
  }

  private String type;
  private String content;

  /** Default constructor */
  public CustomCommandActionImpl() {
    super();
    addAdapter(CustomCommandActionImpl.class, this);
    addAdapter(ICustomCommandAction.class, this);
    addAdapter(ICustomCommandActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public String getType() {
    return this.type;
  }

  @Override
  public String getContent() {
    return this.content;
  }
  /**
   * Sets the value of model property type
   *
   * @param type from OpenSCENARIO class model specification: [Type that is defined as a contract
   *     between the simulation environment provider and the author of a scenario.]
   */
  public void setType(String type) {
    this.type = type;
  }
  /**
   * Sets the value of model property content
   *
   * @param content from OpenSCENARIO class model specification: [The command that is defined as a
   *     contract between the simulation environment provider and the author of a scenario.]
   */
  public void setContent(String content) {
    this.content = content;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__TYPE)) {
      // Simple type
      this.type =
          ParserHelper.parseString(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__CONTENT)) {
      // Simple type
      this.content =
          ParserHelper.parseString(logger, parameterLiteralValue, getTextmarker(attributeKey));
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
  public CustomCommandActionImpl clone() {
    CustomCommandActionImpl clonedObject = new CustomCommandActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setType(getType());
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
    if (key.equals(OscConstants.ATTRIBUTE__TYPE)) {
      return getType();
    } else if (key.equals(OscConstants.ATTRIBUTE__CONTENT)) {
      return getContent();
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
    throw new KeyNotSupportedException();
  }

  @Override
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "CustomCommandAction";
  }

  @Override
  public void writeToType(String type) {
    setType(type);
  }

  @Override
  public void writeToContent(String content) {
    setContent(content);
  }

  @Override
  public void writeParameterToType(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__TYPE, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToContent(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__CONTENT, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromType() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__TYPE);
  }

  @Override
  public String getParameterFromContent() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__CONTENT);
  }

  @Override
  public boolean isTypeParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__TYPE);
  }

  @Override
  public boolean isContentParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__CONTENT);
  }

  // children

}
