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
import de.rac.openscenario.uml.framework.UmlClass
import de.rac.openscenario.uml.framework.UmlProperty

public class ApiClassInterfaceHelper {

	public makeGetterJavaDoc(UmlClass umlClass, UmlProperty property)
	{
		def lines = [];
		lines.add("From OpenSCENARIO class model specification:")
		lines.addAll(JavaDocHelper.formatString(property.annotation));
		lines.addAll("");
		lines.addAll("@return value of model property ${property.name.toMemberName()}");
		return JavaDocHelper.makeComment(lines, "\t")
	}
	
    public makeGetterCppDoc(UmlClass umlClass, property, indent = "")
    {
        def lines = [];
        lines.add("From OpenSCENARIO class model specification:")
        lines.addAll(JavaDocHelper.formatString(property.annotation));
        lines.addAll("");
        lines.addAll("@return value of model property ${property.name.toMemberName()}");
        return JavaDocHelper.makeComment(lines, indent)
    }
	
	public String makeClassJavaDoc(UmlClass umlClass,  version, indent = "")
	{
		def lines = [];
		lines.add("<p>");
		lines.add("From OpenSCENARIO class model specification:")
		lines.addAll(JavaDocHelper.formatString(umlClass.annotation));
		return JavaDocHelper.makeGeneratedClassComment(lines, version, indent)
		
	}
	
	public String getExtendsExpression(UmlClass umlClass)
	{
		List interfaceRealizationList = umlClass.implementedInterfaces.collect{interfaceRealization-> return "I" +interfaceRealization.name.toClassName()};
		String result = "extends IOpenScenarioModelElement";
		
		if (interfaceRealizationList && !interfaceRealizationList.isEmpty()){
			return "extends " + String.join(",", interfaceRealizationList);
		}else
		{
			return result;
		}
	}

    public String getExtendsExpressionCpp(UmlClass umlClass)
    {
        List interfaceRealizationList = umlClass.implementedInterfaces.collect{interfaceRealization-> return "I" +interfaceRealization.name.toClassName()};
        String result = ": public virtual IOpenScenarioModelElement";
        if (interfaceRealizationList && !interfaceRealizationList.isEmpty()){
            return result +  ", public " + String.join(", public ", interfaceRealizationList);
        }else
        {
            return result;
        }
    }

  	public String getListImport(UmlClass umlClass)
	{
		List properties = umlClass.umlProperties;
		if (properties.find(){ UmlProperty property -> property.upper == -1})
		{
				return "import java.lang.Iterable;"
		}
		return "";
	}
  	
}
