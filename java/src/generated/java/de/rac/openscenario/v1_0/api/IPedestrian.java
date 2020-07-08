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
 * Definition of a pedestrian type in a scenario or in a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IPedestrian extends IOpenScenarioFlexElement,ICatalogElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of the model of the pedestrian.
	 * 
	 * @return value of model property model
	*/
	public String getModel();

	/**
	 * From OpenSCENARIO class model specification:
	 * The mass of a pedestrian in kg.
	 * 
	 * @return value of model property mass
	*/
	public Double getMass();

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the pedestrian type. Required when used in catalog.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Category type of pedestrian.
	 * 
	 * @return value of model property pedestrianCategory
	*/
	public PedestrianCategory getPedestrianCategory();

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/
	public List<IParameterDeclaration> getParameterDeclarations();

	/**
	 * From OpenSCENARIO class model specification:
	 * Bounding box of the pedestrian.
	 * 
	 * @return value of model property boundingBox
	*/
	public IBoundingBox getBoundingBox();

	/**
	 * From OpenSCENARIO class model specification:
	 * Properties (values/files) of the pedestrian.
	 * 
	 * @return value of model property properties
	*/
	public IProperties getProperties();
}
