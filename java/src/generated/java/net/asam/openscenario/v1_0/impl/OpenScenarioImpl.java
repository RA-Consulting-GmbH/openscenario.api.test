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
import net.asam.openscenario.v1_0.api.IFileHeader;
import net.asam.openscenario.v1_0.api.IOpenScenario;
import net.asam.openscenario.v1_0.api.IOpenScenarioCategory;
import net.asam.openscenario.v1_0.api.writer.IFileHeaderWriter;
import net.asam.openscenario.v1_0.api.writer.IOpenScenarioCategoryWriter;
import net.asam.openscenario.v1_0.api.writer.IOpenScenarioWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IOpenScenario. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IOpenScenario)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class OpenScenarioImpl extends BaseImpl implements IOpenScenario, IOpenScenarioWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IFileHeader fileHeader;
  private IOpenScenarioCategory openScenarioCategory;

  private IFileHeaderWriter fileHeaderWriter;
  private IOpenScenarioCategoryWriter openScenarioCategoryWriter;

  /** Default constructor */
  public OpenScenarioImpl() {
    super();
    addAdapter(OpenScenarioImpl.class, this);
    addAdapter(IOpenScenario.class, this);
    addAdapter(IOpenScenarioWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IFileHeader getFileHeader() {
    return this.fileHeader;
  }

  @Override
  public IOpenScenarioCategory getOpenScenarioCategory() {
    return this.openScenarioCategory;
  }
  /**
   * Sets the value of model property fileHeader
   *
   * @param fileHeader from OpenSCENARIO class model specification: [Header information for the
   *     scenario or the catalog.]
   */
  public void setFileHeader(IFileHeader fileHeader) {
    this.fileHeader = fileHeader;
  }
  /**
   * Sets the value of model property openScenarioCategory
   *
   * @param openScenarioCategory from OpenSCENARIO class model specification: [Category (catalog or
   *     scenario) of the OpenSCENARIO description.]
   */
  public void setOpenScenarioCategory(IOpenScenarioCategory openScenarioCategory) {
    this.openScenarioCategory = openScenarioCategory;
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

    IFileHeader fileHeader = null;
    fileHeader = getFileHeader();
    if (fileHeader != null) {
      result.add((BaseImpl) fileHeader);
    }
    IOpenScenarioCategory openScenarioCategory = null;
    openScenarioCategory = getOpenScenarioCategory();
    if (openScenarioCategory != null) {
      result.add((BaseImpl) openScenarioCategory);
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
  public OpenScenarioImpl clone() {
    OpenScenarioImpl clonedObject = new OpenScenarioImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IFileHeader fileHeader = null;
    fileHeader = getFileHeader();
    if (fileHeader != null) {
      FileHeaderImpl clonedChild = ((FileHeaderImpl) fileHeader).clone();
      clonedObject.setFileHeader(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IOpenScenarioCategory openScenarioCategory = null;
    openScenarioCategory = getOpenScenarioCategory();
    if (openScenarioCategory != null) {
      OpenScenarioCategoryImpl clonedChild =
          ((OpenScenarioCategoryImpl) openScenarioCategory).clone();
      clonedObject.setOpenScenarioCategory(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__FILE_HEADER)) {
      return (IOpenScenarioFlexElement) getFileHeader();
    }
    if (key.equals(OscConstants.ELEMENT__OPEN_SCENARIO_CATEGORY)) {
      return (IOpenScenarioFlexElement) getOpenScenarioCategory();
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
    return "OpenScenario";
  }

  // children
  @Override
  public IFileHeaderWriter getFileHeaderWriter() {
    return this.fileHeaderWriter;
  }

  @Override
  public IOpenScenarioCategoryWriter getOpenScenarioCategoryWriter() {
    return this.openScenarioCategoryWriter;
  }

  @Override
  public void writeToFileHeaderWriter(IFileHeaderWriter fileHeaderWriter) {
    this.fileHeaderWriter = fileHeaderWriter;
  }

  @Override
  public void writeToOpenScenarioCategoryWriter(
      IOpenScenarioCategoryWriter openScenarioCategoryWriter) {
    this.openScenarioCategoryWriter = openScenarioCategoryWriter;
  }
}
