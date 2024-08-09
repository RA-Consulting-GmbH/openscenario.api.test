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
package de.rac.openscenario.generator.cpp

import de.rac.generator.basic.CommonTemplateProcessor
import de.rac.generator.basic.Memoizer
import de.rac.generator.main.naming.MainNamingHelper
import de.rac.generator.main.util.DefaultValueHelper
import de.rac.openscenario.generator.GeneratorHelper
import de.rac.openscenario.generator.LicenseHelper
import de.rac.openscenario.generator.TemplateProcessor
import de.rac.openscenario.generator.helper.ApiClassInterfaceHelper
import de.rac.openscenario.generator.helper.ApiClassWriterFactoryImplHelper;
import de.rac.openscenario.generator.helper.ApiClassWriterFactoryInterfaceHelper;
import de.rac.openscenario.generator.helper.ApiClassWriterInterfaceHelper
import de.rac.openscenario.generator.helper.ApiEnumerationHelper
import de.rac.openscenario.generator.helper.ApiInterfaceHelper
import de.rac.openscenario.generator.helper.CardinalityCheckerHelper
import de.rac.openscenario.generator.helper.CardinalityCheckerRuleHelper
import de.rac.openscenario.generator.helper.CatalogHelperHelper
import de.rac.openscenario.generator.helper.ConstantClassHelper
import de.rac.openscenario.generator.helper.ImplClassHelper
import de.rac.openscenario.generator.helper.RangeCheckerHelper
import de.rac.openscenario.generator.helper.RangeCheckerRuleHelper
import de.rac.openscenario.generator.helper.ScenarioCheckerImplHelper
import de.rac.openscenario.generator.helper.ScenarioCheckerInterfaceHelper
import de.rac.openscenario.generator.helper.UnionCheckerRuleHelper
import de.rac.openscenario.generator.helper.XmlExporterClassHelper;
import de.rac.openscenario.generator.helper.XmlParserClassHelper
import de.rac.openscenario.uml.framework.Stereotype
import de.rac.openscenario.uml.framework.UmlClass
import de.rac.openscenario.uml.framework.UmlModel
import de.rac.openscenario.uml.framework.UmlProperty
import de.rac.openscenario.uml.framework.UmlType
import groovy.json.JsonSlurper
import groovy.text.Template

/**
 * @author ahege
 *
 */
public class GeneratorCpp {

	private static final String V1_0 = "v1_0"
	private static final String V1_1 = "v1_1"
	private static final String V1_2 = "v1_2"
	private static final String V1_3 = "v1_3"
	
	private static versionMap = [:];

