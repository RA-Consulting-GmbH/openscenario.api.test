package de.rac.openscenario.tools
import groovy.json.JsonOutput


class MakeJson {
	
	public static void main(String[] args)
	{
		Map root = [:];
		new File('c:/temp/Default1_1.txt').eachLine { line ->
			def fields = line.split(/\t/);
			Map classMap = root[fields[0]]
			Map propertyMap = [:];
			if (!classMap)
			{
				classMap = [:];
				root[fields[0]] = classMap;
			}
			
			classMap[fields[1]] = propertyMap;
			
			if (fields[2] =="None")
			{
				propertyMap["default"] = "None";
				 
			}else
			{
				propertyMap["default"] = fields[2];
			}
			
			
		}
		def json = JsonOutput.toJson(root);
		new File("D:/OSCApi/openscenario.api.test/generator/de.rac.openscenario.generator/src/main/resources/input/DefaultValues_1.1.0.json").write(JsonOutput.prettyPrint(json))
		
		
	}
}
