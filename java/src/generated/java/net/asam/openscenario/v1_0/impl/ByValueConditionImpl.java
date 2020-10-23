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
public class ByValueConditionImpl extends BaseImpl
    implements IByValueCondition, IByValueConditionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IParameterCondition parameterCondition;
  private ITimeOfDayCondition timeOfDayCondition;
  private ISimulationTimeCondition simulationTimeCondition;
  private IStoryboardElementStateCondition storyboardElementStateCondition;
  private IUserDefinedValueCondition userDefinedValueCondition;
  private ITrafficSignalCondition trafficSignalCondition;
  private ITrafficSignalControllerCondition trafficSignalControllerCondition;

  private IParameterConditionWriter parameterConditionWriter;
  private ITimeOfDayConditionWriter timeOfDayConditionWriter;
  private ISimulationTimeConditionWriter simulationTimeConditionWriter;
  private IStoryboardElementStateConditionWriter storyboardElementStateConditionWriter;
  private IUserDefinedValueConditionWriter userDefinedValueConditionWriter;
  private ITrafficSignalConditionWriter trafficSignalConditionWriter;
  private ITrafficSignalControllerConditionWriter trafficSignalControllerConditionWriter;

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
  /**
   * Sets the value of model property parameterCondition
   *
   * @param parameterCondition from OpenSCENARIO class model specification: [A current parameter
   *     value is compared to a reference value.]
   */
  public void setParameterCondition(IParameterCondition parameterCondition) {
    this.parameterCondition = parameterCondition;
  }
  /**
   * Sets the value of model property timeOfDayCondition
   *
   * @param timeOfDayCondition from OpenSCENARIO class model specification: [The current time of day
   *     is compared to a reference value.]
   */
  public void setTimeOfDayCondition(ITimeOfDayCondition timeOfDayCondition) {
    this.timeOfDayCondition = timeOfDayCondition;
  }
  /**
   * Sets the value of model property simulationTimeCondition
   *
   * @param simulationTimeCondition from OpenSCENARIO class model specification: [The current
   *     simulation time is compared to a reference value.]
   */
  public void setSimulationTimeCondition(ISimulationTimeCondition simulationTimeCondition) {
    this.simulationTimeCondition = simulationTimeCondition;
  }
  /**
   * Sets the value of model property storyboardElementStateCondition
   *
   * @param storyboardElementStateCondition from OpenSCENARIO class model specification: [Condition
   *     becomes true if the referenced StoryboardElement terminates according to the given rule.]
   */
  public void setStoryboardElementStateCondition(
      IStoryboardElementStateCondition storyboardElementStateCondition) {
    this.storyboardElementStateCondition = storyboardElementStateCondition;
  }
  /**
   * Sets the value of model property userDefinedValueCondition
   *
   * @param userDefinedValueCondition from OpenSCENARIO class model specification: [The current
   *     value of an externally defined named value is compared to a reference value (less, greater,
   *     equal).]
   */
  public void setUserDefinedValueCondition(IUserDefinedValueCondition userDefinedValueCondition) {
    this.userDefinedValueCondition = userDefinedValueCondition;
  }
  /**
   * Sets the value of model property trafficSignalCondition
   *
   * @param trafficSignalCondition from OpenSCENARIO class model specification: [Condition becomes
   *     true if the referenced signal reaches the indicated state.]
   */
  public void setTrafficSignalCondition(ITrafficSignalCondition trafficSignalCondition) {
    this.trafficSignalCondition = trafficSignalCondition;
  }
  /**
   * Sets the value of model property trafficSignalControllerCondition
   *
   * @param trafficSignalControllerCondition from OpenSCENARIO class model specification: [Condition
   *     becomes true if the referenced signal controller reaches the indicated state.]
   */
  public void setTrafficSignalControllerCondition(
      ITrafficSignalControllerCondition trafficSignalControllerCondition) {
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

    IParameterCondition parameterCondition = null;
    parameterCondition = getParameterCondition();
    if (parameterCondition != null) {
      result.add((BaseImpl) parameterCondition);
    }
    ITimeOfDayCondition timeOfDayCondition = null;
    timeOfDayCondition = getTimeOfDayCondition();
    if (timeOfDayCondition != null) {
      result.add((BaseImpl) timeOfDayCondition);
    }
    ISimulationTimeCondition simulationTimeCondition = null;
    simulationTimeCondition = getSimulationTimeCondition();
    if (simulationTimeCondition != null) {
      result.add((BaseImpl) simulationTimeCondition);
    }
    IStoryboardElementStateCondition storyboardElementStateCondition = null;
    storyboardElementStateCondition = getStoryboardElementStateCondition();
    if (storyboardElementStateCondition != null) {
      result.add((BaseImpl) storyboardElementStateCondition);
    }
    IUserDefinedValueCondition userDefinedValueCondition = null;
    userDefinedValueCondition = getUserDefinedValueCondition();
    if (userDefinedValueCondition != null) {
      result.add((BaseImpl) userDefinedValueCondition);
    }
    ITrafficSignalCondition trafficSignalCondition = null;
    trafficSignalCondition = getTrafficSignalCondition();
    if (trafficSignalCondition != null) {
      result.add((BaseImpl) trafficSignalCondition);
    }
    ITrafficSignalControllerCondition trafficSignalControllerCondition = null;
    trafficSignalControllerCondition = getTrafficSignalControllerCondition();
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
    IParameterCondition parameterCondition = null;
    parameterCondition = getParameterCondition();
    if (parameterCondition != null) {
      ParameterConditionImpl clonedChild = ((ParameterConditionImpl) parameterCondition).clone();
      clonedObject.setParameterCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITimeOfDayCondition timeOfDayCondition = null;
    timeOfDayCondition = getTimeOfDayCondition();
    if (timeOfDayCondition != null) {
      TimeOfDayConditionImpl clonedChild = ((TimeOfDayConditionImpl) timeOfDayCondition).clone();
      clonedObject.setTimeOfDayCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ISimulationTimeCondition simulationTimeCondition = null;
    simulationTimeCondition = getSimulationTimeCondition();
    if (simulationTimeCondition != null) {
      SimulationTimeConditionImpl clonedChild =
          ((SimulationTimeConditionImpl) simulationTimeCondition).clone();
      clonedObject.setSimulationTimeCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IStoryboardElementStateCondition storyboardElementStateCondition = null;
    storyboardElementStateCondition = getStoryboardElementStateCondition();
    if (storyboardElementStateCondition != null) {
      StoryboardElementStateConditionImpl clonedChild =
          ((StoryboardElementStateConditionImpl) storyboardElementStateCondition).clone();
      clonedObject.setStoryboardElementStateCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IUserDefinedValueCondition userDefinedValueCondition = null;
    userDefinedValueCondition = getUserDefinedValueCondition();
    if (userDefinedValueCondition != null) {
      UserDefinedValueConditionImpl clonedChild =
          ((UserDefinedValueConditionImpl) userDefinedValueCondition).clone();
      clonedObject.setUserDefinedValueCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITrafficSignalCondition trafficSignalCondition = null;
    trafficSignalCondition = getTrafficSignalCondition();
    if (trafficSignalCondition != null) {
      TrafficSignalConditionImpl clonedChild =
          ((TrafficSignalConditionImpl) trafficSignalCondition).clone();
      clonedObject.setTrafficSignalCondition(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITrafficSignalControllerCondition trafficSignalControllerCondition = null;
    trafficSignalControllerCondition = getTrafficSignalControllerCondition();
    if (trafficSignalControllerCondition != null) {
      TrafficSignalControllerConditionImpl clonedChild =
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
  public IParameterConditionWriter getParameterConditionWriter() {
    return this.parameterConditionWriter;
  }

  @Override
  public ITimeOfDayConditionWriter getTimeOfDayConditionWriter() {
    return this.timeOfDayConditionWriter;
  }

  @Override
  public ISimulationTimeConditionWriter getSimulationTimeConditionWriter() {
    return this.simulationTimeConditionWriter;
  }

  @Override
  public IStoryboardElementStateConditionWriter getStoryboardElementStateConditionWriter() {
    return this.storyboardElementStateConditionWriter;
  }

  @Override
  public IUserDefinedValueConditionWriter getUserDefinedValueConditionWriter() {
    return this.userDefinedValueConditionWriter;
  }

  @Override
  public ITrafficSignalConditionWriter getTrafficSignalConditionWriter() {
    return this.trafficSignalConditionWriter;
  }

  @Override
  public ITrafficSignalControllerConditionWriter getTrafficSignalControllerConditionWriter() {
    return this.trafficSignalControllerConditionWriter;
  }

  @Override
  public void writeToParameterConditionWriter(IParameterConditionWriter parameterConditionWriter) {
    this.parameterConditionWriter = parameterConditionWriter;
  }

  @Override
  public void writeToTimeOfDayConditionWriter(ITimeOfDayConditionWriter timeOfDayConditionWriter) {
    this.timeOfDayConditionWriter = timeOfDayConditionWriter;
  }

  @Override
  public void writeToSimulationTimeConditionWriter(
      ISimulationTimeConditionWriter simulationTimeConditionWriter) {
    this.simulationTimeConditionWriter = simulationTimeConditionWriter;
  }

  @Override
  public void writeToStoryboardElementStateConditionWriter(
      IStoryboardElementStateConditionWriter storyboardElementStateConditionWriter) {
    this.storyboardElementStateConditionWriter = storyboardElementStateConditionWriter;
  }

  @Override
  public void writeToUserDefinedValueConditionWriter(
      IUserDefinedValueConditionWriter userDefinedValueConditionWriter) {
    this.userDefinedValueConditionWriter = userDefinedValueConditionWriter;
  }

  @Override
  public void writeToTrafficSignalConditionWriter(
      ITrafficSignalConditionWriter trafficSignalConditionWriter) {
    this.trafficSignalConditionWriter = trafficSignalConditionWriter;
  }

  @Override
  public void writeToTrafficSignalControllerConditionWriter(
      ITrafficSignalControllerConditionWriter trafficSignalControllerConditionWriter) {
    this.trafficSignalControllerConditionWriter = trafficSignalControllerConditionWriter;
  }
}
