package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IObjectController;
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

import de.rac.openscenario.v1_0.api.IController;
import de.rac.openscenario.v1_0.api.ICatalogReference;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IObjectController. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IObjectController)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ObjectControllerImpl extends BaseImpl implements IObjectController, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private ICatalogReference catalogReference;
	private IController controller;

	@Override
	public ICatalogReference getCatalogReference()
	{
		return catalogReference;
	}
	@Override
	public IController getController()
	{
		return controller;
	}
	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [Catalog reference to a controller.]
	 * 
	*/
	public  void setCatalogReference (ICatalogReference catalogReference )
	{
		this.catalogReference = catalogReference;
	}
	/**
	 * Sets the value of model property controller
	 * @param controller from OpenSCENARIO class model specification: [Controller type definition.]
	 * 
	*/
	public  void setController (IController controller )
	{
		this.controller = controller;
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
		
			ICatalogReference catalogReference = null;
			catalogReference =  getCatalogReference();
			if (catalogReference != null)
			{
				result.add((BaseImpl) catalogReference);
			}	
			IController controller = null;
			controller =  getController();
			if (controller != null)
			{
				result.add((BaseImpl) controller);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public ObjectControllerImpl clone()
	{
		ObjectControllerImpl clonedObject = new ObjectControllerImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		ICatalogReference catalogReference = null;
		catalogReference =  getCatalogReference();
		if (catalogReference != null)
		{
			CatalogReferenceImpl clonedChild = ((CatalogReferenceImpl) catalogReference).clone();
			clonedObject.setCatalogReference(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IController controller = null;
		controller =  getController();
		if (controller != null)
		{
			ControllerImpl clonedChild = ((ControllerImpl) controller).clone();
			clonedObject.setController(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

