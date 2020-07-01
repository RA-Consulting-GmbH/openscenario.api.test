package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ITrafficDefinition;
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

import de.rac.openscenario.v1_0.api.IControllerDistribution;
import de.rac.openscenario.v1_0.api.IVehicleCategoryDistribution;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ITrafficDefinition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ITrafficDefinition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class TrafficDefinitionImpl extends BaseImpl implements ITrafficDefinition, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__NAME, String.class);
	}
	
	private String name;
	private IVehicleCategoryDistribution vehicleCategoryDistribution;
	private IControllerDistribution controllerDistribution;

	@Override
	public String getName()
	{
		return name;
	}
	@Override
	public IVehicleCategoryDistribution getVehicleCategoryDistribution()
	{
		return vehicleCategoryDistribution;
	}
	@Override
	public IControllerDistribution getControllerDistribution()
	{
		return controllerDistribution;
	}
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Name of the traffic definition.]
	 * 
	*/
	public  void setName (String name )
	{
		this.name = name;
	}
	/**
	 * Sets the value of model property vehicleCategoryDistribution
	 * @param vehicleCategoryDistribution from OpenSCENARIO class model specification: [Distribution of vehicle categories 
	 * within the traffic.]
	 * 
	*/
	public  void setVehicleCategoryDistribution (IVehicleCategoryDistribution vehicleCategoryDistribution )
	{
		this.vehicleCategoryDistribution = vehicleCategoryDistribution;
	}
	/**
	 * Sets the value of model property controllerDistribution
	 * @param controllerDistribution from OpenSCENARIO class model specification: [Distribution of controllers within this 
	 * traffic.]
	 * 
	*/
	public  void setControllerDistribution (IControllerDistribution controllerDistribution )
	{
		this.controllerDistribution = controllerDistribution;
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
		
			IVehicleCategoryDistribution vehicleCategoryDistribution = null;
			vehicleCategoryDistribution =  getVehicleCategoryDistribution();
			if (vehicleCategoryDistribution != null)
			{
				result.add((BaseImpl) vehicleCategoryDistribution);
			}	
			IControllerDistribution controllerDistribution = null;
			controllerDistribution =  getControllerDistribution();
			if (controllerDistribution != null)
			{
				result.add((BaseImpl) controllerDistribution);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public TrafficDefinitionImpl clone()
	{
		TrafficDefinitionImpl clonedObject = new TrafficDefinitionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setName(getName());		
		// clone children
		IVehicleCategoryDistribution vehicleCategoryDistribution = null;
		vehicleCategoryDistribution =  getVehicleCategoryDistribution();
		if (vehicleCategoryDistribution != null)
		{
			VehicleCategoryDistributionImpl clonedChild = ((VehicleCategoryDistributionImpl) vehicleCategoryDistribution).clone();
			clonedObject.setVehicleCategoryDistribution(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IControllerDistribution controllerDistribution = null;
		controllerDistribution =  getControllerDistribution();
		if (controllerDistribution != null)
		{
			ControllerDistributionImpl clonedChild = ((ControllerDistributionImpl) controllerDistribution).clone();
			clonedObject.setControllerDistribution(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