	static {
		versionMap[V1_0] = [:];
		versionMap[V1_0]["modelFile"] = "input/OpenSCENARIO_Ea_1.0.0.xmi";
		versionMap[V1_0]["rangeCheckerRulesFile"] = "input/RangeCheckerRules_1.0.0.json";
		versionMap[V1_0]["fileSuffix"] = "V1_0";
		versionMap[V1_0]["oscVersion"] = "1.0";
		
		versionMap[V1_1] = [:];
		versionMap[V1_1]["modelFile"] = "input/OpenSCENARIO_Ea_1.1.0.xmi";
		versionMap[V1_1]["defaultValues"] = "input/DefaultValues_1.1.0.json";
		versionMap[V1_1]["rangeCheckerRulesFile"] = "input/RangeCheckerRules_1.1.0.json";
		versionMap[V1_1]["fileSuffix"] = "V1_1";
		versionMap[V1_1]["oscVersion"] = "1.1";
		
		versionMap[V1_2] = [:];
		versionMap[V1_2]["modelFile"] = "input/OpenSCENARIO_Ea_1.2.0.xmi";
		versionMap[V1_2]["defaultValues"] = "input/DefaultValues_1.2.0.json";
		versionMap[V1_2]["rangeCheckerRulesFile"] = "input/RangeCheckerRules_1.2.0.json";
		versionMap[V1_2]["fileSuffix"] = "V1_2";
		versionMap[V1_2]["oscVersion"] = "1.2";
		
		versionMap[V1_3] = [:];
		versionMap[V1_3]["modelFile"] = "input/OpenSCENARIO_Ea_1.3.0.xmi";
		versionMap[V1_3]["defaultValues"] = "input/DefaultValues_1.3.0.json";
		versionMap[V1_3]["rangeCheckerRulesFile"] = "input/RangeCheckerRules_1.3.0.json";
		versionMap[V1_3]["fileSuffix"] = "V1_3";
		versionMap[V1_3]["oscVersion"] = "1.3";

	}
	public static void main(String[] args) {


		// First argument is outputDir
		if (args.length != 1)
		{
			println ("Argument must be <outputDir>")
			return;

		}else
		{

		}
		TypeHelperCpp.init();
		def classLoader = GeneratorCpp.getClassLoader()
		versionMap.each { String key, Map versionProperties ->
			def outputDir = new File(new File(args[0]), key);



			InputStream stream = classLoader.getResourceAsStream(versionProperties["modelFile"])
			UmlModel umlModel = de.rac.openscenario.uml.ea.EaUmlLoader.loadModelFromStream(stream);
			
			
			def defaultValueHelper = new DefaultValueHelper([:]);
			if (versionProperties["defaultValues"])
			{
				def jsonSlurper = new JsonSlurper()
				InputStream jsonStream = classLoader.getResourceAsStream(versionProperties["defaultValues"])
				
				def defaultValueMap = jsonSlurper.parse(jsonStream)
				defaultValueHelper = new DefaultValueHelper(defaultValueMap);
			}

			def jsonSlurper = new JsonSlurper()
			def Map rangeCheckerRules = GeneratorHelper.getRangeCheckerRules(versionProperties["rangeCheckerRulesFile"]);


			def binding = [
				"JavaLicenseHelper": (LicenseHelper.class),
				"model": umlModel,
				"oscVersion" : versionProperties["oscVersion"],
				"versionNamespace" : key,
				"fileSuffix" : versionProperties["fileSuffix"],
				"defaultValueHelper" : defaultValueHelper,
			];


			def processor = CommonTemplateProcessor.getProcessor();
			def templateApplicationOrig = CommonTemplateProcessor.getTemplateApplication();
			def templateApplication = templateApplicationOrig.curry(binding);
			def TemplateProcessor templateProcessor = new TemplateProcessor(TemplateProcessor.CPP, key)
			// put the directory in the Closure

			processor  = processor.curry(outputDir);
			GeneratorHelper.removeSubDirectories(outputDir);
			// clean the complete Output directory
			//TemplateProcessor.clean(outputDirectory);

			/** Here goes the generator
			 *
			 */

			Template template = null;
			
			System.out.println("-- Class Interface for ${key}");
			binding["helper"] = new ApiClassInterfaceHelper();
			template = templateProcessor.getTemplate('ApiClassInterface');
			processor("api", "ApiClassInterfaces${versionProperties["fileSuffix"]}.h")
			{
				return templateApplication(template, null);
			}


			System.out.println("-- Enumerations headers for ${key}");
			binding["helper"] = new ApiEnumerationHelper();
			template = templateProcessor.getTemplate('ApiEnumerationHeader');
			processor("api", "Enumerations${versionProperties["fileSuffix"]}.h")
			{
				return templateApplication(template, null);
			}
			
			System.out.println("-- Enumerations sources for ${key}");
			binding["helper"] = new ApiEnumerationHelper();
			template = templateProcessor.getTemplate('ApiEnumerationSource');
			processor("api", "Enumerations${versionProperties["fileSuffix"]}.cpp")
			{
				return templateApplication(template, null);
			}
			
			
			System.out.println("-- Osc Interfaces for ${key}");
			binding["helper"] = new ApiInterfaceHelper();
			template = templateProcessor.getTemplate('ApiInterface');
			processor("api", "OscInterfaces${versionProperties["fileSuffix"]}.h")
			{
				return templateApplication(template, null);
			}

			System.out.println("-- Impl Classes for ${key}");
			binding["helper"] = new ImplClassHelper();
			template = templateProcessor.getTemplate('ImplClass');
			processor("impl", "ApiClassImpl${versionProperties["fileSuffix"]}.h"){
				return templateApplication(template, null);
			}
			
			template = templateProcessor.getTemplate('ImplClassSource');
			processor("impl", "ApiClassImpl${versionProperties["fileSuffix"]}.cpp"){
				return templateApplication(template, null);
			}

			//TODO Separate
			System.out.println("-- Xml Parser Classes for ${key}");
			binding["helper"] = new XmlParserClassHelper();
			def all = umlModel.getClasses();
			def sublist = all.collate( all.size().intdiv(4) +1 );
			template = templateProcessor.getTemplate('XmlParserClass');
			processor("xmlParser", "XmlParsers${versionProperties["fileSuffix"]}.h"){
				return templateApplication(template, umlModel.getClasses());
			}
			template = templateProcessor.getTemplate('XmlParserClassSource');
			processor("xmlParser", "XmlParsers1${versionProperties["fileSuffix"]}.cpp"){
				return templateApplication(template, sublist[0]);
			}
			
			processor("xmlParser", "XmlParsers2${versionProperties["fileSuffix"]}.cpp"){
				return templateApplication(template, sublist[1]);
			}
			
			processor("xmlParser", "XmlParsers3${versionProperties["fileSuffix"]}.cpp"){
				return templateApplication(template, sublist[2]);
			}
			
			processor("xmlParser", "XmlParsers4${versionProperties["fileSuffix"]}.cpp"){
				return templateApplication(template, sublist[3]);
			}

			// OK (template classes)
			System.out.println("-- Constant Class for ${key}");
			binding["helper"] = new ConstantClassHelper();
			template = templateProcessor.getTemplate('ConstantClass');
			processor("common", "OscConstants${versionProperties["fileSuffix"]}.h"){
				return templateApplication(template, getConstants(umlModel.getClasses()));
			}
			
			// TODO set virtual = 0;
			System.out.println("-- CheckerInterfaceTemplate for ${key}");
			binding["helper"] = new ScenarioCheckerInterfaceHelper();
			template = templateProcessor.getTemplate('ScenarioCheckerInterface');
			processor("checker", "IScenarioChecker${versionProperties["fileSuffix"]}.h"){
				return templateApplication(template, umlModel.getClasses());
			}

		
			System.out.println("-- CheckerImplTemplate for ${key}");
			binding["helper"] = new ScenarioCheckerImplHelper();
			template = templateProcessor.getTemplate('ScenarioCheckerImpl');
			processor("checker/impl", "ScenarioCheckerImpl${versionProperties["fileSuffix"]}.h"){
				return templateApplication(template, umlModel.getClasses());
			}
			
				
			template = templateProcessor.getTemplate('ScenarioCheckerImplSource');
			processor("checker/impl", "ScenarioCheckerImpl${versionProperties["fileSuffix"]}.cpp"){
				return templateApplication(template, umlModel.getClasses());
			}
			
			System.out.println("-- RangeCheckerHelper Header for ${key}");
			binding["helper"] = new RangeCheckerHelper();
			template = templateProcessor.getTemplate('RangeCheckerHelper');
			processor("checker/range", "RangeCheckerHelper${versionProperties["fileSuffix"]}.h"){
				return templateApplication(template,umlModel.getClasses().findAll(){element->rangeCheckerRules[element.name.toClassName()] != null});
			}
			
			System.out.println("-- RangeCheckerHelper Class for ${key}");
			binding["helper"] = new RangeCheckerHelper();
			template = templateProcessor.getTemplate('RangeCheckerHelperSource');
			processor("checker/range", "RangeCheckerHelper${versionProperties["fileSuffix"]}.cpp"){
				return templateApplication(template,umlModel.getClasses().findAll(){element->rangeCheckerRules[element.name.toClassName()] != null});
			}

			// OK
			System.out.println("-- Range Checker Rules Header for ${key}");
			binding["rangeCheckerRules"] = rangeCheckerRules;
			binding["helper"] = new RangeCheckerRuleHelper();
			template = templateProcessor.getTemplate('RangeCheckerRule');
			processor("checker/range", "RangeCheckerRules${versionProperties["fileSuffix"]}.h"){
				return templateApplication(template, null);
			}
			System.out.println("-- Range Checker Rules Source for ${key}");
			template = templateProcessor.getTemplate('RangeCheckerRuleSource');
			processor("checker/range", "RangeCheckerRules${versionProperties["fileSuffix"]}.cpp"){
				return templateApplication(template, null);
			}


			System.out.println("-- CatalogHelper Header for ${key}");
			binding["helper"] = new CatalogHelperHelper();
			template = templateProcessor.getTemplate('CatalogHelper');
			processor("catalog", "CatalogHelper${versionProperties["fileSuffix"]}.h"){
				return templateApplication(template, umlModel.getCatalogElementClasses());
			}
			
			System.out.println("-- CatalogHelper Source for ${key}");
			binding["helper"] = new CatalogHelperHelper();
			template = templateProcessor.getTemplate('CatalogHelperSource');
			processor("catalog", "CatalogHelper${versionProperties["fileSuffix"]}.cpp"){
				return templateApplication(template, umlModel.getCatalogElementClasses());
			}

			//TODO Separate
			System.out.println("-- Union Checker Rule Header for ${key}");
			binding["helper"] = new UnionCheckerRuleHelper()
			template = templateProcessor.getTemplate('UnionCheckerRule');
			processor("checker/model", "UnionCheckerRules${versionProperties["fileSuffix"]}.h"){
				return templateApplication(template, umlModel.getClasses().findAll(){ UmlClass umlClass ->umlClass.appliedStereotypes.find(){Stereotype s -> s.name == "union"}});
			}
			
			System.out.println("-- Union Checker Rule Source for ${key}");
			binding["helper"] = new UnionCheckerRuleHelper()
			template = templateProcessor.getTemplate('UnionCheckerRuleSource');
			processor("checker/model", "UnionCheckerRules${versionProperties["fileSuffix"]}.cpp"){
				return templateApplication(template, umlModel.getClasses().findAll(){ UmlClass umlClass ->umlClass.appliedStereotypes.find(){Stereotype s -> s.name == "union"}});
			}


			System.out.println("-- Cardinality Checker Rule Header for ${key}");
			binding["helper"] = new CardinalityCheckerRuleHelper()
			template = templateProcessor.getTemplate('CardinalityCheckerRule');
			processor("checker/model", "CardinalityCheckerRules${versionProperties["fileSuffix"]}.h"){
				return templateApplication(template, umlModel.getClasses().findAll(){  UmlClass umlClass-> !umlClass.umlProperties.findAll(){UmlProperty p -> !p.isOptional() && !p.isOptionalUnboundList()}.isEmpty()});
			}
			
			System.out.println("-- Cardinality Checker Rule Source for ${key}");
			binding["helper"] = new CardinalityCheckerRuleHelper()
			template = templateProcessor.getTemplate('CardinalityCheckerRuleSource');
			processor("checker/model", "CardinalityCheckerRules${versionProperties["fileSuffix"]}.cpp"){
				return templateApplication(template, umlModel.getClasses().findAll(){  UmlClass umlClass-> !umlClass.umlProperties.findAll(){UmlProperty p -> !p.isOptional() && !p.isOptionalUnboundList()}.isEmpty()});
			}

			if (key != "v1_0") //only implemented for OSC 1.1 and OSC 1.2
			{
				System.out.println("-- Cardinality Checker Helper Header for ${key}");
				binding["helper"] = new CardinalityCheckerHelper()
				template = templateProcessor.getTemplate('CardinalityCheckerHelper');
				processor("checker/model", "CardinalityCheckerHelper${versionProperties["fileSuffix"]}.h"){
					return templateApplication(template, umlModel.getClasses().findAll(){  UmlClass umlClass-> !umlClass.umlProperties.findAll(){UmlProperty p -> !p.isOptional() && !p.isOptionalUnboundList()}.isEmpty()});
				}
				
				System.out.println("-- Cardinality Checker Helper Source for ${key}");
				binding["helper"] = new CardinalityCheckerHelper()
				template = templateProcessor.getTemplate('CardinalityCheckerHelperSource');
				processor("checker/model", "CardinalityCheckerHelper${versionProperties["fileSuffix"]}.cpp"){
					return templateApplication(template, umlModel.getClasses().findAll(){  UmlClass umlClass-> !umlClass.umlProperties.findAll(){UmlProperty p -> !p.isOptional() && !p.isOptionalUnboundList()}.isEmpty()});
				}
			}
			System.out.println("-- OSC Writer Interface for ${key}");
			binding["helper"] = new ApiClassWriterInterfaceHelper();
			template = templateProcessor.getTemplate('ApiWriterInterface');
			processor("api/writer", "ApiWriterInterfaces${versionProperties["fileSuffix"]}.h")
			{
				return templateApplication(template, null);
			}


			System.out.println("-- Writer Interface for ${key}");
			binding["helper"] = new ApiClassWriterInterfaceHelper();
			template = templateProcessor.getTemplate('ApiClassWriterInterface');
			processor("api/writer", "ApiClassWriterInterfaces${versionProperties["fileSuffix"]}.h")
			{
				return templateApplication(template, null);
			}

			System.out.println("-- Writer Factory Interface for ${key}");
			binding["helper"] = new ApiClassWriterFactoryInterfaceHelper();
			template = templateProcessor.getTemplate('ApiClassWriterFactoryInterface');
			processor("api/writer", "IOpenScenarioWriterFactory${versionProperties["fileSuffix"]}.h")
			{
				return templateApplication(template, umlModel.getClasses());
			}

			System.out.println("-- Writer Factory Impl Header for ${key}");
			binding["helper"] = new ApiClassWriterFactoryImplHelper();
			template = templateProcessor.getTemplate('ApiClassWriterFactoryImpl');
			processor("impl", "OpenScenarioWriterFactoryImpl${versionProperties["fileSuffix"]}.h")
			{
				return templateApplication(template, umlModel.getClasses());
			}
			
			System.out.println("-- Writer Factory Impl Source for ${key}");
			binding["helper"] = new ApiClassWriterFactoryImplHelper();
			template = templateProcessor.getTemplate('ApiClassWriterFactoryImplSource');
			processor("impl", "OpenScenarioWriterFactoryImpl${versionProperties["fileSuffix"]}.cpp")
			{
				return templateApplication(template, umlModel.getClasses());
			}
			
			System.out.println("-- Xml Exporter Header for ${key}");
			binding["helper"] = new XmlExporterClassHelper();
			template = templateProcessor.getTemplate('XmlExporterClass');
			processor("export/xml", "OpenScenarioXmlExporter${versionProperties["fileSuffix"]}.h")
			{
				return templateApplication(template, umlModel);
			}
			
			System.out.println("-- Xml Exporter Source for  ${key}");
			binding["helper"] = new XmlExporterClassHelper();
			template = templateProcessor.getTemplate('XmlExporterClassSource');
			processor("export/xml", "OpenScenarioXmlExporter${versionProperties["fileSuffix"]}.cpp")
			{
				return templateApplication(template, umlModel);
			}
		}
	}


