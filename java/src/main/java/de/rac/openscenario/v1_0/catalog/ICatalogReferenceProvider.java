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
 
package de.rac.openscenario.v1_0.catalog;

import java.util.List;

import de.rac.openscenario.v1_0.api.ICatalogReference;

/**
 * Interface for requesting all catalog references from a scenario.
 * It is used to reslove all references once the scenario file has been loaded.
 * 
 * @author Andreas Hege - RA Consulting
 *
 */
public interface ICatalogReferenceProvider {

	/**
	 * Provides a list with all catalog references from a scenario a file.
	 * @return the list with the catalog references
	 */
	public List<ICatalogReference> getCatalogReferences();
}
