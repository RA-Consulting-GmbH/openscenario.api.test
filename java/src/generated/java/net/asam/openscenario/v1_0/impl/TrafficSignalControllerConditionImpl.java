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

import net.asam.openscenario.v1_0.api.ITrafficSignalControllerCondition;
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
import net.asam.openscenario.impl.NamedReferenceProxy;
import net.asam.openscenario.common.INamedReference;
import net.asam.openscenario.v1_0.api.IPhase;
import net.asam.openscenario.v1_0.api.ITrafficSignalController;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSignalControllerCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSignalControllerCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrafficSignalControllerConditionImpl extends BaseImpl implements ITrafficSignalControllerCondition, Cloneable{
	protected static Hashtable<String, Class<?>> propertyToType = new Hashtable<String, Class<?>>();
	
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__PHASE, String.class);
	}
	
	private NamedReferenceProxy<ITrafficSignalController> trafficSignalControllerRef;
	private String phase;
	private List<IPhase> phaseRef;
	/**
	 * Default constructor
	 */
	public TrafficSignalControllerConditionImpl()
	{
		super();
		addAdapter(TrafficSignalControllerConditionImpl.class, this);
		addAdapter(ITrafficSignalControllerCondition.class, this);
		
	}
	
	public IOpenScenarioFlexElement getOpenScenarioFlexElement()
	{
		return this;
	}
	@Override
	public INamedReference<ITrafficSignalController> getTrafficSignalControllerRef()
	{
		return trafficSignalControllerRef;
	}
	@Override
	public String getPhase()
	{
		return phase;
	}
	@Override
	public List<IPhase> getPhaseRef()
	{
		return phaseRef;
	}
	/**
	 * Sets the value of model property trafficSignalControllerRef
	 * @param trafficSignalControllerRef from OpenSCENARIO class model specification: [ID of the referenced signal controller 
	 * in a road network.]
	 * 
	*/
	public  void setTrafficSignalControllerRef (NamedReferenceProxy<ITrafficSignalController> trafficSignalControllerRef )
	{
		this.trafficSignalControllerRef = trafficSignalControllerRef;
	}
	/**
	 * Sets the value of model property phase
	 * @param phase from OpenSCENARIO class model specification: [Name of the phase of the signal controller to be reached for 
	 * the condition to become true. The available phases are , defined in type RoadNetwork under the property 
	 * trafficSignalControllers.]
	 * 
	*/
	public  void setPhase (String phase )
	{
		this.phase = phase;
	}
	/**
	 * Sets the value of model property phaseRef
	 * @param phaseRef from OpenSCENARIO class model specification: [The reference to the phase (phase is the referential key 
	 * in the referenced TrafficSignalController).]
	 * 
	*/
	public void setPhaseRef(List<IPhase> phaseRef)
	{
		this.phaseRef = phaseRef;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF))
		{
			// Proxy
			NamedReferenceProxy<ITrafficSignalController> proxy = new NamedReferenceProxy<ITrafficSignalController> (parameterLiteralValue);
			trafficSignalControllerRef = proxy;
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__PHASE))
		{
			// Simple type
			phase = ParserHelper.parseString(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
		
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public TrafficSignalControllerConditionImpl clone()
	{
		TrafficSignalControllerConditionImpl clonedObject = new TrafficSignalControllerConditionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Proxy
		NamedReferenceProxy<ITrafficSignalController> proxy = ((NamedReferenceProxy<ITrafficSignalController>)getTrafficSignalControllerRef()).clone();
		clonedObject.setTrafficSignalControllerRef(proxy);
		proxy.setParent(clonedObject);
		// Simple type
		clonedObject.setPhase(getPhase());		
		// clone children
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
	if (key.equals(OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF))
	{
		// Get the Proxy
		INamedReference<ITrafficSignalController> trafficSignalControllerRef = getTrafficSignalControllerRef();
		return trafficSignalControllerRef!= null? trafficSignalControllerRef.getNameRef():null;
	}else 
	if (key.equals(OscConstants.ATTRIBUTE__PHASE))
	{
		return getPhase();		
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
	throw new KeyNotSupportedException();
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
	if (key == null)
	{
		throw new KeyNotSupportedException();
	}
	if (key.equals(OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_CONTROLLER_REF))
	{
		// Get the Proxy
		INamedReference<ITrafficSignalController> trafficSignalControllerRef = getTrafficSignalControllerRef();
		return trafficSignalControllerRef!= null?(IOpenScenarioFlexElement) trafficSignalControllerRef.getTargetObject():null;
	}else 
	{
		throw new KeyNotSupportedException();
	}
  }
  
  @Override 
  public String getEnumerationLiteral(String key) throws KeyNotSupportedException
  {
	throw new KeyNotSupportedException();
  }
  
  @Override
  public String getModelType()
  {
  	return "TrafficSignalControllerCondition";
  }
 	
}

