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
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.IAction;
import net.asam.openscenario.v1_0.api.IEvent;
import net.asam.openscenario.v1_0.api.ITrigger;
import net.asam.openscenario.v1_0.api.Priority;
import net.asam.openscenario.v1_0.api.writer.IActionWriter;
import net.asam.openscenario.v1_0.api.writer.IEventWriter;
import net.asam.openscenario.v1_0.api.writer.ITriggerWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IEvent. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IEvent)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class EventImpl extends BaseImpl implements IEvent, IEventWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__PRIORITY, SimpleType.ENUM_TYPE);
    propertyToType.put(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, SimpleType.UNSIGNED_INT);
    propertyToType.put(OscConstants.ATTRIBUTE__NAME, SimpleType.STRING);
  }

  private Priority priority;
  private Long maximumExecutionCount;
  private String name;
  private List<IAction> actions;
  private ITrigger startTrigger;

  private List<IActionWriter> actionsWriters;
  private ITriggerWriter startTriggerWriter;

  /** Default constructor */
  public EventImpl() {
    super();
    addAdapter(EventImpl.class, this);
    addAdapter(IEvent.class, this);
    addAdapter(IEventWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public Priority getPriority() {
    return this.priority;
  }

  @Override
  public Long getMaximumExecutionCount() {
    return this.maximumExecutionCount;
  }

  @Override
  public String getName() {
    return this.name;
  }

  @Override
  public List<IAction> getActions() {
    return this.actions;
  }

  @Override
  public ITrigger getStartTrigger() {
    return this.startTrigger;
  }
  /**
   * Sets the value of model property priority
   *
   * @param priority from OpenSCENARIO class model specification: [Priority of each event.]
   */
  public void setPriority(Priority priority) {
    this.priority = priority;
  }
  /**
   * Sets the value of model property maximumExecutionCount
   *
   * @param maximumExecutionCount from OpenSCENARIO class model specification: [Maximum number of
   *     executions. Default value is 1. Range: [1..inf[.]
   */
  public void setMaximumExecutionCount(Long maximumExecutionCount) {
    this.maximumExecutionCount = maximumExecutionCount;
  }
  /**
   * Sets the value of model property name
   *
   * @param name from OpenSCENARIO class model specification: [Name of the event.]
   */
  public void setName(String name) {
    this.name = name;
  }
  /**
   * Sets the value of model property actions
   *
   * @param actions from OpenSCENARIO class model specification: [List of actions in an event.]
   */
  public void setActions(List<IAction> actions) {
    this.actions = actions;
  }
  /**
   * Sets the value of model property startTrigger
   *
   * @param startTrigger from OpenSCENARIO class model specification: [Actions are executed as soon
   *     as the start trigger fires. This point in time represents the start of the event.]
   */
  public void setStartTrigger(ITrigger startTrigger) {
    this.startTrigger = startTrigger;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__PRIORITY)) {
      // Enumeration Type
      Priority result = Priority.getFromLiteral(parameterLiteralValue);
      if (result != null) {
        this.priority = result;
        addResolvedParameter(attributeKey);
      } else {
        logger.logMessage(
            new FileContentMessage(
                "Value '" + parameterLiteralValue + "' is not allowed.",
                ErrorLevel.ERROR,
                getTextmarker(attributeKey)));
      }

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT)) {
      // Simple type
      this.maximumExecutionCount =
          ParserHelper.parseUnsignedInt(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__NAME)) {
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

    List<IAction> actions = null;
    actions = getActions();
    if (actions != null) {
      for (IAction item : actions) {
        result.add((BaseImpl) item);
      }
    }
    ITrigger startTrigger = null;
    startTrigger = getStartTrigger();
    if (startTrigger != null) {
      result.add((BaseImpl) startTrigger);
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
  public EventImpl clone() {
    EventImpl clonedObject = new EventImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Enumeration Type
    Priority priority = getPriority();
    if (priority != null) {
      clonedObject.setPriority(Priority.getFromLiteral(priority.getLiteral()));
    }
    // Simple type
    clonedObject.setMaximumExecutionCount(getMaximumExecutionCount());
    // Simple type
    clonedObject.setName(getName());
    // clone children
    List<IAction> actions = null;
    actions = getActions();
    if (actions != null) {
      List<IAction> clonedList = new ArrayList<>();
      for (IAction item : actions) {
        ActionImpl clonedChild = ((ActionImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setActions(clonedList);
    }
    ITrigger startTrigger = null;
    startTrigger = getStartTrigger();
    if (startTrigger != null) {
      TriggerImpl clonedChild = ((TriggerImpl) startTrigger).clone();
      clonedObject.setStartTrigger(clonedChild);
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT)) {
      return getMaximumExecutionCount();
    }
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
    throw new KeyNotSupportedException();
  }

  @SuppressWarnings("unchecked")
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key)
      throws KeyNotSupportedException {

    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ELEMENT__ACTION)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getActions();
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__PRIORITY)) {
      Priority priority = getPriority();
      return priority != null ? priority.getLiteral() : null;
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "Event";
  }

  @Override
  public void writeToPriority(Priority priority) {
    setPriority(priority);
  }

  @Override
  public void writeToMaximumExecutionCount(Long maximumExecutionCount) {
    setMaximumExecutionCount(maximumExecutionCount);
  }

  @Override
  public void writeToName(String name) {
    setName(name);
  }

  @Override
  public void writeParameterToPriority(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__PRIORITY, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToMaximumExecutionCount(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToName(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__NAME, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromPriority() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__PRIORITY);
  }

  @Override
  public String getParameterFromMaximumExecutionCount() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT);
  }

  @Override
  public String getParameterFromName() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__NAME);
  }

  @Override
  public boolean isPriorityParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__PRIORITY);
  }

  @Override
  public boolean isMaximumExecutionCountParameterized() {
    return getParameterizedAttributeKeys()
        .contains(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT);
  }

  @Override
  public boolean isNameParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__NAME);
  }

  // children
  @Override
  public ITriggerWriter getStartTriggerWriter() {
    return this.startTriggerWriter;
  }

  @Override
  public void writeToStartTriggerWriter(ITriggerWriter startTriggerWriter) {
    this.startTriggerWriter = startTriggerWriter;
  }

  @Override
  public List<IActionWriter> getActionsWriter() {
    return this.actionsWriters;
  }

  @Override
  public void setActionsWriter(List<IActionWriter> actionsWriters) {
    this.actionsWriters = actionsWriters;
  }
}
