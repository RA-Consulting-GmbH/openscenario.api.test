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

import net.asam.openscenario.v1_0.api.ITrafficSwarmAction;
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

import net.asam.openscenario.v1_0.api.ITrafficDefinition;
import net.asam.openscenario.v1_0.api.ICentralSwarmObject;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSwarmAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSwarmAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrafficSwarmActionImpl extends BaseImpl implements ITrafficSwarmAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__INNER_RADIUS, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__OFFSET, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__NUMBER_OF_VEHICLES, Long.class);
		propertyToType.put(OscConstants.ATTRIBUTE__VELOCITY, Double.class);
	}
	
	private Double semiMajorAxis;
	private Double semiMinorAxis;
	private Double innerRadius;
	private Double offset;
	private Long numberOfVehicles;
	private Double velocity;
	private ICentralSwarmObject centralObject;
	private ITrafficDefinition trafficDefinition;
	/**
	 * Default constructor
	 */
	public TrafficSwarmActionImpl()
	{
		super();
		addAdapter(TrafficSwarmActionImpl.class, this);
		addAdapter(ITrafficSwarmAction.class, this);
		
	}
	@Override
	public Double getSemiMajorAxis()
	{
		return semiMajorAxis;
	}
	@Override
	public Double getSemiMinorAxis()
	{
		return semiMinorAxis;
	}
	@Override
	public Double getInnerRadius()
	{
		return innerRadius;
	}
	@Override
	public Double getOffset()
	{
		return offset;
	}
	@Override
	public Long getNumberOfVehicles()
	{
		return numberOfVehicles;
	}
	@Override
	public Double getVelocity()
	{
		return velocity;
	}
	@Override
	public ICentralSwarmObject getCentralObject()
	{
		return centralObject;
	}
	@Override
	public ITrafficDefinition getTrafficDefinition()
	{
		return trafficDefinition;
	}
	/**
	 * Sets the value of model property semiMajorAxis
	 * @param semiMajorAxis from OpenSCENARIO class model specification: [Shape of the swarm traffic distribution area is given
	 * as an ellipsis around a central entity. SemiMajorAxis defines the , half length of the major axis of this ellipsis. 
	 * Unit: m; Range: [0..inf[.]
	 * 
	*/
	public  void setSemiMajorAxis (Double semiMajorAxis )
	{
		this.semiMajorAxis = semiMajorAxis;
	}
	/**
	 * Sets the value of model property semiMinorAxis
	 * @param semiMinorAxis from OpenSCENARIO class model specification: [Shape of the swarm traffic distribution area is given
	 * as an ellipsis around a central entity. SemiMinorAxis defines the , half length of the minor axis of this ellipsis. 
	 * Unit: m; Range: [0..inf[.]
	 * 
	*/
	public  void setSemiMinorAxis (Double semiMinorAxis )
	{
		this.semiMinorAxis = semiMinorAxis;
	}
	/**
	 * Sets the value of model property innerRadius
	 * @param innerRadius from OpenSCENARIO class model specification: [Radius of the inner circular area around the central 
	 * entity. Unit: m; Range: [0..inf[.]
	 * 
	*/
	public  void setInnerRadius (Double innerRadius )
	{
		this.innerRadius = innerRadius;
	}
	/**
	 * Sets the value of model property offset
	 * @param offset from OpenSCENARIO class model specification: [Offset in longitudinal direction related to the x-axis of 
	 * the central entity. Unit: m;.]
	 * 
	*/
	public  void setOffset (Double offset )
	{
		this.offset = offset;
	}
	/**
	 * Sets the value of model property numberOfVehicles
	 * @param numberOfVehicles from OpenSCENARIO class model specification: [The maximum number of vehicles surrounding the 
	 * central entity. Depending on the current road situation less than , numberOfVehicles might be set up. Range: [0..inf[.]
	 * 
	*/
	public  void setNumberOfVehicles (Long numberOfVehicles )
	{
		this.numberOfVehicles = numberOfVehicles;
	}
	/**
	 * Sets the value of model property velocity
	 * @param velocity from OpenSCENARIO class model specification: [The optional starting velocity of a created entity. Unit: 
	 * m/s; Range: [0..inf[.]
	 * 
	*/
	public  void setVelocity (Double velocity )
	{
		this.velocity = velocity;
	}
	/**
	 * Sets the value of model property centralObject
	 * @param centralObject from OpenSCENARIO class model specification: [The entity that represents the center of a swarm.]
	 * 
	*/
	public  void setCentralObject (ICentralSwarmObject centralObject )
	{
		this.centralObject = centralObject;
	}
	/**
	 * Sets the value of model property trafficDefinition
	 * @param trafficDefinition from OpenSCENARIO class model specification: [Specifies properties of autonomous traffic with 
	 * respect to vehicle and driver distributions.]
	 * 
	*/
	public  void setTrafficDefinition (ITrafficDefinition trafficDefinition )
	{
		this.trafficDefinition = trafficDefinition;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS))
		{
			// Simple type
			semiMajorAxis = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS))
		{
			// Simple type
			semiMinorAxis = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__INNER_RADIUS))
		{
			// Simple type
			innerRadius = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__OFFSET))
		{
			// Simple type
			offset = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__NUMBER_OF_VEHICLES))
		{
			// Simple type
			numberOfVehicles = ParserHelper.parseUnsignedInt(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__VELOCITY))
		{
			// Simple type
			velocity = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
		
			ICentralSwarmObject centralObject = null;
			centralObject =  getCentralObject();
			if (centralObject != null)
			{
				result.add((BaseImpl) centralObject);
			}	
			ITrafficDefinition trafficDefinition = null;
			trafficDefinition =  getTrafficDefinition();
			if (trafficDefinition != null)
			{
				result.add((BaseImpl) trafficDefinition);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public TrafficSwarmActionImpl clone()
	{
		TrafficSwarmActionImpl clonedObject = new TrafficSwarmActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setSemiMajorAxis(getSemiMajorAxis());		
		// Simple type
		clonedObject.setSemiMinorAxis(getSemiMinorAxis());		
		// Simple type
		clonedObject.setInnerRadius(getInnerRadius());		
		// Simple type
		clonedObject.setOffset(getOffset());		
		// Simple type
		clonedObject.setNumberOfVehicles(getNumberOfVehicles());		
		// Simple type
		clonedObject.setVelocity(getVelocity());		
		// clone children
		ICentralSwarmObject centralObject = null;
		centralObject =  getCentralObject();
		if (centralObject != null)
		{
			CentralSwarmObjectImpl clonedChild = ((CentralSwarmObjectImpl) centralObject).clone();
			clonedObject.setCentralObject(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ITrafficDefinition trafficDefinition = null;
		trafficDefinition =  getTrafficDefinition();
		if (trafficDefinition != null)
		{
			TrafficDefinitionImpl clonedChild = ((TrafficDefinitionImpl) trafficDefinition).clone();
			clonedObject.setTrafficDefinition(clonedChild);
			clonedChild.setParent(clonedObject);
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
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ATTRIBUTE__NUMBER_OF_VEHICLES))
	{
		return getNumberOfVehicles();
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
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ATTRIBUTE__SEMI_MAJOR_AXIS))
	{
		return getSemiMajorAxis();
	}else 
	if (key.equals(OscConstants.ATTRIBUTE__SEMI_MINOR_AXIS))
	{
		return getSemiMinorAxis();
	}else 
	if (key.equals(OscConstants.ATTRIBUTE__INNER_RADIUS))
	{
		return getInnerRadius();
	}else 
	if (key.equals(OscConstants.ATTRIBUTE__OFFSET))
	{
		return getOffset();
	}else 
	if (key.equals(OscConstants.ATTRIBUTE__VELOCITY))
	{
		return getVelocity();
	}else 
	{
		throw new KeyNotSupportedException();
	}
  		
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
	if (key.equals(OscConstants.ELEMENT__CENTRAL_OBJECT))
	{
		return (IOpenScenarioFlexElement) getCentralObject();
	}else 
	if (key.equals(OscConstants.ELEMENT__TRAFFIC_DEFINITION))
	{
		return (IOpenScenarioFlexElement) getTrafficDefinition();
	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
 
  @Override
  public List<IOpenScenarioFlexElement> getListChildElement(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
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
  	return "TrafficSwarmAction";
  }
 	
}

