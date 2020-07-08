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

import de.rac.openscenario.v1_0.api.ITrajectory;
import de.rac.openscenario.impl.BaseImpl;
import de.rac.openscenario.common.ILocator;
import de.rac.openscenario.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.common.FileContentMessage;
import de.rac.openscenario.api.IOpenScenarioModelElement;
import de.rac.openscenario.api.IOpenScenarioFlexElement;
import de.rac.openscenario.api.KeyNotSupportedException;
import java.util.Date;
import java.lang.Cloneable;
import de.rac.openscenario.parser.ParserHelper;
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;
import de.rac.openscenario.parameter.ParameterValue;

import de.rac.openscenario.v1_0.api.IParameterDeclaration;
import de.rac.openscenario.v1_0.api.IShape;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrajectory. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrajectory)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrajectoryImpl extends BaseImpl implements ITrajectory, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__NAME, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__CLOSED, Boolean.class);
	}
	
	private String name;
	private Boolean closed;
	private List<IParameterDeclaration> parameterDeclarations;
	private IShape shape;
	/**
	 * Default constructor
	 */
	public TrajectoryImpl()
	{
		super();
		addAdapter(TrajectoryImpl.class, this);
		addAdapter(ITrajectory.class, this);
		
	}
	@Override
	public String getName()
	{
		return name;
	}
	@Override
	public Boolean getClosed()
	{
		return closed;
	}
	@Override
	public List<IParameterDeclaration> getParameterDeclarations()
	{
		return parameterDeclarations;
	}
	@Override
	public IShape getShape()
	{
		return shape;
	}
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the trajectory type. Required if used in catalog.]
	 * 
	*/
	public  void setName (String name )
	{
		this.name = name;
	}
	/**
	 * Sets the value of model property closed
	 * @param closed from OpenSCENARIO class model specification: [True if trajectory is closed.]
	 * 
	*/
	public  void setClosed (Boolean closed )
	{
		this.closed = closed;
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
	 * Sets the value of model property shape
	 * @param shape from OpenSCENARIO class model specification: [The shape of a trajectory (Polyline, Clothoid or Nurbs)]
	 * 
	*/
	public  void setShape (IShape shape )
	{
		this.shape = shape;
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
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__CLOSED))
		{
			// Simple type
			closed = ParserHelper.parseBoolean(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
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
			IShape shape = null;
			shape =  getShape();
			if (shape != null)
			{
				result.add((BaseImpl) shape);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public TrajectoryImpl clone()
	{
		TrajectoryImpl clonedObject = new TrajectoryImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setName(getName());		
		// Simple type
		clonedObject.setClosed(getClosed());		
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
		IShape shape = null;
		shape =  getShape();
		if (shape != null)
		{
			ShapeImpl clonedChild = ((ShapeImpl) shape).clone();
			clonedObject.setShape(clonedChild);
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
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ATTRIBUTE__CLOSED))
	{
		return getClosed();
	}else 
	{
		throw new KeyNotSupportedException();
	}
  	
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
	if (key.equals(OscConstants.ELEMENT__SHAPE))
	{
		return (IOpenScenarioFlexElement) getShape();
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
	throw new KeyNotSupportedException();
  }
  
  @Override
  public String getModelType()
  {
  	return "Trajectory";
  }
 	
}

