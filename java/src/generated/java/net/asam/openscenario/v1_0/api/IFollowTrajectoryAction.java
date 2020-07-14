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


import net.asam.openscenario.api.IOpenScenarioModelElement;
/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Controls an entity to follow a trajectory using vertices, timings (optionally) and a corresponding interpolation
 * strategy. The trajectory can be instantiated from a catalog type, or defined within this declaration.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IFollowTrajectoryAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Trajectory definition.
	 * 
	 * @return value of model property trajectory
	*/
	public ITrajectory getTrajectory();

	/**
	 * From OpenSCENARIO class model specification:
	 * A reference to the trajectory type in a catalog.
	 * 
	 * @return value of model property catalogReference
	*/
	public ICatalogReference getCatalogReference();

	/**
	 * From OpenSCENARIO class model specification:
	 * Defines if time information provided within the trajectory should be considered. If so, it may be used as either
	 * absolute or relative time along the trajectory in order to define longitudinal velocity of the actor. Moreover, a time
	 * offset or time scaling may be applied.
	 * 
	 * @return value of model property timeReference
	*/
	public ITimeReference getTimeReference();

	/**
	 * From OpenSCENARIO class model specification:
	 * The mode how to follow the given trajectory.
	 * 
	 * @return value of model property trajectoryFollowingMode
	*/
	public ITrajectoryFollowingMode getTrajectoryFollowingMode();
}
