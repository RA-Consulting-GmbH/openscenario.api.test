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
public class CatalogLocationsImpl extends BaseImpl implements ICatalogLocations, Cloneable {
  protected static Hashtable<String, Class<?>> propertyToType = new Hashtable<String, Class<?>>();

  /** Filling the property to type map */
  static {
  }

  private IVehicleCatalogLocation vehicleCatalog;
  private IControllerCatalogLocation controllerCatalog;
  private IPedestrianCatalogLocation pedestrianCatalog;
  private IMiscObjectCatalogLocation miscObjectCatalog;
  private IEnvironmentCatalogLocation environmentCatalog;
  private IManeuverCatalogLocation maneuverCatalog;
  private ITrajectoryCatalogLocation trajectoryCatalog;
  private IRouteCatalogLocation routeCatalog;
  /** Default constructor */
  public CatalogLocationsImpl() {
    super();
    addAdapter(CatalogLocationsImpl.class, this);
    addAdapter(ICatalogLocations.class, this);
  }

  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IVehicleCatalogLocation getVehicleCatalog() {
    return vehicleCatalog;
  }

  @Override
  public IControllerCatalogLocation getControllerCatalog() {
    return controllerCatalog;
  }

  @Override
  public IPedestrianCatalogLocation getPedestrianCatalog() {
    return pedestrianCatalog;
  }

  @Override
  public IMiscObjectCatalogLocation getMiscObjectCatalog() {
    return miscObjectCatalog;
  }

  @Override
  public IEnvironmentCatalogLocation getEnvironmentCatalog() {
    return environmentCatalog;
  }

  @Override
  public IManeuverCatalogLocation getManeuverCatalog() {
    return maneuverCatalog;
  }

  @Override
  public ITrajectoryCatalogLocation getTrajectoryCatalog() {
    return trajectoryCatalog;
  }

