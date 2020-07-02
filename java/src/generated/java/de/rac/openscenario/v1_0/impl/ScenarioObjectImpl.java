/*
 * Copyright 2020 RA Consulting
 *
 * RA Consulting GmbH licenses this file under the Apache License, 
 * Version 2.0 (the "License"); you may not use this file except 
 * in compliance with the License. 
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
package de.rac.openscenario.v1_0.impl;

import de.rac.openscenario.v1_0.api.IScenarioObject;
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

import de.rac.openscenario.v1_0.api.IObjectController;
import de.rac.openscenario.v1_0.api.IEntityObject;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IScenarioObject. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IScenarioObject)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ScenarioObjectImpl extends BaseImpl implements IScenarioObject, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__NAME, String.class);
	}
	
	private String name;
	private IEntityObject entityObject;
	private IObjectController objectController;

	@Override
	public String getName()
	{
		return name;
	}
	@Override
	public IEntityObject getEntityObject()
	{
		return entityObject;
	}
	@Override
	public IObjectController getObjectController()
	{
		return objectController;
	}
	/**
	 * Sets the value of model property name
	 * @param name from OpenSCENARIO class model specification: [Identifier of the scenario object.]
	 * 
	*/
	public  void setName (String name )
	{
		this.name = name;
	}
	/**
	 * Sets the value of model property entityObject
	 * @param entityObject from OpenSCENARIO class model specification: [The EntityObject (either instance of type Vehicle, 
	 * Pedestrian or MiscObject).]
	 * 
	*/
	public  void setEntityObject (IEntityObject entityObject )
	{
		this.entityObject = entityObject;
	}
	/**
	 * Sets the value of model property objectController
	 * @param objectController from OpenSCENARIO class model specification: [Controller of the EntityObject instance.]
	 * 
	*/
	public  void setObjectController (IObjectController objectController )
	{
		this.objectController = objectController;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__NAME))
		{
			// Simple type
			name = ParserHelper.parseString(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
		
			IEntityObject entityObject = null;
			entityObject =  getEntityObject();
			if (entityObject != null)
			{
				result.add((BaseImpl) entityObject);
			}	
			IObjectController objectController = null;
			objectController =  getObjectController();
			if (objectController != null)
			{
				result.add((BaseImpl) objectController);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public ScenarioObjectImpl clone()
	{
		ScenarioObjectImpl clonedObject = new ScenarioObjectImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setName(getName());		
		// clone children
		IEntityObject entityObject = null;
		entityObject =  getEntityObject();
		if (entityObject != null)
		{
			EntityObjectImpl clonedChild = ((EntityObjectImpl) entityObject).clone();
			clonedObject.setEntityObject(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IObjectController objectController = null;
		objectController =  getObjectController();
		if (objectController != null)
		{
			ObjectControllerImpl clonedChild = ((ObjectControllerImpl) objectController).clone();
			clonedObject.setObjectController(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

