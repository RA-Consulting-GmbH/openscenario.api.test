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
public class ScenarioDefinitionImpl extends BaseImpl implements IScenarioDefinitionWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private List<IParameterDeclarationWriter> parameterDeclarations = new ArrayList<>();
  private ICatalogLocationsWriter catalogLocations;
  private IRoadNetworkWriter roadNetwork;
  private IEntitiesWriter entities;
  private IStoryboardWriter storyboard;

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
  public List<IParameterDeclarationWriter> getWriterParameterDeclarations() {
    return this.parameterDeclarations;
  }

  @Override
  public Iterable<IParameterDeclaration> getParameterDeclarations() {
    return new Iterable<IParameterDeclaration>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IParameterDeclaration> iterator() {
        return new ArrayList<IParameterDeclaration>(
                ScenarioDefinitionImpl.this.parameterDeclarations)
            .iterator();
      }
    };
  }

  @Override
  public int getParameterDeclarationsSize() {
    if (this.parameterDeclarations != null) return this.parameterDeclarations.size();
    return 0;
  }

  @Override
  public IParameterDeclaration getParameterDeclarationsAtIndex(int index) {
    if (index >= 0
        && this.parameterDeclarations != null
        && this.parameterDeclarations.size() > index) {
      return this.parameterDeclarations.get(index);
    }
    return null;
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

  @Override
  public void setParameterDeclarations(List<IParameterDeclarationWriter> parameterDeclarations) {
    this.parameterDeclarations = parameterDeclarations;
  }

  @Override
  public void setCatalogLocations(ICatalogLocationsWriter catalogLocations) {
    this.catalogLocations = catalogLocations;
  }

  @Override
  public void setRoadNetwork(IRoadNetworkWriter roadNetwork) {
    this.roadNetwork = roadNetwork;
  }

  @Override
  public void setEntities(IEntitiesWriter entities) {
    this.entities = entities;
  }

  @Override
  public void setStoryboard(IStoryboardWriter storyboard) {
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

    List<IParameterDeclarationWriter> parameterDeclarations = null;
    parameterDeclarations = getWriterParameterDeclarations();
    if (parameterDeclarations != null) {
      for (IParameterDeclarationWriter item : parameterDeclarations) {
        result.add((BaseImpl) item);
      }
    }
    ICatalogLocationsWriter catalogLocations = null;
    catalogLocations = getWriterCatalogLocations();
    if (catalogLocations != null) {
      result.add((BaseImpl) catalogLocations);
    }
    IRoadNetworkWriter roadNetwork = null;
    roadNetwork = getWriterRoadNetwork();
    if (roadNetwork != null) {
      result.add((BaseImpl) roadNetwork);
    }
    IEntitiesWriter entities = null;
    entities = getWriterEntities();
    if (entities != null) {
      result.add((BaseImpl) entities);
    }
    IStoryboardWriter storyboard = null;
    storyboard = getWriterStoryboard();
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
    List<IParameterDeclarationWriter> parameterDeclarations = null;
    parameterDeclarations = getWriterParameterDeclarations();
    if (parameterDeclarations != null) {
      List<IParameterDeclarationWriter> clonedList = new ArrayList<>();
      for (IParameterDeclarationWriter item : parameterDeclarations) {
        IParameterDeclarationWriter clonedChild = ((ParameterDeclarationImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setParameterDeclarations(clonedList);
    }
    ICatalogLocationsWriter catalogLocations = null;
    catalogLocations = getWriterCatalogLocations();
    if (catalogLocations != null) {
      ICatalogLocationsWriter clonedChild = ((CatalogLocationsImpl) catalogLocations).clone();
      clonedObject.setCatalogLocations(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IRoadNetworkWriter roadNetwork = null;
    roadNetwork = getWriterRoadNetwork();
    if (roadNetwork != null) {
      IRoadNetworkWriter clonedChild = ((RoadNetworkImpl) roadNetwork).clone();
      clonedObject.setRoadNetwork(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IEntitiesWriter entities = null;
    entities = getWriterEntities();
    if (entities != null) {
      IEntitiesWriter clonedChild = ((EntitiesImpl) entities).clone();
      clonedObject.setEntities(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IStoryboardWriter storyboard = null;
    storyboard = getWriterStoryboard();
    if (storyboard != null) {
      IStoryboardWriter clonedChild = ((StoryboardImpl) storyboard).clone();
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
  public ICatalogLocationsWriter getWriterCatalogLocations() {
    return this.catalogLocations;
  }

  @Override
  public IRoadNetworkWriter getWriterRoadNetwork() {
    return this.roadNetwork;
  }

  @Override
  public IEntitiesWriter getWriterEntities() {
    return this.entities;
  }

  @Override
  public IStoryboardWriter getWriterStoryboard() {
    return this.storyboard;
  }
}
