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
import net.asam.openscenario.v1_0.api.IAbsoluteSpeed;
import net.asam.openscenario.v1_0.api.IFinalSpeed;
import net.asam.openscenario.v1_0.api.IRelativeSpeedToMaster;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IFinalSpeed. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IFinalSpeed)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class FinalSpeedImpl extends BaseImpl implements IFinalSpeed {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IAbsoluteSpeed absoluteSpeed;
  private IRelativeSpeedToMaster relativeSpeedToMaster;
  /** Default constructor */
  public FinalSpeedImpl() {
    super();
    addAdapter(FinalSpeedImpl.class, this);
    addAdapter(IFinalSpeed.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IAbsoluteSpeed getAbsoluteSpeed() {
    return this.absoluteSpeed;
  }

  @Override
  public IRelativeSpeedToMaster getRelativeSpeedToMaster() {
    return this.relativeSpeedToMaster;
  }
  /**
   * Sets the value of model property absoluteSpeed
   *
   * @param absoluteSpeed from OpenSCENARIO class model specification: [The absolute speed a
   *     synchronized entity should have at its target position.]
   */
  public void setAbsoluteSpeed(IAbsoluteSpeed absoluteSpeed) {
    this.absoluteSpeed = absoluteSpeed;
  }
  /**
   * Sets the value of model property relativeSpeedToMaster
   *
   * @param relativeSpeedToMaster from OpenSCENARIO class model specification: [The speed a
   *     synchronized entity should have relative to its master entity at its target position.]
   */
  public void setRelativeSpeedToMaster(IRelativeSpeedToMaster relativeSpeedToMaster) {
    this.relativeSpeedToMaster = relativeSpeedToMaster;
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

    IAbsoluteSpeed absoluteSpeed = null;
    absoluteSpeed = getAbsoluteSpeed();
    if (absoluteSpeed != null) {
      result.add((BaseImpl) absoluteSpeed);
    }
    IRelativeSpeedToMaster relativeSpeedToMaster = null;
    relativeSpeedToMaster = getRelativeSpeedToMaster();
    if (relativeSpeedToMaster != null) {
      result.add((BaseImpl) relativeSpeedToMaster);
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
  public FinalSpeedImpl clone() {
    FinalSpeedImpl clonedObject = new FinalSpeedImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IAbsoluteSpeed absoluteSpeed = null;
    absoluteSpeed = getAbsoluteSpeed();
    if (absoluteSpeed != null) {
      AbsoluteSpeedImpl clonedChild = ((AbsoluteSpeedImpl) absoluteSpeed).clone();
      clonedObject.setAbsoluteSpeed(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IRelativeSpeedToMaster relativeSpeedToMaster = null;
    relativeSpeedToMaster = getRelativeSpeedToMaster();
    if (relativeSpeedToMaster != null) {
      RelativeSpeedToMasterImpl clonedChild =
          ((RelativeSpeedToMasterImpl) relativeSpeedToMaster).clone();
      clonedObject.setRelativeSpeedToMaster(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__ABSOLUTE_SPEED)) {
      return (IOpenScenarioFlexElement) getAbsoluteSpeed();
    }
    if (key.equals(OscConstants.ELEMENT__RELATIVE_SPEED_TO_MASTER)) {
      return (IOpenScenarioFlexElement) getRelativeSpeedToMaster();
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
    return "FinalSpeed";
  }
}
