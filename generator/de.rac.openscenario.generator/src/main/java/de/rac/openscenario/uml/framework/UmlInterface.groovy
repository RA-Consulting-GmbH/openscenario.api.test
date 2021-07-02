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

public class UmlInterface extends UmlType {
	public List<UmlInterface> extendedInterfaces = [];
	

	public UmlInterface(String name)
	{
		super( name);
		
	}
	
	@Memoized
	public List<UmlInterface> getExtendedInterfacesRecursive()
	{
		List<UmlInterface> result = [];
		result.addAll(extendedInterfaces)
		extendedInterfaces.each { UmlInterface umlInterface ->
			result.addAll(umlInterface.getExtendedInterfacesRecursive())
		}
		result.sort();
		return result;
	}
	
	@Memoized
	public List<UmlType> getRealizationsAndSubtypesRecursive()
	{
		List<UmlType> result = [];
		List<UmlInterface> directUsageInterfaceList = root.getInterfaces().findAll {UmlInterface umlInterface -> umlInterface.extendedInterfaces.contains(this)}
		List<UmlClass> directUsageClassList = root.getClasses().findAll {UmlClass umlClass -> umlClass.implementedInterfaces.contains(this)}
		result.addAll(directUsageInterfaceList)
		result.addAll(directUsageClassList)
		
		directUsageInterfaceList.each{UmlInterface umlInterface ->
			result.addAll(umlInterface.getRealizationsAndSubtypesRecursive());
		}
			
		result.sort();

		return result;
	}
}
