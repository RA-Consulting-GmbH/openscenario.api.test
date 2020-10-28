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
import net.asam.openscenario.v1_0.api.IControlPoint;
import net.asam.openscenario.v1_0.api.IKnot;
import net.asam.openscenario.v1_0.api.INurbs;
import net.asam.openscenario.v1_0.api.writer.IControlPointWriter;
import net.asam.openscenario.v1_0.api.writer.IKnotWriter;
import net.asam.openscenario.v1_0.api.writer.INurbsWriter;
import net.asam.openscenario.v1_0.common.OscConstants;

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 *
 * <p>Value class that implements INurbs. With setter methods to fill the properties.
 *
 * <ul>
 *   <li>getter methods for properties (implemented methods of INurbs)
 *   <li>setter methods for properties
 *   <li>getChildren method to collect all children
 *   <li>clone function to make a deep copy
 *   <li>overrides from BaseImpl
 * </ul>
 *
 * @author RA Consulting OpenSCENARIO generation facility
 */
public class NurbsImpl extends BaseImpl implements INurbsWriter {
  protected static Hashtable<String, SimpleType> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__ORDER, SimpleType.UNSIGNED_INT);
  }

  private Long order;
  private List<IControlPointWriter> controlPoints = new ArrayList<>();
  private List<IKnotWriter> knots = new ArrayList<>();

  /** Default constructor */
  public NurbsImpl() {
    super();
    addAdapter(NurbsImpl.class, this);
    addAdapter(INurbs.class, this);
    addAdapter(INurbsWriter.class, this);
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return this;
  }

  @Override
  public Long getOrder() {
    return this.order;
  }

  @Override
  public List<IControlPointWriter> getWriterControlPoints() {
    return this.controlPoints;
  }

  @Override
  public Iterable<IControlPoint> getControlPoints() {
    return new Iterable<IControlPoint>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IControlPoint> iterator() {
        return new ArrayList<IControlPoint>(NurbsImpl.this.controlPoints).iterator();
      }
    };
  }

  @Override
  public int getControlPointsSize() {
    if (this.controlPoints != null) return this.controlPoints.size();
    return 0;
  }

  @Override
  public IControlPoint getControlPointsAtIndex(int index) {
    if (index >= 0 && this.controlPoints != null && this.controlPoints.size() > index) {
      return this.controlPoints.get(index);
    }
    return null;
  }

  @Override
  public List<IKnotWriter> getWriterKnots() {
    return this.knots;
  }

  @Override
  public Iterable<IKnot> getKnots() {
    return new Iterable<IKnot>() {

      @SuppressWarnings("synthetic-access")
      @Override
      public Iterator<IKnot> iterator() {
        return new ArrayList<IKnot>(NurbsImpl.this.knots).iterator();
      }
    };
  }

  @Override
  public int getKnotsSize() {
    if (this.knots != null) return this.knots.size();
    return 0;
  }

  @Override
  public IKnot getKnotsAtIndex(int index) {
    if (index >= 0 && this.knots != null && this.knots.size() > index) {
      return this.knots.get(index);
    }
    return null;
  }

  @Override
  public void setOrder(Long order) {
    this.order = order;
    // removeAttributeParameter(OscConstants.ATTRIBUTE__ORDER);
  }

  @Override
  public void setControlPoints(List<IControlPointWriter> controlPoints) {
    this.controlPoints = controlPoints;
  }

  @Override
  public void setKnots(List<IKnotWriter> knots) {
    this.knots = knots;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__ORDER)) {
      // Simple type
      this.order =
          ParserHelper.parseUnsignedInt(logger, parameterLiteralValue, getTextmarker(attributeKey));
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

    List<IControlPointWriter> controlPoints = null;
    controlPoints = getWriterControlPoints();
    if (controlPoints != null) {
      for (IControlPointWriter item : controlPoints) {
        result.add((BaseImpl) item);
      }
    }
    List<IKnotWriter> knots = null;
    knots = getWriterKnots();
    if (knots != null) {
      for (IKnotWriter item : knots) {
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
  public NurbsImpl clone() {
    NurbsImpl clonedObject = new NurbsImpl();
    cloneStartMarker(clonedObject);
    cloneEndMarker(clonedObject);
    cloneAttributeKeyToStartMarker(clonedObject);
    cloneAttributeKeyToEndMarker(clonedObject);
    cloneAttributeKeyToParameterNameMap(clonedObject);
    // clone attributes;
    // Simple type
    clonedObject.order = getOrder();
    // clone children
    List<IControlPointWriter> controlPoints = null;
    controlPoints = getWriterControlPoints();
    if (controlPoints != null) {
      List<IControlPointWriter> clonedList = new ArrayList<>();
      for (IControlPointWriter item : controlPoints) {
        IControlPointWriter clonedChild = ((ControlPointImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setControlPoints(clonedList);
    }
    List<IKnotWriter> knots = null;
    knots = getWriterKnots();
    if (knots != null) {
      List<IKnotWriter> clonedList = new ArrayList<>();
      for (IKnotWriter item : knots) {
        IKnotWriter clonedChild = ((KnotImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setKnots(clonedList);
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
    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ATTRIBUTE__ORDER)) {
      return getOrder();
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
    throw new KeyNotSupportedException();
  }

  @SuppressWarnings("unchecked")
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key)
      throws KeyNotSupportedException {

    if (key == null) {
      throw new KeyNotSupportedException();
    }
    if (key.equals(OscConstants.ELEMENT__CONTROL_POINT)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getControlPoints();
    }
    if (key.equals(OscConstants.ELEMENT__KNOT)) {
      return (List<IOpenScenarioFlexElement>) (List<?>) getKnots();
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
    return "Nurbs";
  }

  @Override
  public void writeParameterToOrder(String parameterName) {
    setAttributeParameter(OscConstants.ATTRIBUTE__ORDER, parameterName, null /*no textmarker*/);
    this.order = null;
  }

  @Override
  public String getParameterFromOrder() {
    return getParameterNameFromAttribute(OscConstants.ATTRIBUTE__ORDER);
  }

  @Override
  public boolean isOrderParameterized() {
    return getParameterizedAttributeKeys().contains(OscConstants.ATTRIBUTE__ORDER);
  }

  // children

}