	private static class TypeHelperCpp {

		static void init(){
			MainNamingHelper.init();
			Memoizer.doInit(TypeHelperCpp.class, UmlType.class)
		}

		def static toCppName(UmlType type) {
			if (type.isPrimitiveType())
			{
				if (type.name == "string")
				{
					return "std::string";

				}else if (type.name == "unsignedInt")
				{
					return "uint32_t";

				}else if (type.name == "int")
				{
					return "int";

				}else if (type.name == "unsignedShort")
				{
					return "uint16_t";
				}else if (type.name == "dateTime")
				{
					return "DateTime";
				}else if (type.name == "boolean")
				{
					return "bool";

				}else if (type.name == "double")
				{
					return "double"
				}
			}else if (type.isEnumeration())
			{
				return type.name.toClassName();
			}else
			{
				return "std::shared_ptr<I" + type.name.toClassName() + ">";
			}
		}

		def static toCppWriterName(UmlType type) {
			if (type.isPrimitiveType())
			{
				if (type.name == "string")
				{
					return "std::string&";

				}else if (type.name == "unsignedInt")
				{
					return "uint32_t&";

				}else if (type.name == "int")
				{
					return "int&";

				}else if (type.name == "unsignedShort")
				{
					return "uint16_t&";
				}else if (type.name == "dateTime")
				{
					return "DateTime&";
				}else if (type.name == "boolean")
				{
					return "bool&";

				}else if (type.name == "double")
				{
					return "double&"
				}
			}else if (type.isEnumeration())
			{
				return type.name.toClassName();
			}else
			{
				return "std::shared_ptr<I" + type.name.toClassName() + "Writer>";
			}
		}

