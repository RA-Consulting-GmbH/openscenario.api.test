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
import java.util.Iterator;
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
public class CatalogImpl extends BaseImpl implements ICatalogWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__NAME, SimpleType.STRING);
  }

  private String name;
  private List<IVehicleWriter> vehicles = new ArrayList<>();
  private List<IControllerWriter> controllers = new ArrayList<>();
  private List<IPedestrianWriter> pedestrians = new ArrayList<>();
  private List<IMiscObjectWriter> miscObjects = new ArrayList<>();
  private List<IEnvironmentWriter> environments = new ArrayList<>();
  private List<IManeuverWriter> maneuvers = new ArrayList<>();
  private List<ITrajectoryWriter> trajectories = new ArrayList<>();
  private List<IRouteWriter> routes = new ArrayList<>();

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
  public List<IVehicleWriter> getWriterVehicles() {
    return this.vehicles;
  }

  @Override
  public Iterable<IVehicle> getVehicles() {
    return new Iterable<IVehicle>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IVehicle> iterator() {
        return new ArrayList<IVehicle>(CatalogImpl.this.vehicles).iterator();
      }
    };
  }

  @Override
  public int getVehiclesSize() {
    if (this.vehicles != null) return this.vehicles.size();
    return 0;
  }

  @Override
  public IVehicle getVehiclesAtIndex(int index) {
    if (index >= 0 && this.vehicles != null && this.vehicles.size() > index) {
      return this.vehicles.get(index);
    }
    return null;
  }

  @Override
  public List<IControllerWriter> getWriterControllers() {
    return this.controllers;
  }

  @Override
  public Iterable<IController> getControllers() {
    return new Iterable<IController>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IController> iterator() {
        return new ArrayList<IController>(CatalogImpl.this.controllers).iterator();
      }
    };
  }

  @Override
  public int getControllersSize() {
    if (this.controllers != null) return this.controllers.size();
    return 0;
  }

  @Override
  public IController getControllersAtIndex(int index) {
    if (index >= 0 && this.controllers != null && this.controllers.size() > index) {
      return this.controllers.get(index);
    }
    return null;
  }

  @Override
  public List<IPedestrianWriter> getWriterPedestrians() {
    return this.pedestrians;
  }

  @Override
  public Iterable<IPedestrian> getPedestrians() {
    return new Iterable<IPedestrian>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IPedestrian> iterator() {
        return new ArrayList<IPedestrian>(CatalogImpl.this.pedestrians).iterator();
      }
    };
  }

  @Override
  public int getPedestriansSize() {
    if (this.pedestrians != null) return this.pedestrians.size();
    return 0;
  }

  @Override
  public IPedestrian getPedestriansAtIndex(int index) {
    if (index >= 0 && this.pedestrians != null && this.pedestrians.size() > index) {
      return this.pedestrians.get(index);
    }
    return null;
  }

  @Override
  public List<IMiscObjectWriter> getWriterMiscObjects() {
    return this.miscObjects;
  }

  @Override
  public Iterable<IMiscObject> getMiscObjects() {
    return new Iterable<IMiscObject>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IMiscObject> iterator() {
        return new ArrayList<IMiscObject>(CatalogImpl.this.miscObjects).iterator();
      }
    };
  }

  @Override
  public int getMiscObjectsSize() {
    if (this.miscObjects != null) return this.miscObjects.size();
    return 0;
  }

  @Override
  public IMiscObject getMiscObjectsAtIndex(int index) {
    if (index >= 0 && this.miscObjects != null && this.miscObjects.size() > index) {
      return this.miscObjects.get(index);
    }
    return null;
  }

  @Override
  public List<IEnvironmentWriter> getWriterEnvironments() {
    return this.environments;
  }

  @Override
  public Iterable<IEnvironment> getEnvironments() {
    return new Iterable<IEnvironment>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IEnvironment> iterator() {
        return new ArrayList<IEnvironment>(CatalogImpl.this.environments).iterator();
      }
    };
  }

  @Override
  public int getEnvironmentsSize() {
    if (this.environments != null) return this.environments.size();
    return 0;
  }

  @Override
  public IEnvironment getEnvironmentsAtIndex(int index) {
    if (index >= 0 && this.environments != null && this.environments.size() > index) {
      return this.environments.get(index);
    }
    return null;
  }

  @Override
  public List<IManeuverWriter> getWriterManeuvers() {
    return this.maneuvers;
  }

  @Override
  public Iterable<IManeuver> getManeuvers() {
    return new Iterable<IManeuver>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IManeuver> iterator() {
        return new ArrayList<IManeuver>(CatalogImpl.this.maneuvers).iterator();
      }
    };
  }

  @Override
  public int getManeuversSize() {
    if (this.maneuvers != null) return this.maneuvers.size();
    return 0;
  }

  @Override
  public IManeuver getManeuversAtIndex(int index) {
    if (index >= 0 && this.maneuvers != null && this.maneuvers.size() > index) {
      return this.maneuvers.get(index);
    }
    return null;
  }

  @Override
  public List<ITrajectoryWriter> getWriterTrajectories() {
    return this.trajectories;
  }

  @Override
  public Iterable<ITrajectory> getTrajectories() {
    return new Iterable<ITrajectory>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<ITrajectory> iterator() {
        return new ArrayList<ITrajectory>(CatalogImpl.this.trajectories).iterator();
      }
    };
  }

  @Override
  public int getTrajectoriesSize() {
    if (this.trajectories != null) return this.trajectories.size();
    return 0;
  }

  @Override
  public ITrajectory getTrajectoriesAtIndex(int index) {
    if (index >= 0 && this.trajectories != null && this.trajectories.size() > index) {
      return this.trajectories.get(index);
    }
    return null;
  }

  @Override
  public List<IRouteWriter> getWriterRoutes() {
    return this.routes;
  }

  @Override
  public Iterable<IRoute> getRoutes() {
    return new Iterable<IRoute>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IRoute> iterator() {
        return new ArrayList<IRoute>(CatalogImpl.this.routes).iterator();
      }
    };
  }

  @Override
  public int getRoutesSize() {
    if (this.routes != null) return this.routes.size();
    return 0;
  }

  @Override
  public IRoute getRoutesAtIndex(int index) {
    if (index >= 0 && this.routes != null && this.routes.size() > index) {
      return this.routes.get(index);
    }
    return null;
  }

  @Override
  public void setName(String name) {
    this.name = name;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__NAME);
  }

  @Override
  public void setVehicles(List<IVehicleWriter> vehicles) {
    this.vehicles = vehicles;
  }

  @Override
  public void setControllers(List<IControllerWriter> controllers) {
    this.controllers = controllers;
  }

  @Override
  public void setPedestrians(List<IPedestrianWriter> pedestrians) {
    this.pedestrians = pedestrians;
  }

  @Override
  public void setMiscObjects(List<IMiscObjectWriter> miscObjects) {
    this.miscObjects = miscObjects;
  }

  @Override
  public void setEnvironments(List<IEnvironmentWriter> environments) {
    this.environments = environments;
  }

  @Override
  public void setManeuvers(List<IManeuverWriter> maneuvers) {
    this.maneuvers = maneuvers;
  }

  @Override
  public void setTrajectories(List<ITrajectoryWriter> trajectories) {
    this.trajectories = trajectories;
  }

  @Override
  public void setRoutes(List<IRouteWriter> routes) {
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

    List<IVehicleWriter> vehicles = null;
    vehicles = getWriterVehicles();
    if (vehicles != null) {
      for (IVehicleWriter item : vehicles) {
        result.add((BaseImpl) item);
      }
    }
    List<IControllerWriter> controllers = null;
    controllers = getWriterControllers();
    if (controllers != null) {
      for (IControllerWriter item : controllers) {
        result.add((BaseImpl) item);
      }
    }
    List<IPedestrianWriter> pedestrians = null;
    pedestrians = getWriterPedestrians();
    if (pedestrians != null) {
      for (IPedestrianWriter item : pedestrians) {
        result.add((BaseImpl) item);
      }
    }
    List<IMiscObjectWriter> miscObjects = null;
    miscObjects = getWriterMiscObjects();
    if (miscObjects != null) {
      for (IMiscObjectWriter item : miscObjects) {
        result.add((BaseImpl) item);
      }
    }
    List<IEnvironmentWriter> environments = null;
    environments = getWriterEnvironments();
    if (environments != null) {
      for (IEnvironmentWriter item : environments) {
        result.add((BaseImpl) item);
      }
    }
    List<IManeuverWriter> maneuvers = null;
    maneuvers = getWriterManeuvers();
    if (maneuvers != null) {
      for (IManeuverWriter item : maneuvers) {
        result.add((BaseImpl) item);
      }
    }
    List<ITrajectoryWriter> trajectories = null;
    trajectories = getWriterTrajectories();
    if (trajectories != null) {
      for (ITrajectoryWriter item : trajectories) {
        result.add((BaseImpl) item);
      }
    }
    List<IRouteWriter> routes = null;
    routes = getWriterRoutes();
    if (routes != null) {
      for (IRouteWriter item : routes) {
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
    clonedObject.name = getName();
    // clone children
    List<IVehicleWriter> vehicles = null;
    vehicles = getWriterVehicles();
    if (vehicles != null) {
      List<IVehicleWriter> clonedList = new ArrayList<>();
      for (IVehicleWriter item : vehicles) {
        IVehicleWriter clonedChild = ((VehicleImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setVehicles(clonedList);
    }
    List<IControllerWriter> controllers = null;
    controllers = getWriterControllers();
    if (controllers != null) {
      List<IControllerWriter> clonedList = new ArrayList<>();
      for (IControllerWriter item : controllers) {
        IControllerWriter clonedChild = ((ControllerImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setControllers(clonedList);
    }
    List<IPedestrianWriter> pedestrians = null;
    pedestrians = getWriterPedestrians();
    if (pedestrians != null) {
      List<IPedestrianWriter> clonedList = new ArrayList<>();
      for (IPedestrianWriter item : pedestrians) {
        IPedestrianWriter clonedChild = ((PedestrianImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setPedestrians(clonedList);
    }
    List<IMiscObjectWriter> miscObjects = null;
    miscObjects = getWriterMiscObjects();
    if (miscObjects != null) {
      List<IMiscObjectWriter> clonedList = new ArrayList<>();
      for (IMiscObjectWriter item : miscObjects) {
        IMiscObjectWriter clonedChild = ((MiscObjectImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setMiscObjects(clonedList);
    }
    List<IEnvironmentWriter> environments = null;
    environments = getWriterEnvironments();
    if (environments != null) {
      List<IEnvironmentWriter> clonedList = new ArrayList<>();
      for (IEnvironmentWriter item : environments) {
        IEnvironmentWriter clonedChild = ((EnvironmentImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setEnvironments(clonedList);
    }
    List<IManeuverWriter> maneuvers = null;
    maneuvers = getWriterManeuvers();
    if (maneuvers != null) {
      List<IManeuverWriter> clonedList = new ArrayList<>();
      for (IManeuverWriter item : maneuvers) {
        IManeuverWriter clonedChild = ((ManeuverImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setManeuvers(clonedList);
    }
    List<ITrajectoryWriter> trajectories = null;
    trajectories = getWriterTrajectories();
    if (trajectories != null) {
      List<ITrajectoryWriter> clonedList = new ArrayList<>();
      for (ITrajectoryWriter item : trajectories) {
        ITrajectoryWriter clonedChild = ((TrajectoryImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setTrajectories(clonedList);
    }
    List<IRouteWriter> routes = null;
    routes = getWriterRoutes();
    if (routes != null) {
      List<IRouteWriter> clonedList = new ArrayList<>();
      for (IRouteWriter item : routes) {
        IRouteWriter clonedChild = ((RouteImpl) item).clone();
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
  public void writeParameterToName(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__NAME, parameterName, null /*no textmarker*/);
    this.name = null;
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

}
