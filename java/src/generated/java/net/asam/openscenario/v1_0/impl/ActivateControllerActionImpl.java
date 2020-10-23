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
import net.asam.openscenario.v1_0.api.IActivateControllerAction;
import net.asam.openscenario.v1_0.api.writer.IActivateControllerActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IActivateControllerAction. With setter methods to fill the
 * properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IActivateControllerAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ActivateControllerActionImpl extends BaseImpl
    implements IActivateControllerAction, IActivateControllerActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__LATERAL, SimpleType.BOOLEAN);
    propertyToType.put(OscConstants.ATTRIBUTE__LONGITUDINAL, SimpleType.BOOLEAN);
  }

  private Boolean lateral;
  private Boolean longitudinal;
  /** Default constructor */
  public ActivateControllerActionImpl() {
    super();
    addAdapter(ActivateControllerActionImpl.class, this);
    addAdapter(IActivateControllerAction.class, this);
    addAdapter(IActivateControllerActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public Boolean getLateral() {
    return this.lateral;
  }

  @Override
  public Boolean getLongitudinal() {
    return this.longitudinal;
  }
  /**
   * Sets the value of model property lateral
   *
   * @param lateral from OpenSCENARIO class model specification: [In lateral domain: Activate or
   *     deactivate controller defined (e.g. automated, autonomous) behavior.]
   */
  public void setLateral(Boolean lateral) {
    this.lateral = lateral;
  }
  /**
   * Sets the value of model property longitudinal
   *
   * @param longitudinal from OpenSCENARIO class model specification: [In longitudinal domain:
   *     Activate or deactivate autonomous behavior.]
   */
  public void setLongitudinal(Boolean longitudinal) {
    this.longitudinal = longitudinal;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__LATERAL)) {
      // Simple type
      this.lateral =
          ParserHelper.parseBoolean(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__LONGITUDINAL)) {
      // Simple type
      this.longitudinal =
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
  public ActivateControllerActionImpl clone() {
    ActivateControllerActionImpl clonedObject = new ActivateControllerActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setLateral(getLateral());
    // Simple type
    clonedObject.setLongitudinal(getLongitudinal());
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
    if (key.equals(OscConstants.ATTRIBUTE__LATERAL)) {
      return getLateral();
    } else if (key.equals(OscConstants.ATTRIBUTE__LONGITUDINAL)) {
      return getLongitudinal();
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
    return "ActivateControllerAction";
  }

  @Override
  public void writeToLateral(Boolean lateral) {
    // empty
  }

  @Override
  public void writeToLongitudinal(Boolean longitudinal) {
    // empty
  }

  @Override
  public void writeParameterToLateral(String parameterName) {
    // empty
  }

  @Override
  public void writeParameterToLongitudinal(String parameterName) {
    // empty
  }

  @Override
  public String getParameterFromLateral() {
    return null;
  }

  @Override
  public String getParameterFromLongitudinal() {
    return null;
  }

  @Override
  public boolean isLateralParameterized() {
    return false;
  }

  @Override
  public boolean isLongitudinalParameterized() {
    return false;
  }

  // children

}
