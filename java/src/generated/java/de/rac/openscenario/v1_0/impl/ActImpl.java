package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IAct;
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

import de.rac.openscenario.v1_0.api.ITrigger;
import de.rac.openscenario.v1_0.api.IManeuverGroup;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAct. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAct)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ActImpl extends BaseImpl implements IAct, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__NAME, String.class);
	}
	
	private String name;
	private List<IManeuverGroup> maneuverGroups;
	private ITrigger startTrigger;
	private ITrigger stopTrigger;

	@Override
	public String getName()
	{
		return name;
	}
	@Override
	public List<IManeuverGroup> getManeuverGroups()
	{
		return maneuverGroups;
	}
	@Override
	public ITrigger getStartTrigger()
	{
		return startTrigger;
	}
	@Override
	public ITrigger getStopTrigger()
	{
		return stopTrigger;
	}
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of this act.]
	 * 
	*/
	public  void setName (String name )
	{
		this.name = name;
	}
	/**
	 * Sets the value of model property maneuverGroups
	 * @param maneuverGroups from OpenSCENARIO class model specification: [A list of maneuver groups representing the act.]
	 * 
	*/
	public void setManeuverGroups(List<IManeuverGroup> maneuverGroups)
	{
		this.maneuverGroups = maneuverGroups;
	}
	/**
	 * Sets the value of model property startTrigger
	 * @param startTrigger from OpenSCENARIO class model specification: [Defines a trigger to that starts the act.]
	 * 
	*/
	public  void setStartTrigger (ITrigger startTrigger )
	{
		this.startTrigger = startTrigger;
	}
	/**
	 * Sets the value of model property stopTrigger
	 * @param stopTrigger from OpenSCENARIO class model specification: [Defines a trigger that stops the act.]
	 * 
	*/
	public  void setStopTrigger (ITrigger stopTrigger )
	{
		this.stopTrigger = stopTrigger;
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
		
			List<IManeuverGroup> maneuverGroups = null;
			maneuverGroups =  getManeuverGroups();
			if (maneuverGroups != null)
			{
				for(IManeuverGroup item : maneuverGroups)
				{
					result.add((BaseImpl) item);
				}
			}
			ITrigger startTrigger = null;
			startTrigger =  getStartTrigger();
			if (startTrigger != null)
			{
				result.add((BaseImpl) startTrigger);
			}	
			ITrigger stopTrigger = null;
			stopTrigger =  getStopTrigger();
			if (stopTrigger != null)
			{
				result.add((BaseImpl) stopTrigger);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public ActImpl clone()
	{
		ActImpl clonedObject = new ActImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setName(getName());		
		// clone children
		List<IManeuverGroup> maneuverGroups = null;
			maneuverGroups =  getManeuverGroups();
		if (maneuverGroups != null)
		{
			List<IManeuverGroup> clonedList = new ArrayList<IManeuverGroup>();
			for(IManeuverGroup item : maneuverGroups)
			{
				ManeuverGroupImpl clonedChild = ((ManeuverGroupImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setManeuverGroups(clonedList);
		}
		ITrigger startTrigger = null;
		startTrigger =  getStartTrigger();
		if (startTrigger != null)
		{
			TriggerImpl clonedChild = ((TriggerImpl) startTrigger).clone();
			clonedObject.setStartTrigger(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ITrigger stopTrigger = null;
		stopTrigger =  getStopTrigger();
		if (stopTrigger != null)
		{
			TriggerImpl clonedChild = ((TriggerImpl) stopTrigger).clone();
			clonedObject.setStopTrigger(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

