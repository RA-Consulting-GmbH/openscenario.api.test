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

import java.util.List;
import groovy.transform.Memoized;

public abstract class UmlElement {

	public String annotation;
	public List<Stereotype> appliedStereotypes = []; 
	public UmlModel root;
	public UmlElement parent;

	public UmlElement()
	{
	}

	@Memoized
	public boolean hasStereotype(String name) {
		return getStereotypeByName(name) != null;
	}
	
	@Memoized
	public Stereotype getStereotypeByName(String name) {
		return appliedStereotypes.find(){s-> s.name == name};
	}

	@Memoized
	public  String getTagValue(String name, String tagName) {
		Stereotype stereotype = appliedStereotypes.find(){s-> s.name == name}
		return stereotype!= null? stereotype.tags[tagName]:null;
	}
	
	public void setRoot(UmlModel root)
	{
		this.root = root;
	}

	public List<Stereotype> getAppliedStereotypes() {
		return appliedStereotypes;
	}
}
