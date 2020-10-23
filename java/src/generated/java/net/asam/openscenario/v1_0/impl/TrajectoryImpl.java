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
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.IParameterDeclaration;
import net.asam.openscenario.v1_0.api.IShape;
import net.asam.openscenario.v1_0.api.ITrajectory;
import net.asam.openscenario.v1_0.api.writer.IParameterDeclarationWriter;
import net.asam.openscenario.v1_0.api.writer.IShapeWriter;
import net.asam.openscenario.v1_0.api.writer.ITrajectoryWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements ITrajectory. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of ITrajectory)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class TrajectoryImpl extends BaseImpl implements ITrajectory, ITrajectoryWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__NAME, SimpleType.STRING);
    propertyToType.put(OscConstants.ATTRIBUTE__CLOSED, SimpleType.BOOLEAN);
  }

  private String name;
  private Boolean closed;
  private List<IParameterDeclaration> parameterDeclarations;
  private IShape shape;

  private List<IParameterDeclarationWriter> parameterDeclarationsWriters;
  private IShapeWriter shapeWriter;

  /** Default constructor */
  public TrajectoryImpl() {
    super();
    addAdapter(TrajectoryImpl.class, this);
    addAdapter(ITrajectory.class, this);
    addAdapter(ITrajectoryWriter.class, this);
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
  public Boolean getClosed() {
    return this.closed;
  }

  @Override
  public List<IParameterDeclaration> getParameterDeclarations() {
    return this.parameterDeclarations;
  }

  @Override
  public IShape getShape() {
    return this.shape;
  }
  /**
   * Sets the value of model property name
   *
   * @param name from OpenSCENARIO class model specification: [Name of the trajectory type. Required
   *     if used in catalog.]
   */
  public void setName(String name) {
    this.name = name;
  }
  /**
   * Sets the value of model property closed
   *
   * @param closed from OpenSCENARIO class model specification: [True if trajectory is closed.]
   */
  public void setClosed(Boolean closed) {
    this.closed = closed;
  }
  /**
   * Sets the value of model property parameterDeclarations
   *
   * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of
   *     additional parameters.]
   */
  public void setParameterDeclarations(List<IParameterDeclaration> parameterDeclarations) {
    this.parameterDeclarations = parameterDeclarations;
  }
  /**
   * Sets the value of model property shape
   *
   * @param shape from OpenSCENARIO class model specification: [The shape of a trajectory (Polyline,
   *     Clothoid or Nurbs)]
   */
  public void setShape(IShape shape) {
    this.shape = shape;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__NAME)) {
      // Simple type
      this.name =
          ParserHelper.parseString(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);

    } else if (attributeKey.equals(OscConstants.ATTRIBUTE__CLOSED)) {
      // Simple type
      this.closed =
          ParserHelper.parseBoolean(logger, parameterLiteralValue, getTextmarker(attributeKey));
      addResolvedParameter(attributeKey);
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

    List<IParameterDeclaration> parameterDeclarations = null;
    parameterDeclarations = getParameterDeclarations();
    if (parameterDeclarations != null) {
      for (IParameterDeclaration item : parameterDeclarations) {
        result.add((BaseImpl) item);
      }
    }
    IShape shape = null;
    shape = getShape();
    if (shape != null) {
      result.add((BaseImpl) shape);
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
  public TrajectoryImpl clone() {
    TrajectoryImpl clonedObject = new TrajectoryImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.setName(getName());
    // Simple type
    clonedObject.setClosed(getClosed());
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
    IShape shape = null;
    shape = getShape();
    if (shape != null) {
      ShapeImpl clonedChild = ((ShapeImpl) shape).clone();
      clonedObject.setShape(clonedChild);
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__CLOSED)) {
      return getClosed();
    }
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
    if (key.equals(OscConstants.ELEMENT__SHAPE)) {
      return (IOpenScenarioFlexElement) getShape();
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
    return "Trajectory";
  }

  @Override
  public void writeToName(String name) {
    setName(name);
  }

  @Override
  public void writeToClosed(Boolean closed) {
    setClosed(closed);
  }

  @Override
  public void writeParameterToName(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__NAME, parameterName, null /*no textmarker*/);
  }

  @Override
  public void writeParameterToClosed(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__CLOSED, parameterName, null /*no textmarker*/);
  }

  @Override
  public String getParameterFromName() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__NAME);
  }

  @Override
  public String getParameterFromClosed() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__CLOSED);
  }

  @Override
  public boolean isNameParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__NAME);
  }

  @Override
  public boolean isClosedParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__CLOSED);
  }

  // children
  @Override
  public IShapeWriter getShapeWriter() {
    return this.shapeWriter;
  }

  @Override
  public void writeToShapeWriter(IShapeWriter shapeWriter) {
    this.shapeWriter = shapeWriter;
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
