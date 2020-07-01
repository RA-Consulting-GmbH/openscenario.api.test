package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.ICatalogDefinition;
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

import de.rac.openscenario.v1_0.api.ICatalog;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements ICatalogDefinition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of ICatalogDefinition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class CatalogDefinitionImpl extends BaseImpl implements ICatalogDefinition, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private ICatalog catalog;

	@Override
	public ICatalog getCatalog()
	{
		return catalog;
	}
	/**
	 * Sets the value of model property catalog
	 * @param catalog from OpenSCENARIO class model specification: [Definition of a catalog.]
	 * 
	*/
	public  void setCatalog (ICatalog catalog )
	{
		this.catalog = catalog;
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
		
			ICatalog catalog = null;
			catalog =  getCatalog();
			if (catalog != null)
			{
				result.add((BaseImpl) catalog);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public CatalogDefinitionImpl clone()
	{
		CatalogDefinitionImpl clonedObject = new CatalogDefinitionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		ICatalog catalog = null;
		catalog =  getCatalog();
		if (catalog != null)
		{
			CatalogImpl clonedChild = ((CatalogImpl) catalog).clone();
			clonedObject.setCatalog(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

