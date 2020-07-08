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
 * Grouping element connecting a set of actors to a set maneuvers. Multiple maneuver groups can run independently in
 * parallel. Maneuvers can be defined or instantiated from a maneuver type in a catalog.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IManeuverGroup extends IOpenScenarioFlexElement,IStoryboardElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Number of allowed executions of the maneuver group. Default value is 1. Range: [1..inf[.
	 * 
	 * @return value of model property maximumExecutionCount
	*/
	public Long getMaximumExecutionCount();

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the maneuver group.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Actors of the maneuver group.
	 * 
	 * @return value of model property actors
	*/
	public IActors getActors();

	/**
	 * From OpenSCENARIO class model specification:
	 * Each element of this list of must reference a maneuver type in a catalog.
	 * 
	 * @return value of model property catalogReferences
	*/
	public List<ICatalogReference> getCatalogReferences();

	/**
	 * From OpenSCENARIO class model specification:
	 * Maneuver type definitions.
	 * 
	 * @return value of model property maneuvers
	*/
	public List<IManeuver> getManeuvers();
}
