package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ILaneOffsetAction;
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

import de.rac.openscenario.v1_0.api.ILaneOffsetActionDynamics;
import de.rac.openscenario.v1_0.api.ILaneOffsetTarget;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ILaneOffsetAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ILaneOffsetAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class LaneOffsetActionImpl extends BaseImpl implements ILaneOffsetAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__CONTINUOUS, Boolean.class);
	}
	
	private Boolean continuous;
	private ILaneOffsetActionDynamics laneOffsetActionDynamics;
	private ILaneOffsetTarget laneOffsetTarget;

	@Override
	public Boolean getContinuous()
	{
		return continuous;
	}
	@Override
	public ILaneOffsetActionDynamics getLaneOffsetActionDynamics()
	{
		return laneOffsetActionDynamics;
	}
	@Override
	public ILaneOffsetTarget getLaneOffsetTarget()
	{
		return laneOffsetTarget;
	}
	/**
	 * Sets the value of model property continuous
	 * @param continuous from OpenSCENARIO class model specification: [If false, the action ends when the target lane is 
	 * reached. If true it does not end but has to be stopped.]
	 * 
	*/
	public  void setContinuous (Boolean continuous )
	{
		this.continuous = continuous;
	}
	/**
	 * Sets the value of model property laneOffsetActionDynamics
	 * @param laneOffsetActionDynamics from OpenSCENARIO class model specification: [Parameters defining the dynamics of the 
	 * LaneOffsetAction.]
	 * 
	*/
	public  void setLaneOffsetActionDynamics (ILaneOffsetActionDynamics laneOffsetActionDynamics )
	{
		this.laneOffsetActionDynamics = laneOffsetActionDynamics;
	}
	/**
	 * Sets the value of model property laneOffsetTarget
	 * @param laneOffsetTarget from OpenSCENARIO class model specification: [Parameters indicating if the lane offset is 
	 * defined relative to another entity or absolute to the current lane's center , line.]
	 * 
	*/
	public  void setLaneOffsetTarget (ILaneOffsetTarget laneOffsetTarget )
	{
		this.laneOffsetTarget = laneOffsetTarget;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__CONTINUOUS))
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
		
			ILaneOffsetActionDynamics laneOffsetActionDynamics = null;
			laneOffsetActionDynamics =  getLaneOffsetActionDynamics();
			if (laneOffsetActionDynamics != null)
			{
				result.add((BaseImpl) laneOffsetActionDynamics);
			}	
			ILaneOffsetTarget laneOffsetTarget = null;
			laneOffsetTarget =  getLaneOffsetTarget();
			if (laneOffsetTarget != null)
			{
				result.add((BaseImpl) laneOffsetTarget);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public LaneOffsetActionImpl clone()
	{
		LaneOffsetActionImpl clonedObject = new LaneOffsetActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setContinuous(getContinuous());		
		// clone children
		ILaneOffsetActionDynamics laneOffsetActionDynamics = null;
		laneOffsetActionDynamics =  getLaneOffsetActionDynamics();
		if (laneOffsetActionDynamics != null)
		{
			LaneOffsetActionDynamicsImpl clonedChild = ((LaneOffsetActionDynamicsImpl) laneOffsetActionDynamics).clone();
			clonedObject.setLaneOffsetActionDynamics(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ILaneOffsetTarget laneOffsetTarget = null;
		laneOffsetTarget =  getLaneOffsetTarget();
		if (laneOffsetTarget != null)
		{
			LaneOffsetTargetImpl clonedChild = ((LaneOffsetTargetImpl) laneOffsetTarget).clone();
			clonedObject.setLaneOffsetTarget(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

