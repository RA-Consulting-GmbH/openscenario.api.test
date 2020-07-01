package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IEvent;
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
import de.rac.openscenario.v1_0.common.ErrorLevel;

import de.rac.openscenario.v1_0.api.ITrigger;
import de.rac.openscenario.v1_0.api.IAction;
import de.rac.openscenario.v1_0.api.Priority;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEvent. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEvent)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class EventImpl extends BaseImpl implements IEvent, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__PRIORITY, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT, Long.class);
		propertyToType.put(OscConstants.ATTRIBUTE__NAME, String.class);
	}
	
	private Priority priority;
	private Long maximumExecutionCount;
	private String name;
	private List<IAction> actions;
	private ITrigger startTrigger;

	@Override
	public Priority getPriority()
	{
		return priority;
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
	public List<IAction> getActions()
	{
		return actions;
	}
	@Override
	public ITrigger getStartTrigger()
	{
		return startTrigger;
	}
	/**
	 * Sets the value of model property priority
	 * @param priority from OpenSCENARIO class model specification: [Priority of each event.]
	 * 
	*/
	public  void setPriority (Priority priority )
	{
		this.priority = priority;
	}
	/**
	 * Sets the value of model property maximumExecutionCount
	 * @param maximumExecutionCount from OpenSCENARIO class model specification: [Maximum number of executions. Default value 
	 * is 1. Range: [1..inf[.]
	 * 
	*/
	public  void setMaximumExecutionCount (Long maximumExecutionCount )
	{
		this.maximumExecutionCount = maximumExecutionCount;
	}
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the event.]
	 * 
	*/
	public  void setName (String name )
	{
		this.name = name;
	}
	/**
	 * Sets the value of model property actions
	 * @param actions from OpenSCENARIO class model specification: [List of actions in an event.]
	 * 
	*/
	public void setActions(List<IAction> actions)
	{
		this.actions = actions;
	}
	/**
	 * Sets the value of model property startTrigger
	 * @param startTrigger from OpenSCENARIO class model specification: [Actions are executed as soon as the start trigger 
	 * fires. This point in time represents the start of the event.]
	 * 
	*/
	public  void setStartTrigger (ITrigger startTrigger )
	{
		this.startTrigger = startTrigger;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__PRIORITY))
		{
			// Enumeration Type
			Priority result = Priority.getFromLiteral(parameterLiteralValue);
			if (result != null)
			{
				priority = result;
				removeResolvedParameter(attributeKey);
			}else
			{
				logger.logMessage(new FileContentMessage( "Value '" + parameterLiteralValue + "' is not allowed.",ErrorLevel.ERROR, getTextmarker(attributeKey)));
			}
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__MAXIMUM_EXECUTION_COUNT))
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
		
			List<IAction> actions = null;
			actions =  getActions();
			if (actions != null)
			{
				for(IAction item : actions)
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
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public EventImpl clone()
	{
		EventImpl clonedObject = new EventImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Enumeration Type
		Priority priority = getPriority();
		if (priority != null)
		{
			clonedObject.setPriority(Priority.getFromLiteral(priority.getLiteral()));
		}
		// Simple type
		clonedObject.setMaximumExecutionCount(getMaximumExecutionCount());		
		// Simple type
		clonedObject.setName(getName());		
		// clone children
		List<IAction> actions = null;
			actions =  getActions();
		if (actions != null)
		{
			List<IAction> clonedList = new ArrayList<IAction>();
			for(IAction item : actions)
			{
				ActionImpl clonedChild = ((ActionImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setActions(clonedList);
		}
		ITrigger startTrigger = null;
		startTrigger =  getStartTrigger();
		if (startTrigger != null)
		{
			TriggerImpl clonedChild = ((TriggerImpl) startTrigger).clone();
			clonedObject.setStartTrigger(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

