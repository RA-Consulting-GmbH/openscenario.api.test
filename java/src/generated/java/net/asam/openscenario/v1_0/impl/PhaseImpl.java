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
import net.asam.openscenario.v1_0.api.IPhase;
import net.asam.openscenario.v1_0.api.ITrafficSignalState;
import net.asam.openscenario.v1_0.api.writer.IPhaseWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalStateWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IPhase. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IPhase)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class PhaseImpl extends BaseImpl implements IPhase, IPhaseWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__NAME, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__DURATION, SimpleType.DOUBLE);
  }

  private String name;
  private Double duration;
  private List<ITrafficSignalState> trafficSignalStates;

  private List<ITrafficSignalStateWriter> trafficSignalStatesWriters;

  /** Default constructor */
  public PhaseImpl() {
    super();
    addAdapter(PhaseImpl.class, this);
    addAdapter(IPhase.class, this);
    addAdapter(IPhaseWriter.class, this);
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
  public Double getDuration() {
    return this.duration;
  }

  @Override
  public List<ITrafficSignalState> getTrafficSignalStates() {
    return this.trafficSignalStates;
  }
  /**
   * Sets the value of model property name
   *
   * @param name from OpenSCENARIO class model specification: [Name of the phase.]
   */
  public void setName(String name) {
    this.name = name;
  }
  /**
   * Sets the value of model property duration
   *
   * @param duration from OpenSCENARIO class model specification: [Duration of the phase. Unit: s;
   *     Range: [0..inf[.]
   */
  public void setDuration(Double duration) {
    this.duration = duration;
  }
  /**
   * Sets the value of model property trafficSignalStates
   *
   * @param trafficSignalStates from OpenSCENARIO class model specification: [Each phase has
   *     multiple TrafficSignalStates. One for each TrafficSignal that is controlled. E.g. phase1 ,
   *     (trafficSignal1:true;false;false, trafficSignal2:false;false;true).]
   */
  public void setTrafficSignalStates(List<ITrafficSignalState> trafficSignalStates) {
    this.trafficSignalStates = trafficSignalStates;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__NAME)) {
      // Simple type
      this.name =
          ParserHelper.parseString(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__DURATION)) {
      // Simple type
      this.duration =
          ParserHelper.parseDouble(logger, parameterLiteralValue, getTextmarker(attributeKey));
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

    List<ITrafficSignalState> trafficSignalStates = null;
    trafficSignalStates = getTrafficSignalStates();
    if (trafficSignalStates != null) {
      for (ITrafficSignalState item : trafficSignalStates) {
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
  public PhaseImpl clone() {
    PhaseImpl clonedObject = new PhaseImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setName(getName());
    // Simple type
    clonedObject.setDuration(getDuration());
    // clone children
    List<ITrafficSignalState> trafficSignalStates = null;
    trafficSignalStates = getTrafficSignalStates();
    if (trafficSignalStates != null) {
      List<ITrafficSignalState> clonedList = new ArrayList<>();
      for (ITrafficSignalState item : trafficSignalStates) {
        TrafficSignalStateImpl clonedChild = ((TrafficSignalStateImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setTrafficSignalStates(clonedList);
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__DURATION)) {
      return getDuration();
    }
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
    if (key.equals(OscConstants.ELEMENT__TRAFFIC_SIGNAL_STATE)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getTrafficSignalStates();
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
    return "Phase";
  }

  @Override
  public void writeToName(String name) {
    setName(name);
  }

  @Override
  public void writeToDuration(Double duration) {
    setDuration(duration);
  }

  @Override
  public void writeParameterToName(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__NAME, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToDuration(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__DURATION, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromName() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__NAME);
  }

  @Override
  public String getParameterFromDuration() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__DURATION);
  }

  @Override
  public boolean isNameParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__NAME);
  }

  @Override
  public boolean isDurationParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__DURATION);
  }

  // children

  @Override
  public List<ITrafficSignalStateWriter> getTrafficSignalStatesWriter() {
    return this.trafficSignalStatesWriters;
  }

  @Override
  public void setTrafficSignalStatesWriter(
      List<ITrafficSignalStateWriter> trafficSignalStatesWriters) {
    this.trafficSignalStatesWriters = trafficSignalStatesWriters;
  }
}
