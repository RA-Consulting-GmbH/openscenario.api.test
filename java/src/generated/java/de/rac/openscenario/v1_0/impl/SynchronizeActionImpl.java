package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ISynchronizeAction;
import de.rac.openscenario.v1_0.impl.BaseImpl;
import de.rac.openscenario.v1_0.common.ILocator;
import de.rac.openscenario.v1_0.common.IParserMessageLogger;
import de.rac.openscenario.v1_0.common.OscConstants;
import de.rac.openscenario.v1_0.common.FileContentMessage;
import de.rac.openscenario.v1_0.api.IOpenScenarioModelElement;
import java.lang.Cloneable;
import java.util.Hashtable;
import java.util.List;
import java.util.ArrayList;
import de.rac.openscenario.v1_0.impl.NamedReferenceProxy;
import de.rac.openscenario.v1_0.common.INamedReference;
import de.rac.openscenario.v1_0.api.IPosition;
import de.rac.openscenario.v1_0.api.IFinalSpeed;
import de.rac.openscenario.v1_0.api.IEntity;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ISynchronizeAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ISynchronizeAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class SynchronizeActionImpl extends BaseImpl implements ISynchronizeAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF, String.class);
	}
	
	private NamedReferenceProxy<IEntity> masterEntityRef;
	private IPosition targetPositionMaster;
	private IPosition targetPosition;
	private IFinalSpeed finalSpeed;

	@Override
	public INamedReference<IEntity> getMasterEntityRef()
	{
		return masterEntityRef;
	}
	@Override
	public IPosition getTargetPositionMaster()
	{
		return targetPositionMaster;
	}
	@Override
	public IPosition getTargetPosition()
	{
		return targetPosition;
	}
	@Override
	public IFinalSpeed getFinalSpeed()
	{
		return finalSpeed;
	}
	/**
	 * Sets the value of model property masterEntityRef
	 * @param masterEntityRef from OpenSCENARIO class model specification: [A reference to the master entity.]
	 * 
	*/
	public  void setMasterEntityRef (NamedReferenceProxy<IEntity> masterEntityRef )
	{
		this.masterEntityRef = masterEntityRef;
	}
	/**
	 * Sets the value of model property targetPositionMaster
	 * @param targetPositionMaster from OpenSCENARIO class model specification: [The target position for the master entity.]
	 * 
	*/
	public  void setTargetPositionMaster (IPosition targetPositionMaster )
	{
		this.targetPositionMaster = targetPositionMaster;
	}
	/**
	 * Sets the value of model property targetPosition
	 * @param targetPosition from OpenSCENARIO class model specification: [The target position for the entity that should be 
	 * synchronized.]
	 * 
	*/
	public  void setTargetPosition (IPosition targetPosition )
	{
		this.targetPosition = targetPosition;
	}
	/**
	 * Sets the value of model property finalSpeed
	 * @param finalSpeed from OpenSCENARIO class model specification: [The speed that the synchronized entity should have at 
	 * its target position.]
	 * 
	*/
	public  void setFinalSpeed (IFinalSpeed finalSpeed )
	{
		this.finalSpeed = finalSpeed;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__MASTER_ENTITY_REF))
		{
			// Proxy
			NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<IEntity> (parameterLiteralValue);
			masterEntityRef = proxy;
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
		
			IPosition targetPositionMaster = null;
			targetPositionMaster =  getTargetPositionMaster();
			if (targetPositionMaster != null)
			{
				result.add((BaseImpl) targetPositionMaster);
			}	
			IPosition targetPosition = null;
			targetPosition =  getTargetPosition();
			if (targetPosition != null)
			{
				result.add((BaseImpl) targetPosition);
			}	
			IFinalSpeed finalSpeed = null;
			finalSpeed =  getFinalSpeed();
			if (finalSpeed != null)
			{
				result.add((BaseImpl) finalSpeed);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public SynchronizeActionImpl clone()
	{
		SynchronizeActionImpl clonedObject = new SynchronizeActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Proxy
		NamedReferenceProxy<IEntity> proxy = ((NamedReferenceProxy<IEntity>)getMasterEntityRef()).clone();
		clonedObject.setMasterEntityRef(proxy);
		proxy.setParent(clonedObject);
		// clone children
		IPosition targetPositionMaster = null;
		targetPositionMaster =  getTargetPositionMaster();
		if (targetPositionMaster != null)
		{
			PositionImpl clonedChild = ((PositionImpl) targetPositionMaster).clone();
			clonedObject.setTargetPositionMaster(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IPosition targetPosition = null;
		targetPosition =  getTargetPosition();
		if (targetPosition != null)
		{
			PositionImpl clonedChild = ((PositionImpl) targetPosition).clone();
			clonedObject.setTargetPosition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IFinalSpeed finalSpeed = null;
		finalSpeed =  getFinalSpeed();
		if (finalSpeed != null)
		{
			FinalSpeedImpl clonedChild = ((FinalSpeedImpl) finalSpeed).clone();
			clonedObject.setFinalSpeed(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

