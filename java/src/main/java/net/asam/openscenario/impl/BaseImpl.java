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

package net.asam.openscenario.impl;

import java.util.Hashtable;
import java.util.List;
import java.util.Set;

import net.asam.openscenario.api.IOpenScenarioFlexElement;
import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.Textmarker;
import net.asam.openscenario.parameter.IParameterizedObject;
import net.asam.openscenario.parameter.ParameterValue;

/**
 * This a base class for all osc model classes. They are independent from the xml platform.
 * Subclasses can be filled from other sources than xml.
 *
 * @author Andreas Hege - RA Consulting
 */
public abstract class BaseImpl
    implements IParameterizedObject,
        IOpenScenarioModelElement,
        IOpenScenarioFlexElement,
        Cloneable {

  private Hashtable<String, ParameterizedAttribute> attributeKeyToParameterName = new Hashtable<>();
  private Hashtable<String, Textmarker> attributeKeyToStartMarker = new Hashtable<>();
  private Hashtable<String, Textmarker> attributeKeyToEndMarker = new Hashtable<>();
  private Hashtable<Class<?>, Object> adapters = new Hashtable<>();
  private Textmarker startMarker;
  private Textmarker endMarker;
  private IOpenScenarioModelElement parent = null;

  /** Constructor */
  public BaseImpl() {
    this.adapters.put(
        ILocator.class,
        new ILocator() {

          @SuppressWarnings("synthetic-access")
          @Override
          public Textmarker getStartMarkerOfProperty(String propertyKey) {
            return BaseImpl.this.attributeKeyToStartMarker.get(propertyKey);
          }

          @SuppressWarnings("synthetic-access")
          @Override
          public Textmarker getStartMarker() {
            return BaseImpl.this.startMarker;
          }

          @SuppressWarnings("synthetic-access")
          @Override
          public Textmarker getEndMarkerOfProperty(String propertyKey) {
            return BaseImpl.this.attributeKeyToEndMarker.get(propertyKey);
          }

          @SuppressWarnings("synthetic-access")
          @Override
          public Textmarker getEndMarker() {
            return BaseImpl.this.endMarker;
          }
        });
  }

  @Override
  public Object getAdapter(Class<?> classifier) {
    return this.adapters.get(classifier);
  }
  /**
   * Adds an adapter object to the instance
   *
   * @param classifier The adapter class
   * @param object the adapter object
   */
  public void addAdapter(Class<?> classifier, Object object) {
    this.adapters.put(classifier, object);
  }

  /**
   * Puts a start marker for a specific property
   *
   * @param propertyKey the key of the property
   * @param startMarker the start marker
   */
  public void putPropertyStartMarker(String propertyKey, Textmarker startMarker) {
    this.attributeKeyToStartMarker.put(propertyKey, startMarker);
  }

  /**
   * Puts an end marker for a specific property
   *
   * @param propertyKey the key of the property
   * @param endMarker the end marker
   */
  public void putPropertyEndMarker(String propertyKey, Textmarker endMarker) {
    this.attributeKeyToEndMarker.put(propertyKey, endMarker);
  }

  /**
   * A clone method for the start marker
   *
   * @param baseImpl the cloned object to set this object's start marker
   */
  protected void cloneStartMarker(BaseImpl baseImpl) {
    baseImpl.setStartMarker(this.startMarker);
  }

  /**
   * Clone method for the end marker
   *
   * @param baseImpl the cloned object to set this object's end marker
   */
  protected void cloneEndMarker(BaseImpl baseImpl) {
    baseImpl.setEndMarker(this.endMarker);
  }
  /**
   * Clone method for the properties start markers
   *
   * @param baseImpl the cloned object to set this object's property start markers
   */
  protected void cloneAttributeKeyToStartMarker(BaseImpl baseImpl) {
    baseImpl.attributeKeyToStartMarker.putAll(this.attributeKeyToStartMarker);
  }

  /**
   * Clone method for the properties end markers
   *
   * @param baseImpl the cloned object to set this object's property end markers
   */
  protected void cloneAttributeKeyToEndMarker(BaseImpl baseImpl) {
    baseImpl.attributeKeyToEndMarker.putAll(this.attributeKeyToEndMarker);
  }
  /**
   * Clones the attributeKeyToParameterName property of this class into the coled object.
   *
   * @param baseImpl the cloned object to copy this object's attributeKeyToParameterName into.
   */
  protected void cloneAttributeKeyToParameterNameMap(BaseImpl baseImpl) {
    for (String key : this.attributeKeyToParameterName.keySet()) {

      ParameterizedAttribute parameterizedAttribute = this.attributeKeyToParameterName.get(key);
      baseImpl.attributeKeyToParameterName.put(
          key,
          new ParameterizedAttribute(
              parameterizedAttribute.parameterName, parameterizedAttribute.textMarker));
    }
  }

  /**
   * Sets an attribute that is represented by a parameter instead of a real value.
   *
   * @param attributeKey the key of this attribute.
   * @param parameterName the name of the parameter.
   * @param textmarker The text marker for this object.
   */
  public void setAttributeParameter(
      String attributeKey, String parameterName, Textmarker textmarker) {
    this.attributeKeyToParameterName.put(
        attributeKey, new ParameterizedAttribute(parameterName, textmarker));
  }

  /**
   * Removes the resolved attribute value from the list of unresolved parameters.
   *
   * @param attributeKey attribute key of the property.
   */
  protected void removeResolvedParameter(String attributeKey) {
    // attributeKeyToParameterName.remove(attributeKey);
  }

  @Override
  public List<ParameterValue> getParameterDefinitions() {
    return null;
  }

  @Override
  public boolean hasParameterDefinitions() {
    return false;
  }

  /**
   * Gets the java class for a parameter type (for resolving the parameter).
   *
   * @param typeName the model type name.
   * @return the corresponding java class or null if no type is found.
   */
  protected Class<?> getParameterType(String typeName) {
    if (typeName == "string") {
      return String.class;

    } else if (typeName == "unsignedInt") {
      return Long.class;

    } else if (typeName == "integer") {
      return Integer.class;

    } else if (typeName == "unsignedShort") {
      return Integer.class;
    } else if (typeName == "dateTime") {
      return java.util.Date.class;
    } else if (typeName == "boolean") {
      return Boolean.class;

    } else if (typeName == "double") {
      return Double.class;
    }
    return null;
  }

  @Override
  public Textmarker getTextmarker(String attributeKey) {
    ParameterizedAttribute parameterizedAttribute =
        this.attributeKeyToParameterName.get(attributeKey);
    if (parameterizedAttribute == null) {
      return null;
    }
    return parameterizedAttribute.textMarker;
  }

  @Override
  public Set<String> getParameterizedAttributeKeys() {
    return this.attributeKeyToParameterName.keySet();
  }

  @Override
  public String getParameterNameFromAttribute(String attributeKey) {
    ParameterizedAttribute parameterizedAttribute =
        this.attributeKeyToParameterName.get(attributeKey);
    if (parameterizedAttribute != null) {
      return parameterizedAttribute.parameterName;
    }
    return null;
  }

  /** An attribute that is paramterized. */
  private class ParameterizedAttribute {
    protected Textmarker textMarker;
    protected String parameterName;

    public ParameterizedAttribute(String parameterName, Textmarker textMarker) {
      super();
      this.textMarker = textMarker;
      this.parameterName = parameterName;
    }
  }
  /**
   * The tpe of an attribute that is represented by the attribute key
   *
   * @param attributeKey the key of the attribute
   * @return the type of the attribute
   */
  @Override
  public abstract Class<?> getTypeFromAttributeName(String attributeKey);

  /**
   * Resolve a parameter internally
   *
   * @param logger to log messages during the resolving process (e.g. format errors)
   * @param attributeKey the key of the property the value should be assigned to
   * @param value the string representation of the value that should be assigned to the property
   */
  protected abstract void resolveParameterInternal(
      IParserMessageLogger logger, String attributeKey, String value);

  /**
   * Resolve a parameter. Checks the target class and calls resolveParameterInternal.
   *
   * @param logger to log messages during the resolving process (e.g. format errors)
   * @param attributeKey the key of the property the value should be assigned to
   * @param value the string representation of the value that should be assigned to the property
   */
  @Override
  public void resolveParameter(IParserMessageLogger logger, String attributeKey, String value) {
    // make sure it is a parameterized attribute
    Class<?> targetClass = getTypeFromAttributeName(attributeKey);
    assert (targetClass != null);
    resolveParameterInternal(logger, attributeKey, value);
  }

  /**
   * The start marker of the this object in a file.
   *
   * @return start marker or null if not set
   */
  public Textmarker getStartMarker() {
    return this.startMarker;
  }

  /**
   * Assigns the start marker
   *
   * @param startMarker the start marker
   */
  public void setStartMarker(Textmarker startMarker) {
    this.startMarker = startMarker;
  }

  /**
   * The end marker of the this object in a file.
   *
   * @return end marker or null if not set
   */
  public Textmarker getEndMarker() {
    return this.endMarker;
  }

  /**
   * Assigns the end marker
   *
   * @param endMarker the end marker
   */
  public void setEndMarker(Textmarker endMarker) {
    this.endMarker = endMarker;
  }

  /**
   * All child instances of this object as a flattened list. Must be implemented in subclasses.
   *
   * @return a list with all child instances.
   */
  public abstract List<BaseImpl> getChildren();

  /** Indicating that all subclasses must implement the the Clonable interface. */
  @Override
  public abstract BaseImpl clone();

  @Override
  public IOpenScenarioModelElement getParent() {
    return this.parent;
  }

  /**
   * Setting the object's parent
   *
   * @param parent the parent of the object in the model tree.
   */
  public void setParent(IOpenScenarioModelElement parent) {
    this.parent = parent;
  }
}
