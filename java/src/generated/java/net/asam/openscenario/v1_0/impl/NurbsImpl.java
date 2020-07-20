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
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.parser.ParserHelper;
import net.asam.openscenario.v1_0.api.IControlPoint;
import net.asam.openscenario.v1_0.api.IKnot;
import net.asam.openscenario.v1_0.api.INurbs;
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
public class NurbsImpl extends BaseImpl implements INurbs {
  protected static Hashtable<String, Class<?>> propertyToType = new Hashtable<>();

  /** Filling the property to type map */
  static {
    propertyToType.put(OscConstants.ATTRIBUTE__ORDER, Long.class);
  }

  private Long order;
  private List<IControlPoint> controlPoints;
  private List<IKnot> knots;
  /** Default constructor */
  public NurbsImpl() {
    super();
    addAdapter(NurbsImpl.class, this);
    addAdapter(INurbs.class, this);
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
  public List<IControlPoint> getControlPoints() {
    return this.controlPoints;
  }

  @Override
  public List<IKnot> getKnots() {
    return this.knots;
  }
  /**
   * Sets the value of model property order
   *
   * @param order from OpenSCENARIO class model specification: [Order of the NURBS trajectory. This
   *     is the order of the curve, not the degree of the polynomials, which will be one less, than
   *     the order of the curve. Range [2..inf[.]
   */
  public void setOrder(Long order) {
    this.order = order;
  }
  /**
   * Sets the value of model property controlPoints
   *
   * @param controlPoints from OpenSCENARIO class model specification: [Control point vector of the
   *     NURBS trajectory. The number of control points must be greater or equal to the order of the
   *     , curve.]
   */
  public void setControlPoints(List<IControlPoint> controlPoints) {
    this.controlPoints = controlPoints;
  }
  /**
   * Sets the value of model property knots
   *
   * @param knots from OpenSCENARIO class model specification: [Knot vector of the NURBS trajectory.
   *     Knot values must be given in ascending order. The number of knot vector values must, be
   *     equal to the number of control points plus the order of the curve.]
   */
  public void setKnots(List<IKnot> knots) {
    this.knots = knots;
  }

  @Override
  public void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String parameterLiteralValue) {
    if (attributeKey.equals(OscConstants.ATTRIBUTE__ORDER)) {
      // Simple type
      this.order =
          ParserHelper.parseUnsignedInt(logger, parameterLiteralValue, getTextmarker(attributeKey));
      removeResolvedParameter(attributeKey);
    }
  }

  @Override
  public Class<?> getTypeFromAttributeName(String attributeKey) {
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

    List<IControlPoint> controlPoints = null;
    controlPoints = getControlPoints();
    if (controlPoints != null) {
      for (IControlPoint item : controlPoints) {
        result.add((BaseImpl) item);
      }
    }
    List<IKnot> knots = null;
    knots = getKnots();
    if (knots != null) {
      for (IKnot item : knots) {
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
    clonedObject.setOrder(getOrder());
    // clone children
    List<IControlPoint> controlPoints = null;
    controlPoints = getControlPoints();
    if (controlPoints != null) {
      List<IControlPoint> clonedList = new ArrayList<>();
      for (IControlPoint item : controlPoints) {
        ControlPointImpl clonedChild = ((ControlPointImpl) item).clone();
        clonedList.add(clonedChild);
        clonedChild.setParent(clonedObject);
      }
      clonedObject.setControlPoints(clonedList);
    }
    List<IKnot> knots = null;
    knots = getKnots();
    if (knots != null) {
      List<IKnot> clonedList = new ArrayList<>();
      for (IKnot item : knots) {
        KnotImpl clonedChild = ((KnotImpl) item).clone();
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
}
