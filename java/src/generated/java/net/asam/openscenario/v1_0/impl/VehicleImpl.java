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
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.parameter.ParameterValue;
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.IAxles;
import net.asam.openscenario.v1_0.api.IBoundingBox;
import net.asam.openscenario.v1_0.api.IParameterDeclaration;
import net.asam.openscenario.v1_0.api.IPerformance;
import net.asam.openscenario.v1_0.api.IProperties;
import net.asam.openscenario.v1_0.api.IVehicle;
import net.asam.openscenario.v1_0.api.VehicleCategory;
import net.asam.openscenario.v1_0.api.writer.IAxlesWriter;
import net.asam.openscenario.v1_0.api.writer.IBoundingBoxWriter;
import net.asam.openscenario.v1_0.api.writer.IParameterDeclarationWriter;
import net.asam.openscenario.v1_0.api.writer.IPerformanceWriter;
import net.asam.openscenario.v1_0.api.writer.IPropertiesWriter;
import net.asam.openscenario.v1_0.api.writer.IVehicleWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IVehicle. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IVehicle)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class VehicleImpl extends BaseImpl implements IVehicleWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__NAME, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__VEHICLE_CATEGORY, SimpleType.ENUM_TYPE);
  }

  private String name;
  private VehicleCategory vehicleCategory;
  private List<IParameterDeclarationWriter> parameterDeclarations = new ArrayList<>();
  private IBoundingBoxWriter boundingBox;
  private IPerformanceWriter performance;
  private IAxlesWriter axles;
  private IPropertiesWriter properties;

  /** Default constructor */
  public VehicleImpl() {
    super();
    addAdapter(VehicleImpl.class, this);
    addAdapter(IVehicle.class, this);
    addAdapter(IVehicleWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public String getName() {
    return this.name;
  }

  @Override
  public VehicleCategory getVehicleCategory() {
    return this.vehicleCategory;
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
        return new ArrayList<IParameterDeclaration>(VehicleImpl.this.parameterDeclarations)
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
  public IBoundingBox getBoundingBox() {
    return this.boundingBox;
  }

  @Override
  public IPerformance getPerformance() {
    return this.performance;
  }

  @Override
  public IAxles getAxles() {
    return this.axles;
  }

  @Override
  public IProperties getProperties() {
    return this.properties;
  }

  @Override
  public void setName(String name) {
    this.name = name;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__NAME);
  }

  @Override
  public void setVehicleCategory(VehicleCategory vehicleCategory) {
    this.vehicleCategory = vehicleCategory;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__VEHICLE_CATEGORY);
  }

  @Override
  public void setParameterDeclarations(List<IParameterDeclarationWriter> parameterDeclarations) {
    this.parameterDeclarations = parameterDeclarations;
  }

  @Override
  public void setBoundingBox(IBoundingBoxWriter boundingBox) {
    this.boundingBox = boundingBox;
  }

  @Override
  public void setPerformance(IPerformanceWriter performance) {
    this.performance = performance;
  }

  @Override
  public void setAxles(IAxlesWriter axles) {
    this.axles = axles;
  }

  @Override
  public void setProperties(IPropertiesWriter properties) {
    this.properties = properties;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__NAME)) {
      // Simple type
      this.name =
          ParserHelper.parseString(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__VEHICLE_CATEGORY)) {
      // Enumeration Type
      VehicleCategory result = VehicleCategory.getFromLiteral(parameterLiteralValue);
      if (result != null) {
        this.vehicleCategory = result;
        addResolvedParameter(attributeKey);
      } else {
        logger.logMessage(
            new FileContentMessage(
                "Value '" + parameterLiteralValue + "' is not allowed.",
                ErrorLevel.ERROR,
                getTextmarker(attributeKey)));
      }
    }
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
    IBoundingBoxWriter boundingBox = null;
    boundingBox = getWriterBoundingBox();
    if (boundingBox != null) {
      result.add((BaseImpl) boundingBox);
    }
    IPerformanceWriter performance = null;
    performance = getWriterPerformance();
    if (performance != null) {
      result.add((BaseImpl) performance);
    }
    IAxlesWriter axles = null;
    axles = getWriterAxles();
    if (axles != null) {
      result.add((BaseImpl) axles);
    }
    IPropertiesWriter properties = null;
    properties = getWriterProperties();
    if (properties != null) {
      result.add((BaseImpl) properties);
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
  public VehicleImpl clone() {
    VehicleImpl clonedObject = new VehicleImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.name = getName();
    // Enumeration Type
    VehicleCategory vehicleCategory = getVehicleCategory();
    if (vehicleCategory != null) {
      clonedObject.vehicleCategory = VehicleCategory.getFromLiteral(vehicleCategory.getLiteral());
    }
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
    IBoundingBoxWriter boundingBox = null;
    boundingBox = getWriterBoundingBox();
    if (boundingBox != null) {
      IBoundingBoxWriter clonedChild = ((BoundingBoxImpl) boundingBox).clone();
      clonedObject.setBoundingBox(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IPerformanceWriter performance = null;
    performance = getWriterPerformance();
    if (performance != null) {
      IPerformanceWriter clonedChild = ((PerformanceImpl) performance).clone();
      clonedObject.setPerformance(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IAxlesWriter axles = null;
    axles = getWriterAxles();
    if (axles != null) {
      IAxlesWriter clonedChild = ((AxlesImpl) axles).clone();
      clonedObject.setAxles(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IPropertiesWriter properties = null;
    properties = getWriterProperties();
    if (properties != null) {
      IPropertiesWriter clonedChild = ((PropertiesImpl) properties).clone();
      clonedObject.setProperties(clonedChild);
      clonedChild.setParent(clonedObject);
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
    if (key.equals(OscConstants.ELEMENT__BOUNDING_BOX)) {
      return (IOpenScenarioFlexElement) getBoundingBox();
    }
    if (key.equals(OscConstants.ELEMENT__PERFORMANCE)) {
      return (IOpenScenarioFlexElement) getPerformance();
    }
    if (key.equals(OscConstants.ELEMENT__AXLES)) {
      return (IOpenScenarioFlexElement) getAxles();
    }
    if (key.equals(OscConstants.ELEMENT__PROPERTIES)) {
      return (IOpenScenarioFlexElement) getProperties();
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__VEHICLE_CATEGORY)) {
      VehicleCategory vehicleCategory = getVehicleCategory();
      return vehicleCategory != null ? vehicleCategory.getLiteral() : null;
    }
    throw new KeyNotSupportedException();
  }

  @Override
  public String getModelType() {
    return "Vehicle";
  }

  @Override
  public void writeParameterToName(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__NAME, parameterName, null /*no textmarker*/);
    this.name = null;
  }

  @Override
  public void writeParameterToVehicleCategory(String parameterName) {
    setAttributeParameter(
        OscConstants.ATTRIBUTE__VEHICLE_CATEGORY, parameterName, null /*no textmarker*/);
    this.vehicleCategory = null;
  }

  @Override
  public String getParameterFromName() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__NAME);
  }

  @Override
  public String getParameterFromVehicleCategory() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__VEHICLE_CATEGORY);
  }

  @Override
  public boolean isNameParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__NAME);
  }

  @Override
  public boolean isVehicleCategoryParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__VEHICLE_CATEGORY);
  }

  // children
  @Override
  public IBoundingBoxWriter getWriterBoundingBox() {
    return this.boundingBox;
  }

  @Override
  public IPerformanceWriter getWriterPerformance() {
    return this.performance;
  }

  @Override
  public IAxlesWriter getWriterAxles() {
    return this.axles;
  }

  @Override
  public IPropertiesWriter getWriterProperties() {
    return this.properties;
  }
}
