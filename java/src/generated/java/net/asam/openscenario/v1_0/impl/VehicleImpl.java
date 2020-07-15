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

import net.asam.openscenario.v1_0.api.IVehicle;
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
import net.asam.openscenario.parser.ParserHelper;
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.parameter.ParameterValue;

import net.asam.openscenario.v1_0.api.IAxles;
import net.asam.openscenario.v1_0.api.IPerformance;
import net.asam.openscenario.v1_0.api.VehicleCategory;
import net.asam.openscenario.v1_0.api.IProperties;
import net.asam.openscenario.v1_0.api.IParameterDeclaration;
import net.asam.openscenario.v1_0.api.IBoundingBox;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IVehicle. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IVehicle)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class VehicleImpl extends BaseImpl implements IVehicle, Cloneable{
	protected static Hashtable<String, Class<?>> propertyToType = new Hashtable<String, Class<?>>();
	
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__NAME, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__VEHICLE_CATEGORY, String.class);
	}
	
	private String name;
	private VehicleCategory vehicleCategory;
	private List<IParameterDeclaration> parameterDeclarations;
	private IBoundingBox boundingBox;
	private IPerformance performance;
	private IAxles axles;
	private IProperties properties;
	/**
	 * Default constructor
	 */
	public VehicleImpl()
	{
		super();
		addAdapter(VehicleImpl.class, this);
		addAdapter(IVehicle.class, this);
		
	}
	
	public IOpenScenarioFlexElement getOpenScenarioFlexElement()
	{
		return this;
	}
	@Override
	public String getName()
	{
		return name;
	}
	@Override
	public VehicleCategory getVehicleCategory()
	{
		return vehicleCategory;
	}
	@Override
	public List<IParameterDeclaration> getParameterDeclarations()
	{
		return parameterDeclarations;
	}
	@Override
	public IBoundingBox getBoundingBox()
	{
		return boundingBox;
	}
	@Override
	public IPerformance getPerformance()
	{
		return performance;
	}
	@Override
	public IAxles getAxles()
	{
		return axles;
	}
	@Override
	public IProperties getProperties()
	{
		return properties;
	}
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the vehicle type.]
	 * 
	*/
	public  void setName (String name )
	{
		this.name = name;
	}
	/**
	 * Sets the value of model property vehicleCategory
	 * @param vehicleCategory from OpenSCENARIO class model specification: [Category of the vehicle (bicycle, train,...).]
	 * 
	*/
	public  void setVehicleCategory (VehicleCategory vehicleCategory )
	{
		this.vehicleCategory = vehicleCategory;
	}
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Definition of additional parameters.]
	 * 
	*/
	public void setParameterDeclarations(List<IParameterDeclaration> parameterDeclarations)
	{
		this.parameterDeclarations = parameterDeclarations;
	}
	/**
	 * Sets the value of model property boundingBox
	 * @param boundingBox from OpenSCENARIO class model specification: [The three dimensional bounding box that encloses the 
	 * vehicle.]
	 * 
	*/
	public  void setBoundingBox (IBoundingBox boundingBox )
	{
		this.boundingBox = boundingBox;
	}
	/**
	 * Sets the value of model property performance
	 * @param performance from OpenSCENARIO class model specification: [Performance properties of the vehicle.]
	 * 
	*/
	public  void setPerformance (IPerformance performance )
	{
		this.performance = performance;
	}
	/**
	 * Sets the value of model property axles
	 * @param axles from OpenSCENARIO class model specification: [A set of axles (front, rear, additional) and their geometric 
	 * locations.]
	 * 
	*/
	public  void setAxles (IAxles axles )
	{
		this.axles = axles;
	}
	/**
	 * Sets the value of model property properties
	 * @param properties from OpenSCENARIO class model specification: [Additional properties as name value pairs.]
	 * 
	*/
	public  void setProperties (IProperties properties )
	{
		this.properties = properties;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__NAME))
		{
			// Simple type
			name = ParserHelper.parseString(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__VEHICLE_CATEGORY))
		{
			// Enumeration Type
			VehicleCategory result = VehicleCategory.getFromLiteral(parameterLiteralValue);
			if (result != null)
			{
				vehicleCategory = result;
				removeResolvedParameter(attributeKey);
			}else
			{
				logger.logMessage(new FileContentMessage( "Value '" + parameterLiteralValue + "' is not allowed.",ErrorLevel.ERROR, getTextmarker(attributeKey)));
			}
				
	 	}
	}
	
	@Override
	public  Class<?> getTypeFromAttributeName(String attributeKey)
	{
		return propertyToType.get(attributeKey);
	}

	@Override
	public boolean hasParameterDefinitions() {
		return true;
	}
	
	@Override
	public List<ParameterValue> getParameterDefinitions() {
		List<ParameterValue> result = new java.util.ArrayList<ParameterValue>();
		if (parameterDeclarations != null)
		{
			for (IParameterDeclaration parameterDeclaration :parameterDeclarations)
			{
				ParameterValue parameterValue = new ParameterValue(parameterDeclaration.getName(), getParameterType(parameterDeclaration.getParameterType().getLiteral()),parameterDeclaration.getValue());
				result.add(parameterValue);
			}
		}
		return result;
	}

	/**
	 * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
	 * method for any child.
	 * @return a list with all children (as BaseImpl)
	 */
	public List<BaseImpl> getChildren()
	{
		List<BaseImpl> result = new ArrayList<BaseImpl>();
		
			List<IParameterDeclaration> parameterDeclarations = null;
			parameterDeclarations =  getParameterDeclarations();
			if (parameterDeclarations != null)
			{
				for(IParameterDeclaration item : parameterDeclarations)
				{
					result.add((BaseImpl) item);
				}
			}
			IBoundingBox boundingBox = null;
			boundingBox =  getBoundingBox();
			if (boundingBox != null)
			{
				result.add((BaseImpl) boundingBox);
			}	
			IPerformance performance = null;
			performance =  getPerformance();
			if (performance != null)
			{
				result.add((BaseImpl) performance);
			}	
			IAxles axles = null;
			axles =  getAxles();
			if (axles != null)
			{
				result.add((BaseImpl) axles);
			}	
			IProperties properties = null;
			properties =  getProperties();
			if (properties != null)
			{
				result.add((BaseImpl) properties);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public VehicleImpl clone()
	{
		VehicleImpl clonedObject = new VehicleImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setName(getName());		
		// Enumeration Type
		VehicleCategory vehicleCategory = getVehicleCategory();
		if (vehicleCategory != null)
		{
			clonedObject.setVehicleCategory(VehicleCategory.getFromLiteral(vehicleCategory.getLiteral()));
		}
		// clone children
		List<IParameterDeclaration> parameterDeclarations = null;
			parameterDeclarations =  getParameterDeclarations();
		if (parameterDeclarations != null)
		{
			List<IParameterDeclaration> clonedList = new ArrayList<IParameterDeclaration>();
			for(IParameterDeclaration item : parameterDeclarations)
			{
				ParameterDeclarationImpl clonedChild = ((ParameterDeclarationImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setParameterDeclarations(clonedList);
		}
		IBoundingBox boundingBox = null;
		boundingBox =  getBoundingBox();
		if (boundingBox != null)
		{
			BoundingBoxImpl clonedChild = ((BoundingBoxImpl) boundingBox).clone();
			clonedObject.setBoundingBox(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IPerformance performance = null;
		performance =  getPerformance();
		if (performance != null)
		{
			PerformanceImpl clonedChild = ((PerformanceImpl) performance).clone();
			clonedObject.setPerformance(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IAxles axles = null;
		axles =  getAxles();
		if (axles != null)
		{
			AxlesImpl clonedChild = ((AxlesImpl) axles).clone();
			clonedObject.setAxles(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IProperties properties = null;
		properties =  getProperties();
		if (properties != null)
		{
			PropertiesImpl clonedChild = ((PropertiesImpl) properties).clone();
			clonedObject.setProperties(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
  
  // Implement the IOpenScenarioFlexElement interface

  @Override
  public String getStringProperty(String key) throws KeyNotSupportedException
  {
	// proxies and string attributes 
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ATTRIBUTE__NAME))
	{
		return getName();		
	}else 
	{
		throw new KeyNotSupportedException();
	}
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
	if (key.equals(OscConstants.ELEMENT__BOUNDING_BOX))
	{
		return (IOpenScenarioFlexElement) getBoundingBox();
	}else 
	if (key.equals(OscConstants.ELEMENT__PERFORMANCE))
	{
		return (IOpenScenarioFlexElement) getPerformance();
	}else 
	if (key.equals(OscConstants.ELEMENT__AXLES))
	{
		return (IOpenScenarioFlexElement) getAxles();
	}else 
	if (key.equals(OscConstants.ELEMENT__PROPERTIES))
	{
		return (IOpenScenarioFlexElement) getProperties();
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
	if (key.equals(OscConstants.ELEMENT__PARAMETER_DECLARATION))
	{
		return (List<IOpenScenarioFlexElement>)(List<?>) getParameterDeclarations();

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
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ATTRIBUTE__VEHICLE_CATEGORY))
	{
	 	VehicleCategory vehicleCategory = getVehicleCategory();
		return vehicleCategory != null?vehicleCategory.getLiteral():null;
	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
  
  @Override
  public String getModelType()
  {
  	return "Vehicle";
  }
 	
}

