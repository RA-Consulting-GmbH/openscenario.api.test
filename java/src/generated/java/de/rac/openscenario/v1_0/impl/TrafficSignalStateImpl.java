package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ITrafficSignalState;
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



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSignalState. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSignalState)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrafficSignalStateImpl extends BaseImpl implements ITrafficSignalState, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_ID, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__STATE, String.class);
	}
	
	private String trafficSignalId;
	private String state;

	@Override
	public String getTrafficSignalId()
	{
		return trafficSignalId;
	}
	@Override
	public String getState()
	{
		return state;
	}
	/**
	 * Sets the value of model property trafficSignalId
	 * @param trafficSignalId from OpenSCENARIO class model specification: [ID of the referenced signal in a road network. The 
	 * signal ID must be listed in TrafficSignal list of the RoadNetwork.]
	 * 
	*/
	public  void setTrafficSignalId (String trafficSignalId )
	{
		this.trafficSignalId = trafficSignalId;
	}
	/**
	 * Sets the value of model property state
	 * @param state from OpenSCENARIO class model specification: [State of the signal. The available states are listed in the 
	 * TrafficSignal list of the RoadNetwork.]
	 * 
	*/
	public  void setState (String state )
	{
		this.state = state;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__TRAFFIC_SIGNAL_ID))
		{
			// Simple type
			trafficSignalId = ParserHelper.parseString(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__STATE))
		{
			// Simple type
			state = ParserHelper.parseString(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
	public TrafficSignalStateImpl clone()
	{
		TrafficSignalStateImpl clonedObject = new TrafficSignalStateImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setTrafficSignalId(getTrafficSignalId());		
		// Simple type
		clonedObject.setState(getState());		
		// clone children
		return clonedObject;
	}
	
	
	
}

