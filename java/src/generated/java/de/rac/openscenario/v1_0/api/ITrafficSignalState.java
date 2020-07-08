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


import de.rac.openscenario.api.IOpenScenarioFlexElement;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Possible state of traffic signal within a phase. One state per phase.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface ITrafficSignalState extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * ID of the referenced signal in a road network. The signal ID must be listed in TrafficSignal list of the RoadNetwork.
	 * 
	 * @return value of model property trafficSignalId
	*/
	public String getTrafficSignalId();

	/**
	 * From OpenSCENARIO class model specification:
	 * State of the signal. The available states are listed in the TrafficSignal list of the RoadNetwork.
	 * 
	 * @return value of model property state
	*/
	public String getState();
}
