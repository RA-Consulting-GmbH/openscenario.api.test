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

import net.asam.openscenario.v1_0.api.IManeuverGroup;
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

import net.asam.openscenario.v1_0.api.IActors;
import net.asam.openscenario.v1_0.api.IManeuver;
import net.asam.openscenario.v1_0.api.ICatalogReference;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IManeuverGroup. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IManeuverGroup)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ManeuverGroupImpl extends BaseImpl implements IManeuverGroup, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, Long.class);
		propertyToType.put(OscConstants.ATTRIBUTE__NAME, String.class);
	}
	
	private Long maximumExecutionCount;
	private String name;
	private IActors actors;
	private List<ICatalogReference> catalogReferences;
	private List<IManeuver> maneuvers;
	/**
	 * Default constructor
	 */
	public ManeuverGroupImpl()
	{
		super();
		addAdapter(ManeuverGroupImpl.class, this);
		addAdapter(IManeuverGroup.class, this);
		
	}
	@Override
	public Long getMaximumExecutionCount()
	{
		return maximumExecutionCount;
	}
	@Override
	public String getName()
	{
		return name;
	}
	@Override
	public IActors getActors()
	{
		return actors;
	}
	@Override
	public List<ICatalogReference> getCatalogReferences()
	{
		return catalogReferences;
	}
	@Override
	public List<IManeuver> getManeuvers()
	{
		return maneuvers;
	}
	/**
	 * Sets the value of model property maximumExecutionCount
	 * @param maximumExecutionCount from OpenSCENARIO class model specification: [Number of allowed executions of the maneuver 
	 * group. Default value is 1. Range: [1..inf[.]
	 * 
	*/
	public  void setMaximumExecutionCount (Long maximumExecutionCount )
	{
		this.maximumExecutionCount = maximumExecutionCount;
	}
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the maneuver group.]
	 * 
	*/
	public  void setName (String name )
	{
		this.name = name;
	}
	/**
	 * Sets the value of model property actors
	 * @param actors from OpenSCENARIO class model specification: [Actors of the maneuver group.]
	 * 
	*/
	public  void setActors (IActors actors )
	{
		this.actors = actors;
	}
	/**
	 * Sets the value of model property catalogReferences
	 * @param catalogReferences from OpenSCENARIO class model specification: [Each element of this list of must reference a 
	 * maneuver type in a catalog.]
	 * 
	*/
	public void setCatalogReferences(List<ICatalogReference> catalogReferences)
	{
		this.catalogReferences = catalogReferences;
	}
	/**
	 * Sets the value of model property maneuvers
	 * @param maneuvers from OpenSCENARIO class model specification: [Maneuver type definitions.]
	 * 
	*/
	public void setManeuvers(List<IManeuver> maneuvers)
	{
		this.maneuvers = maneuvers;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT))
		{
			// Simple type
			maximumExecutionCount = ParserHelper.parseUnsignedInt(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__NAME))
		{
			// Simple type
			name = ParserHelper.parseString(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
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
		
			IActors actors = null;
			actors =  getActors();
			if (actors != null)
			{
				result.add((BaseImpl) actors);
			}	
			List<ICatalogReference> catalogReferences = null;
			catalogReferences =  getCatalogReferences();
			if (catalogReferences != null)
			{
				for(ICatalogReference item : catalogReferences)
				{
					result.add((BaseImpl) item);
				}
			}
			List<IManeuver> maneuvers = null;
			maneuvers =  getManeuvers();
			if (maneuvers != null)
			{
				for(IManeuver item : maneuvers)
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
	public ManeuverGroupImpl clone()
	{
		ManeuverGroupImpl clonedObject = new ManeuverGroupImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setMaximumExecutionCount(getMaximumExecutionCount());		
		// Simple type
		clonedObject.setName(getName());		
		// clone children
		IActors actors = null;
		actors =  getActors();
		if (actors != null)
		{
			ActorsImpl clonedChild = ((ActorsImpl) actors).clone();
			clonedObject.setActors(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		List<ICatalogReference> catalogReferences = null;
			catalogReferences =  getCatalogReferences();
		if (catalogReferences != null)
		{
			List<ICatalogReference> clonedList = new ArrayList<ICatalogReference>();
			for(ICatalogReference item : catalogReferences)
			{
				CatalogReferenceImpl clonedChild = ((CatalogReferenceImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setCatalogReferences(clonedList);
		}
		List<IManeuver> maneuvers = null;
			maneuvers =  getManeuvers();
		if (maneuvers != null)
		{
			List<IManeuver> clonedList = new ArrayList<IManeuver>();
			for(IManeuver item : maneuvers)
			{
				ManeuverImpl clonedChild = ((ManeuverImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setManeuvers(clonedList);
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
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT))
	{
		return getMaximumExecutionCount();
	}else 
	{
		throw new KeyNotSupportedException();
	}
  		
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
	if (key.equals(OscConstants.ELEMENT__ACTORS))
	{
		return (IOpenScenarioFlexElement) getActors();
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
	if (key.equals(OscConstants.ELEMENT__CATALOG_REFERENCE))
	{
		return (List<IOpenScenarioFlexElement>)(List<?>) getCatalogReferences();

	}else 
	if (key.equals(OscConstants.ELEMENT__MANEUVER))
	{
		return (List<IOpenScenarioFlexElement>)(List<?>) getManeuvers();

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
  	return "ManeuverGroup";
  }
 	
}

