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

import de.rac.openscenario.v1_0.api.IOpenScenarioCategory;
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

import de.rac.openscenario.v1_0.api.IScenarioDefinition;
import de.rac.openscenario.v1_0.api.ICatalogDefinition;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IOpenScenarioCategory. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IOpenScenarioCategory)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class OpenScenarioCategoryImpl extends BaseImpl implements IOpenScenarioCategory, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IScenarioDefinition scenarioDefinition;
	private ICatalogDefinition catalogDefinition;

	@Override
	public IScenarioDefinition getScenarioDefinition()
	{
		return scenarioDefinition;
	}
	@Override
	public ICatalogDefinition getCatalogDefinition()
	{
		return catalogDefinition;
	}
	/**
	 * Sets the value of model property scenarioDefinition
	 * @param scenarioDefinition from OpenSCENARIO class model specification: [Definition of a scenario.]
	 * 
	*/
	public  void setScenarioDefinition (IScenarioDefinition scenarioDefinition )
	{
		this.scenarioDefinition = scenarioDefinition;
	}
	/**
	 * Sets the value of model property catalogDefinition
	 * @param catalogDefinition from OpenSCENARIO class model specification: [Definition of a catalog.]
	 * 
	*/
	public  void setCatalogDefinition (ICatalogDefinition catalogDefinition )
	{
		this.catalogDefinition = catalogDefinition;
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
		
			IScenarioDefinition scenarioDefinition = null;
			scenarioDefinition =  getScenarioDefinition();
			if (scenarioDefinition != null)
			{
				result.add((BaseImpl) scenarioDefinition);
			}	
			ICatalogDefinition catalogDefinition = null;
			catalogDefinition =  getCatalogDefinition();
			if (catalogDefinition != null)
			{
				result.add((BaseImpl) catalogDefinition);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public OpenScenarioCategoryImpl clone()
	{
		OpenScenarioCategoryImpl clonedObject = new OpenScenarioCategoryImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IScenarioDefinition scenarioDefinition = null;
		scenarioDefinition =  getScenarioDefinition();
		if (scenarioDefinition != null)
		{
			ScenarioDefinitionImpl clonedChild = ((ScenarioDefinitionImpl) scenarioDefinition).clone();
			clonedObject.setScenarioDefinition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		ICatalogDefinition catalogDefinition = null;
		catalogDefinition =  getCatalogDefinition();
		if (catalogDefinition != null)
		{
			CatalogDefinitionImpl clonedChild = ((CatalogDefinitionImpl) catalogDefinition).clone();
			clonedObject.setCatalogDefinition(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

