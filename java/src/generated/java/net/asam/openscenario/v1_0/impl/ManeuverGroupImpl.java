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
public class ManeuverGroupImpl extends BaseImpl implements IManeuverGroupWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, SimpleType.UNSIGNED_INT);
    propertyToType.put(OscConstants.ATTRIBUTE__NAME, SimpleType.STRING);
  }

  private Long maximumExecutionCount;
  private String name;
  private IActorsWriter actors;
  private List<ICatalogReferenceWriter> catalogReferences = new ArrayList<>();
  private List<IManeuverWriter> maneuvers = new ArrayList<>();

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
  public List<ICatalogReferenceWriter> getWriterCatalogReferences() {
    return this.catalogReferences;
  }

  @Override
  public Iterable<ICatalogReference> getCatalogReferences() {
    return new Iterable<ICatalogReference>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<ICatalogReference> iterator() {
        return new ArrayList<ICatalogReference>(ManeuverGroupImpl.this.catalogReferences)
            .iterator();
      }
    };
  }

  @Override
  public int getCatalogReferencesSize() {
    if (this.catalogReferences != null) return this.catalogReferences.size();
    return 0;
  }

  @Override
  public ICatalogReference getCatalogReferencesAtIndex(int index) {
    if (index >= 0 && this.catalogReferences != null && this.catalogReferences.size() > index) {
      return this.catalogReferences.get(index);
    }
    return null;
  }

  @Override
  public List<IManeuverWriter> getWriterManeuvers() {
    return this.maneuvers;
  }

  @Override
  public Iterable<IManeuver> getManeuvers() {
    return new Iterable<IManeuver>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IManeuver> iterator() {
        return new ArrayList<IManeuver>(ManeuverGroupImpl.this.maneuvers).iterator();
      }
    };
  }

  @Override
  public int getManeuversSize() {
    if (this.maneuvers != null) return this.maneuvers.size();
    return 0;
  }

  @Override
  public IManeuver getManeuversAtIndex(int index) {
    if (index >= 0 && this.maneuvers != null && this.maneuvers.size() > index) {
      return this.maneuvers.get(index);
    }
    return null;
  }

  @Override
  public void setMaximumExecutionCount(Long maximumExecutionCount) {
    this.maximumExecutionCount = maximumExecutionCount;
  }

  @Override
  public void setName(String name) {
    this.name = name;
  }

  @Override
  public void setActors(IActorsWriter actors) {
    this.actors = actors;
  }

  @Override
  public void setCatalogReferences(List<ICatalogReferenceWriter> catalogReferences) {
    this.catalogReferences = catalogReferences;
  }

  @Override
  public void setManeuvers(List<IManeuverWriter> maneuvers) {
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

    IActorsWriter actors = null;
    actors = getWriterActors();
    if (actors != null) {
      result.add((BaseImpl) actors);
    }
    List<ICatalogReferenceWriter> catalogReferences = null;
    catalogReferences = getWriterCatalogReferences();
    if (catalogReferences != null) {
      for (ICatalogReferenceWriter item : catalogReferences) {
        result.add((BaseImpl) item);
      }
    }
    List<IManeuverWriter> maneuvers = null;
    maneuvers = getWriterManeuvers();
    if (maneuvers != null) {
      for (IManeuverWriter item : maneuvers) {
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
    IActorsWriter actors = null;
    actors = getWriterActors();
    if (actors != null) {
      IActorsWriter clonedChild = ((ActorsImpl) actors).clone();
      clonedObject.setActors(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    List<ICatalogReferenceWriter> catalogReferences = null;
    catalogReferences = getWriterCatalogReferences();
    if (catalogReferences != null) {
      List<ICatalogReferenceWriter> clonedList = new ArrayList<>();
      for (ICatalogReferenceWriter item : catalogReferences) {
        ICatalogReferenceWriter clonedChild = ((CatalogReferenceImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setCatalogReferences(clonedList);
    }
    List<IManeuverWriter> maneuvers = null;
    maneuvers = getWriterManeuvers();
    if (maneuvers != null) {
      List<IManeuverWriter> clonedList = new ArrayList<>();
      for (IManeuverWriter item : maneuvers) {
        IManeuverWriter clonedChild = ((ManeuverImpl) item).clone();
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
  public void writeParameterToMaximumExecutionCount(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToName(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__NAME, parameterName, null /*no textmarker*/);
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
  public IActorsWriter getWriterActors() {
    return this.actors;
  }
}
