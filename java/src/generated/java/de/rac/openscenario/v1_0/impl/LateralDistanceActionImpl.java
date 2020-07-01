package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ILateralDistanceAction;
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
import de.rac.openscenario.v1_0.api.IDynamicConstraints;
import de.rac.openscenario.v1_0.api.IEntity;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILateralDistanceAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILateralDistanceAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LateralDistanceActionImpl extends BaseImpl implements ILateralDistanceAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__ENTITY_REF, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__DISTANCE, Double.class);
		propertyToType.put(OscConstants.ATTRIBUTE__FREESPACE, Boolean.class);
		propertyToType.put(OscConstants.ATTRIBUTE__CONTINUOUS, Boolean.class);
	}
	
	private NamedReferenceProxy<IEntity> entityRef;
	private Double distance;
	private Boolean freespace;
	private Boolean continuous;
	private IDynamicConstraints dynamicConstraints;

	@Override
	public INamedReference<IEntity> getEntityRef()
	{
		return entityRef;
	}
	@Override
	public Double getDistance()
	{
		return distance;
	}
	@Override
	public Boolean getFreespace()
	{
		return freespace;
	}
	@Override
	public Boolean getContinuous()
	{
		return continuous;
	}
	@Override
	public IDynamicConstraints getDynamicConstraints()
	{
		return dynamicConstraints;
	}
	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Name of the reference entity the lateral distance shall 
	 * be kept to.]
	 * 
	*/
	public  void setEntityRef (NamedReferenceProxy<IEntity> entityRef )
	{
		this.entityRef = entityRef;
	}
	/**
	 * Sets the value of model property distance
	 * @param distance from OpenSCENARIO class model specification: [Lateral distance value. Unit: m; Range: [0..inf[.]
	 * 
	*/
	public  void setDistance (Double distance )
	{
		this.distance = distance;
	}
	/**
	 * Sets the value of model property freespace
	 * @param freespace from OpenSCENARIO class model specification: [True: Lateral distance is measured using the distance 
	 * between closest bounding box points. False: Reference point , distance is used.]
	 * 
	*/
	public  void setFreespace (Boolean freespace )
	{
		this.freespace = freespace;
	}
	/**
	 * Sets the value of model property continuous
	 * @param continuous from OpenSCENARIO class model specification: [If false, the action ends when the target distance is 
	 * reached. If true it does not end and can only be stopped.]
	 * 
	*/
	public  void setContinuous (Boolean continuous )
	{
		this.continuous = continuous;
	}
	/**
	 * Sets the value of model property dynamicConstraints
	 * @param dynamicConstraints from OpenSCENARIO class model specification: [Parameter that assigns either unlimited dynamics
	 * (if omitted) or limited maxAcceleration/maxDeceleration/maxSpeed to the, action.]
	 * 
	*/
	public  void setDynamicConstraints (IDynamicConstraints dynamicConstraints )
	{
		this.dynamicConstraints = dynamicConstraints;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__ENTITY_REF))
		{
			// Proxy
			NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<IEntity> (parameterLiteralValue);
			entityRef = proxy;
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__DISTANCE))
		{
			// Simple type
			distance = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__FREESPACE))
		{
			// Simple type
			freespace = ParserHelper.parseBoolean(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__CONTINUOUS))
		{
			// Simple type
			continuous = ParserHelper.parseBoolean(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
		
			IDynamicConstraints dynamicConstraints = null;
			dynamicConstraints =  getDynamicConstraints();
			if (dynamicConstraints != null)
			{
				result.add((BaseImpl) dynamicConstraints);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public LateralDistanceActionImpl clone()
	{
		LateralDistanceActionImpl clonedObject = new LateralDistanceActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Proxy
		NamedReferenceProxy<IEntity> proxy = ((NamedReferenceProxy<IEntity>)getEntityRef()).clone();
		clonedObject.setEntityRef(proxy);
		proxy.setParent(clonedObject);
		// Simple type
		clonedObject.setDistance(getDistance());		
		// Simple type
		clonedObject.setFreespace(getFreespace());		
		// Simple type
		clonedObject.setContinuous(getContinuous());		
		// clone children
		IDynamicConstraints dynamicConstraints = null;
		dynamicConstraints =  getDynamicConstraints();
		if (dynamicConstraints != null)
		{
			DynamicConstraintsImpl clonedChild = ((DynamicConstraintsImpl) dynamicConstraints).clone();
			clonedObject.setDynamicConstraints(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

