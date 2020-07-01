package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IRoadCondition;
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

import de.rac.openscenario.v1_0.api.IProperties;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IRoadCondition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IRoadCondition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class RoadConditionImpl extends BaseImpl implements IRoadCondition, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR, Double.class);
	}
	
	private Double frictionScaleFactor;
	private IProperties properties;

	@Override
	public Double getFrictionScaleFactor()
	{
		return frictionScaleFactor;
	}
	@Override
	public IProperties getProperties()
	{
		return properties;
	}
	/**
	 * Sets the value of model property frictionScaleFactor
	 * @param frictionScaleFactor from OpenSCENARIO class model specification: [Friction scale factor. Range: [0..inf[]
	 * 
	*/
	public  void setFrictionScaleFactor (Double frictionScaleFactor )
	{
		this.frictionScaleFactor = frictionScaleFactor;
	}
	/**
	 * Sets the value of model property properties
	 * @param properties from OpenSCENARIO class model specification: [Additional properties to describe the road condition.]
	 * 
	*/
	public  void setProperties (IProperties properties )
	{
		this.properties = properties;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__FRICTION_SCALE_FACTOR))
		{
			// Simple type
			frictionScaleFactor = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
		
			IProperties properties = null;
			properties =  getProperties();
			if (properties != null)
			{
				result.add((BaseImpl) properties);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public RoadConditionImpl clone()
	{
		RoadConditionImpl clonedObject = new RoadConditionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setFrictionScaleFactor(getFrictionScaleFactor());		
		// clone children
		IProperties properties = null;
		properties =  getProperties();
		if (properties != null)
		{
			PropertiesImpl clonedChild = ((PropertiesImpl) properties).clone();
			clonedObject.setProperties(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

