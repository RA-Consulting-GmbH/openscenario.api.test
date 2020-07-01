package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IVehicleCategoryDistribution;
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

import de.rac.openscenario.v1_0.api.IVehicleCategoryDistributionEntry;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IVehicleCategoryDistribution. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IVehicleCategoryDistribution)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class VehicleCategoryDistributionImpl extends BaseImpl implements IVehicleCategoryDistribution, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private List<IVehicleCategoryDistributionEntry> vehicleCategoryDistributionEntries;

	@Override
	public List<IVehicleCategoryDistributionEntry> getVehicleCategoryDistributionEntries()
	{
		return vehicleCategoryDistributionEntries;
	}
	/**
	 * Sets the value of model property vehicleCategoryDistributionEntries
	 * @param vehicleCategoryDistributionEntries from OpenSCENARIO class model specification: [List of elements that pair 
	 * vehicle categories and their weight within the distribution.]
	 * 
	*/
	public void setVehicleCategoryDistributionEntries(List<IVehicleCategoryDistributionEntry> vehicleCategoryDistributionEntries)
	{
		this.vehicleCategoryDistributionEntries = vehicleCategoryDistributionEntries;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
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
		
			List<IVehicleCategoryDistributionEntry> vehicleCategoryDistributionEntries = null;
			vehicleCategoryDistributionEntries =  getVehicleCategoryDistributionEntries();
			if (vehicleCategoryDistributionEntries != null)
			{
				for(IVehicleCategoryDistributionEntry item : vehicleCategoryDistributionEntries)
				{
					result.add((BaseImpl) item);
				}
			}
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public VehicleCategoryDistributionImpl clone()
	{
		VehicleCategoryDistributionImpl clonedObject = new VehicleCategoryDistributionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		List<IVehicleCategoryDistributionEntry> vehicleCategoryDistributionEntries = null;
			vehicleCategoryDistributionEntries =  getVehicleCategoryDistributionEntries();
		if (vehicleCategoryDistributionEntries != null)
		{
			List<IVehicleCategoryDistributionEntry> clonedList = new ArrayList<IVehicleCategoryDistributionEntry>();
			for(IVehicleCategoryDistributionEntry item : vehicleCategoryDistributionEntries)
			{
				VehicleCategoryDistributionEntryImpl clonedChild = ((VehicleCategoryDistributionEntryImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setVehicleCategoryDistributionEntries(clonedList);
		}
		return clonedObject;
	}
	
	
	
}

