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
package de.rac.openscenario.generator.helper

import de.rac.openscenario.generator.java.JavaDocHelper

public class ApiClassWriterFactoryImplHelper {


	public  String makeClassJavaDoc( version, index = "") {
		def lines = [];
		lines.add("An interface with a factory method for each OpenSCENARIO class")
		return JavaDocHelper.makeGeneratedClassComment(lines, version, index)
	}

	
}
