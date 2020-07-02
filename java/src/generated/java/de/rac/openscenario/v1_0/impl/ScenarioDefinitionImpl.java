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

import de.rac.openscenario.v1_0.api.IScenarioDefinition;
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
import de.rac.openscenario.v1_0.parameter.ParameterValue;

import de.rac.openscenario.v1_0.api.IRoadNetwork;
import de.rac.openscenario.v1_0.api.IParameterDeclaration;
import de.rac.openscenario.v1_0.api.ICatalogLocations;
import de.rac.openscenario.v1_0.api.IStoryboard;
import de.rac.openscenario.v1_0.api.IEntities;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IScenarioDefinition. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IScenarioDefinition)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class ScenarioDefinitionImpl extends BaseImpl implements IScenarioDefinition, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private List<IParameterDeclaration> parameterDeclarations;
	private ICatalogLocations catalogLocations;
	private IRoadNetwork roadNetwork;
	private IEntities entities;
	private IStoryboard storyboard;

	@Override
	public List<IParameterDeclaration> getParameterDeclarations()
	{
		return parameterDeclarations;
	}
	@Override
	public ICatalogLocations getCatalogLocations()
	{
		return catalogLocations;
	}
	@Override
	public IRoadNetwork getRoadNetwork()
	{
		return roadNetwork;
	}
	@Override
	public IEntities getEntities()
	{
		return entities;
	}
	@Override
	public IStoryboard getStoryboard()
	{
		return storyboard;
	}
	/**
	 * Sets the value of model property parameterDeclarations
	 * @param parameterDeclarations from OpenSCENARIO class model specification: [Global Parameter declaration. Some parameter 
	 * represent placeholders to be resolved when the scenario file is loaded. , Some parameters represent runtime values that 
	 * can be controlled with ParameterActions and ParameterConditions during , simulation time.]
	 * 
	*/
	public void setParameterDeclarations(List<IParameterDeclaration> parameterDeclarations)
	{
		this.parameterDeclarations = parameterDeclarations;
	}
	/**
	 * Sets the value of model property catalogLocations
	 * @param catalogLocations from OpenSCENARIO class model specification: [A list of locations to look up catalog files. Each
	 * catalog element type has its own list.]
	 * 
	*/
	public  void setCatalogLocations (ICatalogLocations catalogLocations )
	{
		this.catalogLocations = catalogLocations;
	}
	/**
	 * Sets the value of model property roadNetwork
	 * @param roadNetwork from OpenSCENARIO class model specification: [Reference to the road network.]
	 * 
	*/
	public  void setRoadNetwork (IRoadNetwork roadNetwork )
	{
		this.roadNetwork = roadNetwork;
	}
	/**
	 * Sets the value of model property entities
	 * @param entities from OpenSCENARIO class model specification: [Container for entity selections and scenario object 
	 * definitions. Instances of ScenarioObject, of EntitySelection and of , SpawnedObject considered instances of Entity.]
	 * 
	*/
	public  void setEntities (IEntities entities )
	{
		this.entities = entities;
	}
	/**
	 * Sets the value of model property storyboard
	 * @param storyboard from OpenSCENARIO class model specification: [Container for the dynamic content of the scenario.]
	 * 
	*/
	public  void setStoryboard (IStoryboard storyboard )
	{
		this.storyboard = storyboard;
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

	@Override
	public boolean hasParameterDefinitions() {
		return true;
	}
	
	@Override
	public List<ParameterValue> getParameterDefinitions() {
		List<ParameterValue> result = new java.util.ArrayList<ParameterValue>();
		if (parameterDeclarations != null)
		{
			for (IParameterDeclaration parameterDeclaration :parameterDeclarations)
			{
				ParameterValue parameterValue = new ParameterValue(parameterDeclaration.getName(), getParameterType(parameterDeclaration.getParameterType().getLiteral()),parameterDeclaration.getValue());
				result.add(parameterValue);
			}
		}
		return result;
	}

	/**
	 * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
	 * method for any child.
	 * @return a list with all children (as BaseImpl)
	 */
	public List<BaseImpl> getChildren()
	{
		List<BaseImpl> result = new ArrayList<BaseImpl>();
		
			List<IParameterDeclaration> parameterDeclarations = null;
			parameterDeclarations =  getParameterDeclarations();
			if (parameterDeclarations != null)
			{
				for(IParameterDeclaration item : parameterDeclarations)
				{
					result.add((BaseImpl) item);
				}
			}
			ICatalogLocations catalogLocations = null;
			catalogLocations =  getCatalogLocations();
			if (catalogLocations != null)
			{
				result.add((BaseImpl) catalogLocations);
			}	
			IRoadNetwork roadNetwork = null;
			roadNetwork =  getRoadNetwork();
			if (roadNetwork != null)
			{
				result.add((BaseImpl) roadNetwork);
			}	
			IEntities entities = null;
			entities =  getEntities();
			if (entities != null)
			{
				result.add((BaseImpl) entities);
			}	
			IStoryboard storyboard = null;
			storyboard =  getStoryboard();
			if (storyboard != null)
			{
				result.add((BaseImpl) storyboard);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public ScenarioDefinitionImpl clone()
	{
		ScenarioDefinitionImpl clonedObject = new ScenarioDefinitionImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		List<IParameterDeclaration> parameterDeclarations = null;
			parameterDeclarations =  getParameterDeclarations();
		if (parameterDeclarations != null)
		{
			List<IParameterDeclaration> clonedList = new ArrayList<IParameterDeclaration>();
			for(IParameterDeclaration item : parameterDeclarations)
			{
				ParameterDeclarationImpl clonedChild = ((ParameterDeclarationImpl) item).clone();
				clonedList.add(clonedChild);
				clonedChild.setParent(clonedObject);
			}
			clonedObject.setParameterDeclarations(clonedList);
		}
		ICatalogLocations catalogLocations = null;
		catalogLocations =  getCatalogLocations();
		if (catalogLocations != null)
		{
			CatalogLocationsImpl clonedChild = ((CatalogLocationsImpl) catalogLocations).clone();
			clonedObject.setCatalogLocations(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IRoadNetwork roadNetwork = null;
		roadNetwork =  getRoadNetwork();
		if (roadNetwork != null)
		{
			RoadNetworkImpl clonedChild = ((RoadNetworkImpl) roadNetwork).clone();
			clonedObject.setRoadNetwork(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IEntities entities = null;
		entities =  getEntities();
		if (entities != null)
		{
			EntitiesImpl clonedChild = ((EntitiesImpl) entities).clone();
			clonedObject.setEntities(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IStoryboard storyboard = null;
		storyboard =  getStoryboard();
		if (storyboard != null)
		{
			StoryboardImpl clonedChild = ((StoryboardImpl) storyboard).clone();
			clonedObject.setStoryboard(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

