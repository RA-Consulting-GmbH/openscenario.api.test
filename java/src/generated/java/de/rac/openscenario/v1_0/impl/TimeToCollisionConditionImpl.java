package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ITimeToCollisionCondition;
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

import de.rac.openscenario.v1_0.api.ITimeToCollisionConditionTarget;
import de.rac.openscenario.v1_0.api.Rule;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITimeToCollisionCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITimeToCollisionCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TimeToCollisionConditionImpl extends BaseImpl implements ITimeToCollisionCondition, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__VALUE, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__FREESPACE, Boolean.class);
		propertyToType.put(OscConstants.ATTRIBUTE__ALONG_ROUTE, Boolean.class);
		propertyToType.put(OscConstants.ATTRIBUTE__RULE, String.class);
	}
	
	private Double value;
	private Boolean freespace;
	private Boolean alongRoute;
	private Rule rule;
	private ITimeToCollisionConditionTarget timeToCollisionConditionTarget;

	@Override
	public Double getValue()
	{
		return value;
	}
	@Override
	public Boolean getFreespace()
	{
		return freespace;
	}
	@Override
	public Boolean getAlongRoute()
	{
		return alongRoute;
	}
	@Override
	public Rule getRule()
	{
		return rule;
	}
	@Override
	public ITimeToCollisionConditionTarget getTimeToCollisionConditionTarget()
	{
		return timeToCollisionConditionTarget;
	}
	/**
	 * Sets the value of model property value
	 * @param value from OpenSCENARIO class model specification: [The time to collision value. Unit: s; Range: [0..inf[.]
	 * 
	*/
	public  void setValue (Double value )
	{
		this.value = value;
	}
	/**
	 * Sets the value of model property freespace
	 * @param freespace from OpenSCENARIO class model specification: [True: time to collision is measured using the distance 
	 * between closest bounding box points.False: reference point , distance is used.]
	 * 
	*/
	public  void setFreespace (Boolean freespace )
	{
		this.freespace = freespace;
	}
	/**
	 * Sets the value of model property alongRoute
	 * @param alongRoute from OpenSCENARIO class model specification: [True: routing is taken into account, e.g. turns will 
	 * increase distance. False: straight line distance is used.]
	 * 
	*/
	public  void setAlongRoute (Boolean alongRoute )
	{
		this.alongRoute = alongRoute;
	}
	/**
	 * Sets the value of model property rule
	 * @param rule from OpenSCENARIO class model specification: [The operator (less, greater, equal).]
	 * 
	*/
	public  void setRule (Rule rule )
	{
		this.rule = rule;
	}
	/**
	 * Sets the value of model property timeToCollisionConditionTarget
	 * @param timeToCollisionConditionTarget from OpenSCENARIO class model specification: [The explicit position or a position 
	 * defined through the current position of a reference entity.]
	 * 
	*/
	public  void setTimeToCollisionConditionTarget (ITimeToCollisionConditionTarget timeToCollisionConditionTarget )
	{
		this.timeToCollisionConditionTarget = timeToCollisionConditionTarget;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__VALUE))
		{
			// Simple type
			value = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__FREESPACE))
		{
			// Simple type
			freespace = ParserHelper.parseBoolean(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__ALONG_ROUTE))
		{
			// Simple type
			alongRoute = ParserHelper.parseBoolean(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__RULE))
		{
			// Enumeration Type
			Rule result = Rule.getFromLiteral(parameterLiteralValue);
			if (result != null)
			{
				rule = result;
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

	/**
	 * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
	 * method for any child.
	 * @return a list with all children (as BaseImpl)
	 */
	public List<BaseImpl> getChildren()
	{
		List<BaseImpl> result = new ArrayList<BaseImpl>();
		
			ITimeToCollisionConditionTarget timeToCollisionConditionTarget = null;
			timeToCollisionConditionTarget =  getTimeToCollisionConditionTarget();
			if (timeToCollisionConditionTarget != null)
			{
				result.add((BaseImpl) timeToCollisionConditionTarget);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public TimeToCollisionConditionImpl clone()
	{
		TimeToCollisionConditionImpl clonedObject = new TimeToCollisionConditionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setValue(getValue());		
		// Simple type
		clonedObject.setFreespace(getFreespace());		
		// Simple type
		clonedObject.setAlongRoute(getAlongRoute());		
		// Enumeration Type
		Rule rule = getRule();
		if (rule != null)
		{
			clonedObject.setRule(Rule.getFromLiteral(rule.getLiteral()));
		}
		// clone children
		ITimeToCollisionConditionTarget timeToCollisionConditionTarget = null;
		timeToCollisionConditionTarget =  getTimeToCollisionConditionTarget();
		if (timeToCollisionConditionTarget != null)
		{
			TimeToCollisionConditionTargetImpl clonedChild = ((TimeToCollisionConditionTargetImpl) timeToCollisionConditionTarget).clone();
			clonedObject.setTimeToCollisionConditionTarget(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

