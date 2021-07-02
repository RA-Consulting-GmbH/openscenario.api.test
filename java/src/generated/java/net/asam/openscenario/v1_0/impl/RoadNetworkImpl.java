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
import net.asam.openscenario.v1_0.api.IFile;
import net.asam.openscenario.v1_0.api.IRoadNetwork;
import net.asam.openscenario.v1_0.api.ITrafficSignalController;
import net.asam.openscenario.v1_0.api.writer.IFileWriter;
import net.asam.openscenario.v1_0.api.writer.IRoadNetworkWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalControllerWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IRoadNetwork. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IRoadNetwork)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class RoadNetworkImpl extends BaseImpl implements IRoadNetworkWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IFileWriter logicFile;
  private IFileWriter sceneGraphFile;
  private List<ITrafficSignalControllerWriter> trafficSignals = new ArrayList<>();

  /** Default constructor */
  public RoadNetworkImpl() {
    super();
    addAdapter(RoadNetworkImpl.class, this);
    addAdapter(IRoadNetwork.class, this);
    addAdapter(IRoadNetworkWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IFile getLogicFile() {
    return this.logicFile;
  }

  @Override
  public IFile getSceneGraphFile() {
    return this.sceneGraphFile;
  }

  @Override
  public List<ITrafficSignalControllerWriter> getWriterTrafficSignals() {
    return this.trafficSignals;
  }

  @Override
  public Iterable<ITrafficSignalController> getTrafficSignals() {
    return new Iterable<ITrafficSignalController>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<ITrafficSignalController> iterator() {
        return new ArrayList<ITrafficSignalController>(RoadNetworkImpl.this.trafficSignals)
            .iterator();
      }
    };
  }

  @Override
  public int getTrafficSignalsSize() {
    if (this.trafficSignals != null) return this.trafficSignals.size();
    return 0;
  }

  @Override
  public ITrafficSignalController getTrafficSignalsAtIndex(int index) {
    if (index >= 0 && this.trafficSignals != null && this.trafficSignals.size() > index) {
      return this.trafficSignals.get(index);
    }
    return null;
  }

  @Override
  public void setLogicFile(IFileWriter logicFile) {
    this.logicFile = logicFile;
  }

  @Override
  public void setSceneGraphFile(IFileWriter sceneGraphFile) {
    this.sceneGraphFile = sceneGraphFile;
  }

  @Override
  public void setTrafficSignals(List<ITrafficSignalControllerWriter> trafficSignals) {
    this.trafficSignals = trafficSignals;
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

    IFileWriter logicFile = null;
    logicFile = getWriterLogicFile();
    if (logicFile != null) {
      result.add((BaseImpl) logicFile);
    }
    IFileWriter sceneGraphFile = null;
    sceneGraphFile = getWriterSceneGraphFile();
    if (sceneGraphFile != null) {
      result.add((BaseImpl) sceneGraphFile);
    }
    List<ITrafficSignalControllerWriter> trafficSignals = null;
    trafficSignals = getWriterTrafficSignals();
    if (trafficSignals != null) {
      for (ITrafficSignalControllerWriter item : trafficSignals) {
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
  public RoadNetworkImpl clone() {
    RoadNetworkImpl clonedObject = new RoadNetworkImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IFileWriter logicFile = null;
    logicFile = getWriterLogicFile();
    if (logicFile != null) {
      IFileWriter clonedChild = ((FileImpl) logicFile).clone();
      clonedObject.setLogicFile(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IFileWriter sceneGraphFile = null;
    sceneGraphFile = getWriterSceneGraphFile();
    if (sceneGraphFile != null) {
      IFileWriter clonedChild = ((FileImpl) sceneGraphFile).clone();
      clonedObject.setSceneGraphFile(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    List<ITrafficSignalControllerWriter> trafficSignals = null;
    trafficSignals = getWriterTrafficSignals();
    if (trafficSignals != null) {
      List<ITrafficSignalControllerWriter> clonedList = new ArrayList<>();
      for (ITrafficSignalControllerWriter item : trafficSignals) {
        ITrafficSignalControllerWriter clonedChild = ((TrafficSignalControllerImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setTrafficSignals(clonedList);
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
    if (key.equals(OscConstants.ELEMENT__LOGIC_FILE)) {
      return (IOpenScenarioFlexElement) getLogicFile();
    }
    if (key.equals(OscConstants.ELEMENT__SCENE_GRAPH_FILE)) {
      return (IOpenScenarioFlexElement) getSceneGraphFile();
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
    if (key.equals(OscConstants.ELEMENT__TRAFFIC_SIGNAL_CONTROLLER)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getTrafficSignals();
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
    return "RoadNetwork";
  }

  // children
  @Override
  public IFileWriter getWriterLogicFile() {
    return this.logicFile;
  }

  @Override
  public IFileWriter getWriterSceneGraphFile() {
    return this.sceneGraphFile;
  }
}
