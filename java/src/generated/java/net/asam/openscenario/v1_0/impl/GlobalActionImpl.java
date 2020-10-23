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
import net.asam.openscenario.v1_0.api.IEntityAction;
import net.asam.openscenario.v1_0.api.IEnvironmentAction;
import net.asam.openscenario.v1_0.api.IGlobalAction;
import net.asam.openscenario.v1_0.api.IInfrastructureAction;
import net.asam.openscenario.v1_0.api.IParameterAction;
import net.asam.openscenario.v1_0.api.ITrafficAction;
import net.asam.openscenario.v1_0.api.writer.IEntityActionWriter;
import net.asam.openscenario.v1_0.api.writer.IEnvironmentActionWriter;
import net.asam.openscenario.v1_0.api.writer.IGlobalActionWriter;
import net.asam.openscenario.v1_0.api.writer.IInfrastructureActionWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterActionWriter;
import net.asam.openscenario.v1_0.api.writer.ITrafficActionWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IGlobalAction. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IGlobalAction)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class GlobalActionImpl extends BaseImpl implements IGlobalAction, IGlobalActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IEnvironmentAction environmentAction;
  private IEntityAction entityAction;
  private IParameterAction parameterAction;
  private IInfrastructureAction infrastructureAction;
  private ITrafficAction trafficAction;

  private IEnvironmentActionWriter environmentActionWriter;
  private IEntityActionWriter entityActionWriter;
  private IParameterActionWriter parameterActionWriter;
  private IInfrastructureActionWriter infrastructureActionWriter;
  private ITrafficActionWriter trafficActionWriter;

  /** Default constructor */
  public GlobalActionImpl() {
    super();
    addAdapter(GlobalActionImpl.class, this);
    addAdapter(IGlobalAction.class, this);
    addAdapter(IGlobalActionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IEnvironmentAction getEnvironmentAction() {
    return this.environmentAction;
  }

  @Override
  public IEntityAction getEntityAction() {
    return this.entityAction;
  }

  @Override
  public IParameterAction getParameterAction() {
    return this.parameterAction;
  }

  @Override
  public IInfrastructureAction getInfrastructureAction() {
    return this.infrastructureAction;
  }

  @Override
  public ITrafficAction getTrafficAction() {
    return this.trafficAction;
  }
  /**
   * Sets the value of model property environmentAction
   *
   * @param environmentAction from OpenSCENARIO class model specification: [Sets the weather state,
   *     road conditions, and time of the day.]
   */
  public void setEnvironmentAction(IEnvironmentAction environmentAction) {
    this.environmentAction = environmentAction;
  }
  /**
   * Sets the value of model property entityAction
   *
   * @param entityAction from OpenSCENARIO class model specification: [Removing or adding entities.]
   */
  public void setEntityAction(IEntityAction entityAction) {
    this.entityAction = entityAction;
  }
  /**
   * Sets the value of model property parameterAction
   *
   * @param parameterAction from OpenSCENARIO class model specification: [Setting/modifying values
   *     of parameters.]
   */
  public void setParameterAction(IParameterAction parameterAction) {
    this.parameterAction = parameterAction;
  }
  /**
   * Sets the value of model property infrastructureAction
   *
   * @param infrastructureAction from OpenSCENARIO class model specification: [Setting/modifying
   *     traffic signals.]
   */
  public void setInfrastructureAction(IInfrastructureAction infrastructureAction) {
    this.infrastructureAction = infrastructureAction;
  }
  /**
   * Sets the value of model property trafficAction
   *
   * @param trafficAction from OpenSCENARIO class model specification: [Populating ambient traffic.]
   */
  public void setTrafficAction(ITrafficAction trafficAction) {
    this.trafficAction = trafficAction;
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

    IEnvironmentAction environmentAction = null;
    environmentAction = getEnvironmentAction();
    if (environmentAction != null) {
      result.add((BaseImpl) environmentAction);
    }
    IEntityAction entityAction = null;
    entityAction = getEntityAction();
    if (entityAction != null) {
      result.add((BaseImpl) entityAction);
    }
    IParameterAction parameterAction = null;
    parameterAction = getParameterAction();
    if (parameterAction != null) {
      result.add((BaseImpl) parameterAction);
    }
    IInfrastructureAction infrastructureAction = null;
    infrastructureAction = getInfrastructureAction();
    if (infrastructureAction != null) {
      result.add((BaseImpl) infrastructureAction);
    }
    ITrafficAction trafficAction = null;
    trafficAction = getTrafficAction();
    if (trafficAction != null) {
      result.add((BaseImpl) trafficAction);
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
  public GlobalActionImpl clone() {
    GlobalActionImpl clonedObject = new GlobalActionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IEnvironmentAction environmentAction = null;
    environmentAction = getEnvironmentAction();
    if (environmentAction != null) {
      EnvironmentActionImpl clonedChild = ((EnvironmentActionImpl) environmentAction).clone();
      clonedObject.setEnvironmentAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IEntityAction entityAction = null;
    entityAction = getEntityAction();
    if (entityAction != null) {
      EntityActionImpl clonedChild = ((EntityActionImpl) entityAction).clone();
      clonedObject.setEntityAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IParameterAction parameterAction = null;
    parameterAction = getParameterAction();
    if (parameterAction != null) {
      ParameterActionImpl clonedChild = ((ParameterActionImpl) parameterAction).clone();
      clonedObject.setParameterAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IInfrastructureAction infrastructureAction = null;
    infrastructureAction = getInfrastructureAction();
    if (infrastructureAction != null) {
      InfrastructureActionImpl clonedChild =
          ((InfrastructureActionImpl) infrastructureAction).clone();
      clonedObject.setInfrastructureAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITrafficAction trafficAction = null;
    trafficAction = getTrafficAction();
    if (trafficAction != null) {
      TrafficActionImpl clonedChild = ((TrafficActionImpl) trafficAction).clone();
      clonedObject.setTrafficAction(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__ENVIRONMENT_ACTION)) {
      return (IOpenScenarioFlexElement) getEnvironmentAction();
    }
    if (key.equals(OscConstants.ELEMENT__ENTITY_ACTION)) {
      return (IOpenScenarioFlexElement) getEntityAction();
    }
    if (key.equals(OscConstants.ELEMENT__PARAMETER_ACTION)) {
      return (IOpenScenarioFlexElement) getParameterAction();
    }
    if (key.equals(OscConstants.ELEMENT__INFRASTRUCTURE_ACTION)) {
      return (IOpenScenarioFlexElement) getInfrastructureAction();
    }
    if (key.equals(OscConstants.ELEMENT__TRAFFIC_ACTION)) {
      return (IOpenScenarioFlexElement) getTrafficAction();
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
    return "GlobalAction";
  }

  // children
  @Override
  public IEnvironmentActionWriter getEnvironmentActionWriter() {
    return this.environmentActionWriter;
  }

  @Override
  public IEntityActionWriter getEntityActionWriter() {
    return this.entityActionWriter;
  }

  @Override
  public IParameterActionWriter getParameterActionWriter() {
    return this.parameterActionWriter;
  }

  @Override
  public IInfrastructureActionWriter getInfrastructureActionWriter() {
    return this.infrastructureActionWriter;
  }

  @Override
  public ITrafficActionWriter getTrafficActionWriter() {
    return this.trafficActionWriter;
  }

  @Override
  public void writeToEnvironmentActionWriter(IEnvironmentActionWriter environmentActionWriter) {
    this.environmentActionWriter = environmentActionWriter;
  }

  @Override
  public void writeToEntityActionWriter(IEntityActionWriter entityActionWriter) {
    this.entityActionWriter = entityActionWriter;
  }

  @Override
  public void writeToParameterActionWriter(IParameterActionWriter parameterActionWriter) {
    this.parameterActionWriter = parameterActionWriter;
  }

  @Override
  public void writeToInfrastructureActionWriter(
      IInfrastructureActionWriter infrastructureActionWriter) {
    this.infrastructureActionWriter = infrastructureActionWriter;
  }

  @Override
  public void writeToTrafficActionWriter(ITrafficActionWriter trafficActionWriter) {
    this.trafficActionWriter = trafficActionWriter;
  }
}
