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
 * Phase of a TrafficSignalController. A TrafficSignalController has sequential phases. Each phase has multiple
 * TrafficSignalStates.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IPhase extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of the phase.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * Duration of the phase. Unit: s; Range: [0..inf[.
	 * 
	 * @return value of model property duration
	*/
	public Double getDuration();

	/**
	 * From OpenSCENARIO class model specification:
	 * Each phase has multiple TrafficSignalStates. One for each TrafficSignal that is controlled. E.g. phase1
	 * (trafficSignal1:true;false;false, trafficSignal2:false;false;true).
	 * 
	 * @return value of model property trafficSignalStates
	*/
	public List<ITrafficSignalState> getTrafficSignalStates();
}
