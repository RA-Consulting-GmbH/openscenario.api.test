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

public class UmlEnumeration extends UmlType {
	public List<UmlEnumerationLiteral> enumerationValues = [];
	public UmlEnumeration(String name)
	{
		super(name);
		
	}
	public void setRoot(UmlModel root)
	{
		super.setRoot(root);
		enumerationValues.each { it.setRoot(root)};
		enumerationValues.each { it.parent = this};
		
	}
	
	private  UmlEnumerationLiteral getEnumerationLiteralByLiteralValue(String literal)
	{
		return enumerationValues.find { UmlEnumerationLiteral umlEnumerationLiteral ->umlEnumerationLiteral.literal == literal  }
	}
}
