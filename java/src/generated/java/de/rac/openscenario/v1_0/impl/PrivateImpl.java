package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IPrivate;
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
import de.rac.openscenario.v1_0.impl.NamedReferenceProxy;
import de.rac.openscenario.v1_0.common.INamedReference;
import de.rac.openscenario.v1_0.api.IPrivateAction;
import de.rac.openscenario.v1_0.api.IEntity;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IPrivate. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IPrivate)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class PrivateImpl extends BaseImpl implements IPrivate, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__ENTITY_REF, String.class);
	}
	
	private NamedReferenceProxy<IEntity> entityRef;
	private List<IPrivateAction> privateActions;

	@Override
	public INamedReference<IEntity> getEntityRef()
	{
		return entityRef;
	}
	@Override
	public List<IPrivateAction> getPrivateActions()
	{
		return privateActions;
	}
	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: []
	 * 
	*/
	public  void setEntityRef (NamedReferenceProxy<IEntity> entityRef )
	{
		this.entityRef = entityRef;
	}
	/**
	 * Sets the value of model property privateActions
	 * @param privateActions from OpenSCENARIO class model specification: [List of private actions to be executed when the 
	 * enclosing container gets triggered.]
	 * 
	*/
	public void setPrivateActions(List<IPrivateAction> privateActions)
	{
		this.privateActions = privateActions;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__ENTITY_REF))
		{
			// Proxy
			NamedReferenceProxy<IEntity> proxy = new NamedReferenceProxy<IEntity> (parameterLiteralValue);
			entityRef = proxy;
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
		
			List<IPrivateAction> privateActions = null;
			privateActions =  getPrivateActions();
			if (privateActions != null)
			{
				for(IPrivateAction item : privateActions)
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
	public PrivateImpl clone()
	{
		PrivateImpl clonedObject = new PrivateImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Proxy
		NamedReferenceProxy<IEntity> proxy = ((NamedReferenceProxy<IEntity>)getEntityRef()).clone();
		clonedObject.setEntityRef(proxy);
		proxy.setParent(clonedObject);
		// clone children
		List<IPrivateAction> privateActions = null;
			privateActions =  getPrivateActions();
		if (privateActions != null)
		{
			List<IPrivateAction> clonedList = new ArrayList<IPrivateAction>();
			for(IPrivateAction item : privateActions)
			{
				PrivateActionImpl clonedChild = ((PrivateActionImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setPrivateActions(clonedList);
		}
		return clonedObject;
	}
	
	
	
}