		def static toCppDefaultValue(UmlType type) {
			if (type.isPrimitiveType())
			{
				if (type.name == "string")
				{
					return "\"\"";

				}else if (type.name == "unsignedInt")
				{
					return "0";

				}else if (type.name == "int")
				{
					return "0";

				}else if (type.name == "unsignedShort")
				{
					return "0";
				}else if (type.name == "dateTime")
				{
					return "{}";
				}else if (type.name == "boolean")
				{
					return "false";

				}else if (type.name == "double")
				{
					return "0"
				}
			}else if (type.isEnumeration())
			{
				return type.name.toClassName() + "()";
			}else
			{
				return "nullptr";
			}
		}

		def static toCppIsDefaultValue(UmlType type) {
			if (type.isPrimitiveType())
			{
				if (type.name == "string")
				{
					return ".empty()";

				}else if (type.name == "unsignedInt")
				{
					return " == 0";

				}else if (type.name == "int")
				{
					return " == 0";

				}else if (type.name == "unsignedShort")
				{
					return " == 0";
				}else if (type.name == "dateTime")
				{
					return " == DateTime()";
				}else if (type.name == "boolean")
				{
					return " == false";

				}else if (type.name == "double")
				{
					return " == 0"
				}
			}else if (type.isEnumeration())
			{
				return " == " + type.name.toClassName() + "::UNKNOWN";
			}else
			{
				return " == nullptr";
			}
		}

