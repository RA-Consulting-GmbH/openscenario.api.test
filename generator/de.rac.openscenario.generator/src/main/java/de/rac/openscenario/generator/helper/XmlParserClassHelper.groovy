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

public class XmlParserClassHelper {

	
	
	public String makeClassJavaDoc(UmlClass umlClass,  version, indent = "")
	{
		def lines = [];
		lines.add(indent + "Filling a ${umlClass.name.toClassName()}Impl instance from an xml tree.")
		return JavaDocHelper.makeGeneratedClassComment(lines, version, indent)
		
	}
	
	public HashSet<String> getInterfaceTypeImport(UmlClass umlClass, packageName)
	{
		List properties = umlClass.umlProperties;
		def resultProxies = properties.findAll(){UmlProperty property ->!property.isTransient()&&(property.isProxy() || property.isList()|| property.type.isEnumeration())}
		def result =  resultProxies.collect(){UmlProperty  property -> return property.isProxy()||property.isList()?packageName + ".I" + property.type.name.toClassName() + ";\n":packageName + "." + property.type.name.toClassName() + ";\n"}
		Set<String> resultSet= new HashSet<String>(result.findAll(){item -> item != null});
		return resultSet;
		
	}
	
	public HashSet<String> getImplTypeImport(UmlClass umlClass, implPackageName)
	{
		def List properties = umlClass.getXmlElementProperties();
		def result =  properties.collect(){UmlProperty  property -> return implPackageName + "." + property.type.name.toClassName() + "Impl;\n"}
		Set<String> resultSet= new HashSet<String>(result.findAll(){item -> item != null});
		resultSet.add(implPackageName + "." + umlClass.name.toClassName() + "Impl;\n")
		return resultSet;
		
	}
	
	public List splitStringList (listOfNames)
	{
		def result =  listOfNames.collect{name-> "OscConstants.ELEMENT__" + name.toMemberName().toUpperNameFromMemberName()+ ","};
		String lastResult = result[result.size()-1];
		result[result.size()-1] = lastResult.substring(0, lastResult.length() -1);
		return result;
		
	}
	
	public List splitEqualTo (listOfNames, equalName)
	{
		def result =  listOfNames.collect{name-> equalName + ".equals(OscConstants.ELEMENT__" + name.toMemberName().toUpperNameFromMemberName() +") || "};
		String lastResult = result[result.size()-1];
		result[result.size()-1] = lastResult.substring(0, lastResult.length() -3) + ";";
		return result;
		
	}
  
    public List splitEqualToCpp (listOfNames, equalName)
    {
        def result =  listOfNames.collect{name-> equalName + " == OSC_CONSTANTS::ELEMENT__" + name.toMemberName().toUpperNameFromMemberName() +" || "};
        String lastResult = result[result.size()-1];
        result[result.size()-1] = lastResult.substring(0, lastResult.length() -3) + ";";
        return result;
    }
	
    public List splitStringListCpp (listOfNames)
    {
        def result =  listOfNames.collect{name-> "OSC_CONSTANTS::ELEMENT__" + name.toMemberName().toUpperNameFromMemberName()+ ","};
        String lastResult = result[result.size()-1];
        result[result.size()-1] = lastResult.substring(0, lastResult.length() -1);
        return result;
        
    }
}
