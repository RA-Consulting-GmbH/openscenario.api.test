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

import net.asam.openscenario.v1_0.api.IAxles;
import net.asam.openscenario.impl.BaseImpl;
import net.asam.openscenario.common.ILocator;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.api.IOpenScenarioModelElement;
import net.asam.openscenario.api.IOpenScenarioFlexElement;
import net.asam.openscenario.api.KeyNotSupportedException;
import java.util.Date;
import java.lang.Cloneable;
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;

import net.asam.openscenario.v1_0.api.IAxle;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAxles. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAxles)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class AxlesImpl extends BaseImpl implements IAxles, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IAxle frontAxle;
	private IAxle rearAxle;
	private List<IAxle> additionalAxles;
	/**
	 * Default constructor
	 */
	public AxlesImpl()
	{
		super();
		addAdapter(AxlesImpl.class, this);
		addAdapter(IAxles.class, this);
		
	}
	
	public IOpenScenarioFlexElement getOpenScenarioFlexElement()
	{
		return this;
	}
	@Override
	public IAxle getFrontAxle()
	{
		return frontAxle;
	}
	@Override
	public IAxle getRearAxle()
	{
		return rearAxle;
	}
	@Override
	public List<IAxle> getAdditionalAxles()
	{
		return additionalAxles;
	}
	/**
	 * Sets the value of model property frontAxle
	 * @param frontAxle from OpenSCENARIO class model specification: [Front axle.]
	 * 
	*/
	public  void setFrontAxle (IAxle frontAxle )
	{
		this.frontAxle = frontAxle;
	}
	/**
	 * Sets the value of model property rearAxle
	 * @param rearAxle from OpenSCENARIO class model specification: [Rear axle.]
	 * 
	*/
	public  void setRearAxle (IAxle rearAxle )
	{
		this.rearAxle = rearAxle;
	}
	/**
	 * Sets the value of model property additionalAxles
	 * @param additionalAxles from OpenSCENARIO class model specification: [A list of optional additional axles.]
	 * 
	*/
	public void setAdditionalAxles(List<IAxle> additionalAxles)
	{
		this.additionalAxles = additionalAxles;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
	}
	
	@Override
	public  Class<?> getTypeFromAttributeName(String attributeKey)
	{
		return propertyToType.get(attributeKey);
	}

	/**
	 * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
	 * method for any child.
	 * @return a list with all children (as BaseImpl)
	 */
	public List<BaseImpl> getChildren()
	{
		List<BaseImpl> result = new ArrayList<BaseImpl>();
		
			IAxle frontAxle = null;
			frontAxle =  getFrontAxle();
			if (frontAxle != null)
			{
				result.add((BaseImpl) frontAxle);
			}	
			IAxle rearAxle = null;
			rearAxle =  getRearAxle();
			if (rearAxle != null)
			{
				result.add((BaseImpl) rearAxle);
			}	
			List<IAxle> additionalAxles = null;
			additionalAxles =  getAdditionalAxles();
			if (additionalAxles != null)
			{
				for(IAxle item : additionalAxles)
				{
					result.add((BaseImpl) item);
				}
			}
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public AxlesImpl clone()
	{
		AxlesImpl clonedObject = new AxlesImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IAxle frontAxle = null;
		frontAxle =  getFrontAxle();
		if (frontAxle != null)
		{
			AxleImpl clonedChild = ((AxleImpl) frontAxle).clone();
			clonedObject.setFrontAxle(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IAxle rearAxle = null;
		rearAxle =  getRearAxle();
		if (rearAxle != null)
		{
			AxleImpl clonedChild = ((AxleImpl) rearAxle).clone();
			clonedObject.setRearAxle(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		List<IAxle> additionalAxles = null;
			additionalAxles =  getAdditionalAxles();
		if (additionalAxles != null)
		{
			List<IAxle> clonedList = new ArrayList<IAxle>();
			for(IAxle item : additionalAxles)
			{
				AxleImpl clonedChild = ((AxleImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setAdditionalAxles(clonedList);
		}
		return clonedObject;
	}
  
  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException
  {
	// proxies and string attributes 
	throw new KeyNotSupportedException();
  }
  
  @Override
  public Long getUnsignedIntProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  		
  }  
  
  @Override
  public Integer getIntProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  		
  }
 
  @Override
  public Double getDoubleProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  		
  }
  
  @Override
  public Integer getUnsignedShortProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  	
  }
 
  @Override
  public Boolean getBooleanProperty(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  	
  }
   
  @Override
  public Date getDateTimeProperty(String key) throws KeyNotSupportedException
  {
 	throw new KeyNotSupportedException();

  }
 
  @Override
  public IOpenScenarioFlexElement getChildElement(String key) throws KeyNotSupportedException
  {
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ELEMENT__FRONT_AXLE))
	{
		return (IOpenScenarioFlexElement) getFrontAxle();
	}else 
	if (key.equals(OscConstants.ELEMENT__REAR_AXLE))
	{
		return (IOpenScenarioFlexElement) getRearAxle();
	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
 
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key) throws KeyNotSupportedException
  {
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ELEMENT__ADDITIONAL_AXLE))
	{
		return (List<IOpenScenarioFlexElement>)(List<?>) getAdditionalAxles();

	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
   
  @Override
  public IOpenScenarioFlexElement getParentFlexElement()
  {
   	return (IOpenScenarioFlexElement) getParent();
  }
  
  @Override
  public IOpenScenarioFlexElement getReferencedElement(String key, String name) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  }
  
  @Override 
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  }
  
  @Override
  public String getModelType()
  {
  	return "Axles";
  }
 	
}

