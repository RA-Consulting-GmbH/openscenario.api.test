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

public class ApiClassWriterInterfaceHelper {

	public makeAttributeGetterJavaDoc(element, property)
	{
		def lines = [];
		lines.add("From OpenSCENARIO class model specification:")
		lines.addAll(JavaDocHelper.formatString(property.annotation));
		lines.addAll("");
		lines.addAll("@return value of model property ${property.name.toMemberName()}");
		return JavaDocHelper.makeComment(lines, "\t")
	}
  
    public makeAttributeSetterJavaDoc(element, property)
    {
        def lines = [];
        lines.add("From OpenSCENARIO class model specification:")
        lines.addAll(JavaDocHelper.formatString(property.annotation));
        lines.addAll("");
        lines.addAll("@param ${property.name.toMemberName()} value of model property ${property.name.toMemberName()}");
        return JavaDocHelper.makeComment(lines, "\t")
    }
    
    public makeAttributeSetterParameterJavaDoc(element, property)
    {
        def lines = [];
        lines.add("Set a parameter for the attribute  ${property.name.toMemberName()}")
        lines.addAll("");
        lines.addAll('@param parameterName the name of the parameter (without $)');
        return JavaDocHelper.makeComment(lines, "\t")
    }

    public makeAttributeSetterParameterCppDoc(element, property, indent = "")
    {
        def lines = [];
        lines.add("Set a parameter for the attribute  ${property.name.toMemberName()}")
        lines.addAll("");
        lines.addAll('@param parameterName the name of the parameter (without $)');
        return JavaDocHelper.makeComment(lines, indent)
    }

    public makeAttributeGetterParameterJavaDoc(element, property)
    {
        def lines = [];
        lines.add("Get the parameter for the attribute  ${property.name.toMemberName()}")
        lines.addAll("");
        lines.addAll('@return the name of the parameter (without $). Null if not parameter set or if attribute is empty.');
        return JavaDocHelper.makeComment(lines, "\t")
    }

    public makeAttributeGetterParameterCppDoc(element, property, indent = "")
    {
        def lines = [];
        lines.add("Get the parameter for the attribute  ${property.name.toMemberName()}")
        lines.addAll("");
        lines.addAll('@return the name of the parameter (without $). Null if not parameter set or if attribute is empty.');
        return JavaDocHelper.makeComment(lines, indent)
    }

    public makeIsParameterizedJavaDoc(element, property)
    {
        def lines = [];
        lines.add("Retrieves whether the attribute ${property.name.toMemberName()} is parametrized.")
        lines.addAll("");
        lines.addAll('@return true if ${property.name.toMemberName()} is paramterized.');
        return JavaDocHelper.makeComment(lines, "\t")
    }

    public makeIsParameterizedCppDoc(element, property, indent = "")
    {
        def lines = [];
        lines.add("Retrieves whether the attribute ${property.name.toMemberName()} is parametrized.")
        lines.addAll("");
        lines.addAll('@return true if ${property.name.toMemberName()} is paramterized.');
        return JavaDocHelper.makeComment(lines, indent)
    }

    public makeChildWriterGetterJavaDoc(element, property)
    {
        def lines = [];
        lines.add("From OpenSCENARIO class model specification:")
        lines.addAll(JavaDocHelper.formatString(property.annotation));
        lines.addAll("");
        lines.addAll("@return a writer for model property ${property.name.toMemberName()}");
        return JavaDocHelper.makeComment(lines, "\t")
    }

    public makeChildWriterGetterCppDoc(element, property, indent= "")
    {
        def lines = [];
        lines.add("From OpenSCENARIO class model specification:")
        lines.addAll(JavaDocHelper.formatString(property.annotation));
        lines.addAll("");
        lines.addAll("@return a writer for model property ${property.name.toMemberName()}");
        return JavaDocHelper.makeComment(lines, indent)
    }
    
