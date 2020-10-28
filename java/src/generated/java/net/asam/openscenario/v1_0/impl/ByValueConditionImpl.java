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
import net.asam.openscenario.v1_0.api.IByValueCondition;
import net.asam.openscenario.v1_0.api.IParameterCondition;
import net.asam.openscenario.v1_0.api.ISimulationTimeCondition;
import net.asam.openscenario.v1_0.api.IStoryboardElementStateCondition;
import net.asam.openscenario.v1_0.api.ITimeOfDayCondition;
import net.asam.openscenario.v1_0.api.ITrafficSignalCondition;
import net.asam.openscenario.v1_0.api.ITrafficSignalControllerCondition;
import net.asam.openscenario.v1_0.api.IUserDefinedValueCondition;
import net.asam.openscenario.v1_0.api.writer.IByValueConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ISimulationTimeConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IStoryboardElementStateConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITimeOfDayConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalConditionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalControllerConditionWriter;
import net.asam.openscenario.v1_0.api.writer.IUserDefinedValueConditionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IByValueCondition. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IByValueCondition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ByValueConditionImpl extends BaseImpl implements IByValueConditionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IParameterConditionWriter parameterCondition;
  private ITimeOfDayConditionWriter timeOfDayCondition;
  private ISimulationTimeConditionWriter simulationTimeCondition;
  private IStoryboardElementStateConditionWriter storyboardElementStateCondition;
  private IUserDefinedValueConditionWriter userDefinedValueCondition;
  private ITrafficSignalConditionWriter trafficSignalCondition;
  private ITrafficSignalControllerConditionWriter trafficSignalControllerCondition;

  /** Default constructor */
  public ByValueConditionImpl() {
    super();
    addAdapter(ByValueConditionImpl.class, this);
    addAdapter(IByValueCondition.class, this);
    addAdapter(IByValueConditionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IParameterCondition getParameterCondition() {
    return this.parameterCondition;
  }

  @Override
  public ITimeOfDayCondition getTimeOfDayCondition() {
    return this.timeOfDayCondition;
  }

  @Override
  public ISimulationTimeCondition getSimulationTimeCondition() {
    return this.simulationTimeCondition;
  }

  @Override
  public IStoryboardElementStateCondition getStoryboardElementStateCondition() {
    return this.storyboardElementStateCondition;
  }

  @Override
  public IUserDefinedValueCondition getUserDefinedValueCondition() {
    return this.userDefinedValueCondition;
  }

  @Override
  public ITrafficSignalCondition getTrafficSignalCondition() {
    return this.trafficSignalCondition;
  }

  @Override
  public ITrafficSignalControllerCondition getTrafficSignalControllerCondition() {
    return this.trafficSignalControllerCondition;
  }

  @Override
  public void setParameterCondition(IParameterConditionWriter parameterCondition) {
    this.parameterCondition = parameterCondition;
  }

  @Override
  public void setTimeOfDayCondition(ITimeOfDayConditionWriter timeOfDayCondition) {
    this.timeOfDayCondition = timeOfDayCondition;
  }

  @Override
  public void setSimulationTimeCondition(ISimulationTimeConditionWriter simulationTimeCondition) {
    this.simulationTimeCondition = simulationTimeCondition;
  }

  @Override
  public void setStoryboardElementStateCondition(
      IStoryboardElementStateConditionWriter storyboardElementStateCondition) {
    this.storyboardElementStateCondition = storyboardElementStateCondition;
  }

  @Override
  public void setUserDefinedValueCondition(
      IUserDefinedValueConditionWriter userDefinedValueCondition) {
    this.userDefinedValueCondition = userDefinedValueCondition;
  }

  @Override
  public void setTrafficSignalCondition(ITrafficSignalConditionWriter trafficSignalCondition) {
    this.trafficSignalCondition = trafficSignalCondition;
  }

  @Override
  public void setTrafficSignalControllerCondition(
      ITrafficSignalControllerConditionWriter trafficSignalControllerCondition) {
    this.trafficSignalControllerCondition = trafficSignalControllerCondition;
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

    IParameterConditionWriter parameterCondition = null;
    parameterCondition = getWriterParameterCondition();
    if (parameterCondition != null) {
      result.add((BaseImpl) parameterCondition);
    }
    ITimeOfDayConditionWriter timeOfDayCondition = null;
    timeOfDayCondition = getWriterTimeOfDayCondition();
    if (timeOfDayCondition != null) {
      result.add((BaseImpl) timeOfDayCondition);
    }
    ISimulationTimeConditionWriter simulationTimeCondition = null;
    simulationTimeCondition = getWriterSimulationTimeCondition();
    if (simulationTimeCondition != null) {
      result.add((BaseImpl) simulationTimeCondition);
    }
    IStoryboardElementStateConditionWriter storyboardElementStateCondition = null;
    storyboardElementStateCondition = getWriterStoryboardElementStateCondition();
    if (storyboardElementStateCondition != null) {
      result.add((BaseImpl) storyboardElementStateCondition);
    }
    IUserDefinedValueConditionWriter userDefinedValueCondition = null;
    userDefinedValueCondition = getWriterUserDefinedValueCondition();
    if (userDefinedValueCondition != null) {
      result.add((BaseImpl) userDefinedValueCondition);
    }
    ITrafficSignalConditionWriter trafficSignalCondition = null;
    trafficSignalCondition = getWriterTrafficSignalCondition();
    if (trafficSignalCondition != null) {
      result.add((BaseImpl) trafficSignalCondition);
    }
    ITrafficSignalControllerConditionWriter trafficSignalControllerCondition = null;
    trafficSignalControllerCondition = getWriterTrafficSignalControllerCondition();
    if (trafficSignalControllerCondition != null) {
      result.add((BaseImpl) trafficSignalControllerCondition);
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
  public ByValueConditionImpl clone() {
    ByValueConditionImpl clonedObject = new ByValueConditionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IParameterConditionWriter parameterCondition = null;
    parameterCondition = getWriterParameterCondition();
    if (parameterCondition != null) {
      IParameterConditionWriter clonedChild = ((ParameterConditionImpl) parameterCondition).clone();
      clonedObject.setParameterCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITimeOfDayConditionWriter timeOfDayCondition = null;
    timeOfDayCondition = getWriterTimeOfDayCondition();
    if (timeOfDayCondition != null) {
      ITimeOfDayConditionWriter clonedChild = ((TimeOfDayConditionImpl) timeOfDayCondition).clone();
      clonedObject.setTimeOfDayCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ISimulationTimeConditionWriter simulationTimeCondition = null;
    simulationTimeCondition = getWriterSimulationTimeCondition();
    if (simulationTimeCondition != null) {
      ISimulationTimeConditionWriter clonedChild =
          ((SimulationTimeConditionImpl) simulationTimeCondition).clone();
      clonedObject.setSimulationTimeCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IStoryboardElementStateConditionWriter storyboardElementStateCondition = null;
    storyboardElementStateCondition = getWriterStoryboardElementStateCondition();
    if (storyboardElementStateCondition != null) {
      IStoryboardElementStateConditionWriter clonedChild =
          ((StoryboardElementStateConditionImpl) storyboardElementStateCondition).clone();
      clonedObject.setStoryboardElementStateCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IUserDefinedValueConditionWriter userDefinedValueCondition = null;
    userDefinedValueCondition = getWriterUserDefinedValueCondition();
    if (userDefinedValueCondition != null) {
      IUserDefinedValueConditionWriter clonedChild =
          ((UserDefinedValueConditionImpl) userDefinedValueCondition).clone();
      clonedObject.setUserDefinedValueCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITrafficSignalConditionWriter trafficSignalCondition = null;
    trafficSignalCondition = getWriterTrafficSignalCondition();
    if (trafficSignalCondition != null) {
      ITrafficSignalConditionWriter clonedChild =
          ((TrafficSignalConditionImpl) trafficSignalCondition).clone();
      clonedObject.setTrafficSignalCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITrafficSignalControllerConditionWriter trafficSignalControllerCondition = null;
    trafficSignalControllerCondition = getWriterTrafficSignalControllerCondition();
    if (trafficSignalControllerCondition != null) {
      ITrafficSignalControllerConditionWriter clonedChild =
          ((TrafficSignalControllerConditionImpl) trafficSignalControllerCondition).clone();
      clonedObject.setTrafficSignalControllerCondition(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__PARAMETER_CONDITION)) {
      return (IOpenScenarioFlexElement) getParameterCondition();
    }
    if (key.equals(OscConstants.ELEMENT__TIME_OF_DAY_CONDITION)) {
      return (IOpenScenarioFlexElement) getTimeOfDayCondition();
    }
    if (key.equals(OscConstants.ELEMENT__SIMULATION_TIME_CONDITION)) {
      return (IOpenScenarioFlexElement) getSimulationTimeCondition();
    }
    if (key.equals(OscConstants.ELEMENT__STORYBOARD_ELEMENT_STATE_CONDITION)) {
      return (IOpenScenarioFlexElement) getStoryboardElementStateCondition();
    }
    if (key.equals(OscConstants.ELEMENT__USER_DEFINED_VALUE_CONDITION)) {
      return (IOpenScenarioFlexElement) getUserDefinedValueCondition();
    }
    if (key.equals(OscConstants.ELEMENT__TRAFFIC_SIGNAL_CONDITION)) {
      return (IOpenScenarioFlexElement) getTrafficSignalCondition();
    }
    if (key.equals(OscConstants.ELEMENT__TRAFFIC_SIGNAL_CONTROLLER_CONDITION)) {
      return (IOpenScenarioFlexElement) getTrafficSignalControllerCondition();
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
    return "ByValueCondition";
  }

  // children
  @Override
  public IParameterConditionWriter getWriterParameterCondition() {
    return this.parameterCondition;
  }

  @Override
  public ITimeOfDayConditionWriter getWriterTimeOfDayCondition() {
    return this.timeOfDayCondition;
  }

  @Override
  public ISimulationTimeConditionWriter getWriterSimulationTimeCondition() {
    return this.simulationTimeCondition;
  }

  @Override
  public IStoryboardElementStateConditionWriter getWriterStoryboardElementStateCondition() {
    return this.storyboardElementStateCondition;
  }

  @Override
  public IUserDefinedValueConditionWriter getWriterUserDefinedValueCondition() {
    return this.userDefinedValueCondition;
  }

  @Override
  public ITrafficSignalConditionWriter getWriterTrafficSignalCondition() {
    return this.trafficSignalCondition;
  }

  @Override
  public ITrafficSignalControllerConditionWriter getWriterTrafficSignalControllerCondition() {
    return this.trafficSignalControllerCondition;
  }
}
