package de.rac.openscenario.tools

import de.rac.generator.main.util.DefaultValueHelper
import de.rac.openscenario.generator.cpp.GeneratorCpp.TypeHelperCpp
import de.rac.openscenario.uml.framework.UmlClass
import de.rac.openscenario.uml.framework.UmlModel
import de.rac.openscenario.uml.framework.UmlProperty
import groovy.json.JsonOutput
import groovy.json.JsonSlurper

class MakeDefaultJson {
	
	public static void main(String[] args) {
		
		
		
		
	
		
		TypeHelperCpp.init();
		def defaultValueHelper = new DefaultValueHelper([:]);
		
		def jsonSlurper = new JsonSlurper()
		ClassLoader  classLoader = MakeDefaultJson.getClassLoader();
		InputStream jsonStream = classLoader.getResourceAsStream("input/DefaultValues_1.1.0.json")
		
		def defaultValueMap = jsonSlurper.parse(jsonStream)
		defaultValueHelper = new DefaultValueHelper(defaultValueMap);
		
	    InputStream stream = classLoader.getResourceAsStream("input/OpenSCENARIO_Ea_1.1.0.xmi")
	    UmlModel umlModel = de.rac.openscenario.uml.ea.EaUmlLoader.loadModelFromStream(stream);
		umlModel.getClasses().each{UmlClass umlClass ->
			
			umlClass.getXmlAttributeProperties().each{ UmlProperty property ->
				
				defaultValueHelper.addType(umlClass.name.toClassName(), property.name.toMemberName(), property.type.name)
			}
		}
		
		def json = JsonOutput.toJson(defaultValueMap);
		new File("D:/OSCApi/openscenario.api.test/generator/de.rac.openscenario.generator/src/main/resources/input/DefaultValues_1.1.0.json").write(JsonOutput.prettyPrint(json))

		
	}
}
