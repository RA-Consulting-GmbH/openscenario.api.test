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

import de.rac.openscenario.v1_0.api.IOpenScenario;
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

import de.rac.openscenario.v1_0.api.IFileHeader;
import de.rac.openscenario.v1_0.api.IOpenScenarioCategory;


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IOpenScenario. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IOpenScenario)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class OpenScenarioImpl extends BaseImpl implements IOpenScenario, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
	}
	
	private IFileHeader fileHeader;
	private IOpenScenarioCategory openScenarioCategory;

	@Override
	public IFileHeader getFileHeader()
	{
		return fileHeader;
	}
	@Override
	public IOpenScenarioCategory getOpenScenarioCategory()
	{
		return openScenarioCategory;
	}
	/**
	 * Sets the value of model property fileHeader
	 * @param fileHeader from OpenSCENARIO class model specification: [Header information for the scenario or the catalog.]
	 * 
	*/
	public  void setFileHeader (IFileHeader fileHeader )
	{
		this.fileHeader = fileHeader;
	}
	/**
	 * Sets the value of model property openScenarioCategory
	 * @param openScenarioCategory from OpenSCENARIO class model specification: [Category (catalog or scenario) of the 
	 * OpenSCENARIO description.]
	 * 
	*/
	public  void setOpenScenarioCategory (IOpenScenarioCategory openScenarioCategory )
	{
		this.openScenarioCategory = openScenarioCategory;
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
		
			IFileHeader fileHeader = null;
			fileHeader =  getFileHeader();
			if (fileHeader != null)
			{
				result.add((BaseImpl) fileHeader);
			}	
			IOpenScenarioCategory openScenarioCategory = null;
			openScenarioCategory =  getOpenScenarioCategory();
			if (openScenarioCategory != null)
			{
				result.add((BaseImpl) openScenarioCategory);
			}	
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public OpenScenarioImpl clone()
	{
		OpenScenarioImpl clonedObject = new OpenScenarioImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// clone children
		IFileHeader fileHeader = null;
		fileHeader =  getFileHeader();
		if (fileHeader != null)
		{
			FileHeaderImpl clonedChild = ((FileHeaderImpl) fileHeader).clone();
			clonedObject.setFileHeader(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		IOpenScenarioCategory openScenarioCategory = null;
		openScenarioCategory =  getOpenScenarioCategory();
		if (openScenarioCategory != null)
		{
			OpenScenarioCategoryImpl clonedChild = ((OpenScenarioCategoryImpl) openScenarioCategory).clone();
			clonedObject.setOpenScenarioCategory(clonedChild);
			clonedChild.setParent(clonedObject);
		}	
		return clonedObject;
	}
	
	
	
}

