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
import net.asam.openscenario.v1_0.api.IPrecipitation;
import net.asam.openscenario.v1_0.api.PrecipitationType;
import net.asam.openscenario.v1_0.api.writer.IPrecipitationWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IPrecipitation. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IPrecipitation)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class PrecipitationImpl extends BaseImpl implements IPrecipitationWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__PRECIPITATION_TYPE, SimpleType.ENUM_TYPE);
    propertyToType.put(OscConstants.ATTRIBUTE__INTENSITY, SimpleType.DOUBLE);
  }

  private PrecipitationType precipitationType;
  private Double intensity;

  /** Default constructor */
  public PrecipitationImpl() {
    super();
    addAdapter(PrecipitationImpl.class, this);
    addAdapter(IPrecipitation.class, this);
    addAdapter(IPrecipitationWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public PrecipitationType getPrecipitationType() {
    return this.precipitationType;
  }

  @Override
  public Double getIntensity() {
    return this.intensity;
  }

  @Override
  public void setPrecipitationType(PrecipitationType precipitationType) {
    this.precipitationType = precipitationType;
  }

  @Override
  public void setIntensity(Double intensity) {
    this.intensity = intensity;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__PRECIPITATION_TYPE)) {
      // Enumeration Type
      PrecipitationType result = PrecipitationType.getFromLiteral(parameterLiteralValue);
      if (result != null) {
        this.precipitationType = result;
        addResolvedParameter(attributeKey);
      } else {
        logger.logMessage(
            new FileContentMessage(
                "Value '" + parameterLiteralValue + "' is not allowed.",
                ErrorLevel.ERROR,
                getTextmarker(attributeKey)));
      }

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__INTENSITY)) {
      // Simple type
      this.intensity =
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

    return result;
  }

  /**
   * Making a (deep) clone this object. This is useful and used for importing elements from
   * catalogs.
   *
   * @return a deep copy of the object.
   */
  @Override
  public PrecipitationImpl clone() {
    PrecipitationImpl clonedObject = new PrecipitationImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Enumeration Type
    PrecipitationType precipitationType = getPrecipitationType();
    if (precipitationType != null) {
      clonedObject.setPrecipitationType(
          PrecipitationType.getFromLiteral(precipitationType.getLiteral()));
    }
    // Simple type
    clonedObject.setIntensity(getIntensity());
    // clone children
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
    if (key.equals(OscConstants.ATTRIBUTE__INTENSITY)) {
      return getIntensity();
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
    if (key.equals(OscConstants.ATTRIBUTE__PRECIPITATION_TYPE)) {
      PrecipitationType precipitationType = getPrecipitationType();
      return precipitationType != null ? precipitationType.getLiteral() : null;
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "Precipitation";
  }

  @Override
  public void writeParameterToPrecipitationType(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__PRECIPITATION_TYPE, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToIntensity(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__INTENSITY, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromPrecipitationType() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__PRECIPITATION_TYPE);
  }

  @Override
  public String getParameterFromIntensity() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__INTENSITY);
  }

  @Override
  public boolean isPrecipitationTypeParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__PRECIPITATION_TYPE);
  }

  @Override
  public boolean isIntensityParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__INTENSITY);
  }

  // children

}
