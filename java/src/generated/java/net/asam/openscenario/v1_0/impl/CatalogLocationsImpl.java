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
import net.asam.openscenario.v1_0.api.ICatalogLocations;
import net.asam.openscenario.v1_0.api.IControllerCatalogLocation;
import net.asam.openscenario.v1_0.api.IEnvironmentCatalogLocation;
import net.asam.openscenario.v1_0.api.IManeuverCatalogLocation;
import net.asam.openscenario.v1_0.api.IMiscObjectCatalogLocation;
import net.asam.openscenario.v1_0.api.IPedestrianCatalogLocation;
import net.asam.openscenario.v1_0.api.IRouteCatalogLocation;
import net.asam.openscenario.v1_0.api.ITrajectoryCatalogLocation;
import net.asam.openscenario.v1_0.api.IVehicleCatalogLocation;
import net.asam.openscenario.v1_0.api.writer.ICatalogLocationsWriter;
import net.asam.openscenario.v1_0.api.writer.IControllerCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IEnvironmentCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IManeuverCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IMiscObjectCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IPedestrianCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IRouteCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.ITrajectoryCatalogLocationWriter;
import net.asam.openscenario.v1_0.api.writer.IVehicleCatalogLocationWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ICatalogLocations. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ICatalogLocations)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class CatalogLocationsImpl extends BaseImpl implements ICatalogLocationsWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IVehicleCatalogLocationWriter vehicleCatalog;
  private IControllerCatalogLocationWriter controllerCatalog;
  private IPedestrianCatalogLocationWriter pedestrianCatalog;
  private IMiscObjectCatalogLocationWriter miscObjectCatalog;
  private IEnvironmentCatalogLocationWriter environmentCatalog;
  private IManeuverCatalogLocationWriter maneuverCatalog;
  private ITrajectoryCatalogLocationWriter trajectoryCatalog;
  private IRouteCatalogLocationWriter routeCatalog;

  /** Default constructor */
  public CatalogLocationsImpl() {
    super();
    addAdapter(CatalogLocationsImpl.class, this);
    addAdapter(ICatalogLocations.class, this);
    addAdapter(ICatalogLocationsWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IVehicleCatalogLocation getVehicleCatalog() {
    return this.vehicleCatalog;
  }

  @Override
  public IControllerCatalogLocation getControllerCatalog() {
    return this.controllerCatalog;
  }

  @Override
  public IPedestrianCatalogLocation getPedestrianCatalog() {
    return this.pedestrianCatalog;
  }

  @Override
  public IMiscObjectCatalogLocation getMiscObjectCatalog() {
    return this.miscObjectCatalog;
  }

  @Override
  public IEnvironmentCatalogLocation getEnvironmentCatalog() {
    return this.environmentCatalog;
  }

  @Override
  public IManeuverCatalogLocation getManeuverCatalog() {
    return this.maneuverCatalog;
  }

  @Override
  public ITrajectoryCatalogLocation getTrajectoryCatalog() {
    return this.trajectoryCatalog;
  }

  @Override
  public IRouteCatalogLocation getRouteCatalog() {
    return this.routeCatalog;
  }

  @Override
  public void setVehicleCatalog(IVehicleCatalogLocationWriter vehicleCatalog) {
    this.vehicleCatalog = vehicleCatalog;
  }

  @Override
  public void setControllerCatalog(IControllerCatalogLocationWriter controllerCatalog) {
    this.controllerCatalog = controllerCatalog;
  }

  @Override
  public void setPedestrianCatalog(IPedestrianCatalogLocationWriter pedestrianCatalog) {
    this.pedestrianCatalog = pedestrianCatalog;
  }

  @Override
  public void setMiscObjectCatalog(IMiscObjectCatalogLocationWriter miscObjectCatalog) {
    this.miscObjectCatalog = miscObjectCatalog;
  }

  @Override
  public void setEnvironmentCatalog(IEnvironmentCatalogLocationWriter environmentCatalog) {
    this.environmentCatalog = environmentCatalog;
  }

  @Override
  public void setManeuverCatalog(IManeuverCatalogLocationWriter maneuverCatalog) {
    this.maneuverCatalog = maneuverCatalog;
  }

  @Override
  public void setTrajectoryCatalog(ITrajectoryCatalogLocationWriter trajectoryCatalog) {
    this.trajectoryCatalog = trajectoryCatalog;
  }

  @Override
  public void setRouteCatalog(IRouteCatalogLocationWriter routeCatalog) {
    this.routeCatalog = routeCatalog;
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

    IVehicleCatalogLocationWriter vehicleCatalog = null;
    vehicleCatalog = getWriterVehicleCatalog();
    if (vehicleCatalog != null) {
      result.add((BaseImpl) vehicleCatalog);
    }
    IControllerCatalogLocationWriter controllerCatalog = null;
    controllerCatalog = getWriterControllerCatalog();
    if (controllerCatalog != null) {
      result.add((BaseImpl) controllerCatalog);
    }
    IPedestrianCatalogLocationWriter pedestrianCatalog = null;
    pedestrianCatalog = getWriterPedestrianCatalog();
    if (pedestrianCatalog != null) {
      result.add((BaseImpl) pedestrianCatalog);
    }
    IMiscObjectCatalogLocationWriter miscObjectCatalog = null;
    miscObjectCatalog = getWriterMiscObjectCatalog();
    if (miscObjectCatalog != null) {
      result.add((BaseImpl) miscObjectCatalog);
    }
    IEnvironmentCatalogLocationWriter environmentCatalog = null;
    environmentCatalog = getWriterEnvironmentCatalog();
    if (environmentCatalog != null) {
      result.add((BaseImpl) environmentCatalog);
    }
    IManeuverCatalogLocationWriter maneuverCatalog = null;
    maneuverCatalog = getWriterManeuverCatalog();
    if (maneuverCatalog != null) {
      result.add((BaseImpl) maneuverCatalog);
    }
    ITrajectoryCatalogLocationWriter trajectoryCatalog = null;
    trajectoryCatalog = getWriterTrajectoryCatalog();
    if (trajectoryCatalog != null) {
      result.add((BaseImpl) trajectoryCatalog);
    }
    IRouteCatalogLocationWriter routeCatalog = null;
    routeCatalog = getWriterRouteCatalog();
    if (routeCatalog != null) {
      result.add((BaseImpl) routeCatalog);
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
  public CatalogLocationsImpl clone() {
    CatalogLocationsImpl clonedObject = new CatalogLocationsImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IVehicleCatalogLocationWriter vehicleCatalog = null;
    vehicleCatalog = getWriterVehicleCatalog();
    if (vehicleCatalog != null) {
      IVehicleCatalogLocationWriter clonedChild =
          ((VehicleCatalogLocationImpl) vehicleCatalog).clone();
      clonedObject.setVehicleCatalog(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IControllerCatalogLocationWriter controllerCatalog = null;
    controllerCatalog = getWriterControllerCatalog();
    if (controllerCatalog != null) {
      IControllerCatalogLocationWriter clonedChild =
          ((ControllerCatalogLocationImpl) controllerCatalog).clone();
      clonedObject.setControllerCatalog(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IPedestrianCatalogLocationWriter pedestrianCatalog = null;
    pedestrianCatalog = getWriterPedestrianCatalog();
    if (pedestrianCatalog != null) {
      IPedestrianCatalogLocationWriter clonedChild =
          ((PedestrianCatalogLocationImpl) pedestrianCatalog).clone();
      clonedObject.setPedestrianCatalog(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IMiscObjectCatalogLocationWriter miscObjectCatalog = null;
    miscObjectCatalog = getWriterMiscObjectCatalog();
    if (miscObjectCatalog != null) {
      IMiscObjectCatalogLocationWriter clonedChild =
          ((MiscObjectCatalogLocationImpl) miscObjectCatalog).clone();
      clonedObject.setMiscObjectCatalog(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IEnvironmentCatalogLocationWriter environmentCatalog = null;
    environmentCatalog = getWriterEnvironmentCatalog();
    if (environmentCatalog != null) {
      IEnvironmentCatalogLocationWriter clonedChild =
          ((EnvironmentCatalogLocationImpl) environmentCatalog).clone();
      clonedObject.setEnvironmentCatalog(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IManeuverCatalogLocationWriter maneuverCatalog = null;
    maneuverCatalog = getWriterManeuverCatalog();
    if (maneuverCatalog != null) {
      IManeuverCatalogLocationWriter clonedChild =
          ((ManeuverCatalogLocationImpl) maneuverCatalog).clone();
      clonedObject.setManeuverCatalog(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITrajectoryCatalogLocationWriter trajectoryCatalog = null;
    trajectoryCatalog = getWriterTrajectoryCatalog();
    if (trajectoryCatalog != null) {
      ITrajectoryCatalogLocationWriter clonedChild =
          ((TrajectoryCatalogLocationImpl) trajectoryCatalog).clone();
      clonedObject.setTrajectoryCatalog(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IRouteCatalogLocationWriter routeCatalog = null;
    routeCatalog = getWriterRouteCatalog();
    if (routeCatalog != null) {
      IRouteCatalogLocationWriter clonedChild = ((RouteCatalogLocationImpl) routeCatalog).clone();
      clonedObject.setRouteCatalog(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__VEHICLE_CATALOG)) {
      return (IOpenScenarioFlexElement) getVehicleCatalog();
    }
    if (key.equals(OscConstants.ELEMENT__CONTROLLER_CATALOG)) {
      return (IOpenScenarioFlexElement) getControllerCatalog();
    }
    if (key.equals(OscConstants.ELEMENT__PEDESTRIAN_CATALOG)) {
      return (IOpenScenarioFlexElement) getPedestrianCatalog();
    }
    if (key.equals(OscConstants.ELEMENT__MISC_OBJECT_CATALOG)) {
      return (IOpenScenarioFlexElement) getMiscObjectCatalog();
    }
    if (key.equals(OscConstants.ELEMENT__ENVIRONMENT_CATALOG)) {
      return (IOpenScenarioFlexElement) getEnvironmentCatalog();
    }
    if (key.equals(OscConstants.ELEMENT__MANEUVER_CATALOG)) {
      return (IOpenScenarioFlexElement) getManeuverCatalog();
    }
    if (key.equals(OscConstants.ELEMENT__TRAJECTORY_CATALOG)) {
      return (IOpenScenarioFlexElement) getTrajectoryCatalog();
    }
    if (key.equals(OscConstants.ELEMENT__ROUTE_CATALOG)) {
      return (IOpenScenarioFlexElement) getRouteCatalog();
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
    return "CatalogLocations";
  }

  // children
  @Override
  public IVehicleCatalogLocationWriter getWriterVehicleCatalog() {
    return this.vehicleCatalog;
  }

  @Override
  public IControllerCatalogLocationWriter getWriterControllerCatalog() {
    return this.controllerCatalog;
  }

  @Override
  public IPedestrianCatalogLocationWriter getWriterPedestrianCatalog() {
    return this.pedestrianCatalog;
  }

  @Override
  public IMiscObjectCatalogLocationWriter getWriterMiscObjectCatalog() {
    return this.miscObjectCatalog;
  }

  @Override
  public IEnvironmentCatalogLocationWriter getWriterEnvironmentCatalog() {
    return this.environmentCatalog;
  }

  @Override
  public IManeuverCatalogLocationWriter getWriterManeuverCatalog() {
    return this.maneuverCatalog;
  }

  @Override
  public ITrajectoryCatalogLocationWriter getWriterTrajectoryCatalog() {
    return this.trajectoryCatalog;
  }

  @Override
  public IRouteCatalogLocationWriter getWriterRouteCatalog() {
    return this.routeCatalog;
  }
}
