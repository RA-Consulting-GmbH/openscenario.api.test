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

import java.util.Date;
import java.util.List;

import net.asam.openscenario.api.IOpenScenarioFlexElement;
import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.api.KeyNotSupportedException;
import net.asam.openscenario.common.INamedReference;

/**
 * A generic implementation of INamedReference
 *
 * @author Andreas Hege - RA Consulting
 * @param <T> OpenSCENARIO model element type
 */
public class NamedReferenceProxy<T extends IOpenScenarioModelElement>
    implements INamedReference<T> {

  private T targetObject;

  private String nameRef;

  private IOpenScenarioModelElement parent;

  /**
   * Constructor using both, target object and nameRef
   *
   * @param targetObject The object that is hidden by the proxy
   * @param nameRef The name reference that represents the proxied object
   */
  public NamedReferenceProxy(T targetObject, String nameRef) {
    super();
    this.targetObject = targetObject;
    this.nameRef = nameRef;
  }

  /**
   * Constructor using only the name that represents the target object
   *
   * @param nameRef name that represents the reference to a real object
   */
  public NamedReferenceProxy(String nameRef) {
    this(null, nameRef);
  }

  @Override
  public T getTargetObject() {
    return this.targetObject;
  }

  /**
   * Sets the target object (resolving the reference)
   *
   * @param targetObject the target object
   */
  public void setTargetObject(T targetObject) {
    this.targetObject = targetObject;
  }

  @Override
  public String getNameRef() {
    return this.nameRef;
  }

  @Override
  public NamedReferenceProxy<T> clone() {
    NamedReferenceProxy<T> proxy = new NamedReferenceProxy<T>(this.nameRef);
    proxy.setTargetObject(this.targetObject);
    return proxy;
  }

  @Override
  public Object getAdapter(Class<?> classifier) {
    // No adapter returned
    return null;
  }

  @Override
  public IOpenScenarioModelElement getParent() {
    return this.parent;
  }

  @Override
  public void setParent(IOpenScenarioModelElement parent) {
    this.parent = parent;
  }

  @Override
  public IOpenScenarioFlexElement getOpenScenarioFlexElement() {
    return new IOpenScenarioFlexElement() {

      @Override
      public Integer getUnsignedShortProperty(String key) throws KeyNotSupportedException {
        throw new KeyNotSupportedException();
      }

      @Override
      public Long getUnsignedIntProperty(String key) throws KeyNotSupportedException {
        throw new KeyNotSupportedException();
      }

      @Override
      public String getStringProperty(String key) throws KeyNotSupportedException {
        throw new KeyNotSupportedException();
      }

      @Override
      public IOpenScenarioFlexElement getReferencedElement(String key, String name)
          throws KeyNotSupportedException {
        throw new KeyNotSupportedException();
      }

      @SuppressWarnings("synthetic-access")
      @Override
      public IOpenScenarioFlexElement getParentFlexElement() {
        return NamedReferenceProxy.this.parent != null
            ? NamedReferenceProxy.this.parent.getOpenScenarioFlexElement()
            : null;
      }

      @SuppressWarnings("synthetic-access")
      @Override
      public String getModelType() {
        return NamedReferenceProxy.this.targetObject != null
            ? NamedReferenceProxy.this.targetObject.getOpenScenarioFlexElement().getModelType()
            : null;
      }

      @Override
      public List<IOpenScenarioFlexElement> getListChildElement(String key)
          throws KeyNotSupportedException {
        throw new KeyNotSupportedException();
      }

      @Override
      public Integer getIntProperty(String key) throws KeyNotSupportedException {
        throw new KeyNotSupportedException();
      }

      @Override
      public String getEnumerationLiteral(String key) throws KeyNotSupportedException {
        throw new KeyNotSupportedException();
      }

      @Override
      public Double getDoubleProperty(String key) throws KeyNotSupportedException {
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

      @Override
      public Boolean getBooleanProperty(String key) throws KeyNotSupportedException {
        throw new KeyNotSupportedException();
      }
    };
  }
}
