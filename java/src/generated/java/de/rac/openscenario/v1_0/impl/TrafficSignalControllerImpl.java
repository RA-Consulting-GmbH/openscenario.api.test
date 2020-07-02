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

import de.rac.openscenario.v1_0.api.ITrafficSignalController;
import de.rac.openscenario.v1_0.impl.BaseImpl;
import de.rac.openscenario.v1_0.common.ILocator;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.api.IOpenScenarioModelElement;
import java.lang.Cloneable;
import de.rac.openscenario.v1_0.parser.ParserHelper;
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;

import de.rac.openscenario.v1_0.api.IPhase;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSignalController. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSignalController)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrafficSignalControllerImpl extends BaseImpl implements ITrafficSignalController, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__NAME, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__DELAY, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__REFERENCE, String.class);
	}
	
	private String name;
	private Double delay;
	private String reference;
	private List<IPhase> phases;

	@Override
	public String getName()
	{
		return name;
	}
	@Override
	public Double getDelay()
	{
		return delay;
	}
	@Override
	public String getReference()
	{
		return reference;
	}
	@Override
	public List<IPhase> getPhases()
	{
		return phases;
	}
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [ID of the traffic signal controller in the road network.]
	 * 
	*/
	public  void setName (String name )
	{
		this.name = name;
	}
	/**
	 * Sets the value of model property delay
	 * @param delay from OpenSCENARIO class model specification: [The delay to the controller in the reference property. A 
	 * controller having a delay to another one means that its first , phase virtually starts delaytime seconds after the start
	 * of the reference's first phase. This can be used to define a , progressive signal system, but only makes sense, if the 
	 * total times of all connected controllers are the same. If delay , is set, reference is required. Unit: s; Range: 
	 * [0..inf[.]
	 * 
	*/
	public  void setDelay (Double delay )
	{
		this.delay = delay;
	}
	/**
	 * Sets the value of model property reference
	 * @param reference from OpenSCENARIO class model specification: [A reference (ID) to the connected controller in the road 
	 * network. If reference is set, a delay is required.]
	 * 
	*/
	public  void setReference (String reference )
	{
		this.reference = reference;
	}
	/**
	 * Sets the value of model property phases
	 * @param phases from OpenSCENARIO class model specification: [Phases of a TrafficSignalController.]
	 * 
	*/
	public void setPhases(List<IPhase> phases)
	{
		this.phases = phases;
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
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__DELAY))
		{
			// Simple type
			delay = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__REFERENCE))
		{
			// Simple type
			reference = ParserHelper.parseString(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
		
			List<IPhase> phases = null;
			phases =  getPhases();
			if (phases != null)
			{
				for(IPhase item : phases)
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
	public TrafficSignalControllerImpl clone()
	{
		TrafficSignalControllerImpl clonedObject = new TrafficSignalControllerImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setName(getName());		
		// Simple type
		clonedObject.setDelay(getDelay());		
		// Simple type
		clonedObject.setReference(getReference());		
		// clone children
		List<IPhase> phases = null;
			phases =  getPhases();
		if (phases != null)
		{
			List<IPhase> clonedList = new ArrayList<IPhase>();
			for(IPhase item : phases)
			{
				PhaseImpl clonedChild = ((PhaseImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setPhases(clonedList);
		}
		return clonedObject;
	}
	
	
	
}

