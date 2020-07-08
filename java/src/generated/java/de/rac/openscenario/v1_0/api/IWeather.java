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
 * Defines the weather conditions in terms of light, fog, precipitation and cloud states.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IWeather extends IOpenScenarioFlexElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of the cloud state, i.e. cloud state and sky visualization settings.
	 * 
	 * @return value of model property cloudState
	*/
	public CloudState getCloudState();

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of the sun, i.e. position and intensity.
	 * 
	 * @return value of model property sun
	*/
	public ISun getSun();

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of fog, i.e. visual range and bounding box.
	 * 
	 * @return value of model property fog
	*/
	public IFog getFog();

	/**
	 * From OpenSCENARIO class model specification:
	 * Definition of precipitation, i.e. type and intensity.
	 * 
	 * @return value of model property precipitation
	*/
	public IPrecipitation getPrecipitation();
}
