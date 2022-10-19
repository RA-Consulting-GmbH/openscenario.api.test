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

public class UmlClass extends UmlType {
	public List<UmlProperty> umlProperties = [];
	public List<UmlInterface> implementedInterfaces = [];
	
	public UmlClass( String name)
	{
		super(name);
		
	}
	
	@Memoized
	public List<UmlInterface> getExtendedInterfacesRecursive()
	{
		List<UmlInterface> result = [];
		result.addAll(implementedInterfaces)
		implementedInterfaces.each { UmlInterface umlInterface ->
			result.addAll(umlInterface.getExtendedInterfacesRecursive())
		}
		result.sort();
		return result;
	}
	public void setRoot(UmlModel root)
	{
		super.setRoot(root);
		umlProperties.each { it.setRoot(root)};
		umlProperties.each { it.parent = this};
	}
	
	@Memoized
	public   List<UmlProperty> getParametrizableAttributes(){
		List propertyList = umlProperties.findAll {UmlProperty property -> property.type instanceof UmlPrimitiveType || property.type instanceof UmlEnumeration || property.isProxy() };
		
		if (name == "ParameterDeclaration")
		{
			UmlProperty property = propertyList.find() {UmlProperty property -> property.name == "name"};
			propertyList.remove(property)
		
		}
		else if ( this.name == "ParameterAssignment")
		{
			UmlProperty property = propertyList.find() {UmlProperty property -> property.name == "parameterRef"};
			propertyList.remove(property)
		}
		
		return propertyList;
			
		
	}
	
	@Memoized
	public   boolean hasProxies(){
		return !umlProperties.findAll {UmlProperty property ->property.isProxy()}.isEmpty();
	}
	
	
	@Memoized
	public   boolean hasEnumAttributes(){
		return !umlProperties.findAll {UmlProperty property ->property.type instanceof UmlEnumeration}.isEmpty();
	}
	
	@Memoized
	public   boolean hasWrappedList(){
		return !umlProperties.findAll {UmlProperty property ->property.isWrappedList()}.isEmpty();
	}
	
	@Memoized
	public   UmlProperty getParameterDefinitionProperty(){
		return getXmlElementProperties().find {UmlProperty property ->property.type.name == "ParameterDeclaration"};
	}
	
	@Memoized
	public   List<UmlProperty> getPrimitiveAttributes(){
		return umlProperties.findAll {UmlProperty property ->property.type instanceof UmlPrimitiveType};
	}
	
	
	@Memoized
	public UmlProperty getPropertyByName(String name) {
		return umlProperties.find{UmlProperty umlProperty -> umlProperty.name == name};
	}

	@Memoized
	public   List<UmlProperty> getXmlAttributeProperties()
	{
		return umlProperties.findAll{ UmlProperty property ->
			property.hasStereotype( "XSDattribute")
		}
	}
	
	@Memoized
	public   List<UmlProperty> getXmlElementProperties()
	{
		return umlProperties.findAll{ UmlProperty property ->
			!property.hasStereotype( "XSDattribute") &&
			!property.hasStereotype("transient") &&
			!this.hasStereotype("XSDsimpleContent");
			
		}
	}
	
	@Memoized
	public   boolean isSimpleContent()
	{
		return hasStereotype("XSDsimpleContent");
			
	}
	
	@Memoized
	public   boolean isComplexType()
	{
		return hasStereotype("XSDcomplexType");
			
	}
	
	@Memoized
	public   boolean isGroup()
	{
		return hasStereotype("XSDgroup");
			
	}
	
	@Memoized
	public   String getContentPropertyName()
	{
		return getTagValue("XSDsimpleContent","umlPropertyName");
	}
	
	@Memoized
	public   getWrapperXsdType()
	{
		return getTagValue( "XSDwrapperType","xsdWrapperType");
	}
	
	
	
	@Memoized
	public   boolean isModelGroupAll()
	{
		
		Stereotype stereotype =  appliedStereotypes.find(){Stereotype s -> s.getName() == "XSDcomplexType" || s.getName() == "XSDgroup"};
		if (stereotype != null)
		{
			String value = stereotype.tags["modelGroup"];
			if (value != null && value != "" &&  value == "all")
			{
				return true;
			}
			
		}
		
		return false;
	}
	
	@Memoized
	public   boolean isModelGroupChoice()
	{
		
		Stereotype stereotype =  appliedStereotypes.find(){Stereotype s -> s.getName() == "XSDcomplexType" || s.getName() == "XSDgroup"};
		if (stereotype != null)
		{
			String value = stereotype.tags["modelGroup"];
			if (value != null && value != "" &&  value == "choice")
			{
				return true;
			}
			
		}
		
		return false;
	}
	
	@Memoized
	public  boolean doPropertiesContainXorElements()
	{
		//count properties with xor elements and if not 0 add checks for xor elements
		//umlClass.isModelGroupChoice() does not work well for all elements eg TargetDistanceSteadyState
		boolean xorElements = false;
		umlProperties.each{ property ->
			if (property.appliedStereotypes.find(){s -> s.getName() == "xor"}) 
				xorElements = xorElements || true;
		}
		
		return xorElements;
	}
	
	
	@Memoized
	public   boolean isModelGroupSequence()
	{
		
		Stereotype stereotype =  appliedStereotypes.find(){Stereotype s -> s.getName() == "XSDcomplexType" || s.getName() == "XSDgroup"};
		if (stereotype != null)
		{
			String value = stereotype.tags["modelGroup"];
			if (value != null && value != "" &&  value == "sequence")
			{
				return true;
			}
			
		}
		
		return false;
	}
	
	
	@Memoized
	public   boolean doesXsdTransferInformationExists()
	{
		
		if (getWrapperXsdType())
		{
			return true;
		}
		for (UmlProperty property : umlProperties)
		{
			if (property.getXsdWrapperType()|| property.getXsdListElement())
			{
				return true;
			}
			
		}
		return false;
	}
	
	public List<String> checkPositions()
	{
		List<String> warnings = [];
		List<Integer> orders = [];
		
		if (!this.isSimpleContent())
		{
			List <UmlProperty> elementProperties = umlProperties.findAll{UmlProperty umlProperty->
				!umlProperty.hasStereotype("XSDattribute") && !umlProperty.isTransient()
			}
			
			elementProperties.each { 
				UmlProperty umlProperty ->
				String position = umlProperty.getTagValue("XSDelement", "position")
				if (!position)
				{
					warnings.add("Tag position must be set for ${this.name}->${umlProperty.name}")
				}
				try {
					Integer value = Integer.parseInt(position)
					if (value < 1)
					{
							warnings.add("Tag position must be a positive number >= 1 for ${this.name}->${umlProperty.name}");
					}
					if (orders.contains(value))
					{
						warnings.add("Tag position must be consistent. Value ${value} aready exists in ${this.name}");
					}
					orders.add(value);
					
				} catch (NumberFormatException e)
				{
					warnings.add("Tag position must be a number ${this.name}->${umlProperty.name} (actual value '${position}')")
				}
				
				
			}
			
		}
		return warnings;
		
	}
}
