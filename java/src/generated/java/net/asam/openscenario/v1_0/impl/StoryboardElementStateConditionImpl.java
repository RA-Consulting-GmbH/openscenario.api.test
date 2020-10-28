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
import net.asam.openscenario.v1_0.api.IStoryboardElement;
import net.asam.openscenario.v1_0.api.IStoryboardElementStateCondition;
import net.asam.openscenario.v1_0.api.StoryboardElementState;
import net.asam.openscenario.v1_0.api.StoryboardElementType;
import net.asam.openscenario.v1_0.api.writer.IStoryboardElementStateConditionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IStoryboardElementStateCondition. With setter methods to fill the
 * properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IStoryboardElementStateCondition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class StoryboardElementStateConditionImpl extends BaseImpl
    implements IStoryboardElementStateConditionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, SimpleType.ENUM_TYPE);
    propertyToType.put(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_REF, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__STATE, SimpleType.ENUM_TYPE);
  }

  private StoryboardElementType storyboardElementType;
  private INamedReference<IStoryboardElement> storyboardElementRef;
  private StoryboardElementState state;

  /** Default constructor */
  public StoryboardElementStateConditionImpl() {
    super();
    addAdapter(StoryboardElementStateConditionImpl.class, this);
    addAdapter(IStoryboardElementStateCondition.class, this);
    addAdapter(IStoryboardElementStateConditionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public StoryboardElementType getStoryboardElementType() {
    return this.storyboardElementType;
  }

  @Override
  public INamedReference<IStoryboardElement> getStoryboardElementRef() {
    return this.storyboardElementRef;
  }

  @Override
  public StoryboardElementState getState() {
    return this.state;
  }

  @Override
  public void setStoryboardElementType(StoryboardElementType storyboardElementType) {
    this.storyboardElementType = storyboardElementType;
  }

  @Override
  public void setStoryboardElementRef(INamedReference<IStoryboardElement> storyboardElementRef) {
    this.storyboardElementRef = storyboardElementRef;
  }

  @Override
  public void setState(StoryboardElementState state) {
    this.state = state;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_TYPE)) {
      // Enumeration Type
      StoryboardElementType result = StoryboardElementType.getFromLiteral(parameterLiteralValue);
      if (result != null) {
        this.storyboardElementType = result;
        addResolvedParameter(attributeKey);
      } else {
        logger.logMessage(
            new FileContentMessage(
                "Value '" + parameterLiteralValue + "' is not allowed.",
                ErrorLevel.ERROR,
                getTextmarker(attributeKey)));
      }

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_REF)) {
      // Proxy
      NamedReferenceProxy<IStoryboardElement> proxy =
          new NamedReferenceProxy<>(parameterLiteralValue);
      this.storyboardElementRef = proxy;
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__STATE)) {
      // Enumeration Type
      StoryboardElementState result = StoryboardElementState.getFromLiteral(parameterLiteralValue);
      if (result != null) {
        this.state = result;
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
  public StoryboardElementStateConditionImpl clone() {
    StoryboardElementStateConditionImpl clonedObject = new StoryboardElementStateConditionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Enumeration Type
    StoryboardElementType storyboardElementType = getStoryboardElementType();
    if (storyboardElementType != null) {
      clonedObject.setStoryboardElementType(
          StoryboardElementType.getFromLiteral(storyboardElementType.getLiteral()));
    }
    // Proxy
    NamedReferenceProxy<IStoryboardElement> proxy =
        ((NamedReferenceProxy<IStoryboardElement>) getStoryboardElementRef()).clone();
    clonedObject.setStoryboardElementRef(proxy);
    proxy.setParent(clonedObject);
    // Enumeration Type
    StoryboardElementState state = getState();
    if (state != null) {
      clonedObject.setState(StoryboardElementState.getFromLiteral(state.getLiteral()));
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
    if (key.equals(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_REF)) {
      // Get the Proxy
      INamedReference<IStoryboardElement> storyboardElementRef = getStoryboardElementRef();
      return storyboardElementRef != null ? storyboardElementRef.getNameRef() : null;
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
    if (key.equals(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_REF)) {
      // Get the Proxy
      INamedReference<IStoryboardElement> storyboardElementRef = getStoryboardElementRef();
      return storyboardElementRef != null
          ? (IOpenScenarioFlexElement) storyboardElementRef.getTargetObject()
          : null;
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException {
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_TYPE)) {
      StoryboardElementType storyboardElementType = getStoryboardElementType();
      return storyboardElementType != null ? storyboardElementType.getLiteral() : null;
    } else if (key.equals(OscConstants.ATTRIBUTE__STATE)) {
      StoryboardElementState state = getState();
      return state != null ? state.getLiteral() : null;
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "StoryboardElementStateCondition";
  }

  @Override
  public void writeParameterToStoryboardElementType(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_TYPE, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToStoryboardElementRef(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_REF, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToState(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__STATE, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromStoryboardElementType() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_TYPE);
  }

  @Override
  public String getParameterFromStoryboardElementRef() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_REF);
  }

  @Override
  public String getParameterFromState() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__STATE);
  }

  @Override
  public boolean isStoryboardElementTypeParameterized() {
    return getParameterizedAttributeKeys()
        .contains(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_TYPE);
  }

  @Override
  public boolean isStoryboardElementRefParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__STORYBOARD_ELEMENT_REF);
  }

  @Override
  public boolean isStateParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__STATE);
  }

  // children

}
