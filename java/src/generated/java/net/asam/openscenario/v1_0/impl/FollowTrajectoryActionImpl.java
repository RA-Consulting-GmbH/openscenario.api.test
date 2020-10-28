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
import net.asam.openscenario.v1_0.api.ICatalogReference;
import net.asam.openscenario.v1_0.api.IFollowTrajectoryAction;
import net.asam.openscenario.v1_0.api.ITimeReference;
import net.asam.openscenario.v1_0.api.ITrajectory;
import net.asam.openscenario.v1_0.api.ITrajectoryFollowingMode;
import net.asam.openscenario.v1_0.api.writer.ICatalogReferenceWriter;
import net.asam.openscenario.v1_0.api.writer.IFollowTrajectoryActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITimeReferenceWriter;
import net.asam.openscenario.v1_0.api.writer.ITrajectoryFollowingModeWriter;
import net.asam.openscenario.v1_0.api.writer.ITrajectoryWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IFollowTrajectoryAction. With setter methods to fill the
 * properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IFollowTrajectoryAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class FollowTrajectoryActionImpl extends BaseImpl implements IFollowTrajectoryActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private ITrajectoryWriter trajectory;
  private ICatalogReferenceWriter catalogReference;
  private ITimeReferenceWriter timeReference;
  private ITrajectoryFollowingModeWriter trajectoryFollowingMode;

  /** Default constructor */
  public FollowTrajectoryActionImpl() {
    super();
    addAdapter(FollowTrajectoryActionImpl.class, this);
    addAdapter(IFollowTrajectoryAction.class, this);
    addAdapter(IFollowTrajectoryActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public ITrajectory getTrajectory() {
    return this.trajectory;
  }

  @Override
  public ICatalogReference getCatalogReference() {
    return this.catalogReference;
  }

  @Override
  public ITimeReference getTimeReference() {
    return this.timeReference;
  }

  @Override
  public ITrajectoryFollowingMode getTrajectoryFollowingMode() {
    return this.trajectoryFollowingMode;
  }

  @Override
  public void setTrajectory(ITrajectoryWriter trajectory) {
    this.trajectory = trajectory;
  }

  @Override
  public void setCatalogReference(ICatalogReferenceWriter catalogReference) {
    this.catalogReference = catalogReference;
  }

  @Override
  public void setTimeReference(ITimeReferenceWriter timeReference) {
    this.timeReference = timeReference;
  }

  @Override
  public void setTrajectoryFollowingMode(ITrajectoryFollowingModeWriter trajectoryFollowingMode) {
    this.trajectoryFollowingMode = trajectoryFollowingMode;
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

    ITrajectoryWriter trajectory = null;
    trajectory = getWriterTrajectory();
    if (trajectory != null) {
      result.add((BaseImpl) trajectory);
    }
    ICatalogReferenceWriter catalogReference = null;
    catalogReference = getWriterCatalogReference();
    if (catalogReference != null) {
      result.add((BaseImpl) catalogReference);
    }
    ITimeReferenceWriter timeReference = null;
    timeReference = getWriterTimeReference();
    if (timeReference != null) {
      result.add((BaseImpl) timeReference);
    }
    ITrajectoryFollowingModeWriter trajectoryFollowingMode = null;
    trajectoryFollowingMode = getWriterTrajectoryFollowingMode();
    if (trajectoryFollowingMode != null) {
      result.add((BaseImpl) trajectoryFollowingMode);
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
  public FollowTrajectoryActionImpl clone() {
    FollowTrajectoryActionImpl clonedObject = new FollowTrajectoryActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    ITrajectoryWriter trajectory = null;
    trajectory = getWriterTrajectory();
    if (trajectory != null) {
      ITrajectoryWriter clonedChild = ((TrajectoryImpl) trajectory).clone();
      clonedObject.setTrajectory(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ICatalogReferenceWriter catalogReference = null;
    catalogReference = getWriterCatalogReference();
    if (catalogReference != null) {
      ICatalogReferenceWriter clonedChild = ((CatalogReferenceImpl) catalogReference).clone();
      clonedObject.setCatalogReference(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITimeReferenceWriter timeReference = null;
    timeReference = getWriterTimeReference();
    if (timeReference != null) {
      ITimeReferenceWriter clonedChild = ((TimeReferenceImpl) timeReference).clone();
      clonedObject.setTimeReference(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITrajectoryFollowingModeWriter trajectoryFollowingMode = null;
    trajectoryFollowingMode = getWriterTrajectoryFollowingMode();
    if (trajectoryFollowingMode != null) {
      ITrajectoryFollowingModeWriter clonedChild =
          ((TrajectoryFollowingModeImpl) trajectoryFollowingMode).clone();
      clonedObject.setTrajectoryFollowingMode(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__TRAJECTORY)) {
      return (IOpenScenarioFlexElement) getTrajectory();
    }
    if (key.equals(OscConstants.ELEMENT__CATALOG_REFERENCE)) {
      return (IOpenScenarioFlexElement) getCatalogReference();
    }
    if (key.equals(OscConstants.ELEMENT__TIME_REFERENCE)) {
      return (IOpenScenarioFlexElement) getTimeReference();
    }
    if (key.equals(OscConstants.ELEMENT__TRAJECTORY_FOLLOWING_MODE)) {
      return (IOpenScenarioFlexElement) getTrajectoryFollowingMode();
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
    return "FollowTrajectoryAction";
  }

  // children
  @Override
  public ITrajectoryWriter getWriterTrajectory() {
    return this.trajectory;
  }

  @Override
  public ICatalogReferenceWriter getWriterCatalogReference() {
    return this.catalogReference;
  }

  @Override
  public ITimeReferenceWriter getWriterTimeReference() {
    return this.timeReference;
  }

  @Override
  public ITrajectoryFollowingModeWriter getWriterTrajectoryFollowingMode() {
    return this.trajectoryFollowingMode;
  }
}
