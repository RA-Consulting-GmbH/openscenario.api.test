package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IMiscObjectCatalogLocation;
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

import de.rac.openscenario.v1_0.api.IDirectory;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IMiscObjectCatalogLocation. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IMiscObjectCatalogLocation)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class MiscObjectCatalogLocationImpl extends BaseImpl implements IMiscObjectCatalogLocation, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IDirectory directory;

	@Override
	public IDirectory getDirectory()
	{
		return directory;
	}
	/**
	 * Sets the value of model property directory
	 * @param directory from OpenSCENARIO class model specification: [All catalogs files in this directory must be evaluated.]
	 * 
	*/
	public  void setDirectory (IDirectory directory )
	{
		this.directory = directory;
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
		
			IDirectory directory = null;
			directory =  getDirectory();
			if (directory != null)
			{
				result.add((BaseImpl) directory);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public MiscObjectCatalogLocationImpl clone()
	{
		MiscObjectCatalogLocationImpl clonedObject = new MiscObjectCatalogLocationImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IDirectory directory = null;
		directory =  getDirectory();
		if (directory != null)
		{
			DirectoryImpl clonedChild = ((DirectoryImpl) directory).clone();
			clonedObject.setDirectory(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

