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
import net.asam.openscenario.v1_0.api.IFile;
import net.asam.openscenario.v1_0.api.IProperties;
import net.asam.openscenario.v1_0.api.IProperty;
import net.asam.openscenario.v1_0.api.writer.IFileWriter;
import net.asam.openscenario.v1_0.api.writer.IPropertiesWriter;
import net.asam.openscenario.v1_0.api.writer.IPropertyWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IProperties. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IProperties)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class PropertiesImpl extends BaseImpl implements IProperties, IPropertiesWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private List<IProperty> properties;
  private List<IFile> files;

  private List<IPropertyWriter> propertiesWriters;
  private List<IFileWriter> filesWriters;

  /** Default constructor */
  public PropertiesImpl() {
    super();
    addAdapter(PropertiesImpl.class, this);
    addAdapter(IProperties.class, this);
    addAdapter(IPropertiesWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public List<IProperty> getProperties() {
    return this.properties;
  }

  @Override
  public List<IFile> getFiles() {
    return this.files;
  }
  /**
   * Sets the value of model property properties
   *
   * @param properties from OpenSCENARIO class model specification: [A name/value pair. The semantic
   *     of the name/values are subject of a contract between the provider of a simulation ,
   *     environment and the author of a scenario.]
   */
  public void setProperties(List<IProperty> properties) {
    this.properties = properties;
  }
  /**
   * Sets the value of model property files
   *
   * @param files from OpenSCENARIO class model specification: [A list of arbitrary files attached
   *     to an object that owns the properties. The semantic and the file formats are subject , of a
   *     contract between the provider of a simulation environment and the author of a scenario.]
   */
  public void setFiles(List<IFile> files) {
    this.files = files;
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

    List<IProperty> properties = null;
    properties = getProperties();
    if (properties != null) {
      for (IProperty item : properties) {
        result.add((BaseImpl) item);
      }
    }
    List<IFile> files = null;
    files = getFiles();
    if (files != null) {
      for (IFile item : files) {
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
  public PropertiesImpl clone() {
    PropertiesImpl clonedObject = new PropertiesImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    List<IProperty> properties = null;
    properties = getProperties();
    if (properties != null) {
      List<IProperty> clonedList = new ArrayList<>();
      for (IProperty item : properties) {
        PropertyImpl clonedChild = ((PropertyImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setProperties(clonedList);
    }
    List<IFile> files = null;
    files = getFiles();
    if (files != null) {
      List<IFile> clonedList = new ArrayList<>();
      for (IFile item : files) {
        FileImpl clonedChild = ((FileImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setFiles(clonedList);
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
    throw new KeyNotSupportedException();
  }

  @SuppressWarnings("unchecked")
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key)
      throws KeyNotSupportedException {

    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ELEMENT__PROPERTY)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getProperties();
    }
    if (key.equals(OscConstants.ELEMENT__FILE)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getFiles();
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
    return "Properties";
  }

  // children

  @Override
  public List<IPropertyWriter> getPropertiesWriter() {
    return this.propertiesWriters;
  }

  @Override
  public List<IFileWriter> getFilesWriter() {
    return this.filesWriters;
  }

  @Override
  public void setPropertiesWriter(List<IPropertyWriter> propertiesWriters) {
    this.propertiesWriters = propertiesWriters;
  }

  @Override
  public void setFilesWriter(List<IFileWriter> filesWriters) {
    this.filesWriters = filesWriters;
  }
}
