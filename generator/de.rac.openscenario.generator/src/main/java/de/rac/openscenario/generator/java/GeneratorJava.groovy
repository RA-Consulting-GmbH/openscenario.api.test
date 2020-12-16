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
package de.rac.openscenario.generator.java

import com.google.googlejavaformat.java.Formatter
import com.google.googlejavaformat.java.JavaFormatterOptions

import de.rac.generator.basic.CommonTemplateProcessor
import de.rac.generator.basic.Memoizer
import de.rac.generator.main.naming.MainNamingHelper
import de.rac.openscenario.generator.GeneratorHelper
import de.rac.openscenario.generator.LicenseHelper
import de.rac.openscenario.generator.TemplateProcessor
import de.rac.openscenario.generator.helper.ApiClassInterfaceHelper
import de.rac.openscenario.generator.helper.ApiClassWriterFactoryImplHelper;
import de.rac.openscenario.generator.helper.ApiClassWriterFactoryInterfaceHelper;
import de.rac.openscenario.generator.helper.ApiClassWriterInterfaceHelper;
import de.rac.openscenario.generator.helper.ApiEnumerationHelper
import de.rac.openscenario.generator.helper.ApiInterfaceHelper
import de.rac.openscenario.generator.helper.ApiWriterInterfaceHelper;
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
import de.rac.openscenario.generator.java.GeneratorJava.TypeHelperJava
import de.rac.openscenario.generator.utils.CompareDirectories
import de.rac.openscenario.uml.framework.Stereotype
import de.rac.openscenario.uml.framework.UmlClass
import de.rac.openscenario.uml.framework.UmlEnumeration
import de.rac.openscenario.uml.framework.UmlModel
import de.rac.openscenario.uml.framework.UmlPrimitiveType
import de.rac.openscenario.uml.framework.UmlProperty
import de.rac.openscenario.uml.framework.UmlType
import groovy.json.JsonSlurper
import groovy.text.Template


/**
 * @author ahege
 *
 */
public class GeneratorJava{

