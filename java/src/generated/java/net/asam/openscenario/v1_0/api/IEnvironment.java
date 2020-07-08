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
package net.asam.openscenario.v1_0.api;
import java.util.List;

import net.asam.openscenario.api.IOpenScenarioFlexElement;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Defines the environment conditions of a scenario, e.g. time of day, weather and road condition.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IEnvironment extends IOpenScenarioFlexElement,ICatalogElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the environment. If used in catalog name is required.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of additional parameters.
	 * 
	 * @return value of model property parameterDeclarations
	*/
	public List<IParameterDeclaration> getParameterDeclarations();

	/**
	 * From OpenSCENARIO class model specification:
	 * Time of the day during the simulation.
	 * 
	 * @return value of model property timeOfDay
	*/
	public ITimeOfDay getTimeOfDay();

	/**
	 * From OpenSCENARIO class model specification:
	 * Weather conditions during the simulation.
	 * 
	 * @return value of model property weather
	*/
	public IWeather getWeather();

	/**
	 * From OpenSCENARIO class model specification:
	 * Road conditions during the simulation.
	 * 
	 * @return value of model property roadCondition
	*/
	public IRoadCondition getRoadCondition();
}