  @Override
  public IRouteCatalogLocation getRouteCatalog() {
    return routeCatalog;
  }
  /**
   * Sets the value of model property vehicleCatalog
   *
   * @param vehicleCatalog from OpenSCENARIO class model specification: [This catalog location is
   *     the first choice to resolve CatalogReferences on vehicle types.]
   */
  public void setVehicleCatalog(IVehicleCatalogLocation vehicleCatalog) {
    this.vehicleCatalog = vehicleCatalog;
  }
  /**
   * Sets the value of model property controllerCatalog
   *
   * @param controllerCatalog from OpenSCENARIO class model specification: [This catalog location is
   *     the first choice to resolve CatalogReferences on controller types.]
   */
  public void setControllerCatalog(IControllerCatalogLocation controllerCatalog) {
    this.controllerCatalog = controllerCatalog;
  }
  /**
   * Sets the value of model property pedestrianCatalog
   *
   * @param pedestrianCatalog from OpenSCENARIO class model specification: [This catalog location is
   *     the first choice to resolve CatalogReferences on pedestrian types.]
   */
  public void setPedestrianCatalog(IPedestrianCatalogLocation pedestrianCatalog) {
    this.pedestrianCatalog = pedestrianCatalog;
  }
  /**
   * Sets the value of model property miscObjectCatalog
   *
   * @param miscObjectCatalog from OpenSCENARIO class model specification: [This catalog location is
   *     the first choice to resolve CatalogReferences on miscellaneous object types.]
   */
  public void setMiscObjectCatalog(IMiscObjectCatalogLocation miscObjectCatalog) {
    this.miscObjectCatalog = miscObjectCatalog;
  }
  /**
   * Sets the value of model property environmentCatalog
   *
   * @param environmentCatalog from OpenSCENARIO class model specification: [This catalog location
   *     is the first choice to resolve CatalogReferences on environment types.]
   */
  public void setEnvironmentCatalog(IEnvironmentCatalogLocation environmentCatalog) {
    this.environmentCatalog = environmentCatalog;
  }
  /**
   * Sets the value of model property maneuverCatalog
   *
   * @param maneuverCatalog from OpenSCENARIO class model specification: [This catalog location is
   *     the first choice to resolve CatalogReferences on maneuver types.]
   */
  public void setManeuverCatalog(IManeuverCatalogLocation maneuverCatalog) {
    this.maneuverCatalog = maneuverCatalog;
  }
  /**
   * Sets the value of model property trajectoryCatalog
   *
   * @param trajectoryCatalog from OpenSCENARIO class model specification: [This catalog location is
   *     the first choice to resolve CatalogReferences on trajectory types.]
   */
  public void setTrajectoryCatalog(ITrajectoryCatalogLocation trajectoryCatalog) {
    this.trajectoryCatalog = trajectoryCatalog;
  }
  /**
   * Sets the value of model property routeCatalog
   *
   * @param routeCatalog from OpenSCENARIO class model specification: [This catalog location is the
   *     first choice to resolve CatalogReferences on route types.]
   */
  public void setRouteCatalog(IRouteCatalogLocation routeCatalog) {
    this.routeCatalog = routeCatalog;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {}

  @Override
  public Class<?> getTypeFromAttributeName(String attributeKey) {
    return propertyToType.get(attributeKey);
  }

  /**
   * A list of all aggregated children (lists are flattened). This may be used for applying a
   * specific method for any child.
   *
   * @return a list with all children (as BaseImpl)
   */
  public List<BaseImpl> getChildren() {
    List<BaseImpl> result = new ArrayList<BaseImpl>();

    IVehicleCatalogLocation vehicleCatalog = null;
    vehicleCatalog = getVehicleCatalog();
    if (vehicleCatalog != null) {
      result.add((BaseImpl) vehicleCatalog);
    }
    IControllerCatalogLocation controllerCatalog = null;
    controllerCatalog = getControllerCatalog();
    if (controllerCatalog != null) {
      result.add((BaseImpl) controllerCatalog);
    }
    IPedestrianCatalogLocation pedestrianCatalog = null;
    pedestrianCatalog = getPedestrianCatalog();
    if (pedestrianCatalog != null) {
      result.add((BaseImpl) pedestrianCatalog);
    }
    IMiscObjectCatalogLocation miscObjectCatalog = null;
    miscObjectCatalog = getMiscObjectCatalog();
    if (miscObjectCatalog != null) {
      result.add((BaseImpl) miscObjectCatalog);
    }
    IEnvironmentCatalogLocation environmentCatalog = null;
    environmentCatalog = getEnvironmentCatalog();
    if (environmentCatalog != null) {
      result.add((BaseImpl) environmentCatalog);
    }
    IManeuverCatalogLocation maneuverCatalog = null;
    maneuverCatalog = getManeuverCatalog();
    if (maneuverCatalog != null) {
      result.add((BaseImpl) maneuverCatalog);
    }
    ITrajectoryCatalogLocation trajectoryCatalog = null;
    trajectoryCatalog = getTrajectoryCatalog();
    if (trajectoryCatalog != null) {
      result.add((BaseImpl) trajectoryCatalog);
    }
    IRouteCatalogLocation routeCatalog = null;
    routeCatalog = getRouteCatalog();
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
  public CatalogLocationsImpl clone() {
    CatalogLocationsImpl clonedObject = new CatalogLocationsImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IVehicleCatalogLocation vehicleCatalog = null;
    vehicleCatalog = getVehicleCatalog();
    if (vehicleCatalog != null) {
      VehicleCatalogLocationImpl clonedChild =
          ((VehicleCatalogLocationImpl) vehicleCatalog).clone();
      clonedObject.setVehicleCatalog(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IControllerCatalogLocation controllerCatalog = null;
    controllerCatalog = getControllerCatalog();
    if (controllerCatalog != null) {
      ControllerCatalogLocationImpl clonedChild =
          ((ControllerCatalogLocationImpl) controllerCatalog).clone();
      clonedObject.setControllerCatalog(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IPedestrianCatalogLocation pedestrianCatalog = null;
    pedestrianCatalog = getPedestrianCatalog();
    if (pedestrianCatalog != null) {
      PedestrianCatalogLocationImpl clonedChild =
          ((PedestrianCatalogLocationImpl) pedestrianCatalog).clone();
      clonedObject.setPedestrianCatalog(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IMiscObjectCatalogLocation miscObjectCatalog = null;
    miscObjectCatalog = getMiscObjectCatalog();
    if (miscObjectCatalog != null) {
      MiscObjectCatalogLocationImpl clonedChild =
          ((MiscObjectCatalogLocationImpl) miscObjectCatalog).clone();
      clonedObject.setMiscObjectCatalog(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IEnvironmentCatalogLocation environmentCatalog = null;
    environmentCatalog = getEnvironmentCatalog();
    if (environmentCatalog != null) {
      EnvironmentCatalogLocationImpl clonedChild =
          ((EnvironmentCatalogLocationImpl) environmentCatalog).clone();
      clonedObject.setEnvironmentCatalog(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IManeuverCatalogLocation maneuverCatalog = null;
    maneuverCatalog = getManeuverCatalog();
    if (maneuverCatalog != null) {
      ManeuverCatalogLocationImpl clonedChild =
          ((ManeuverCatalogLocationImpl) maneuverCatalog).clone();
      clonedObject.setManeuverCatalog(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITrajectoryCatalogLocation trajectoryCatalog = null;
    trajectoryCatalog = getTrajectoryCatalog();
    if (trajectoryCatalog != null) {
      TrajectoryCatalogLocationImpl clonedChild =
          ((TrajectoryCatalogLocationImpl) trajectoryCatalog).clone();
      clonedObject.setTrajectoryCatalog(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IRouteCatalogLocation routeCatalog = null;
    routeCatalog = getRouteCatalog();
    if (routeCatalog != null) {
      RouteCatalogLocationImpl clonedChild = ((RouteCatalogLocationImpl) routeCatalog).clone();
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
    } else if (key.equals(OscConstants.ELEMENT__CONTROLLER_CATALOG)) {
      return (IOpenScenarioFlexElement) getControllerCatalog();
    } else if (key.equals(OscConstants.ELEMENT__PEDESTRIAN_CATALOG)) {
      return (IOpenScenarioFlexElement) getPedestrianCatalog();
    } else if (key.equals(OscConstants.ELEMENT__MISC_OBJECT_CATALOG)) {
      return (IOpenScenarioFlexElement) getMiscObjectCatalog();
    } else if (key.equals(OscConstants.ELEMENT__ENVIRONMENT_CATALOG)) {
      return (IOpenScenarioFlexElement) getEnvironmentCatalog();
    } else if (key.equals(OscConstants.ELEMENT__MANEUVER_CATALOG)) {
      return (IOpenScenarioFlexElement) getManeuverCatalog();
    } else if (key.equals(OscConstants.ELEMENT__TRAJECTORY_CATALOG)) {
      return (IOpenScenarioFlexElement) getTrajectoryCatalog();
    } else if (key.equals(OscConstants.ELEMENT__ROUTE_CATALOG)) {
      return (IOpenScenarioFlexElement) getRouteCatalog();
    } else {
      throw new KeyNotSupportedException();
    }
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
}
