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
import net.asam.openscenario.v1_0.api.IClothoid;
import net.asam.openscenario.v1_0.api.INurbs;
import net.asam.openscenario.v1_0.api.IPolyline;
import net.asam.openscenario.v1_0.api.IShape;
import net.asam.openscenario.v1_0.api.writer.IClothoidWriter;
import net.asam.openscenario.v1_0.api.writer.INurbsWriter;
import net.asam.openscenario.v1_0.api.writer.IPolylineWriter;
import net.asam.openscenario.v1_0.api.writer.IShapeWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements IShape. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of IShape)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class ShapeImpl extends BaseImpl implements IShape, IShapeWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  private IPolyline polyline;
  private IClothoid clothoid;
  private INurbs nurbs;
  /** Default constructor */
  public ShapeImpl() {
    super();
    addAdapter(ShapeImpl.class, this);
    addAdapter(IShape.class, this);
    addAdapter(IShapeWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public IPolyline getPolyline() {
    return this.polyline;
  }

  @Override
  public IClothoid getClothoid() {
    return this.clothoid;
  }

  @Override
  public INurbs getNurbs() {
    return this.nurbs;
  }
  /**
   * Sets the value of model property polyline
   *
   * @param polyline from OpenSCENARIO class model specification: [Polyline property of a shape.]
   */
  public void setPolyline(IPolyline polyline) {
    this.polyline = polyline;
  }
  /**
   * Sets the value of model property clothoid
   *
   * @param clothoid from OpenSCENARIO class model specification: [Clothoid property of a shape.]
   */
  public void setClothoid(IClothoid clothoid) {
    this.clothoid = clothoid;
  }
  /**
   * Sets the value of model property nurbs
   *
   * @param nurbs from OpenSCENARIO class model specification: [NURBS property of a shape.]
   */
  public void setNurbs(INurbs nurbs) {
    this.nurbs = nurbs;
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

    IPolyline polyline = null;
    polyline = getPolyline();
    if (polyline != null) {
      result.add((BaseImpl) polyline);
    }
    IClothoid clothoid = null;
    clothoid = getClothoid();
    if (clothoid != null) {
      result.add((BaseImpl) clothoid);
    }
    INurbs nurbs = null;
    nurbs = getNurbs();
    if (nurbs != null) {
      result.add((BaseImpl) nurbs);
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
  public ShapeImpl clone() {
    ShapeImpl clonedObject = new ShapeImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // clone children
    IPolyline polyline = null;
    polyline = getPolyline();
    if (polyline != null) {
      PolylineImpl clonedChild = ((PolylineImpl) polyline).clone();
      clonedObject.setPolyline(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    IClothoid clothoid = null;
    clothoid = getClothoid();
    if (clothoid != null) {
      ClothoidImpl clonedChild = ((ClothoidImpl) clothoid).clone();
      clonedObject.setClothoid(clonedChild);
      clonedChild.setParent(clonedObject);
    }
    INurbs nurbs = null;
    nurbs = getNurbs();
    if (nurbs != null) {
      NurbsImpl clonedChild = ((NurbsImpl) nurbs).clone();
      clonedObject.setNurbs(clonedChild);
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
    if (key.equals(OscConstants.ELEMENT__POLYLINE)) {
      return (IOpenScenarioFlexElement) getPolyline();
    }
    if (key.equals(OscConstants.ELEMENT__CLOTHOID)) {
      return (IOpenScenarioFlexElement) getClothoid();
    }
    if (key.equals(OscConstants.ELEMENT__NURBS)) {
      return (IOpenScenarioFlexElement) getNurbs();
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
    return "Shape";
  }

  // children
  @Override
  public IPolylineWriter getPolylineWriter() {
    return null;
  }

  @Override
  public IClothoidWriter getClothoidWriter() {
    return null;
  }

  @Override
  public INurbsWriter getNurbsWriter() {
    return null;
  }

  @Override
  public void writeToPolylineWriter(IPolylineWriter polylineWriter) {
    // empty
  }

  @Override
  public void writeToClothoidWriter(IClothoidWriter clothoidWriter) {
    // empty
  }

  @Override
  public void writeToNurbsWriter(INurbsWriter nurbsWriter) {
    // empty
  }
}