  public static void main(String[] args) {

    File outputDir = null;


    if (args.length != 1) {
      println ("Argument must be <outputDir>")
      return;
    }else {
      outputDir = new File(args[0])
    }


	def classLoader = GeneratorJava.getClassLoader()
	InputStream stream = classLoader.getResourceAsStream("input/OpenSCENARIO_Ea_1.0.0.xmi")
	UmlModel umlModel = de.rac.openscenario.uml.ea.EaUmlLoader.loadModelFromStream(stream);
	
    TypeHelperJava.init();

    def jsonSlurper = new JsonSlurper()
    def Map rangeCheckerRules = GeneratorHelper.getRangeCheckerRules();

    def binding = [
      "packageName": ("net.asam.openscenario.v1_0.api"),
      "JavaDocHelper": (JavaDocHelper.class),
      "JavaLicenseHelper": (LicenseHelper.class),
      "oscVersion" : "1.0",
    ];


    def processor = CommonTemplateProcessor.getProcessor();
    def templateApplicationOrig = CommonTemplateProcessor.getTemplateApplication();
    def templateApplication = templateApplicationOrig.curry(binding);
    def TemplateProcessor templateProcessor = new TemplateProcessor(TemplateProcessor.JAVA)
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
    umlModel.getClasses().each{ element->
      processor("net/asam/openscenario/v1_0/api", "I"+element.name.toClassName()+".java"){
        return templateApplication(template, element);
      }
    }
	
    System.out.println("-- Enumerations");
    binding["helper"] = new ApiEnumerationHelper();
    template = templateProcessor.getTemplate('ApiEnumeration');
    umlModel.getEnumerations().each{ element->
      processor("net/asam/openscenario/v1_0/api", element.name.toClassName()+".java"){
        return templateApplication(template, element);
      }
    }
    System.out.println("-- Osc Interfaces");
    binding["helper"] = new ApiInterfaceHelper();
    template = templateProcessor.getTemplate('ApiInterface');
    umlModel.getInterfaces().each{ element->
      processor("net/asam/openscenario/v1_0/api", "I"+element.name.toClassName()+".java"){
        return templateApplication(template, element);
      }
    }

    binding["implPackageName"] = "net.asam.openscenario.v1_0.impl";
    binding["helper"] = new ImplClassHelper();
    System.out.println("-- Impl Classes");
    template = templateProcessor.getTemplate('ImplClass');
    umlModel.getClasses().each{ element->
      processor("net/asam/openscenario/v1_0/impl", element.name.toClassName()+"Impl.java"){
        return templateApplication(template, element);
      }
    }
    
    binding["xmlPackageName"] = "net.asam.openscenario.v1_0.parser.xml";
    System.out.println("-- Xml Parser Classes");
    binding["helper"] = new XmlParserClassHelper();
    template = templateProcessor.getTemplate('XmlParserClass');
    umlModel.getClasses().each{ element->
      processor("net/asam/openscenario/v1_0/parser.xml", element.name.toClassName()+"XmlParser.java"){
        return templateApplication(template, element);
      }
    }
		
    binding["xmlPackageName"] = "net.asam.openscenario.v1_0.common";
    System.out.println("-- Constant Class");
    binding["helper"] = new ConstantClassHelper();
    template = templateProcessor.getTemplate('ConstantClass');
    processor("net/asam/openscenario/v1_0/common", "OscConstants.java"){
      return templateApplication(template, getConstants(umlModel.getClasses()));
    }
	
	

	
    binding["xmlPackageName"] = "net.asam.openscenario.v1_0.checker";
    System.out.println("-- CheckerInterfaceTemplate");
    binding["helper"] = new ScenarioCheckerInterfaceHelper();
    template = templateProcessor.getTemplate('ScenarioCheckerInterface');
    processor("net/asam/openscenario/v1_0/checker", "IScenarioChecker.java"){
      return templateApplication(template, umlModel.getClasses());
    }
    
    
    binding["xmlPackageName"] = "net.asam.openscenario.v1_0.checker.impl";
    System.out.println("-- CheckerImplTemplate");
    binding["helper"] = new ScenarioCheckerImplHelper();
    template = templateProcessor.getTemplate('ScenarioCheckerImpl');
    processor("net/asam/openscenario/v1_0/checker/impl", "ScenarioCheckerImpl.java"){
      return templateApplication(template, umlModel.getClasses());
    }
	
    binding["xmlPackageName"] = "net.asam.openscenario.v1_0.checker.range";
    System.out.println("-- RangeCheckerHelper Class");
    binding["helper"] = new RangeCheckerHelper();
    template = templateProcessor.getTemplate('RangeCheckerHelper');
    processor("net/asam/openscenario/v1_0/checker/range", "RangeCheckerHelper.java"){
      return templateApplication(template,umlModel.getClasses().findAll(){element->rangeCheckerRules[element.name.toClassName()] != null});
    }
	
    binding["rangeCheckerRules"] = rangeCheckerRules;
    binding["xmlPackageName"] = "net.asam.openscenario.v1_0.checker.range";
    System.out.println("-- Range Checker Rule");
    binding["helper"] = new RangeCheckerRuleHelper();
    template = templateProcessor.getTemplate('RangeCheckerRule');
    umlModel.getClasses().findAll(){element->rangeCheckerRules[element.name.toClassName()] != null}.each{ element->
      processor("net/asam/openscenario/v1_0/checker.range", element.name.toClassName()+"RangeCheckerRule.java"){
        return templateApplication(template, element);
      }
    }
	
	
    binding["xmlPackageName"] = "net.asam.openscenario.v1_0.catalog";
    binding["helper"] = new CatalogHelperHelper();
    System.out.println("-- CatalogHelper");
    template = templateProcessor.getTemplate('CatalogHelper');
    processor("net/asam/openscenario/v1_0/catalog", "CatalogHelper.java"){
      return templateApplication(template, umlModel.getCatalogElementClasses());

    }
	
	
	
	
    binding["xmlPackageName"] = "net.asam.openscenario.v1_0.checker.model";
    System.out.println("-- Union Checker Rule");
    binding["helper"] = new UnionCheckerRuleHelper();
    template = templateProcessor.getTemplate('UnionCheckerRule');
    umlModel.getClasses().findAll(){ UmlClass umlClass ->umlClass.appliedStereotypes.find(){Stereotype s -> s.name == "union"}}.each {  UmlClass umlClass ->
      processor("net/asam/openscenario/v1_0/checker/model", umlClass.name.toClassName()+"UnionCheckerRule.java"){
        return templateApplication(template, umlClass);
      }
    }
    
    binding["xmlPackageName"] = "net.asam.openscenario.v1_0.checker.model";
    System.out.println("-- Cardinality Checker Rule");
    binding["helper"] = new CardinalityCheckerRuleHelper()
    template = templateProcessor.getTemplate('CardinalityCheckerRule');
    umlModel.getClasses().findAll(){  UmlClass umlClass-> !umlClass.umlProperties.findAll(){UmlProperty p -> !p.isOptional() && !p.isOptionalUnboundList()}.isEmpty()}.each {  UmlClass umlClass->
      processor("net/asam/openscenario/v1_0/checker/model", umlClass.name.toClassName()+"CardinalityCheckerRule.java"){
        return templateApplication(template,  umlClass);
      }
    }
    
	
    binding["packageName"] = "net.asam.openscenario.v1_0.api.writer";
    System.out.println("-- Osc Writer Interfaces");
    binding["helper"] = new ApiWriterInterfaceHelper();
    template = templateProcessor.getTemplate('ApiWriterInterface');
    umlModel.getInterfaces().each{ element->
      processor("net/asam/openscenario/v1_0/api/writer", "I"+element.name.toClassName()+"Writer.java"){
        return templateApplication(template, element);
      }
    }
    
    binding["packageName"] = "net.asam.openscenario.v1_0.api.writer";
    System.out.println("-- Writer Interfaces");
    binding["helper"] = new ApiClassWriterInterfaceHelper();
    template = templateProcessor.getTemplate('ApiClassWriterInterface');
    umlModel.getClasses().each{ element->
      processor("net/asam/openscenario/v1_0/api/writer", "I"+element.name.toClassName()+"Writer.java"){
        return templateApplication(template, element);
      }
    }
    
	
    binding["packageName"] = "net.asam.openscenario.v1_0.api.writer";
    System.out.println("-- Writer Factory Interface");
    binding["helper"] = new ApiClassWriterFactoryInterfaceHelper();
    template = templateProcessor.getTemplate('ApiClassWriterFactoryInterface');
    processor("net/asam/openscenario/v1_0/api/writer", "IOpenScenarioWriterFactory.java"){
      return templateApplication(template, umlModel.getClasses());

    }
    
    binding["packageName"] = "net.asam.openscenario.v1_0.impl";
    System.out.println("-- Writer Factory Impl");
    binding["helper"] = new ApiClassWriterFactoryImplHelper();
    template = templateProcessor.getTemplate('ApiClassWriterFactoryImpl');
    processor("net/asam/openscenario/v1_0/impl", "OpenScenarioWriterFactoryImpl.java"){
      return templateApplication(template, umlModel.getClasses());

    }
	
    binding["packageName"] = "net.asam.openscenario.v1_0.export.xml";
    binding["helper"] = new XmlExporterClassHelper();
    System.out.println("-- Xml Exporter");
    template = templateProcessor.getTemplate('XmlExporterClass');
    processor("net/asam/openscenario/v1_0/export/xml", "OpenScenarioXmlExporter.java"){
      return templateApplication(template, umlModel);

    }
    formatGeneratedCode(outputDir);

  }


