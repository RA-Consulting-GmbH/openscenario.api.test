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
import net.asam.openscenario.parameter.ParameterValue;
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.IEnvironment;
import net.asam.openscenario.v1_0.api.IParameterDeclaration;
import net.asam.openscenario.v1_0.api.IRoadCondition;
import net.asam.openscenario.v1_0.api.ITimeOfDay;
import net.asam.openscenario.v1_0.api.IWeather;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IEnvironment. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IEnvironment)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class EnvironmentImpl extends BaseImpl implements IEnvironment {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__NAME, SimpleType.STRING);
  }

  private String name;
  private List<IParameterDeclaration> parameterDeclarations;
  private ITimeOfDay timeOfDay;
  private IWeather weather;
  private IRoadCondition roadCondition;
  /** Default constructor */
  public EnvironmentImpl() {
    super();
    addAdapter(EnvironmentImpl.class, this);
    addAdapter(IEnvironment.class, this);
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
  public List<IParameterDeclaration> getParameterDeclarations() {
    return this.parameterDeclarations;
  }

  @Override
  public ITimeOfDay getTimeOfDay() {
    return this.timeOfDay;
  }

  @Override
  public IWeather getWeather() {
    return this.weather;
  }

  @Override
  public IRoadCondition getRoadCondition() {
    return this.roadCondition;
  }
  /**
   * Sets the value of model property name
   *
   * @param name from OpenSCENARIO class model specification: [Name of the environment. If used in
   *     catalog name is required.]
   */
  public void setName(String name) {
    this.name = name;
  }
  /**
   * Sets the value of model property parameterDeclarations
   *
   * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of
   *     additional parameters.]
   */
  public void setParameterDeclarations(List<IParameterDeclaration> parameterDeclarations) {
    this.parameterDeclarations = parameterDeclarations;
  }
  /**
   * Sets the value of model property timeOfDay
   *
   * @param timeOfDay from OpenSCENARIO class model specification: [Time of the day during the
   *     simulation.]
   */
  public void setTimeOfDay(ITimeOfDay timeOfDay) {
    this.timeOfDay = timeOfDay;
  }
  /**
   * Sets the value of model property weather
   *
   * @param weather from OpenSCENARIO class model specification: [Weather conditions during the
   *     simulation.]
   */
  public void setWeather(IWeather weather) {
    this.weather = weather;
  }
  /**
   * Sets the value of model property roadCondition
   *
   * @param roadCondition from OpenSCENARIO class model specification: [Road conditions during the
   *     simulation.]
   */
  public void setRoadCondition(IRoadCondition roadCondition) {
    this.roadCondition = roadCondition;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__NAME)) {
      // Simple type
      this.name =
          ParserHelper.parseString(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);
    }
  }

  @Override
  public SimpleType getTypeFromAttributeName(String attributeKey) {
    return propertyToType.get(attributeKey);
  }

  @Override
  public boolean hasParameterDefinitions() {
    return true;
  }

  @Override
  public List<ParameterValue> getParameterDefinitions() {
    List<ParameterValue> result = new java.util.ArrayList<>();
    if (this.parameterDeclarations != null) {
      for (IParameterDeclaration parameterDeclaration : this.parameterDeclarations) {
        ParameterValue parameterValue =
            new ParameterValue(
                parameterDeclaration.getName(),
                getParameterType(parameterDeclaration.getParameterType().getLiteral()),
                parameterDeclaration.getValue());
        result.add(parameterValue);
      }
    }
    return result;
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

    List<IParameterDeclaration> parameterDeclarations = null;
    parameterDeclarations = getParameterDeclarations();
    if (parameterDeclarations != null) {
      for (IParameterDeclaration item : parameterDeclarations) {
        result.add((BaseImpl) item);
      }
    }
    ITimeOfDay timeOfDay = null;
    timeOfDay = getTimeOfDay();
    if (timeOfDay != null) {
      result.add((BaseImpl) timeOfDay);
    }
    IWeather weather = null;
    weather = getWeather();
    if (weather != null) {
      result.add((BaseImpl) weather);
    }
    IRoadCondition roadCondition = null;
    roadCondition = getRoadCondition();
    if (roadCondition != null) {
      result.add((BaseImpl) roadCondition);
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
  public EnvironmentImpl clone() {
    EnvironmentImpl clonedObject = new EnvironmentImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setName(getName());
    // clone children
    List<IParameterDeclaration> parameterDeclarations = null;
    parameterDeclarations = getParameterDeclarations();
    if (parameterDeclarations != null) {
      List<IParameterDeclaration> clonedList = new ArrayList<>();
      for (IParameterDeclaration item : parameterDeclarations) {
        ParameterDeclarationImpl clonedChild = ((ParameterDeclarationImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setParameterDeclarations(clonedList);
    }
    ITimeOfDay timeOfDay = null;
    timeOfDay = getTimeOfDay();
    if (timeOfDay != null) {
      TimeOfDayImpl clonedChild = ((TimeOfDayImpl) timeOfDay).clone();
      clonedObject.setTimeOfDay(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IWeather weather = null;
    weather = getWeather();
    if (weather != null) {
      WeatherImpl clonedChild = ((WeatherImpl) weather).clone();
      clonedObject.setWeather(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IRoadCondition roadCondition = null;
    roadCondition = getRoadCondition();
    if (roadCondition != null) {
      RoadConditionImpl clonedChild = ((RoadConditionImpl) roadCondition).clone();
      clonedObject.setRoadCondition(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__TIME_OF_DAY)) {
      return (IOpenScenarioFlexElement) getTimeOfDay();
    }
    if (key.equals(OscConstants.ELEMENT__WEATHER)) {
      return (IOpenScenarioFlexElement) getWeather();
    }
    if (key.equals(OscConstants.ELEMENT__ROAD_CONDITION)) {
      return (IOpenScenarioFlexElement) getRoadCondition();
    }
    throw new KeyNotSupportedException();
  }

  @SuppressWarnings("unchecked")
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key)
      throws KeyNotSupportedException {

    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ELEMENT__PARAMETER_DECLARATION)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getParameterDeclarations();
    }
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
    return "Environment";
  }
}
