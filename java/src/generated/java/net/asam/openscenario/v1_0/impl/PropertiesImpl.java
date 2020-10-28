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
public class PropertiesImpl extends BaseImpl implements IPropertiesWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private List<IPropertyWriter> properties = new ArrayList<>();
  private List<IFileWriter> files = new ArrayList<>();

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
  public List<IPropertyWriter> getWriterProperties() {
    return this.properties;
  }

  @Override
  public Iterable<IProperty> getProperties() {
    return new Iterable<IProperty>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IProperty> iterator() {
        return new ArrayList<IProperty>(PropertiesImpl.this.properties).iterator();
      }
    };
  }

  @Override
  public int getPropertiesSize() {
    if (this.properties != null) return this.properties.size();
    return 0;
  }

  @Override
  public IProperty getPropertiesAtIndex(int index) {
    if (index >= 0 && this.properties != null && this.properties.size() > index) {
      return this.properties.get(index);
    }
    return null;
  }

  @Override
  public List<IFileWriter> getWriterFiles() {
    return this.files;
  }

  @Override
  public Iterable<IFile> getFiles() {
    return new Iterable<IFile>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IFile> iterator() {
        return new ArrayList<IFile>(PropertiesImpl.this.files).iterator();
      }
    };
  }

  @Override
  public int getFilesSize() {
    if (this.files != null) return this.files.size();
    return 0;
  }

  @Override
  public IFile getFilesAtIndex(int index) {
    if (index >= 0 && this.files != null && this.files.size() > index) {
      return this.files.get(index);
    }
    return null;
  }

  @Override
  public void setProperties(List<IPropertyWriter> properties) {
    this.properties = properties;
  }

  @Override
  public void setFiles(List<IFileWriter> files) {
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

    List<IPropertyWriter> properties = null;
    properties = getWriterProperties();
    if (properties != null) {
      for (IPropertyWriter item : properties) {
        result.add((BaseImpl) item);
      }
    }
    List<IFileWriter> files = null;
    files = getWriterFiles();
    if (files != null) {
      for (IFileWriter item : files) {
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
    List<IPropertyWriter> properties = null;
    properties = getWriterProperties();
    if (properties != null) {
      List<IPropertyWriter> clonedList = new ArrayList<>();
      for (IPropertyWriter item : properties) {
        IPropertyWriter clonedChild = ((PropertyImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setProperties(clonedList);
    }
    List<IFileWriter> files = null;
    files = getWriterFiles();
    if (files != null) {
      List<IFileWriter> clonedList = new ArrayList<>();
      for (IFileWriter item : files) {
        IFileWriter clonedChild = ((FileImpl) item).clone();
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

}
