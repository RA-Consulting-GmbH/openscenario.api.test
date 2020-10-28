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
import net.asam.openscenario.v1_0.api.IAct;
import net.asam.openscenario.v1_0.api.IManeuverGroup;
import net.asam.openscenario.v1_0.api.ITrigger;
import net.asam.openscenario.v1_0.api.writer.IActWriter;
import net.asam.openscenario.v1_0.api.writer.IManeuverGroupWriter;
import net.asam.openscenario.v1_0.api.writer.ITriggerWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IAct. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IAct)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ActImpl extends BaseImpl implements IActWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__NAME, SimpleType.STRING);
  }

  private String name;
  private List<IManeuverGroupWriter> maneuverGroups = new ArrayList<>();
  private ITriggerWriter startTrigger;
  private ITriggerWriter stopTrigger;

  /** Default constructor */
  public ActImpl() {
    super();
    addAdapter(ActImpl.class, this);
    addAdapter(IAct.class, this);
    addAdapter(IActWriter.class, this);
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
  public List<IManeuverGroupWriter> getWriterManeuverGroups() {
    return this.maneuverGroups;
  }

  @Override
  public Iterable<IManeuverGroup> getManeuverGroups() {
    return new Iterable<IManeuverGroup>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IManeuverGroup> iterator() {
        return new ArrayList<IManeuverGroup>(ActImpl.this.maneuverGroups).iterator();
      }
    };
  }

  @Override
  public int getManeuverGroupsSize() {
    if (this.maneuverGroups != null) return this.maneuverGroups.size();
    return 0;
  }

  @Override
  public IManeuverGroup getManeuverGroupsAtIndex(int index) {
    if (index >= 0 && this.maneuverGroups != null && this.maneuverGroups.size() > index) {
      return this.maneuverGroups.get(index);
    }
    return null;
  }

  @Override
  public ITrigger getStartTrigger() {
    return this.startTrigger;
  }

  @Override
  public ITrigger getStopTrigger() {
    return this.stopTrigger;
  }

  @Override
  public void setName(String name) {
    this.name = name;
  }

  @Override
  public void setManeuverGroups(List<IManeuverGroupWriter> maneuverGroups) {
    this.maneuverGroups = maneuverGroups;
  }

  @Override
  public void setStartTrigger(ITriggerWriter startTrigger) {
    this.startTrigger = startTrigger;
  }

  @Override
  public void setStopTrigger(ITriggerWriter stopTrigger) {
    this.stopTrigger = stopTrigger;
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

    List<IManeuverGroupWriter> maneuverGroups = null;
    maneuverGroups = getWriterManeuverGroups();
    if (maneuverGroups != null) {
      for (IManeuverGroupWriter item : maneuverGroups) {
        result.add((BaseImpl) item);
      }
    }
    ITriggerWriter startTrigger = null;
    startTrigger = getWriterStartTrigger();
    if (startTrigger != null) {
      result.add((BaseImpl) startTrigger);
    }
    ITriggerWriter stopTrigger = null;
    stopTrigger = getWriterStopTrigger();
    if (stopTrigger != null) {
      result.add((BaseImpl) stopTrigger);
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
  public ActImpl clone() {
    ActImpl clonedObject = new ActImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setName(getName());
    // clone children
    List<IManeuverGroupWriter> maneuverGroups = null;
    maneuverGroups = getWriterManeuverGroups();
    if (maneuverGroups != null) {
      List<IManeuverGroupWriter> clonedList = new ArrayList<>();
      for (IManeuverGroupWriter item : maneuverGroups) {
        IManeuverGroupWriter clonedChild = ((ManeuverGroupImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setManeuverGroups(clonedList);
    }
    ITriggerWriter startTrigger = null;
    startTrigger = getWriterStartTrigger();
    if (startTrigger != null) {
      ITriggerWriter clonedChild = ((TriggerImpl) startTrigger).clone();
      clonedObject.setStartTrigger(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITriggerWriter stopTrigger = null;
    stopTrigger = getWriterStopTrigger();
    if (stopTrigger != null) {
      ITriggerWriter clonedChild = ((TriggerImpl) stopTrigger).clone();
      clonedObject.setStopTrigger(clonedChild);
      clonedChild.setParent(clonedObject);
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ELEMENT__START_TRIGGER)) {
      return (IOpenScenarioFlexElement) getStartTrigger();
    }
    if (key.equals(OscConstants.ELEMENT__STOP_TRIGGER)) {
      return (IOpenScenarioFlexElement) getStopTrigger();
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
    if (key.equals(OscConstants.ELEMENT__MANEUVER_GROUP)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getManeuverGroups();
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
    return "Act";
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
  public ITriggerWriter getWriterStartTrigger() {
    return this.startTrigger;
  }

  @Override
  public ITriggerWriter getWriterStopTrigger() {
    return this.stopTrigger;
  }
}
