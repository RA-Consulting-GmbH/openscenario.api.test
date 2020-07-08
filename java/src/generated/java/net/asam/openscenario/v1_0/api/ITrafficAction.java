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


import net.asam.openscenario.api.IOpenScenarioFlexElement;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Actions defining macroscopic traffic flow and behavior.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITrafficAction extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines a source of traffic at a specific position.
	 * 
	 * @return value of model property trafficSourceAction
	*/
	public ITrafficSourceAction getTrafficSourceAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines a sink of traffic at a specific position.
	 * 
	 * @return value of model property trafficSinkAction
	*/
	public ITrafficSinkAction getTrafficSinkAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines swarm traffic around a given central entity.
	 * 
	 * @return value of model property trafficSwarmAction
	*/
	public ITrafficSwarmAction getTrafficSwarmAction();
}
