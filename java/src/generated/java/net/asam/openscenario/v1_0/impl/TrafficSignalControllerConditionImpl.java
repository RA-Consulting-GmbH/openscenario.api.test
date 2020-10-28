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
import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.impl.NamedReferenceProxy;
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.IPhase;
import net.asam.openscenario.v1_0.api.ITrafficSignalController;
import net.asam.openscenario.v1_0.api.ITrafficSignalControllerCondition;
import net.asam.openscenario.v1_0.api.writer.ITrafficSignalControllerConditionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ITrafficSignalControllerCondition. With setter methods to fill the
 * properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ITrafficSignalControllerCondition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class TrafficSignalControllerConditionImpl extends BaseImpl
    implements ITrafficSignalControllerConditionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__PHASE, SimpleType.STRING);
  }

  private INamedReference<ITrafficSignalController> trafficSignalControllerRef;
  private String phase;
  private List<IPhase> phaseRef = new ArrayList<>();

  /** Default constructor */
  public TrafficSignalControllerConditionImpl() {
    super();
    addAdapter(TrafficSignalControllerConditionImpl.class, this);
    addAdapter(ITrafficSignalControllerCondition.class, this);
    addAdapter(ITrafficSignalControllerConditionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public INamedReference<ITrafficSignalController> getTrafficSignalControllerRef() {
    return this.trafficSignalControllerRef;
  }

  @Override
  public String getPhase() {
    return this.phase;
  }

  @Override
  public Iterable<IPhase> getPhaseRef() {
    return new Iterable<IPhase>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IPhase> iterator() {
        return new ArrayList<>(TrafficSignalControllerConditionImpl.this.phaseRef).iterator();
      }
    };
  }

  @Override
  public int getPhaseRefSize() {
    if (this.phaseRef != null) return this.phaseRef.size();
    return 0;
  }

  @Override
  public IPhase getPhaseRefAtIndex(int index) {
    if (index >= 0 && this.phaseRef != null && this.phaseRef.size() > index) {
      return this.phaseRef.get(index);
    }
    return null;
  }

  @Override
  public void setTrafficSignalControllerRef(
      INamedReference<ITrafficSignalController> trafficSignalControllerRef) {
    this.trafficSignalControllerRef = trafficSignalControllerRef;
  }

  @Override
  public void setPhase(String phase) {
    this.phase = phase;
  }

  @Override
  public void setPhaseRef(List<IPhase> phaseRef) {
    this.phaseRef = phaseRef;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF)) {
      // Proxy
      NamedReferenceProxy<ITrafficSignalController> proxy =
          new NamedReferenceProxy<>(parameterLiteralValue);
      this.trafficSignalControllerRef = proxy;
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__PHASE)) {
      // Simple type
      this.phase =
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

    return result;
  }

  /**
   * Making a (deep) clone this object. This is useful and used for importing elements from
   * catalogs.
   *
   * @return a deep copy of the object.
   */
  @Override
  public TrafficSignalControllerConditionImpl clone() {
    TrafficSignalControllerConditionImpl clonedObject = new TrafficSignalControllerConditionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Proxy
    NamedReferenceProxy<ITrafficSignalController> proxy =
        ((NamedReferenceProxy<ITrafficSignalController>) getTrafficSignalControllerRef()).clone();
    clonedObject.setTrafficSignalControllerRef(proxy);
    proxy.setParent(clonedObject);
    // Simple type
    clonedObject.setPhase(getPhase());
    // clone children
    return clonedObject;
  }

  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException {
    // proxies and string attributes
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF)) {
      // Get the Proxy
      INamedReference<ITrafficSignalController> trafficSignalControllerRef =
          getTrafficSignalControllerRef();
      return trafficSignalControllerRef != null ? trafficSignalControllerRef.getNameRef() : null;
    } else if (key.equals(OscConstants.ATTRIBUTE__PHASE)) {
      return getPhase();
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF)) {
      // Get the Proxy
      INamedReference<ITrafficSignalController> trafficSignalControllerRef =
          getTrafficSignalControllerRef();
      return trafficSignalControllerRef != null
          ? (IOpenScenarioFlexElement) trafficSignalControllerRef.getTargetObject()
          : null;
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "TrafficSignalControllerCondition";
  }

  @Override
  public void writeParameterToTrafficSignalControllerRef(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF,
        parameterName,
        null /*no textmarker*/);
  }

  @Override
  public void writeParameterToPhase(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__PHASE, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromTrafficSignalControllerRef() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF);
  }

  @Override
  public String getParameterFromPhase() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__PHASE);
  }

  @Override
  public boolean isTrafficSignalControllerRefParameterized() {
    return getParameterizedAttributeKeys()
        .contains(OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF);
  }

  @Override
  public boolean isPhaseParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__PHASE);
  }

  // children

}
