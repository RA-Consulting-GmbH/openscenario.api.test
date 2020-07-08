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

/**
 * This is a automatic generated file according to the OpenSCENARIO specification version 1.0
 * <p>
 * From OpenSCENARIO class model specification:
 * The states and the transitions that can be used to define a StoryboardElementStateCondition.
 * 
 * Values from OpenSCENARIO class model specification:
 * <ul>
 * <li>Transition between the standby and running state. The moment the referenced StoryboardElement instance starts its 
 * execution.
 * <li>Transition between the running state and the standby state. The moment the referenced StoryboardElement terminates 
 * its execution by completing its goal.
 * <li>Transition between the running or standby states to the complete state. Occurs when the execution of the referenced 
 * StoryboardElement instance is stopped via a stop trigger or overriding.
 * <li>Transition marking the moment an element is asked to move to the running state but is instead skipped so it remains 
 * in the standby state (Only for Event instances).
 * <li>State from which the Storyboard element cannot return to the running state without external interference (forced by 
 * a parent element).
 * <li>State in which the storyboard element is executing its actions.
 * <li>State in which the storyboard element could move to the running state given a start trigger.
 * </ul>
 * 
 * @author RA Consulting OpenSCENARIO generation facility
*/
public enum StoryboardElementState {	
	START_TRANSITION("startTransition"),
	END_TRANSITION("endTransition"),
	STOP_TRANSITION("stopTransition"),
	SKIP_TRANSITION("skipTransition"),
	COMPLETE_STATE("completeState"),
	RUNNING_STATE("runningState"),
	STANDBY_STATE("standbyState");
	
	private final String literal;
	
	/**
	 * The literal from this enumeration value.
	 * @return the literal as defined in OpenSCENARIO
	 */
	public String getLiteral()
	{
		return literal;
	}
	
	/**
	 * Constructor using the literal
	 * @param the literal as defined in OpenSCENARIO
	 */
	StoryboardElementState(String literal)
	{
		this.literal = literal;
	}
	/**
	 * The enumeration value from the literal
	 * @param literal as defined in OpenSCENARIO
	 * @return the enumeration value
	 */
	public static StoryboardElementState getFromLiteral(String literal)
	{
		if(literal.equals("startTransition"))
		{
			return START_TRANSITION;
		} else 
		if(literal.equals("endTransition"))
		{
			return END_TRANSITION;
		} else 
		if(literal.equals("stopTransition"))
		{
			return STOP_TRANSITION;
		} else 
		if(literal.equals("skipTransition"))
		{
			return SKIP_TRANSITION;
		} else 
		if(literal.equals("completeState"))
		{
			return COMPLETE_STATE;
		} else 
		if(literal.equals("runningState"))
		{
			return RUNNING_STATE;
		} else 
		if(literal.equals("standbyState"))
		{
			return STANDBY_STATE;
		} else 
		{
			return null;
		}
	}

}

