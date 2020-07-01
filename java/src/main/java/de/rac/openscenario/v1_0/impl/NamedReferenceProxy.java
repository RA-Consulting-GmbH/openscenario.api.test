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
   * @param targetObject
   * @param nameRef
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
