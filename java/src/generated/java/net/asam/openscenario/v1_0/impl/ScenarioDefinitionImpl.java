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
import net.asam.openscenario.parameter.ParameterValue;
import net.asam.openscenario.v1_0.api.ICatalogLocations;
import net.asam.openscenario.v1_0.api.IEntities;
import net.asam.openscenario.v1_0.api.IParameterDeclaration;
import net.asam.openscenario.v1_0.api.IRoadNetwork;
import net.asam.openscenario.v1_0.api.IScenarioDefinition;
import net.asam.openscenario.v1_0.api.IStoryboard;
import net.asam.openscenario.v1_0.api.writer.ICatalogLocationsWriter;
import net.asam.openscenario.v1_0.api.writer.IEntitiesWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterDeclarationWriter;
import net.asam.openscenario.v1_0.api.writer.IRoadNetworkWriter;
import net.asam.openscenario.v1_0.api.writer.IScenarioDefinitionWriter;
import net.asam.openscenario.v1_0.api.writer.IStoryboardWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IScenarioDefinition. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IScenarioDefinition)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ScenarioDefinitionImpl extends BaseImpl
    implements IScenarioDefinition, IScenarioDefinitionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private List<IParameterDeclaration> parameterDeclarations;
  private ICatalogLocations catalogLocations;
  private IRoadNetwork roadNetwork;
  private IEntities entities;
  private IStoryboard storyboard;

  private List<IParameterDeclarationWriter> parameterDeclarationsWriters;
  private ICatalogLocationsWriter catalogLocationsWriter;
  private IRoadNetworkWriter roadNetworkWriter;
  private IEntitiesWriter entitiesWriter;
  private IStoryboardWriter storyboardWriter;

  /** Default constructor */
  public ScenarioDefinitionImpl() {
    super();
    addAdapter(ScenarioDefinitionImpl.class, this);
    addAdapter(IScenarioDefinition.class, this);
    addAdapter(IScenarioDefinitionWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public List<IParameterDeclaration> getParameterDeclarations() {
    return this.parameterDeclarations;
  }

  @Override
  public ICatalogLocations getCatalogLocations() {
    return this.catalogLocations;
  }

  @Override
  public IRoadNetwork getRoadNetwork() {
    return this.roadNetwork;
  }

  @Override
  public IEntities getEntities() {
    return this.entities;
  }

  @Override
  public IStoryboard getStoryboard() {
    return this.storyboard;
  }
  /**
   * Sets the value of model property parameterDeclarations
   *
   * @param parameterDeclarations from OpenSCENARIO class model specification: [Global Parameter
   *     declaration. Some parameter represent placeholders to be resolved when the scenario file is
   *     loaded. , Some parameters represent runtime values that can be controlled with
   *     ParameterActions and ParameterConditions during , simulation time.]
   */
  public void setParameterDeclarations(List<IParameterDeclaration> parameterDeclarations) {
    this.parameterDeclarations = parameterDeclarations;
  }
  /**
   * Sets the value of model property catalogLocations
   *
   * @param catalogLocations from OpenSCENARIO class model specification: [A list of locations to
   *     look up catalog files. Each catalog element type has its own list.]
   */
  public void setCatalogLocations(ICatalogLocations catalogLocations) {
    this.catalogLocations = catalogLocations;
  }
  /**
   * Sets the value of model property roadNetwork
   *
   * @param roadNetwork from OpenSCENARIO class model specification: [Reference to the road
   *     network.]
   */
  public void setRoadNetwork(IRoadNetwork roadNetwork) {
    this.roadNetwork = roadNetwork;
  }
  /**
   * Sets the value of model property entities
   *
   * @param entities from OpenSCENARIO class model specification: [Container for entity selections
   *     and scenario object definitions. Instances of ScenarioObject, of EntitySelection and of ,
   *     SpawnedObject considered instances of Entity.]
   */
  public void setEntities(IEntities entities) {
    this.entities = entities;
  }
  /**
   * Sets the value of model property storyboard
   *
   * @param storyboard from OpenSCENARIO class model specification: [Container for the dynamic
   *     content of the scenario.]
   */
  public void setStoryboard(IStoryboard storyboard) {
    this.storyboard = storyboard;
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

  @Override
  public boolean hasParameterDefinitions() {
    return true;
  }

  @Override
  public List<ParameterValue> getParameterDefinitions() {
    List<ParameterValue> result = new java.util.ArrayList<>();
    if (this.parameterDeclarations != null) {
      for (IParameterDeclaration parameterDeclaration : this.parameterDeclarations) {
        ParameterValue parameterValue =
            new ParameterValue(
                parameterDeclaration.getName(),
                getParameterType(parameterDeclaration.getParameterType().getLiteral()),
                parameterDeclaration.getValue());
        result.add(parameterValue);
      }
    }
    return result;
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

    List<IParameterDeclaration> parameterDeclarations = null;
    parameterDeclarations = getParameterDeclarations();
    if (parameterDeclarations != null) {
      for (IParameterDeclaration item : parameterDeclarations) {
        result.add((BaseImpl) item);
      }
    }
    ICatalogLocations catalogLocations = null;
    catalogLocations = getCatalogLocations();
    if (catalogLocations != null) {
      result.add((BaseImpl) catalogLocations);
    }
    IRoadNetwork roadNetwork = null;
    roadNetwork = getRoadNetwork();
    if (roadNetwork != null) {
      result.add((BaseImpl) roadNetwork);
    }
    IEntities entities = null;
    entities = getEntities();
    if (entities != null) {
      result.add((BaseImpl) entities);
    }
    IStoryboard storyboard = null;
    storyboard = getStoryboard();
    if (storyboard != null) {
      result.add((BaseImpl) storyboard);
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
  public ScenarioDefinitionImpl clone() {
    ScenarioDefinitionImpl clonedObject = new ScenarioDefinitionImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    List<IParameterDeclaration> parameterDeclarations = null;
    parameterDeclarations = getParameterDeclarations();
    if (parameterDeclarations != null) {
      List<IParameterDeclaration> clonedList = new ArrayList<>();
      for (IParameterDeclaration item : parameterDeclarations) {
        ParameterDeclarationImpl clonedChild = ((ParameterDeclarationImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setParameterDeclarations(clonedList);
    }
    ICatalogLocations catalogLocations = null;
    catalogLocations = getCatalogLocations();
    if (catalogLocations != null) {
      CatalogLocationsImpl clonedChild = ((CatalogLocationsImpl) catalogLocations).clone();
      clonedObject.setCatalogLocations(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IRoadNetwork roadNetwork = null;
    roadNetwork = getRoadNetwork();
    if (roadNetwork != null) {
      RoadNetworkImpl clonedChild = ((RoadNetworkImpl) roadNetwork).clone();
      clonedObject.setRoadNetwork(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IEntities entities = null;
    entities = getEntities();
    if (entities != null) {
      EntitiesImpl clonedChild = ((EntitiesImpl) entities).clone();
      clonedObject.setEntities(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IStoryboard storyboard = null;
    storyboard = getStoryboard();
    if (storyboard != null) {
      StoryboardImpl clonedChild = ((StoryboardImpl) storyboard).clone();
      clonedObject.setStoryboard(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__CATALOG_LOCATIONS)) {
      return (IOpenScenarioFlexElement) getCatalogLocations();
    }
    if (key.equals(OscConstants.ELEMENT__ROAD_NETWORK)) {
      return (IOpenScenarioFlexElement) getRoadNetwork();
    }
    if (key.equals(OscConstants.ELEMENT__ENTITIES)) {
      return (IOpenScenarioFlexElement) getEntities();
    }
    if (key.equals(OscConstants.ELEMENT__STORYBOARD)) {
      return (IOpenScenarioFlexElement) getStoryboard();
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
    if (key.equals(OscConstants.ELEMENT__PARAMETER_DECLARATION)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getParameterDeclarations();
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
    return "ScenarioDefinition";
  }

  // children
  @Override
  public ICatalogLocationsWriter getCatalogLocationsWriter() {
    return this.catalogLocationsWriter;
  }

  @Override
  public IRoadNetworkWriter getRoadNetworkWriter() {
    return this.roadNetworkWriter;
  }

  @Override
  public IEntitiesWriter getEntitiesWriter() {
    return this.entitiesWriter;
  }

  @Override
  public IStoryboardWriter getStoryboardWriter() {
    return this.storyboardWriter;
  }

  @Override
  public void writeToCatalogLocationsWriter(ICatalogLocationsWriter catalogLocationsWriter) {
    this.catalogLocationsWriter = catalogLocationsWriter;
  }

  @Override
  public void writeToRoadNetworkWriter(IRoadNetworkWriter roadNetworkWriter) {
    this.roadNetworkWriter = roadNetworkWriter;
  }

  @Override
  public void writeToEntitiesWriter(IEntitiesWriter entitiesWriter) {
    this.entitiesWriter = entitiesWriter;
  }

  @Override
  public void writeToStoryboardWriter(IStoryboardWriter storyboardWriter) {
    this.storyboardWriter = storyboardWriter;
  }

  @Override
  public List<IParameterDeclarationWriter> getParameterDeclarationsWriter() {
    return this.parameterDeclarationsWriters;
  }

  @Override
  public void setParameterDeclarationsWriter(
      List<IParameterDeclarationWriter> parameterDeclarationsWriters) {
    this.parameterDeclarationsWriters = parameterDeclarationsWriters;
  }
}
