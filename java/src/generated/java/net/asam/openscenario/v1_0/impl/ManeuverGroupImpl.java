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
import net.asam.openscenario.v1_0.api.IActors;
import net.asam.openscenario.v1_0.api.ICatalogReference;
import net.asam.openscenario.v1_0.api.IManeuver;
import net.asam.openscenario.v1_0.api.IManeuverGroup;
import net.asam.openscenario.v1_0.api.writer.IActorsWriter;
import net.asam.openscenario.v1_0.api.writer.ICatalogReferenceWriter;
import net.asam.openscenario.v1_0.api.writer.IManeuverGroupWriter;
import net.asam.openscenario.v1_0.api.writer.IManeuverWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IManeuverGroup. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IManeuverGroup)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ManeuverGroupImpl extends BaseImpl implements IManeuverGroup, IManeuverGroupWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, SimpleType.UNSIGNED_INT);
    propertyToType.put(OscConstants.ATTRIBUTE__NAME, SimpleType.STRING);
  }

  private Long maximumExecutionCount;
  private String name;
  private IActors actors;
  private List<ICatalogReference> catalogReferences;
  private List<IManeuver> maneuvers;
  /** Default constructor */
  public ManeuverGroupImpl() {
    super();
    addAdapter(ManeuverGroupImpl.class, this);
    addAdapter(IManeuverGroup.class, this);
    addAdapter(IManeuverGroupWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
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
  public IActors getActors() {
    return this.actors;
  }

  @Override
  public List<ICatalogReference> getCatalogReferences() {
    return this.catalogReferences;
  }

  @Override
  public List<IManeuver> getManeuvers() {
    return this.maneuvers;
  }
  /**
   * Sets the value of model property maximumExecutionCount
   *
   * @param maximumExecutionCount from OpenSCENARIO class model specification: [Number of allowed
   *     executions of the maneuver group. Default value is 1. Range: [1..inf[.]
   */
  public void setMaximumExecutionCount(Long maximumExecutionCount) {
    this.maximumExecutionCount = maximumExecutionCount;
  }
  /**
   * Sets the value of model property name
   *
   * @param name from OpenSCENARIO class model specification: [Name of the maneuver group.]
   */
  public void setName(String name) {
    this.name = name;
  }
  /**
   * Sets the value of model property actors
   *
   * @param actors from OpenSCENARIO class model specification: [Actors of the maneuver group.]
   */
  public void setActors(IActors actors) {
    this.actors = actors;
  }
  /**
   * Sets the value of model property catalogReferences
   *
   * @param catalogReferences from OpenSCENARIO class model specification: [Each element of this
   *     list of must reference a maneuver type in a catalog.]
   */
  public void setCatalogReferences(List<ICatalogReference> catalogReferences) {
    this.catalogReferences = catalogReferences;
  }
  /**
   * Sets the value of model property maneuvers
   *
   * @param maneuvers from OpenSCENARIO class model specification: [Maneuver type definitions.]
   */
  public void setManeuvers(List<IManeuver> maneuvers) {
    this.maneuvers = maneuvers;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT)) {
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

    IActors actors = null;
    actors = getActors();
    if (actors != null) {
      result.add((BaseImpl) actors);
    }
    List<ICatalogReference> catalogReferences = null;
    catalogReferences = getCatalogReferences();
    if (catalogReferences != null) {
      for (ICatalogReference item : catalogReferences) {
        result.add((BaseImpl) item);
      }
    }
    List<IManeuver> maneuvers = null;
    maneuvers = getManeuvers();
    if (maneuvers != null) {
      for (IManeuver item : maneuvers) {
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
  public ManeuverGroupImpl clone() {
    ManeuverGroupImpl clonedObject = new ManeuverGroupImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setMaximumExecutionCount(getMaximumExecutionCount());
    // Simple type
    clonedObject.setName(getName());
    // clone children
    IActors actors = null;
    actors = getActors();
    if (actors != null) {
      ActorsImpl clonedChild = ((ActorsImpl) actors).clone();
      clonedObject.setActors(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    List<ICatalogReference> catalogReferences = null;
    catalogReferences = getCatalogReferences();
    if (catalogReferences != null) {
      List<ICatalogReference> clonedList = new ArrayList<>();
      for (ICatalogReference item : catalogReferences) {
        CatalogReferenceImpl clonedChild = ((CatalogReferenceImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setCatalogReferences(clonedList);
    }
    List<IManeuver> maneuvers = null;
    maneuvers = getManeuvers();
    if (maneuvers != null) {
      List<IManeuver> clonedList = new ArrayList<>();
      for (IManeuver item : maneuvers) {
        ManeuverImpl clonedChild = ((ManeuverImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setManeuvers(clonedList);
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
    if (key.equals(OscConstants.ELEMENT__ACTORS)) {
      return (IOpenScenarioFlexElement) getActors();
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
    if (key.equals(OscConstants.ELEMENT__CATALOG_REFERENCE)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getCatalogReferences();
    }
    if (key.equals(OscConstants.ELEMENT__MANEUVER)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getManeuvers();
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
    return "ManeuverGroup";
  }

  @Override
  public void writeToMaximumExecutionCount(Long maximumExecutionCount) {
    // empty
  }

  @Override
  public void writeToName(String name) {
    // empty
  }

  @Override
  public void writeParameterToMaximumExecutionCount(String parameterName) {
    // empty
  }

  @Override
  public void writeParameterToName(String parameterName) {
    // empty
  }

  @Override
  public String getParameterFromMaximumExecutionCount() {
    return null;
  }

  @Override
  public String getParameterFromName() {
    return null;
  }

  @Override
  public boolean isMaximumExecutionCountParameterized() {
    return false;
  }

  @Override
  public boolean isNameParameterized() {
    return false;
  }

  // children
  @Override
  public IActorsWriter getActorsWriter() {
    return null;
  }

  @Override
  public void writeToActorsWriter(IActorsWriter actorsWriter) {
    // empty
  }

  @Override
  public List<ICatalogReferenceWriter> getCatalogReferencesWriter() {
    return null;
  }

  @Override
  public List<IManeuverWriter> getManeuversWriter() {
    return null;
  }

  @Override
  public void setCatalogReferencesWriter(List<ICatalogReferenceWriter> catalogReferencesWriters) {
    // empty
  }

  @Override
  public void setManeuversWriter(List<IManeuverWriter> maneuversWriters) {
    // empty
  }
}
