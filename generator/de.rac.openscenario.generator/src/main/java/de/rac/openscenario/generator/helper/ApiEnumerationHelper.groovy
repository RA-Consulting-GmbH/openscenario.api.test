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
import de.rac.openscenario.uml.framework.UmlEnumeration
import de.rac.openscenario.uml.framework.UmlEnumerationLiteral

public class ApiEnumerationHelper {

	


	public  String makeClassJavaDoc(UmlEnumeration umlEnumeration,  version, indent="") {
		def lines = [];
		lines.add("<p>");
		lines.add("From OpenSCENARIO class model specification:")
		lines.addAll(CppDocHelper.formatString(umlEnumeration.annotation));
		lines.add("")
		lines.add("Values from OpenSCENARIO class model specification:")
		lines.add("<ul>")
		umlEnumeration.enumerationValues.each{ UmlEnumerationLiteral property ->
			lines.add("<li>" +property.annotation);
		}
		lines.add("</ul>")		
		return CppDocHelper.makeGeneratedClassComment(lines, version, indent)
	}
  
    public  List getEnumElementsCpp(UmlEnumeration umlEnumeration) {
		def result =  umlEnumeration.enumerationValues.collect{property-> property.literal.toUpperNameFromMemberName() + ","};
        return result;
    }
	
}