    public makeChildWriterSetterJavaDoc(element, property)
    {
        def lines = [];
        lines.add("From OpenSCENARIO class model specification:")
        lines.addAll(JavaDocHelper.formatString(property.annotation));
        lines.addAll("");
        lines.addAll("@param ${property.name.toMemberName()} writer for the model property ${property.name.toMemberName()}");
        return JavaDocHelper.makeComment(lines, "\t")
    }
    
    public makeChildWriterSetterCppDoc(element, property, indent= "")
    {
        def lines = [];
        lines.add("From OpenSCENARIO class model specification:")
        lines.addAll(JavaDocHelper.formatString(property.annotation));
        lines.addAll("");
        lines.addAll("@param ${property.name.toMemberName()} writer for the model property ${property.name.toMemberName()}");
        return JavaDocHelper.makeComment(lines, indent)
    }
    
    public makeChildListWriterGetterJavaDoc(element, property)
    {
        def lines = [];
        lines.add("From OpenSCENARIO class model specification:")
        lines.addAll(JavaDocHelper.formatString(property.annotation));
        lines.addAll("");
        lines.addAll("@return a list of writers for model property ${property.name.toMemberName()}");
        return JavaDocHelper.makeComment(lines, "\t")
    }
    
    public makeChildListWriterGetterCppDoc(element, property, indent = "")
    {
        def lines = [];
        lines.add("From OpenSCENARIO class model specification:")
        lines.addAll(JavaDocHelper.formatString(property.annotation));
        lines.addAll("");
        lines.addAll("@return a list of writers for model property ${property.name.toMemberName()}");
        return JavaDocHelper.makeComment(lines, indent)
    }
    
    public makeChildListWriterSetterJavaDoc(element, property)
    {
        def lines = [];
        lines.add("From OpenSCENARIO class model specification:")
        lines.addAll(JavaDocHelper.formatString(property.annotation));
        lines.addAll("");
        lines.addAll("@param ${property.name.toMemberName()} list of writers for the model property ${property.name.toMemberName()}");
        return JavaDocHelper.makeComment(lines, "\t")
    }
	
    public makeGetterCppDoc(element, property, indent = "")
    {
        def lines = [];
        lines.add("From OpenSCENARIO class model specification:")
        lines.addAll(JavaDocHelper.formatString(property.annotation));
        lines.addAll("");
        lines.addAll("@return value of model property ${property.name.toMemberName()}");
        return JavaDocHelper.makeComment(lines, indent)
    }
	
	public String makeClassJavaDoc(element,  version, indent = "")
	{
		def lines = [];
		lines.add("<p>");
        lines.add("A Writer for the type '${element.name.toClassName()}' ");
        lines.add("From OpenSCENARIO class model specification:")
		lines.addAll(JavaDocHelper.formatString(element.annotation));
		return JavaDocHelper.makeGeneratedClassComment(lines, version, indent)
		
	}
	
	public String getExtendsExpression(element)
	{
		List interfaceRealizationList = element.implementedInterfaces.collect{interfaceRealization-> return "I" +interfaceRealization.name.toClassName() + "Writer"};
		interfaceRealizationList.add("I${element.name.toClassName()}");
        interfaceRealizationList.add("IOpenScenarioElementWriter");
    
		if (interfaceRealizationList && !interfaceRealizationList.isEmpty()){
			return "extends " + String.join(",", interfaceRealizationList);
		}
	}

    public String getExtendsExpressionCpp(element)
    {
        List interfaceRealizationList = element.implementedInterfaces.collect{interfaceRealization-> return "I" +interfaceRealization.name.toClassName() + "Writer"};
        String result = ": public IOpenScenarioElementWriter, public I${element.name.toClassName()}";
        if (interfaceRealizationList && !interfaceRealizationList.isEmpty()){
            return result +  ", public " + String.join(", public ", interfaceRealizationList);
        }else
        {
            return result;
        }
    }

  	public String getListImport(element)
	{
		List properties = element.umlProperties;
		if (properties.find(){ property -> property.upper == -1})
		{
				return "import java.util.List;"
		}
		return "";
	}
  	
}
