package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ITrafficSignalControllerAction;
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
import de.rac.openscenario.v1_0.impl.NamedReferenceProxy;
import de.rac.openscenario.v1_0.common.INamedReference;
import de.rac.openscenario.v1_0.api.ITrafficSignalController;
import de.rac.openscenario.v1_0.api.IPhase;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficSignalControllerAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficSignalControllerAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrafficSignalControllerActionImpl extends BaseImpl implements ITrafficSignalControllerAction, Cloneable{
	
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
	 * @param trafficSignalControllerRef from OpenSCENARIO class model specification: [ID of the signal controller in a road 
	 * network.]
	 * 
	*/
	public  void setTrafficSignalControllerRef (NamedReferenceProxy<ITrafficSignalController> trafficSignalControllerRef )
	{
		this.trafficSignalControllerRef = trafficSignalControllerRef;
	}
	/**
	 * Sets the value of model property phase
	 * @param phase from OpenSCENARIO class model specification: [Targeted phase of the signal controller. The available phases
	 * are defined in type RoadNetwork under the property , trafficSignalControllers.]
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
	public TrafficSignalControllerActionImpl clone()
	{
		TrafficSignalControllerActionImpl clonedObject = new TrafficSignalControllerActionImpl();
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
	
	
	
}

