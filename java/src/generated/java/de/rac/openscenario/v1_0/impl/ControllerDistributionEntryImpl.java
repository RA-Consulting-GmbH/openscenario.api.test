package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IControllerDistributionEntry;
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

import de.rac.openscenario.v1_0.api.IController;
import de.rac.openscenario.v1_0.api.ICatalogReference;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IControllerDistributionEntry. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IControllerDistributionEntry)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ControllerDistributionEntryImpl extends BaseImpl implements IControllerDistributionEntry, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__WEIGHT, Double.class);
	}
	
	private Double weight;
	private IController controller;
	private ICatalogReference catalogReference;

	@Override
	public Double getWeight()
	{
		return weight;
	}
	@Override
	public IController getController()
	{
		return controller;
	}
	@Override
	public ICatalogReference getCatalogReference()
	{
		return catalogReference;
	}
	/**
	 * Sets the value of model property weight
	 * @param weight from OpenSCENARIO class model specification: [The weight of the entry. Range: ]0..inf[.]
	 * 
	*/
	public  void setWeight (Double weight )
	{
		this.weight = weight;
	}
	/**
	 * Sets the value of model property controller
	 * @param controller from OpenSCENARIO class model specification: [The specified controller type.]
	 * 
	*/
	public  void setController (IController controller )
	{
		this.controller = controller;
	}
	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [A controller type import from a catalog.]
	 * 
	*/
	public  void setCatalogReference (ICatalogReference catalogReference )
	{
		this.catalogReference = catalogReference;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__WEIGHT))
		{
			// Simple type
			weight = ParserHelper.parseDouble(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
		
			IController controller = null;
			controller =  getController();
			if (controller != null)
			{
				result.add((BaseImpl) controller);
			}	
			ICatalogReference catalogReference = null;
			catalogReference =  getCatalogReference();
			if (catalogReference != null)
			{
				result.add((BaseImpl) catalogReference);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public ControllerDistributionEntryImpl clone()
	{
		ControllerDistributionEntryImpl clonedObject = new ControllerDistributionEntryImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setWeight(getWeight());		
		// clone children
		IController controller = null;
		controller =  getController();
		if (controller != null)
		{
			ControllerImpl clonedChild = ((ControllerImpl) controller).clone();
			clonedObject.setController(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ICatalogReference catalogReference = null;
		catalogReference =  getCatalogReference();
		if (catalogReference != null)
		{
			CatalogReferenceImpl clonedChild = ((CatalogReferenceImpl) catalogReference).clone();
			clonedObject.setCatalogReference(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

