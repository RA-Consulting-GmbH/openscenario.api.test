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
 */package de.rac.openscenario.generator.helper

import de.rac.openscenario.generator.cpp.CppDocHelper
import de.rac.openscenario.uml.framework.UmlClass
import de.rac.openscenario.uml.framework.UmlProperty
import de.rac.openscenario.uml.framework.UmlType

public class ImplClassHelper {

  
    public makeGetterCppDoc(UmlClass umlClass, property,  indent= "")
    {
        def lines = [];
        lines.add("From OpenSCENARIO class model specification:")
        lines.addAll(CppDocHelper.formatString(property.annotation));
        lines.addAll("");
        lines.addAll("@return value of model property ${property.name.toMemberName()}");
        return CppDocHelper.makeComment(lines, indent)
    }
  
    public makeSetterListJavaDoc(UmlClass umlClass, property)
    {
        def lines = [];
        lines.add("Sets the value of model property ${property.name.toMemberName()}")
        lines.addAll("@param ${property.name.toMemberName()}${property.isTransient()?"":"Writers"} from OpenSCENARIO class model specification: "+ CppDocHelper.formatString(property.annotation));
        lines.addAll("");
        return CppDocHelper.makeComment(lines, "\t")
    }
  
    public makeSetterCppDoc(UmlClass umlClass, property,  indent)
    {
        def lines = [];
        lines.add("Sets the value of model property ${property.name.toMemberName()}")
        lines.addAll("@param ${property.name.toMemberName()} from OpenSCENARIO class model specification: "+ CppDocHelper.formatString(property.annotation));
        lines.addAll("");
        return CppDocHelper.makeComment(lines, indent)
    }
	
	
	public String makeClassJavaDoc(UmlClass umlClass,  version, indent = "")
	{
		def lines = [];
		lines.add("<p>");
		lines.add("Value class that implements I${umlClass.name.toClassName()}. With setter methods to fill the properties.")
		lines.add("<ul>")
		lines.add("<li> getter methods for properties (implemented methods of I${umlClass.name.toClassName()})")
		lines.add("<li> setter methods for properties")
		lines.add("<li> getChildren method to collect all children")
		lines.add("<li> clone function to make a deep copy")
		lines.add("<li> overrides from BaseImpl")
		lines.add("</ul>")
		return CppDocHelper.makeGeneratedClassComment(lines, version, indent)
		
	}
	

    public java.util.HashSet getTypeImportCpp(UmlClass umlClass, packageName)
    {
        List properties = umlClass.umlProperties;
        def result =  properties.collect(){UmlProperty property -> return property.type.isPrimitiveType()?null:packageName + "." + property.type.toCppName() + ";\n"}
        Set<String> resultSet= new HashSet<String>(result.findAll(){item -> item != null});
        return resultSet;
        
    }
	
	public boolean hasStringTypedValue(UmlType type) {
		return  (type.name == "ParameterDeclaration"
				|| type.name == "ParameterAssignment"
				|| type.name == "ValueConstraint"
				|| type.name == "VariableDeclaration"
				|| type.name == "VariableSetAction"
				)
		
	}
	
}
