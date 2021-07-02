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
package de.rac.openscenario.uml.framework;

import groovy.transform.Memoized

public class UmlType extends UmlNamedElement {
	
	public UmlType(String name)
	{
		super(name);
		
	}
	
	@Memoized
	public List<UmlType> getUsedInList()
	{
		Set<UmlType> resultSet =  [];
		root.classes.each { UmlClass umlClass -> 
			for (UmlProperty property : umlClass.umlProperties)
			{
				if (property.type == this)
				{
					resultSet.add(umlClass);
					break;
				}
			}
			
		}
		List<UmlType> result =  [];
		result.addAll(resultSet);
		result.sort();
		
		return result;
	}
	
	public boolean isPrimitiveType()
	{
		return this instanceof UmlPrimitiveType;
	}
	
	public boolean isEnumeration()
	{
		return this instanceof UmlEnumeration;
	}
	
	public boolean isComplexType()
	{
		return hasStereotype("XSDcomplexType");
	}
}
