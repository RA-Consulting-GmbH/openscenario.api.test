package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IEntityAction;
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
import de.rac.openscenario.v1_0.api.IDeleteEntityAction;
import de.rac.openscenario.v1_0.api.IEntity;
import de.rac.openscenario.v1_0.api.IAddEntityAction;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IEntityAction. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IEntityAction)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class EntityActionImpl extends BaseImpl implements IEntityAction, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__ENTITY_REF, String.class);
	}
	
	private NamedReferenceProxy<IEntity> entityRef;
	private IAddEntityAction addEntityAction;
	private IDeleteEntityAction deleteEntityAction;

	@Override
	public INamedReference<IEntity> getEntityRef()
	{
		return entityRef;
	}
	@Override
	public IAddEntityAction getAddEntityAction()
	{
		return addEntityAction;
	}
	@Override
	public IDeleteEntityAction getDeleteEntityAction()
	{
		return deleteEntityAction;
	}
	/**
	 * Sets the value of model property entityRef
	 * @param entityRef from OpenSCENARIO class model specification: [Name of the reference entity.]
	 * 
	*/
	public  void setEntityRef (NamedReferenceProxy<IEntity> entityRef )
	{
		this.entityRef = entityRef;
	}
	/**
	 * Sets the value of model property addEntityAction
	 * @param addEntityAction from OpenSCENARIO class model specification: [Action that adds the reference entity to the 
	 * scenario.]
	 * 
	*/
	public  void setAddEntityAction (IAddEntityAction addEntityAction )
	{
		this.addEntityAction = addEntityAction;
	}
	/**
	 * Sets the value of model property deleteEntityAction
	 * @param deleteEntityAction from OpenSCENARIO class model specification: [Action that deletes the reference entity from 
	 * the scenario.]
	 * 
	*/
	public  void setDeleteEntityAction (IDeleteEntityAction deleteEntityAction )
	{
		this.deleteEntityAction = deleteEntityAction;
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
		
			IAddEntityAction addEntityAction = null;
			addEntityAction =  getAddEntityAction();
			if (addEntityAction != null)
			{
				result.add((BaseImpl) addEntityAction);
			}	
			IDeleteEntityAction deleteEntityAction = null;
			deleteEntityAction =  getDeleteEntityAction();
			if (deleteEntityAction != null)
			{
				result.add((BaseImpl) deleteEntityAction);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public EntityActionImpl clone()
	{
		EntityActionImpl clonedObject = new EntityActionImpl();
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
		IAddEntityAction addEntityAction = null;
		addEntityAction =  getAddEntityAction();
		if (addEntityAction != null)
		{
			AddEntityActionImpl clonedChild = ((AddEntityActionImpl) addEntityAction).clone();
			clonedObject.setAddEntityAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IDeleteEntityAction deleteEntityAction = null;
		deleteEntityAction =  getDeleteEntityAction();
		if (deleteEntityAction != null)
		{
			DeleteEntityActionImpl clonedChild = ((DeleteEntityActionImpl) deleteEntityAction).clone();
			clonedObject.setDeleteEntityAction(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

