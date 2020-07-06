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
 
package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IOpenScenarioModelElement;
import de.rac.openscenario.v1_0.common.INamedReference;

/**
 * A generic implementation of INamedReference
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public class NamedReferenceProxy<T> implements INamedReference<T>
{

  private T targetObject;

  private String nameRef;

  private IOpenScenarioModelElement parent;

  /**
   * Constructor using both, target object and nameRef
   * 
   * @param targetObject The object that is hidden by the proxy
   * @param nameRef The name reference that represents the proxied object
   */
  public NamedReferenceProxy(T targetObject, String nameRef)
  {
    super();
    this.targetObject = targetObject;
    this.nameRef = nameRef;
  }

  /**
   * Constructor using only the name that represents the target object
   * 
   * @param nameRef name that represents the reference to a real object
   */
  public NamedReferenceProxy(String nameRef)
  {
    this( null,nameRef);
  }

  @Override
  public T getTargetObject()
  {
    return targetObject;
  }

  /**
   * Sets the target object (resolving the reference)
   * 
   * @param targetObject the target object
   */
  public void setTargetObject(T targetObject)
  {
    this.targetObject = targetObject;
  }

  @Override
  public String getNameRef()
  {
    return nameRef;
  }

  @Override
  public NamedReferenceProxy<T> clone()
  {
    NamedReferenceProxy<T> proxy = new NamedReferenceProxy<T>(nameRef);
    proxy.setTargetObject(targetObject);
    return proxy;
  }

  @Override
  public Object getAdapter(Class<?> classifier)
  {
    // No adapter returned
    return null;
  }

  @Override
  public IOpenScenarioModelElement getParent()
  {
    return this.parent;
  }

  @Override
  public void setParent(IOpenScenarioModelElement parent)
  {
    this.parent = parent;
    
  }

}
