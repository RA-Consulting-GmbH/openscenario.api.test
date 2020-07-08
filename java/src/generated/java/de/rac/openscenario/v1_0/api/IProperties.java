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
package de.rac.openscenario.v1_0.api;
import java.util.List;

import de.rac.openscenario.api.IOpenScenarioFlexElement;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Container for one or more properties. Properties encloses multiple property instances and/or multiple file references.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IProperties extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * A name/value pair. The semantic of the name/values are subject of a contract between the provider of a simulation
	 * environment and the author of a scenario.
	 * 
	 * @return value of model property properties
	*/
	public List<IProperty> getProperties();

	/**
	 * From OpenSCENARIO class model specification:
	 * A list of arbitrary files attached to an object that owns the properties. The semantic and the file formats are subject
	 * of a contract between the provider of a simulation environment and the author of a scenario.
	 * 
	 * @return value of model property files
	*/
	public List<IFile> getFiles();
}
