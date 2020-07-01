package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IAssignControllerAction;
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
 * Value class that implements IAssignControllerAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IAssignControllerAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class AssignControllerActionImpl extends BaseImpl implements IAssignControllerAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IController controller;
	private ICatalogReference catalogReference;

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
	 * Sets the value of model property controller
	 * @param controller from OpenSCENARIO class model specification: [Assigns a controller to a given entity.]
	 * 
	*/
	public  void setController (IController controller )
	{
		this.controller = controller;
	}
	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [Uses a CatalogReference to assign a controller to 
	 * a given entity. CatalogReference must point to a Controller type.]
	 * 
	*/
	public  void setCatalogReference (ICatalogReference catalogReference )
	{
		this.catalogReference = catalogReference;
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
	public AssignControllerActionImpl clone()
	{
		AssignControllerActionImpl clonedObject = new AssignControllerActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
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

