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
 
package de.rac.openscenario.parameter;

/**
 * Container for parameter values (name, type, value)
 * @author Andreas Hege - RA Consulting
 *
 */
public class ParameterValue {

	
	private String name;
	private Class<?> type;
	private String value;
	
	/**
	 * Constructor
	 * @param name the name of the parameter
	 * @param type the type of a parameter as class
	 * @param value the value of a parameter
	 */
	public ParameterValue(String name, Class<?> type, String value) {
		super();
		this.name = name;
		this.type = type;
		this.value = value;
	}
	
	/**
	 * The name of the parameter
	 * @return the name
	 */
	public String getName() {
		return name;
	}
	
	/**
	 * The type of a parameter as class
	 * @return the type
	 */
	public Class<?> getType() {
		return type;
	}
	/**
	 * The value of a parameter
	 * @return the value
	 */
	public String getValue() {
		return value;
	}
	
	/**
	 * Sets the value of a parameter
	 * @param value the value of a parameter
	 */
	public void setValue(String value) {
		this.value = value;
	}
	
}
