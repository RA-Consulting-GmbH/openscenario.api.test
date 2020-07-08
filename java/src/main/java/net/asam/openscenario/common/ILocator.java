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
 
package net.asam.openscenario.common;
/**
 * A locator for objects in a text file.
 * @author Andreas Hege - RA Consulting
 *
 */
public interface ILocator {
	
	/**
	 * Locates the start of an object in a text file
	 * @return the start marker
	 */
	public Textmarker getStartMarker();
	
	/**
	 * Locates the end of an object in a text file
	 * @return the end marker
	 */
	public Textmarker getEndMarker();
	
	/**
	 * Locates the start of an property that belongs to an object in a text file
	 * @param propertyKey the property (attribute) in xml
	 * @return the start marker
	 */
	public Textmarker getStartMarkerOfProperty(String propertyKey);
	
	/**
	 * Locates the end of an property that belongs to an object in a text file
	 * @param propertyKey the property (attribute) in xml
	 * @return the end marker
	 */
	public Textmarker getEndMarkerOfProperty(String propertyKey);
}
