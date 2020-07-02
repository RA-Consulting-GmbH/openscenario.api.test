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


/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * Used to either issue a command to the simulation environment or start an external script. Allows the user to activate
 * custom actions in their simulation tool.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IUserDefinedAction extends IOpenScenarioModelElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * The available commands are subject of a contract between simulation environment provider and scenario author.
	 * 
	 * @return value of model property customCommandAction
	*/
	public ICustomCommandAction getCustomCommandAction();
}
