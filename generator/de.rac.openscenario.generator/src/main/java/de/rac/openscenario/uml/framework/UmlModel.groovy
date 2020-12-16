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

public class UmlModel {
	public List<UmlClass> classes = [];
	public List<UmlClass> interfaces= [];
	public List<UmlEnumeration> enumerations= [];
	public List<UmlPrimitiveType> primitiveTypes= [];
	
	public void setRoot()
	{
		classes.each {it.setRoot(this) }
		interfaces.each {it.setRoot(this) }
		enumerations.each {it.setRoot(this) }
		primitiveTypes.each {it.setRoot(this) }
		classes.sort();
		interfaces.sort();
		enumerations.sort();
		primitiveTypes.sort();
	}

	public List<UmlClass> getClasses() {
		return classes;
	}
	
	@Memoized
	public UmlClass getClassByName(String name) {
		return classes.find{UmlClass umlClass -> umlClass.name == name};
	}
	
	@Memoized
	public UmlInterface getInterfaceByName(String name) {
		return interfaces.find{UmlInterface umlInterface -> umlInterface.name == name};
	}
	
	@Memoized
	public UmlEnumeration getEnumerationByName(String name) {
		return enumerations.find{UmlEnumeration umlEnumeration -> umlEnumeration.name == name};
	}

	public List<UmlInterface> getInterfaces() {
		return interfaces;
	}

	public List<UmlEnumeration> getEnumerations() {
		return enumerations;
	}

	public List<UmlPrimitiveType> getPrimitiveTypes() {
		return primitiveTypes;
	}
	
	public List<String> checkPositions()
	{
		List<String> warnings = [];
		classes.each{UmlClass umlClass -> 
			warnings.addAll(umlClass.checkPositions())
		}
		return warnings
	}
	public List getCatalogElementClasses()
	{
		def umlInterface = getInterfaces().find(){umlInterface-> umlInterface.name == "CatalogElement"}
		
		return  getClasses().findAll{ UmlClass umlClass -> umlClass.implementedInterfaces.contains(umlInterface)};

	}
	
}
