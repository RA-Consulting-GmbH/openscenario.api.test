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
import net.asam.openscenario.v1_0.api.IFileHeader;
import net.asam.openscenario.v1_0.api.writer.IFileHeaderWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IFileHeader. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IFileHeader)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class FileHeaderImpl extends BaseImpl implements IFileHeader, IFileHeaderWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__REV_MAJOR, SimpleType.UNSIGNED_SHORT);
    propertyToType.put(OscConstants.ATTRIBUTE__REV_MINOR, SimpleType.UNSIGNED_SHORT);
    propertyToType.put(OscConstants.ATTRIBUTE__DATE, SimpleType.DATE_TIME);
    propertyToType.put(OscConstants.ATTRIBUTE__DESCRIPTION, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__AUTHOR, SimpleType.STRING);
  }

  private Integer revMajor;
  private Integer revMinor;
  private java.util.Date date;
  private String description;
  private String author;

  /** Default constructor */
  public FileHeaderImpl() {
    super();
    addAdapter(FileHeaderImpl.class, this);
    addAdapter(IFileHeader.class, this);
    addAdapter(IFileHeaderWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public Integer getRevMajor() {
    return this.revMajor;
  }

  @Override
  public Integer getRevMinor() {
    return this.revMinor;
  }

  @Override
  public java.util.Date getDate() {
    return this.date;
  }

  @Override
  public String getDescription() {
    return this.description;
  }

  @Override
  public String getAuthor() {
    return this.author;
  }
  /**
   * Sets the value of model property revMajor
   *
   * @param revMajor from OpenSCENARIO class model specification: [Major OpenSCENARIO revision, this
   *     file conforms to Range: [0..inf[.]
   */
  public void setRevMajor(Integer revMajor) {
    this.revMajor = revMajor;
  }
  /**
   * Sets the value of model property revMinor
   *
   * @param revMinor from OpenSCENARIO class model specification: [Minor OpenSCENARIO revision, this
   *     file conforms to Range: [0..inf[.]
   */
  public void setRevMinor(Integer revMinor) {
    this.revMinor = revMinor;
  }
  /**
   * Sets the value of model property date
   *
   * @param date from OpenSCENARIO class model specification: [User specific date and time
   *     recommended: YYYY-MM-DDThh:mm:ss.]
   */
  public void setDate(java.util.Date date) {
    this.date = date;
  }
  /**
   * Sets the value of model property description
   *
   * @param description from OpenSCENARIO class model specification: [User specific description.]
   */
  public void setDescription(String description) {
    this.description = description;
  }
  /**
   * Sets the value of model property author
   *
   * @param author from OpenSCENARIO class model specification: [Author of the scenario or the
   *     catalog.]
   */
  public void setAuthor(String author) {
    this.author = author;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__REV_MAJOR)) {
      // Simple type
      this.revMajor =
          ParserHelper.parseUnsignedShort(
              logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__REV_MINOR)) {
      // Simple type
      this.revMinor =
          ParserHelper.parseUnsignedShort(
              logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__DATE)) {
      // Simple type
      this.date =
          ParserHelper.parseDateTime(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__DESCRIPTION)) {
      // Simple type
      this.description =
          ParserHelper.parseString(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__AUTHOR)) {
      // Simple type
      this.author =
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

    return result;
  }

  /**
   * Making a (deep) clone this object. This is useful and used for importing elements from
   * catalogs.
   *
   * @return a deep copy of the object.
   */
  @Override
  public FileHeaderImpl clone() {
    FileHeaderImpl clonedObject = new FileHeaderImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setRevMajor(getRevMajor());
    // Simple type
    clonedObject.setRevMinor(getRevMinor());
    // Simple type
    clonedObject.setDate(getDate());
    // Simple type
    clonedObject.setDescription(getDescription());
    // Simple type
    clonedObject.setAuthor(getAuthor());
    // clone children
    return clonedObject;
  }

  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException {
    // proxies and string attributes
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__DESCRIPTION)) {
      return getDescription();
    } else if (key.equals(OscConstants.ATTRIBUTE__AUTHOR)) {
      return getAuthor();
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__REV_MAJOR)) {
      return getRevMajor();
    } else if (key.equals(OscConstants.ATTRIBUTE__REV_MINOR)) {
      return getRevMinor();
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public Boolean getBooleanProperty(String key) throws KeyNotSupportedException {
    throw new KeyNotSupportedException();
  }

  @Override
  public Date getDateTimeProperty(String key) throws KeyNotSupportedException {
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__DATE)) {
      return getDate();
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public IOpenScenarioFlexElement getChildElement(String key) throws KeyNotSupportedException {
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
    return "FileHeader";
  }

  @Override
  public void writeToRevMajor(Integer revMajor) {
    setRevMajor(revMajor);
  }

  @Override
  public void writeToRevMinor(Integer revMinor) {
    setRevMinor(revMinor);
  }

  @Override
  public void writeToDate(java.util.Date date) {
    setDate(date);
  }

  @Override
  public void writeToDescription(String description) {
    setDescription(description);
  }

  @Override
  public void writeToAuthor(String author) {
    setAuthor(author);
  }

  @Override
  public void writeParameterToRevMajor(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__REV_MAJOR, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToRevMinor(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__REV_MINOR, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToDate(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__DATE, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToDescription(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__DESCRIPTION, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToAuthor(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__AUTHOR, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromRevMajor() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__REV_MAJOR);
  }

  @Override
  public String getParameterFromRevMinor() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__REV_MINOR);
  }

  @Override
  public String getParameterFromDate() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__DATE);
  }

  @Override
  public String getParameterFromDescription() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__DESCRIPTION);
  }

  @Override
  public String getParameterFromAuthor() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__AUTHOR);
  }

  @Override
  public boolean isRevMajorParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__REV_MAJOR);
  }

  @Override
  public boolean isRevMinorParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__REV_MINOR);
  }

  @Override
  public boolean isDateParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__DATE);
  }

  @Override
  public boolean isDescriptionParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__DESCRIPTION);
  }

  @Override
  public boolean isAuthorParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__AUTHOR);
  }

  // children

}