		def static toCppTemplateName(UmlType type) {
			if (type.isPrimitiveType())
			{
				return toCppName(type);
			}else if (type.isEnumeration())
			{
				return toCppName(type);
			}else
			{
				return "I" + type.name.toClassName();
			}
		}



	}

	public static Hashtable<String, String> getConstants(List<UmlClass> classes)
	{
		Hashtable<String, String> result  = new Hashtable<String, String>();
		classes.each{UmlClass umlClass->
			List properties = umlClass.umlProperties;
			properties.each { UmlProperty property ->
				if (property.isProxy()|| property.type.isPrimitiveType() || property.type.isEnumeration()){
					result.put("ATTRIBUTE__"  + property.name.toMemberName().toUpperNameFromMemberName() , property.name.toMemberName());
				}
			}

			properties = umlClass.getXmlElementProperties();
			properties.each { UmlProperty property ->
				if (property.isWrappedList()){
					result.put("ELEMENT__"  + property.getXsdWrapperElementName().toMemberName().toUpperNameFromMemberName() , property.getXsdWrapperElementName().toClassName());
				}
				result.put("ELEMENT__"  + property.getXmlTagName().toMemberName().toUpperNameFromMemberName() ,property.getXmlTagName().toClassName());

			}


		}
		return result;
	}

}
