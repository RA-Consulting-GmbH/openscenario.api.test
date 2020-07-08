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
 * An action serves to create or modify all dynamic elements of a scenario.
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public interface IAction extends IOpenScenarioFlexElement,IStoryboardElement{

	/**
	 * From OpenSCENARIO class model specification:
	 * Name of this action.
	 * 
	 * @return value of model property name
	*/
	public String getName();

	/**
	 * From OpenSCENARIO class model specification:
	 * The GlobalAction to be executed when the enclosing Action is startedis started.
	 * 
	 * @return value of model property globalAction
	*/
	public IGlobalAction getGlobalAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * The UserDefinedAction to be executed when the enclosing Action is started.
	 * 
	 * @return value of model property userDefinedAction
	*/
	public IUserDefinedAction getUserDefinedAction();

	/**
	 * From OpenSCENARIO class model specification:
	 * The PrivateAction to be executed when the enclosing Action is started.
	 * 
	 * @return value of model property privateAction
	*/
	public IPrivateAction getPrivateAction();
}
