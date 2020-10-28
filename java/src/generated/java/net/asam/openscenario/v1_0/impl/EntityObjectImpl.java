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
import net.asam.openscenario.v1_0.api.IEntityObject;
import net.asam.openscenario.v1_0.api.IMiscObject;
import net.asam.openscenario.v1_0.api.IPedestrian;
import net.asam.openscenario.v1_0.api.IVehicle;
import net.asam.openscenario.v1_0.api.writer.ICatalogReferenceWriter;
import net.asam.openscenario.v1_0.api.writer.IEntityObjectWriter;
import net.asam.openscenario.v1_0.api.writer.IMiscObjectWriter;
import net.asam.openscenario.v1_0.api.writer.IPedestrianWriter;
import net.asam.openscenario.v1_0.api.writer.IVehicleWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IEntityObject. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IEntityObject)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class EntityObjectImpl extends BaseImpl implements IEntityObjectWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private ICatalogReferenceWriter catalogReference;
  private IVehicleWriter vehicle;
  private IPedestrianWriter pedestrian;
  private IMiscObjectWriter miscObject;

  /** Default constructor */
  public EntityObjectImpl() {
    super();
    addAdapter(EntityObjectImpl.class, this);
    addAdapter(IEntityObject.class, this);
    addAdapter(IEntityObjectWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public ICatalogReference getCatalogReference() {
    return this.catalogReference;
  }

  @Override
  public IVehicle getVehicle() {
    return this.vehicle;
  }

  @Override
  public IPedestrian getPedestrian() {
    return this.pedestrian;
  }

  @Override
  public IMiscObject getMiscObject() {
    return this.miscObject;
  }

  @Override
  public void setCatalogReference(ICatalogReferenceWriter catalogReference) {
    this.catalogReference = catalogReference;
    this.vehicle = null;
    this.pedestrian = null;
    this.miscObject = null;
  }

  @Override
  public void setVehicle(IVehicleWriter vehicle) {
    this.vehicle = vehicle;
    this.catalogReference = null;
    this.pedestrian = null;
    this.miscObject = null;
  }

  @Override
  public void setPedestrian(IPedestrianWriter pedestrian) {
    this.pedestrian = pedestrian;
    this.catalogReference = null;
    this.vehicle = null;
    this.miscObject = null;
  }

  @Override
  public void setMiscObject(IMiscObjectWriter miscObject) {
    this.miscObject = miscObject;
    this.catalogReference = null;
    this.vehicle = null;
    this.pedestrian = null;
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

    ICatalogReferenceWriter catalogReference = null;
    catalogReference = getWriterCatalogReference();
    if (catalogReference != null) {
      result.add((BaseImpl) catalogReference);
    }
    IVehicleWriter vehicle = null;
    vehicle = getWriterVehicle();
    if (vehicle != null) {
      result.add((BaseImpl) vehicle);
    }
    IPedestrianWriter pedestrian = null;
    pedestrian = getWriterPedestrian();
    if (pedestrian != null) {
      result.add((BaseImpl) pedestrian);
    }
    IMiscObjectWriter miscObject = null;
    miscObject = getWriterMiscObject();
    if (miscObject != null) {
      result.add((BaseImpl) miscObject);
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
  public EntityObjectImpl clone() {
    EntityObjectImpl clonedObject = new EntityObjectImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    ICatalogReferenceWriter catalogReference = null;
    catalogReference = getWriterCatalogReference();
    if (catalogReference != null) {
      ICatalogReferenceWriter clonedChild = ((CatalogReferenceImpl) catalogReference).clone();
      clonedObject.setCatalogReference(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IVehicleWriter vehicle = null;
    vehicle = getWriterVehicle();
    if (vehicle != null) {
      IVehicleWriter clonedChild = ((VehicleImpl) vehicle).clone();
      clonedObject.setVehicle(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IPedestrianWriter pedestrian = null;
    pedestrian = getWriterPedestrian();
    if (pedestrian != null) {
      IPedestrianWriter clonedChild = ((PedestrianImpl) pedestrian).clone();
      clonedObject.setPedestrian(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IMiscObjectWriter miscObject = null;
    miscObject = getWriterMiscObject();
    if (miscObject != null) {
      IMiscObjectWriter clonedChild = ((MiscObjectImpl) miscObject).clone();
      clonedObject.setMiscObject(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__CATALOG_REFERENCE)) {
      return (IOpenScenarioFlexElement) getCatalogReference();
    }
    if (key.equals(OscConstants.ELEMENT__VEHICLE)) {
      return (IOpenScenarioFlexElement) getVehicle();
    }
    if (key.equals(OscConstants.ELEMENT__PEDESTRIAN)) {
      return (IOpenScenarioFlexElement) getPedestrian();
    }
    if (key.equals(OscConstants.ELEMENT__MISC_OBJECT)) {
      return (IOpenScenarioFlexElement) getMiscObject();
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
    return "EntityObject";
  }

  // children
  @Override
  public ICatalogReferenceWriter getWriterCatalogReference() {
    return this.catalogReference;
  }

  @Override
  public IVehicleWriter getWriterVehicle() {
    return this.vehicle;
  }

  @Override
  public IPedestrianWriter getWriterPedestrian() {
    return this.pedestrian;
  }

  @Override
  public IMiscObjectWriter getWriterMiscObject() {
    return this.miscObject;
  }
}
