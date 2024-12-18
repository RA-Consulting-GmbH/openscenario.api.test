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

import de.rac.openscenario.generator.cpp.CppDocHelper

public class CardinalityCheckerRuleHelper {


	public makeClassJavaDoc(element, version, indent = "")
	{
		def lines = [];
		lines.add("A cardinality checker rule class for the type I${element.name.toClassName()} according to OpenSCENARIO standard")
        lines.add("all properties and children are checked if they are not optinal")
        return CppDocHelper.makeGeneratedClassComment(lines, version, indent)
	}

	
}
