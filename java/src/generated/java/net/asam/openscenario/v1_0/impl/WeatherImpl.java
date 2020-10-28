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
import net.asam.openscenario.v1_0.api.CloudState;
import net.asam.openscenario.v1_0.api.IFog;
import net.asam.openscenario.v1_0.api.IPrecipitation;
import net.asam.openscenario.v1_0.api.ISun;
import net.asam.openscenario.v1_0.api.IWeather;
import net.asam.openscenario.v1_0.api.writer.IFogWriter;
import net.asam.openscenario.v1_0.api.writer.IPrecipitationWriter;
import net.asam.openscenario.v1_0.api.writer.ISunWriter;
import net.asam.openscenario.v1_0.api.writer.IWeatherWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IWeather. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IWeather)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class WeatherImpl extends BaseImpl implements IWeatherWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__CLOUD_STATE, SimpleType.ENUM_TYPE);
  }

  private CloudState cloudState;
  private ISunWriter sun;
  private IFogWriter fog;
  private IPrecipitationWriter precipitation;

  /** Default constructor */
  public WeatherImpl() {
    super();
    addAdapter(WeatherImpl.class, this);
    addAdapter(IWeather.class, this);
    addAdapter(IWeatherWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public CloudState getCloudState() {
    return this.cloudState;
  }

  @Override
  public ISun getSun() {
    return this.sun;
  }

  @Override
  public IFog getFog() {
    return this.fog;
  }

  @Override
  public IPrecipitation getPrecipitation() {
    return this.precipitation;
  }

  @Override
  public void setCloudState(CloudState cloudState) {
    this.cloudState = cloudState;
  }

  @Override
  public void setSun(ISunWriter sun) {
    this.sun = sun;
  }

  @Override
  public void setFog(IFogWriter fog) {
    this.fog = fog;
  }

  @Override
  public void setPrecipitation(IPrecipitationWriter precipitation) {
    this.precipitation = precipitation;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__CLOUD_STATE)) {
      // Enumeration Type
      CloudState result = CloudState.getFromLiteral(parameterLiteralValue);
      if (result != null) {
        this.cloudState = result;
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

    ISunWriter sun = null;
    sun = getWriterSun();
    if (sun != null) {
      result.add((BaseImpl) sun);
    }
    IFogWriter fog = null;
    fog = getWriterFog();
    if (fog != null) {
      result.add((BaseImpl) fog);
    }
    IPrecipitationWriter precipitation = null;
    precipitation = getWriterPrecipitation();
    if (precipitation != null) {
      result.add((BaseImpl) precipitation);
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
  public WeatherImpl clone() {
    WeatherImpl clonedObject = new WeatherImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Enumeration Type
    CloudState cloudState = getCloudState();
    if (cloudState != null) {
      clonedObject.setCloudState(CloudState.getFromLiteral(cloudState.getLiteral()));
    }
    // clone children
    ISunWriter sun = null;
    sun = getWriterSun();
    if (sun != null) {
      ISunWriter clonedChild = ((SunImpl) sun).clone();
      clonedObject.setSun(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IFogWriter fog = null;
    fog = getWriterFog();
    if (fog != null) {
      IFogWriter clonedChild = ((FogImpl) fog).clone();
      clonedObject.setFog(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IPrecipitationWriter precipitation = null;
    precipitation = getWriterPrecipitation();
    if (precipitation != null) {
      IPrecipitationWriter clonedChild = ((PrecipitationImpl) precipitation).clone();
      clonedObject.setPrecipitation(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__SUN)) {
      return (IOpenScenarioFlexElement) getSun();
    }
    if (key.equals(OscConstants.ELEMENT__FOG)) {
      return (IOpenScenarioFlexElement) getFog();
    }
    if (key.equals(OscConstants.ELEMENT__PRECIPITATION)) {
      return (IOpenScenarioFlexElement) getPrecipitation();
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
    if (key.equals(OscConstants.ATTRIBUTE__CLOUD_STATE)) {
      CloudState cloudState = getCloudState();
      return cloudState != null ? cloudState.getLiteral() : null;
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "Weather";
  }

  @Override
  public void writeParameterToCloudState(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__CLOUD_STATE, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromCloudState() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__CLOUD_STATE);
  }

  @Override
  public boolean isCloudStateParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__CLOUD_STATE);
  }

  // children
  @Override
  public ISunWriter getWriterSun() {
    return this.sun;
  }

  @Override
  public IFogWriter getWriterFog() {
    return this.fog;
  }

  @Override
  public IPrecipitationWriter getWriterPrecipitation() {
    return this.precipitation;
  }
}
