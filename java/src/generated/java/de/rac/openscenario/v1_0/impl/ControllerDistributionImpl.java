package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IControllerDistribution;
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

import de.rac.openscenario.v1_0.api.IControllerDistributionEntry;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IControllerDistribution. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IControllerDistribution)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ControllerDistributionImpl extends BaseImpl implements IControllerDistribution, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private List<IControllerDistributionEntry> controllerDistributionEntries;

	@Override
	public List<IControllerDistributionEntry> getControllerDistributionEntries()
	{
		return controllerDistributionEntries;
	}
	/**
	 * Sets the value of model property controllerDistributionEntries
	 * @param controllerDistributionEntries from OpenSCENARIO class model specification: [The weights of controllers of a 
	 * specific type in a traffic.]
	 * 
	*/
	public void setControllerDistributionEntries(List<IControllerDistributionEntry> controllerDistributionEntries)
	{
		this.controllerDistributionEntries = controllerDistributionEntries;
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
		
			List<IControllerDistributionEntry> controllerDistributionEntries = null;
			controllerDistributionEntries =  getControllerDistributionEntries();
			if (controllerDistributionEntries != null)
			{
				for(IControllerDistributionEntry item : controllerDistributionEntries)
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
	public ControllerDistributionImpl clone()
	{
		ControllerDistributionImpl clonedObject = new ControllerDistributionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		List<IControllerDistributionEntry> controllerDistributionEntries = null;
			controllerDistributionEntries =  getControllerDistributionEntries();
		if (controllerDistributionEntries != null)
		{
			List<IControllerDistributionEntry> clonedList = new ArrayList<IControllerDistributionEntry>();
			for(IControllerDistributionEntry item : controllerDistributionEntries)
			{
				ControllerDistributionEntryImpl clonedChild = ((ControllerDistributionEntryImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setControllerDistributionEntries(clonedList);
		}
		return clonedObject;
	}
	
	
	
}

