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

public class UmlProperty extends UmlNamedElement {

	public UmlProperty(String name) {
		super(name);
	}
	public UmlType type;
	public int lower = 1;
	public int upper = 1;


	@Memoized
	public  boolean isProxy() {
		return hasStereotype("nameRef");
	}

	@Memoized
	public boolean isParameterizableProperty() {
		String className = ((UmlClass) this.parent).name;
		return (this.type.isPrimitiveType() ||this.type.isEnumeration() || this.isProxy()) &&
				!(className == "ParameterDeclaration" && this.name == "name") &&
				!(className == "ParameterAssignment" && this.name == "parameterRef");
	}

	@Memoized
	public boolean isXmlElementProperty() {
		return hasStereotype("XSDelement");
	}
	
	@Memoized
	public boolean isOptional() {
		return lower == 0;
	}
	
	@Memoized
	public boolean isOptionalUnboundList() {
		return this.lower == 0 && this.upper == -1;
	}
	
	@Memoized
	public boolean isSimpleContentProperty() {
		return parent.hasStereotype("XSDsimpleContent") && this.name == parent.getTagValue("XSDsimpleContent", "umlPropertyName");
	}
	
	@Memoized
	public boolean isXmlAttributeProperty() {
		return hasStereotype("XSDattribute");
	}
	
	@Memoized
	public Integer getPosition() {
		return Integer.parseInt(getTagValue("XSDelement", "position"))
	}

	@Memoized
	public boolean isXorElement() {
		return hasStereotype("xor");
	}

	@Memoized
	public boolean isPrimitiveAttribute() {
		return type instanceof UmlPrimitiveType;
	}

	@Memoized
	public boolean isList() {
		return upper != 1;
	}

	@Memoized
	public boolean canBeNull() {
		return lower == 0;
	}

	@Memoized
	public  boolean isTransient() {
		return hasStereotype("transient");
	}


	@Memoized
	public String getXsdListElement() {
		return getTagValue( "XSDunwrapped", "xsdElementName");
	}

	@Memoized
	public String getXsdElementName() {
		String result = getXsdListElement();
		if (result) {
			return result;
		}
		result = getXsdWrapperElementName();
		if (result) {
			return result;
		}
		return name.toClassName();
	}

	@Memoized
	public boolean isWrappedList() {
		return hasStereotype("XSDwrapped");
	}

	@Memoized
	public boolean isUnwrappedList() {
		return hasStereotype( "XSDunwrapped");
	}

	@Memoized
	public String getXsdWrapperElementName() {

		Stereotype stereotype =  appliedStereotypes.find(){Stereotype s -> s.getName() == "XSDwrapped"};
		if (stereotype != null) {
			return type.getTagValue("XSDwrapperType","xsdWrapperElementName");
		}

		return null;
	}

	@Memoized
	public String getXmlTagName() {
		if (isUnwrappedList()){
			// This is a unwrapped list
			return getXsdElementName().toClassName();
		} else {
			return name.toClassName();
		}
	}

	@Memoized
	public String getXsdWrapperType() {
		Stereotype stereotype =  appliedStereotypes.find(){Stereotype s -> s.getName() == "XSDwrapped"};
		if (stereotype != null) {
			return type.getTagValue("XSDwrapperType","xsdWrapperType");
		}

		return null;
	}
	public int compareTo(UmlProperty o) {

		int result = 0;

		if (this.hasStereotype("XSDattribute") && ! o.hasStereotype("XSDattribute")) {
			return -1;
		}else if (!this.hasStereotype("XSDattribute") && o.hasStereotype("XSDattribute")) {
			return 1;
		}else if (o.isTransient()) {
			return -1;
		}else if (!this.hasStereotype("XSDattribute") && !o.hasStereotype("XSDattribute")) {
			String firstPosition = this.getTagValue("XSDelement", "position");
			String secondPosition = o.getTagValue("XSDelement", "position");
			if (firstPosition != null && secondPosition != null) {
				try {
					Integer firstValue = Integer.parseInt(firstPosition)
					Integer secondValue = Integer.parseInt(secondPosition)
					result = firstValue.compareTo(secondValue)
				} catch ( NumberFormatException e) {
					// Do nothing leave result 0
				}
			}
		}else {
			result = this.name.compareTo(o.name);
		}
		return result;
	}

	@Memoized
	public List getPossibleTagNames() {
		List tagNames = [];
		if (this.type.isComplexType() || ((UmlClass)this.type).isSimpleContent()) {
			tagNames.add(this.getXmlTagName());
		}else if (((UmlClass)this.type).isGroup()) {
			
			if (((UmlClass)this.type).isModelGroupAll()) {
				// return any possible tag
				((UmlClass)this.type).umlProperties.each{ subProperty ->
					tagNames.addAll(subProperty.getPossibleTagNames());
				}

			}else  if (((UmlClass)this.type).isModelGroupChoice())
			{
				((UmlClass)this.type).umlProperties.each{ subProperty ->
					List subNames = subProperty.getPossibleTagNames()
					tagNames.addAll(subNames);
				}

			}else if (((UmlClass)this.type).isModelGroupSequence())
			{
				// Collect until the first required (include required)
				List<UmlProperty> subProperties = ((UmlClass)this.type).umlProperties;
				for (int i = 0; i < subProperties.size(); i++) {
					tagNames.addAll(subProperties[i].getPossibleTagNames());

					if (subProperties[i].upper > 0)
					{
						break;
					}
				}
			}else
			{
				println("Error");
			}
			
		}else
		{
			println("${this.parent.name} ${this.name}");
		}
		return tagNames;
	}

}
