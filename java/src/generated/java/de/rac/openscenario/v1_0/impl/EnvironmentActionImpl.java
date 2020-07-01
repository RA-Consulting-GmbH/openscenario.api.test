package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IEnvironmentAction;
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

import de.rac.openscenario.v1_0.api.ICatalogReference;
import de.rac.openscenario.v1_0.api.IEnvironment;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEnvironmentAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEnvironmentAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class EnvironmentActionImpl extends BaseImpl implements IEnvironmentAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IEnvironment environment;
	private ICatalogReference catalogReference;

	@Override
	public IEnvironment getEnvironment()
	{
		return environment;
	}
	@Override
	public ICatalogReference getCatalogReference()
	{
		return catalogReference;
	}
	/**
	 * Sets the value of model property environment
	 * @param environment from OpenSCENARIO class model specification: [New environment definition.]
	 * 
	*/
	public  void setEnvironment (IEnvironment environment )
	{
		this.environment = environment;
	}
	/**
	 * Sets the value of model property catalogReference
	 * @param catalogReference from OpenSCENARIO class model specification: [Reference to a catalog entry of type Environment.]
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
		
			IEnvironment environment = null;
			environment =  getEnvironment();
			if (environment != null)
			{
				result.add((BaseImpl) environment);
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
	public EnvironmentActionImpl clone()
	{
		EnvironmentActionImpl clonedObject = new EnvironmentActionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IEnvironment environment = null;
		environment =  getEnvironment();
		if (environment != null)
		{
			EnvironmentImpl clonedChild = ((EnvironmentImpl) environment).clone();
			clonedObject.setEnvironment(clonedChild);
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

