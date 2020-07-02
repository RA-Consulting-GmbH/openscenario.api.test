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

import de.rac.openscenario.v1_0.api.IFileHeader;
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



/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * Value class that implements IFileHeader. With setter methods to fill the properties.
 * <ul>
 * <li> getter methods for properties (implemented methods of IFileHeader)
 * <li> setter methods for properties
 * <li> getChildren method to collect all children
 * <li> clone function to make a deep copy
 * <li> overrides from BaseImpl
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public class FileHeaderImpl extends BaseImpl implements IFileHeader, Cloneable{
	
	/**
	 * Filling the property to type map
	 */
	 static{
		propertyToType.put(OscConstants.ATTRIBUTE__REV_MAJOR, Integer.class);
		propertyToType.put(OscConstants.ATTRIBUTE__REV_MINOR, Integer.class);
		propertyToType.put(OscConstants.ATTRIBUTE__DATE, java.util.Date.class);
		propertyToType.put(OscConstants.ATTRIBUTE__DESCRIPTION, String.class);
		propertyToType.put(OscConstants.ATTRIBUTE__AUTHOR, String.class);
	}
	
	private Integer revMajor;
	private Integer revMinor;
	private java.util.Date date;
	private String description;
	private String author;

	@Override
	public Integer getRevMajor()
	{
		return revMajor;
	}
	@Override
	public Integer getRevMinor()
	{
		return revMinor;
	}
	@Override
	public java.util.Date getDate()
	{
		return date;
	}
	@Override
	public String getDescription()
	{
		return description;
	}
	@Override
	public String getAuthor()
	{
		return author;
	}
	/**
	 * Sets the value of model property revMajor
	 * @param revMajor from OpenSCENARIO class model specification: [Major OpenSCENARIO revision, this file conforms to Range: 
	 * [0..inf[.]
	 * 
	*/
	public  void setRevMajor (Integer revMajor )
	{
		this.revMajor = revMajor;
	}
	/**
	 * Sets the value of model property revMinor
	 * @param revMinor from OpenSCENARIO class model specification: [Minor OpenSCENARIO revision, this file conforms to Range: 
	 * [0..inf[.]
	 * 
	*/
	public  void setRevMinor (Integer revMinor )
	{
		this.revMinor = revMinor;
	}
	/**
	 * Sets the value of model property date
	 * @param date from OpenSCENARIO class model specification: [User specific date and time recommended: YYYY-MM-DDThh:mm:ss.]
	 * 
	*/
	public  void setDate (java.util.Date date )
	{
		this.date = date;
	}
	/**
	 * Sets the value of model property description
	 * @param description from OpenSCENARIO class model specification: [User specific description.]
	 * 
	*/
	public  void setDescription (String description )
	{
		this.description = description;
	}
	/**
	 * Sets the value of model property author
	 * @param author from OpenSCENARIO class model specification: [Author of the scenario or the catalog.]
	 * 
	*/
	public  void setAuthor (String author )
	{
		this.author = author;
	}

	@Override
	public  void resolveParameterInternal(IParserMessageLogger logger,String attributeKey, String parameterLiteralValue)
	{
		if (attributeKey.equals(OscConstants.ATTRIBUTE__REV_MAJOR))
		{
			// Simple type
			revMajor = ParserHelper.parseUnsignedShort(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__REV_MINOR))
		{
			// Simple type
			revMinor = ParserHelper.parseUnsignedShort(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__DATE))
		{
			// Simple type
			date = ParserHelper.parseDateTime(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__DESCRIPTION))
		{
			// Simple type
			description = ParserHelper.parseString(logger,parameterLiteralValue,getTextmarker(attributeKey));
			removeResolvedParameter(attributeKey);
				
	 	}
		else if (attributeKey.equals(OscConstants.ATTRIBUTE__AUTHOR))
		{
			// Simple type
			author = ParserHelper.parseString(logger,parameterLiteralValue,getTextmarker(attributeKey));
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
		
		return result;
	}
	
	/**
	 * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
	 * @return a deep copy of the object.
	 */
	public FileHeaderImpl clone()
	{
		FileHeaderImpl clonedObject = new FileHeaderImpl();
		cloneStartMarker(clonedObject);
		cloneEndMarker(clonedObject);
		cloneAttributeKeyToStartMarker(clonedObject);
		cloneAttributeKeyToEndMarker(clonedObject);
		cloneAttributeKeyToParameterNameMap(clonedObject);
		// clone attributes;
		// Simple type
		clonedObject.setRevMajor(getRevMajor());		
		// Simple type
		clonedObject.setRevMinor(getRevMinor());		
		// Simple type
		clonedObject.setDate(getDate());		
		// Simple type
		clonedObject.setDescription(getDescription());		
		// Simple type
		clonedObject.setAuthor(getAuthor());		
		// clone children
		return clonedObject;
	}
	
	
	
}

