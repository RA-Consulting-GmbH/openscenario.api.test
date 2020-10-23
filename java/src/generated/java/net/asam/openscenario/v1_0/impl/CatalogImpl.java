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
import net.asam.openscenario.v1_0.api.ICatalog;
import net.asam.openscenario.v1_0.api.IController;
import net.asam.openscenario.v1_0.api.IEnvironment;
import net.asam.openscenario.v1_0.api.IManeuver;
import net.asam.openscenario.v1_0.api.IMiscObject;
import net.asam.openscenario.v1_0.api.IPedestrian;
import net.asam.openscenario.v1_0.api.IRoute;
import net.asam.openscenario.v1_0.api.ITrajectory;
import net.asam.openscenario.v1_0.api.IVehicle;
import net.asam.openscenario.v1_0.api.writer.ICatalogWriter;
import net.asam.openscenario.v1_0.api.writer.IControllerWriter;
import net.asam.openscenario.v1_0.api.writer.IEnvironmentWriter;
import net.asam.openscenario.v1_0.api.writer.IManeuverWriter;
import net.asam.openscenario.v1_0.api.writer.IMiscObjectWriter;
import net.asam.openscenario.v1_0.api.writer.IPedestrianWriter;
import net.asam.openscenario.v1_0.api.writer.IRouteWriter;
import net.asam.openscenario.v1_0.api.writer.ITrajectoryWriter;
import net.asam.openscenario.v1_0.api.writer.IVehicleWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ICatalog. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ICatalog)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class CatalogImpl extends BaseImpl implements ICatalog, ICatalogWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__NAME, SimpleType.STRING);
  }

  private String name;
  private List<IVehicle> vehicles;
  private List<IController> controllers;
  private List<IPedestrian> pedestrians;
  private List<IMiscObject> miscObjects;
  private List<IEnvironment> environments;
  private List<IManeuver> maneuvers;
  private List<ITrajectory> trajectories;
  private List<IRoute> routes;

  private List<IVehicleWriter> vehiclesWriters;
  private List<IControllerWriter> controllersWriters;
  private List<IPedestrianWriter> pedestriansWriters;
  private List<IMiscObjectWriter> miscObjectsWriters;
  private List<IEnvironmentWriter> environmentsWriters;
  private List<IManeuverWriter> maneuversWriters;
  private List<ITrajectoryWriter> trajectoriesWriters;
  private List<IRouteWriter> routesWriters;

  /** Default constructor */
  public CatalogImpl() {
    super();
    addAdapter(CatalogImpl.class, this);
    addAdapter(ICatalog.class, this);
    addAdapter(ICatalogWriter.class, this);
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
  public List<IVehicle> getVehicles() {
    return this.vehicles;
  }

  @Override
  public List<IController> getControllers() {
    return this.controllers;
  }

  @Override
  public List<IPedestrian> getPedestrians() {
    return this.pedestrians;
  }

  @Override
  public List<IMiscObject> getMiscObjects() {
    return this.miscObjects;
  }

  @Override
  public List<IEnvironment> getEnvironments() {
    return this.environments;
  }

  @Override
  public List<IManeuver> getManeuvers() {
    return this.maneuvers;
  }

  @Override
  public List<ITrajectory> getTrajectories() {
    return this.trajectories;
  }

  @Override
  public List<IRoute> getRoutes() {
    return this.routes;
  }
  /**
   * Sets the value of model property name
   *
   * @param name from OpenSCENARIO class model specification: [Name of the catalog.]
   */
  public void setName(String name) {
    this.name = name;
  }
  /**
   * Sets the value of model property vehicles
   *
   * @param vehicles from OpenSCENARIO class model specification: [A list of vehicle types that can
   *     be reused in a scenario.]
   */
  public void setVehicles(List<IVehicle> vehicles) {
    this.vehicles = vehicles;
  }
  /**
   * Sets the value of model property controllers
   *
   * @param controllers from OpenSCENARIO class model specification: [A list of controller types
   *     that can be reused in a scenario.]
   */
  public void setControllers(List<IController> controllers) {
    this.controllers = controllers;
  }
  /**
   * Sets the value of model property pedestrians
   *
   * @param pedestrians from OpenSCENARIO class model specification: [A list of pedestrian types
   *     that can be reused in a scenario.]
   */
  public void setPedestrians(List<IPedestrian> pedestrians) {
    this.pedestrians = pedestrians;
  }
  /**
   * Sets the value of model property miscObjects
   *
   * @param miscObjects from OpenSCENARIO class model specification: [A list of miscellaneous object
   *     type that that can be reused in a scenario.]
   */
  public void setMiscObjects(List<IMiscObject> miscObjects) {
    this.miscObjects = miscObjects;
  }
  /**
   * Sets the value of model property environments
   *
   * @param environments from OpenSCENARIO class model specification: [A list of environment types
   *     that can be reused in a scenario.]
   */
  public void setEnvironments(List<IEnvironment> environments) {
    this.environments = environments;
  }
  /**
   * Sets the value of model property maneuvers
   *
   * @param maneuvers from OpenSCENARIO class model specification: [A list of maneuver types that
   *     can be reused in a scenario.]
   */
  public void setManeuvers(List<IManeuver> maneuvers) {
    this.maneuvers = maneuvers;
  }
  /**
   * Sets the value of model property trajectories
   *
   * @param trajectories from OpenSCENARIO class model specification: [A list of trajectory types
   *     that can be reused in a scenario.]
   */
  public void setTrajectories(List<ITrajectory> trajectories) {
    this.trajectories = trajectories;
  }
  /**
   * Sets the value of model property routes
   *
   * @param routes from OpenSCENARIO class model specification: [A list of route types that can be
   *     reused in a scenario.]
   */
  public void setRoutes(List<IRoute> routes) {
    this.routes = routes;
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

  /**
   * A list of all aggregated children (lists are flattened). This may be used for applying a
   * specific method for any child.
   *
   * @return a list with all children (as BaseImpl)
   */
  @Override
  public List<BaseImpl> getChildren() {
    List<BaseImpl> result = new ArrayList<>();

    List<IVehicle> vehicles = null;
    vehicles = getVehicles();
    if (vehicles != null) {
      for (IVehicle item : vehicles) {
        result.add((BaseImpl) item);
      }
    }
    List<IController> controllers = null;
    controllers = getControllers();
    if (controllers != null) {
      for (IController item : controllers) {
        result.add((BaseImpl) item);
      }
    }
    List<IPedestrian> pedestrians = null;
    pedestrians = getPedestrians();
    if (pedestrians != null) {
      for (IPedestrian item : pedestrians) {
        result.add((BaseImpl) item);
      }
    }
    List<IMiscObject> miscObjects = null;
    miscObjects = getMiscObjects();
    if (miscObjects != null) {
      for (IMiscObject item : miscObjects) {
        result.add((BaseImpl) item);
      }
    }
    List<IEnvironment> environments = null;
    environments = getEnvironments();
    if (environments != null) {
      for (IEnvironment item : environments) {
        result.add((BaseImpl) item);
      }
    }
    List<IManeuver> maneuvers = null;
    maneuvers = getManeuvers();
    if (maneuvers != null) {
      for (IManeuver item : maneuvers) {
        result.add((BaseImpl) item);
      }
    }
    List<ITrajectory> trajectories = null;
    trajectories = getTrajectories();
    if (trajectories != null) {
      for (ITrajectory item : trajectories) {
        result.add((BaseImpl) item);
      }
    }
    List<IRoute> routes = null;
    routes = getRoutes();
    if (routes != null) {
      for (IRoute item : routes) {
        result.add((BaseImpl) item);
      }
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
  public CatalogImpl clone() {
    CatalogImpl clonedObject = new CatalogImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setName(getName());
    // clone children
    List<IVehicle> vehicles = null;
    vehicles = getVehicles();
    if (vehicles != null) {
      List<IVehicle> clonedList = new ArrayList<>();
      for (IVehicle item : vehicles) {
        VehicleImpl clonedChild = ((VehicleImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setVehicles(clonedList);
    }
    List<IController> controllers = null;
    controllers = getControllers();
    if (controllers != null) {
      List<IController> clonedList = new ArrayList<>();
      for (IController item : controllers) {
        ControllerImpl clonedChild = ((ControllerImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setControllers(clonedList);
    }
    List<IPedestrian> pedestrians = null;
    pedestrians = getPedestrians();
    if (pedestrians != null) {
      List<IPedestrian> clonedList = new ArrayList<>();
      for (IPedestrian item : pedestrians) {
        PedestrianImpl clonedChild = ((PedestrianImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setPedestrians(clonedList);
    }
    List<IMiscObject> miscObjects = null;
    miscObjects = getMiscObjects();
    if (miscObjects != null) {
      List<IMiscObject> clonedList = new ArrayList<>();
      for (IMiscObject item : miscObjects) {
        MiscObjectImpl clonedChild = ((MiscObjectImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setMiscObjects(clonedList);
    }
    List<IEnvironment> environments = null;
    environments = getEnvironments();
    if (environments != null) {
      List<IEnvironment> clonedList = new ArrayList<>();
      for (IEnvironment item : environments) {
        EnvironmentImpl clonedChild = ((EnvironmentImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setEnvironments(clonedList);
    }
    List<IManeuver> maneuvers = null;
    maneuvers = getManeuvers();
    if (maneuvers != null) {
      List<IManeuver> clonedList = new ArrayList<>();
      for (IManeuver item : maneuvers) {
        ManeuverImpl clonedChild = ((ManeuverImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setManeuvers(clonedList);
    }
    List<ITrajectory> trajectories = null;
    trajectories = getTrajectories();
    if (trajectories != null) {
      List<ITrajectory> clonedList = new ArrayList<>();
      for (ITrajectory item : trajectories) {
        TrajectoryImpl clonedChild = ((TrajectoryImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setTrajectories(clonedList);
    }
    List<IRoute> routes = null;
    routes = getRoutes();
    if (routes != null) {
      List<IRoute> clonedList = new ArrayList<>();
      for (IRoute item : routes) {
        RouteImpl clonedChild = ((RouteImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setRoutes(clonedList);
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
    throw new KeyNotSupportedException();
  }

  @SuppressWarnings("unchecked")
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key)
      throws KeyNotSupportedException {

    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ELEMENT__VEHICLE)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getVehicles();
    }
    if (key.equals(OscConstants.ELEMENT__CONTROLLER)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getControllers();
    }
    if (key.equals(OscConstants.ELEMENT__PEDESTRIAN)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getPedestrians();
    }
    if (key.equals(OscConstants.ELEMENT__MISC_OBJECT)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getMiscObjects();
    }
    if (key.equals(OscConstants.ELEMENT__ENVIRONMENT)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getEnvironments();
    }
    if (key.equals(OscConstants.ELEMENT__MANEUVER)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getManeuvers();
    }
    if (key.equals(OscConstants.ELEMENT__TRAJECTORY)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getTrajectories();
    }
    if (key.equals(OscConstants.ELEMENT__ROUTE)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getRoutes();
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
    return "Catalog";
  }

  @Override
  public void writeToName(String name) {
    setName(name);
  }

  @Override
  public void writeParameterToName(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__NAME, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromName() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__NAME);
  }

  @Override
  public boolean isNameParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__NAME);
  }

  // children

  @Override
  public List<IVehicleWriter> getVehiclesWriter() {
    return this.vehiclesWriters;
  }

  @Override
  public List<IControllerWriter> getControllersWriter() {
    return this.controllersWriters;
  }

  @Override
  public List<IPedestrianWriter> getPedestriansWriter() {
    return this.pedestriansWriters;
  }

  @Override
  public List<IMiscObjectWriter> getMiscObjectsWriter() {
    return this.miscObjectsWriters;
  }

  @Override
  public List<IEnvironmentWriter> getEnvironmentsWriter() {
    return this.environmentsWriters;
  }

  @Override
  public List<IManeuverWriter> getManeuversWriter() {
    return this.maneuversWriters;
  }

  @Override
  public List<ITrajectoryWriter> getTrajectoriesWriter() {
    return this.trajectoriesWriters;
  }

  @Override
  public List<IRouteWriter> getRoutesWriter() {
    return this.routesWriters;
  }

  @Override
  public void setVehiclesWriter(List<IVehicleWriter> vehiclesWriters) {
    this.vehiclesWriters = vehiclesWriters;
  }

  @Override
  public void setControllersWriter(List<IControllerWriter> controllersWriters) {
    this.controllersWriters = controllersWriters;
  }

  @Override
  public void setPedestriansWriter(List<IPedestrianWriter> pedestriansWriters) {
    this.pedestriansWriters = pedestriansWriters;
  }

  @Override
  public void setMiscObjectsWriter(List<IMiscObjectWriter> miscObjectsWriters) {
    this.miscObjectsWriters = miscObjectsWriters;
  }

  @Override
  public void setEnvironmentsWriter(List<IEnvironmentWriter> environmentsWriters) {
    this.environmentsWriters = environmentsWriters;
  }

  @Override
  public void setManeuversWriter(List<IManeuverWriter> maneuversWriters) {
    this.maneuversWriters = maneuversWriters;
  }

  @Override
  public void setTrajectoriesWriter(List<ITrajectoryWriter> trajectoriesWriters) {
    this.trajectoriesWriters = trajectoriesWriters;
  }

  @Override
  public void setRoutesWriter(List<IRouteWriter> routesWriters) {
    this.routesWriters = routesWriters;
  }
}
