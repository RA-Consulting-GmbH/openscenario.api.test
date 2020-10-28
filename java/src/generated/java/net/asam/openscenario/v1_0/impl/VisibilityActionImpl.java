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
import net.asam.openscenario.v1_0.api.IVisibilityAction;
import net.asam.openscenario.v1_0.api.writer.IVisibilityActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IVisibilityAction. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IVisibilityAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class VisibilityActionImpl extends BaseImpl implements IVisibilityActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__GRAPHICS, SimpleType.BOOLEAN);
    propertyToType.put(OscConstants.ATTRIBUTE__TRAFFIC, SimpleType.BOOLEAN);
    propertyToType.put(OscConstants.ATTRIBUTE__SENSORS, SimpleType.BOOLEAN);
  }

  private Boolean graphics;
  private Boolean traffic;
  private Boolean sensors;

  /** Default constructor */
  public VisibilityActionImpl() {
    super();
    addAdapter(VisibilityActionImpl.class, this);
    addAdapter(IVisibilityAction.class, this);
    addAdapter(IVisibilityActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public Boolean getGraphics() {
    return this.graphics;
  }

  @Override
  public Boolean getTraffic() {
    return this.traffic;
  }

  @Override
  public Boolean getSensors() {
    return this.sensors;
  }

  @Override
  public void setGraphics(Boolean graphics) {
    this.graphics = graphics;
  }

  @Override
  public void setTraffic(Boolean traffic) {
    this.traffic = traffic;
  }

  @Override
  public void setSensors(Boolean sensors) {
    this.sensors = sensors;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__GRAPHICS)) {
      // Simple type
      this.graphics =
          ParserHelper.parseBoolean(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__TRAFFIC)) {
      // Simple type
      this.traffic =
          ParserHelper.parseBoolean(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__SENSORS)) {
      // Simple type
      this.sensors =
          ParserHelper.parseBoolean(logger, parameterLiteralValue, getTextmarker(attributeKey));
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
  public VisibilityActionImpl clone() {
    VisibilityActionImpl clonedObject = new VisibilityActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setGraphics(getGraphics());
    // Simple type
    clonedObject.setTraffic(getTraffic());
    // Simple type
    clonedObject.setSensors(getSensors());
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
    if (key.equals(OscConstants.ATTRIBUTE__GRAPHICS)) {
      return getGraphics();
    } else if (key.equals(OscConstants.ATTRIBUTE__TRAFFIC)) {
      return getTraffic();
    } else if (key.equals(OscConstants.ATTRIBUTE__SENSORS)) {
      return getSensors();
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
    throw new KeyNotSupportedException();
  }

  @Override
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "VisibilityAction";
  }

  @Override
  public void writeParameterToGraphics(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__GRAPHICS, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToTraffic(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__TRAFFIC, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToSensors(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__SENSORS, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromGraphics() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__GRAPHICS);
  }

  @Override
  public String getParameterFromTraffic() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__TRAFFIC);
  }

  @Override
  public String getParameterFromSensors() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__SENSORS);
  }

  @Override
  public boolean isGraphicsParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__GRAPHICS);
  }

  @Override
  public boolean isTrafficParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__TRAFFIC);
  }

  @Override
  public boolean isSensorsParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__SENSORS);
  }

  // children

}