  private static class TypeHelperJava {

    static void init(){
	  MainNamingHelper.init();
      Memoizer.doInit(TypeHelperJava.class, UmlType.class)
    }

    def static toJavaName(UmlType type) {
      if (type instanceof UmlPrimitiveType )
      {
        if (type.name == "string")
        {
          return "String";

        }else if (type.name == "unsignedInt")
        {
          return "Long";

        }else if (type.name == "int")
        {
          return "Integer";

        }else if (type.name == "unsignedShort")
        {
          return "Integer";
        }else if (type.name == "dateTime")
        {
          return "java.util.Date";
        }else if (type.name == "boolean")
        {
          return "Boolean";

        }else if (type.name == "double")
        {
          return "Double"
        }
      }else if (type instanceof UmlEnumeration)
      {
        return type.name.toClassName();
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

  public static formatGeneratedCode(File directory)
  {

    String[] args = ["--replace", "dummy"];
    List files =  getFilesRecursively(directory)
    com.google.googlejavaformat.java.Formatter formatter = new Formatter(JavaFormatterOptions.defaultOptions());

    files.each {  File entry ->
      String fileContents = entry.text
      String result = formatter.formatSourceAndFixImports(fileContents);
      entry.write(result)
    }



    System.out.println("-- Formatting Code");
  }

  public static List getFilesRecursively(File dir)
  {
    List<File> result = [];
    for (final File fileEntry : dir.listFiles()) {
      if (fileEntry.isDirectory()) {
        result.addAll(getFilesRecursively(fileEntry))
      } else {
        if (fileEntry.name.endsWith(".java"))
        {
          result.add(fileEntry);
        }
      }
    }
    return result;

  }


}
