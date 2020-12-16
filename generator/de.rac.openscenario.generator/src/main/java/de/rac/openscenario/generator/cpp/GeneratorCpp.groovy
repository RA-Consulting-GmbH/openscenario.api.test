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
import de.rac.openscenario.generator.GeneratorHelper
import de.rac.openscenario.generator.LicenseHelper
import de.rac.openscenario.generator.TemplateProcessor
import de.rac.openscenario.generator.helper.ApiClassInterfaceHelper
import de.rac.openscenario.generator.helper.ApiEnumerationHelper
import de.rac.openscenario.generator.helper.ApiInterfaceHelper
import de.rac.openscenario.generator.helper.CatalogHelperHelper
import de.rac.openscenario.generator.helper.ConstantClassHelper
import de.rac.openscenario.generator.helper.ImplClassHelper
import de.rac.openscenario.generator.helper.RangeCheckerHelper
import de.rac.openscenario.generator.helper.RangeCheckerRuleHelper
import de.rac.openscenario.generator.helper.ScenarioCheckerImplHelper
import de.rac.openscenario.generator.helper.ScenarioCheckerInterfaceHelper
import de.rac.openscenario.generator.helper.XmlParserClassHelper
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
	public static void main(String[] args) {

		File outputDir = null;

		// First argument is outputDir
		if (args.length != 1)
		{
			println ("Argument must be <outputDir>")
			return;

		}else
		{
			outputDir = new File(args[0])
		}
		TypeHelperCpp.init();

		def classLoader = GeneratorCpp.getClassLoader()
		InputStream stream = classLoader.getResourceAsStream("input/OpenSCENARIO_Ea_1.0.0.xmi")
		UmlModel umlModel = de.rac.openscenario.uml.ea.EaUmlLoader.loadModelFromStream(stream);


		def jsonSlurper = new JsonSlurper()
		def Map rangeCheckerRules = GeneratorHelper.getRangeCheckerRules();


		def binding = [
			"JavaLicenseHelper": (LicenseHelper.class),
			"model": umlModel,
			"oscVersion" : "1.0",
		];


		def processor = CommonTemplateProcessor.getProcessor();
		def templateApplicationOrig = CommonTemplateProcessor.getTemplateApplication();
		def templateApplication = templateApplicationOrig.curry(binding);
		def TemplateProcessor templateProcessor = new TemplateProcessor(TemplateProcessor.CPP)
		// put the directory in the Closure

		processor  = processor.curry(outputDir);
		GeneratorHelper.removeSubDirectories(outputDir);
		// clean the complete Output directory
		//TemplateProcessor.clean(outputDirectory);

		/** Here goes the generator
		 *
		 */

		Template template = null;
		System.out.println("-- Class Interface");
		binding["helper"] = new ApiClassInterfaceHelper();
		template = templateProcessor.getTemplate('ApiClassInterface');
		processor("api", "ApiClassInterfaces.h")
		{
			return templateApplication(template, null);
		}

		System.out.println("-- Enumerations");
		binding["helper"] = new ApiEnumerationHelper();
		template = templateProcessor.getTemplate('ApiEnumeration');
		processor("api", "Enumerations.h")
		{
			return templateApplication(template, null);
		}

		template = templateProcessor.getTemplate('ApiEnumerationSourceFile');
		processor("api", "Enumerations.cpp")
		{
			return templateApplication(template, null);
		}

		System.out.println("-- Osc Interfaces");
		binding["helper"] = new ApiInterfaceHelper();
		template = templateProcessor.getTemplate('ApiInterface');
		processor("api", "OscInterfaces.h")
		{
			return templateApplication(template, null);
		}

		System.out.println("-- Impl Classes");
		binding["helper"] = new ImplClassHelper();
		template = templateProcessor.getTemplate('ImplClass');
		processor("impl", "ApiClassImpl.h"){
			return templateApplication(template, null);
		}
		template = templateProcessor.getTemplate('ImplClassSource');
		processor("impl", "ApiClassImpl.cpp"){
			return templateApplication(template, null);
		}

		System.out.println("-- Xml Parser Classes");
		binding["helper"] = new XmlParserClassHelper();
		def all = umlModel.getClasses();
		def sublist = all.collate( all.size().intdiv(2) +1 );
		template = templateProcessor.getTemplate('XmlParserClass');
		processor("xmlParser", "XmlParsers.h"){
			return templateApplication(template, umlModel.getClasses());
		}
		template = templateProcessor.getTemplate('XmlParserClassSource');
		processor("xmlParser", "XmlParsers1.cpp"){
			return templateApplication(template, sublist[0]);
		}
		processor("xmlParser", "XmlParsers2.cpp"){
			return templateApplication(template, sublist[1]);
		}

		System.out.println("-- Constant Class");
		binding["helper"] = new ConstantClassHelper();
		template = templateProcessor.getTemplate('ConstantClass');
		processor("common", "OscConstants.h"){
			return templateApplication(template, getConstants(umlModel.getClasses()));
		}

		System.out.println("-- CheckerInterfaceTemplate");
		binding["helper"] = new ScenarioCheckerInterfaceHelper();
		template = templateProcessor.getTemplate('ScenarioCheckerInterface');
		processor("checker", "IScenarioChecker.h"){
			return templateApplication(template, umlModel.getClasses());
		}

		System.out.println("-- CheckerImplTemplate");
		binding["helper"] = new ScenarioCheckerImplHelper();
		template = templateProcessor.getTemplate('ScenarioCheckerImpl');
		processor("checker/impl", "ScenarioCheckerImpl.h"){
			return templateApplication(template, umlModel.getClasses());
		}
		template = templateProcessor.getTemplate('ScenarioCheckerImplSource');
		processor("checker/impl", "ScenarioCheckerImpl.cpp"){
			return templateApplication(template, umlModel.getClasses());
		}

		System.out.println("-- RangeCheckerHelper Class");
		binding["helper"] = new RangeCheckerHelper();
		template = templateProcessor.getTemplate('RangeCheckerHelper');
		processor("checker/range", "RangeCheckerHelper.h"){
			return templateApplication(template,umlModel.getClasses().findAll(){element->rangeCheckerRules[element.name.toClassName()] != null});
		}

		System.out.println("-- Range Checker Helper");
		binding["rangeCheckerRules"] = rangeCheckerRules;
		binding["helper"] = new RangeCheckerRuleHelper();
		template = templateProcessor.getTemplate('RangeCheckerRule');
		processor("checker/range", "RangeCheckerRules.h"){
			return templateApplication(template, null);
		}
		template = templateProcessor.getTemplate('RangeCheckerRuleSource');
		processor("checker/range", "RangeCheckerRules.cpp"){
			return templateApplication(template, null);
		}

		System.out.println("-- CatalogHelper");
		binding["helper"] = new CatalogHelperHelper();
		template = templateProcessor.getTemplate('CatalogHelper');
		processor("catalog", "CatalogHelper.h"){
			return templateApplication(template, umlModel.getCatalogElementClasses());
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
