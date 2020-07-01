package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IAxles;
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

import de.rac.openscenario.v1_0.api.IAxle;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IAxles. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAxles)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class AxlesImpl extends BaseImpl implements IAxles, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IAxle frontAxle;
	private IAxle rearAxle;
	private List<IAxle> additionalAxles;

	@Override
	public IAxle getFrontAxle()
	{
		return frontAxle;
	}
	@Override
	public IAxle getRearAxle()
	{
		return rearAxle;
	}
	@Override
	public List<IAxle> getAdditionalAxles()
	{
		return additionalAxles;
	}
	/**
	 * Sets the value of model property frontAxle
	 * @param frontAxle from OpenSCENARIO class model specification: [Front axle.]
	 * 
	*/
	public  void setFrontAxle (IAxle frontAxle )
	{
		this.frontAxle = frontAxle;
	}
	/**
	 * Sets the value of model property rearAxle
	 * @param rearAxle from OpenSCENARIO class model specification: [Rear axle.]
	 * 
	*/
	public  void setRearAxle (IAxle rearAxle )
	{
		this.rearAxle = rearAxle;
	}
	/**
	 * Sets the value of model property additionalAxles
	 * @param additionalAxles from OpenSCENARIO class model specification: [A list of optional additional axles.]
	 * 
	*/
	public void setAdditionalAxles(List<IAxle> additionalAxles)
	{
		this.additionalAxles = additionalAxles;
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
		
			IAxle frontAxle = null;
			frontAxle =  getFrontAxle();
			if (frontAxle != null)
			{
				result.add((BaseImpl) frontAxle);
			}	
			IAxle rearAxle = null;
			rearAxle =  getRearAxle();
			if (rearAxle != null)
			{
				result.add((BaseImpl) rearAxle);
			}	
			List<IAxle> additionalAxles = null;
			additionalAxles =  getAdditionalAxles();
			if (additionalAxles != null)
			{
				for(IAxle item : additionalAxles)
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
	public AxlesImpl clone()
	{
		AxlesImpl clonedObject = new AxlesImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IAxle frontAxle = null;
		frontAxle =  getFrontAxle();
		if (frontAxle != null)
		{
			AxleImpl clonedChild = ((AxleImpl) frontAxle).clone();
			clonedObject.setFrontAxle(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IAxle rearAxle = null;
		rearAxle =  getRearAxle();
		if (rearAxle != null)
		{
			AxleImpl clonedChild = ((AxleImpl) rearAxle).clone();
			clonedObject.setRearAxle(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		List<IAxle> additionalAxles = null;
			additionalAxles =  getAdditionalAxles();
		if (additionalAxles != null)
		{
			List<IAxle> clonedList = new ArrayList<IAxle>();
			for(IAxle item : additionalAxles)
			{
				AxleImpl clonedChild = ((AxleImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setAdditionalAxles(clonedList);
		}
		return clonedObject;
	}
	
	
	
}

