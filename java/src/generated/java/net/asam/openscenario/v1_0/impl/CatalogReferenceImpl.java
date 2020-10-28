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
import net.asam.openscenario.v1_0.api.ICatalogElement;
import net.asam.openscenario.v1_0.api.ICatalogReference;
import net.asam.openscenario.v1_0.api.IParameterAssignment;
import net.asam.openscenario.v1_0.api.writer.ICatalogReferenceWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterAssignmentWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ICatalogReference. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ICatalogReference)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class CatalogReferenceImpl extends BaseImpl implements ICatalogReferenceWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__CATALOG_NAME, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__ENTRY_NAME, SimpleType.STRING);
  }

  private String catalogName;
  private String entryName;
  private List<IParameterAssignmentWriter> parameterAssignments = new ArrayList<>();
  private ICatalogElement ref;

  /** Default constructor */
  public CatalogReferenceImpl() {
    super();
    addAdapter(CatalogReferenceImpl.class, this);
    addAdapter(ICatalogReference.class, this);
    addAdapter(ICatalogReferenceWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public String getCatalogName() {
    return this.catalogName;
  }

  @Override
  public String getEntryName() {
    return this.entryName;
  }

  @Override
  public List<IParameterAssignmentWriter> getWriterParameterAssignments() {
    return this.parameterAssignments;
  }

  @Override
  public Iterable<IParameterAssignment> getParameterAssignments() {
    return new Iterable<IParameterAssignment>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IParameterAssignment> iterator() {
        return new ArrayList<IParameterAssignment>(CatalogReferenceImpl.this.parameterAssignments)
            .iterator();
      }
    };
  }

  @Override
  public int getParameterAssignmentsSize() {
    if (this.parameterAssignments != null) return this.parameterAssignments.size();
    return 0;
  }

  @Override
  public IParameterAssignment getParameterAssignmentsAtIndex(int index) {
    if (index >= 0
        && this.parameterAssignments != null
        && this.parameterAssignments.size() > index) {
      return this.parameterAssignments.get(index);
    }
    return null;
  }

  @Override
  public ICatalogElement getRef() {
    return this.ref;
  }

  @Override
  public void setCatalogName(String catalogName) {
    this.catalogName = catalogName;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__CATALOG_NAME);
  }

  @Override
  public void setEntryName(String entryName) {
    this.entryName = entryName;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__ENTRY_NAME);
  }

  @Override
  public void setParameterAssignments(List<IParameterAssignmentWriter> parameterAssignments) {
    this.parameterAssignments = parameterAssignments;
  }

  @Override
  public void setRef(ICatalogElement ref) {
    this.ref = ref;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__CATALOG_NAME)) {
      // Simple type
      this.catalogName =
          ParserHelper.parseString(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__ENTRY_NAME)) {
      // Simple type
      this.entryName =
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

    List<IParameterAssignmentWriter> parameterAssignments = null;
    parameterAssignments = getWriterParameterAssignments();
    if (parameterAssignments != null) {
      for (IParameterAssignmentWriter item : parameterAssignments) {
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
  public CatalogReferenceImpl clone() {
    CatalogReferenceImpl clonedObject = new CatalogReferenceImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.catalogName = getCatalogName();
    // Simple type
    clonedObject.entryName = getEntryName();
    // clone children
    List<IParameterAssignmentWriter> parameterAssignments = null;
    parameterAssignments = getWriterParameterAssignments();
    if (parameterAssignments != null) {
      List<IParameterAssignmentWriter> clonedList = new ArrayList<>();
      for (IParameterAssignmentWriter item : parameterAssignments) {
        IParameterAssignmentWriter clonedChild = ((ParameterAssignmentImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setParameterAssignments(clonedList);
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
    if (key.equals(OscConstants.ATTRIBUTE__CATALOG_NAME)) {
      return getCatalogName();
    } else if (key.equals(OscConstants.ATTRIBUTE__ENTRY_NAME)) {
      return getEntryName();
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

  @SuppressWarnings("unchecked")
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key)
      throws KeyNotSupportedException {

    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ELEMENT__PARAMETER_ASSIGNMENT)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getParameterAssignments();
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
    return "CatalogReference";
  }

  @Override
  public void writeParameterToCatalogName(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__CATALOG_NAME, parameterName, null /*no textmarker*/);
    this.catalogName = null;
  }

  @Override
  public void writeParameterToEntryName(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__ENTRY_NAME, parameterName, null /*no textmarker*/);
    this.entryName = null;
  }

  @Override
  public String getParameterFromCatalogName() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__CATALOG_NAME);
  }

  @Override
  public String getParameterFromEntryName() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__ENTRY_NAME);
  }

  @Override
  public boolean isCatalogNameParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__CATALOG_NAME);
  }

  @Override
  public boolean isEntryNameParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__ENTRY_NAME);
  }

  // children

}
