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
public class GlobalActionImpl extends BaseImpl implements IGlobalActionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IEnvironmentActionWriter environmentAction;
  private IEntityActionWriter entityAction;
  private IParameterActionWriter parameterAction;
  private IInfrastructureActionWriter infrastructureAction;
  private ITrafficActionWriter trafficAction;

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

  @Override
  public void setEnvironmentAction(IEnvironmentActionWriter environmentAction) {
    this.environmentAction = environmentAction;
    this.entityAction = null;
    this.parameterAction = null;
    this.infrastructureAction = null;
    this.trafficAction = null;
  }

  @Override
  public void setEntityAction(IEntityActionWriter entityAction) {
    this.entityAction = entityAction;
    this.environmentAction = null;
    this.parameterAction = null;
    this.infrastructureAction = null;
    this.trafficAction = null;
  }

  @Override
  public void setParameterAction(IParameterActionWriter parameterAction) {
    this.parameterAction = parameterAction;
    this.environmentAction = null;
    this.entityAction = null;
    this.infrastructureAction = null;
    this.trafficAction = null;
  }

  @Override
  public void setInfrastructureAction(IInfrastructureActionWriter infrastructureAction) {
    this.infrastructureAction = infrastructureAction;
    this.environmentAction = null;
    this.entityAction = null;
    this.parameterAction = null;
    this.trafficAction = null;
  }

  @Override
  public void setTrafficAction(ITrafficActionWriter trafficAction) {
    this.trafficAction = trafficAction;
    this.environmentAction = null;
    this.entityAction = null;
    this.parameterAction = null;
    this.infrastructureAction = null;
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

    IEnvironmentActionWriter environmentAction = null;
    environmentAction = getWriterEnvironmentAction();
    if (environmentAction != null) {
      result.add((BaseImpl) environmentAction);
    }
    IEntityActionWriter entityAction = null;
    entityAction = getWriterEntityAction();
    if (entityAction != null) {
      result.add((BaseImpl) entityAction);
    }
    IParameterActionWriter parameterAction = null;
    parameterAction = getWriterParameterAction();
    if (parameterAction != null) {
      result.add((BaseImpl) parameterAction);
    }
    IInfrastructureActionWriter infrastructureAction = null;
    infrastructureAction = getWriterInfrastructureAction();
    if (infrastructureAction != null) {
      result.add((BaseImpl) infrastructureAction);
    }
    ITrafficActionWriter trafficAction = null;
    trafficAction = getWriterTrafficAction();
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
    IEnvironmentActionWriter environmentAction = null;
    environmentAction = getWriterEnvironmentAction();
    if (environmentAction != null) {
      IEnvironmentActionWriter clonedChild = ((EnvironmentActionImpl) environmentAction).clone();
      clonedObject.setEnvironmentAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IEntityActionWriter entityAction = null;
    entityAction = getWriterEntityAction();
    if (entityAction != null) {
      IEntityActionWriter clonedChild = ((EntityActionImpl) entityAction).clone();
      clonedObject.setEntityAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IParameterActionWriter parameterAction = null;
    parameterAction = getWriterParameterAction();
    if (parameterAction != null) {
      IParameterActionWriter clonedChild = ((ParameterActionImpl) parameterAction).clone();
      clonedObject.setParameterAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IInfrastructureActionWriter infrastructureAction = null;
    infrastructureAction = getWriterInfrastructureAction();
    if (infrastructureAction != null) {
      IInfrastructureActionWriter clonedChild =
          ((InfrastructureActionImpl) infrastructureAction).clone();
      clonedObject.setInfrastructureAction(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    ITrafficActionWriter trafficAction = null;
    trafficAction = getWriterTrafficAction();
    if (trafficAction != null) {
      ITrafficActionWriter clonedChild = ((TrafficActionImpl) trafficAction).clone();
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
  public IEnvironmentActionWriter getWriterEnvironmentAction() {
    return this.environmentAction;
  }

  @Override
  public IEntityActionWriter getWriterEntityAction() {
    return this.entityAction;
  }

  @Override
  public IParameterActionWriter getWriterParameterAction() {
    return this.parameterAction;
  }

  @Override
  public IInfrastructureActionWriter getWriterInfrastructureAction() {
    return this.infrastructureAction;
  }

  @Override
  public ITrafficActionWriter getWriterTrafficAction() {
    return this.trafficAction;
  }
}
