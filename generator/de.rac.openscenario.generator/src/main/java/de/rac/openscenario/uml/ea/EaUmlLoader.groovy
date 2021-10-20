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
package de.rac.openscenario.uml.ea

import de.rac.openscenario.uml.framework.Stereotype
import de.rac.openscenario.uml.framework.UmlClass
import de.rac.openscenario.uml.framework.UmlEnumeration
import de.rac.openscenario.uml.framework.UmlEnumerationLiteral
import de.rac.openscenario.uml.framework.UmlInterface
import de.rac.openscenario.uml.framework.UmlModel
import de.rac.openscenario.uml.framework.UmlPrimitiveType
import de.rac.openscenario.uml.framework.UmlProperty
import de.rac.openscenario.uml.framework.UmlType
import groovy.xml.XmlParser;

class EaUmlLoader {

	private static final String PRIMITIVE_TYPES = "PrimitiveTypes"

	private static final String ENUMS = "Enums"

	private static final String INTERFACES = "Interfaces"

	private static final String CLASSES = "Classes"

	private static final String UML_TYPE_CLASS = "uml:Class"

	private static final String UML_TYPE_REALIZATION = "uml:Realization"

	private static final String UML_TYPE_INTERFACE = "uml:Interface"

	private static final String UML_TYPE_ENUMERATION = "uml:Enumeration"

	private static final String UML_TYPE_ENUMERATION_LITERAL = "uml:EnumerationLiteral"

	private static final String UML_TYPE_PRIMITIVE_TYPE = "uml:PrimitiveType"

	private static final String UML_TYPE_PROPERTY = "uml:Property"

	private static final String UML_TYPE_ASSOCIATION = "uml:Association"

	private static final String BASE_CLASS = "base_Class";
	private static final String BASE_INTERFACE = "base_interface";
	private static final String BASE_PROPERTY = "base_Property";
	private static final String BASE_ASSOCIATION = "base_association";
	private static final String BASE_ENUMERATION_LITERAL = "base_EnumerationLiteral";
	private static final String BASE_ENUMERATION = "base_Enumeration";


	private static Map idToElement = [:];
	private static Map idToConnector = [:];

	private static Map idToUmlClass = [:];
	private static Map idToUmlInterface = [:];
	private static Map idToUmlPrimitiveType = [:];
	private static Map idToUmlProperty = [:];
	private static Map idToUmlEnumeration = [:];

	private static Map idToAssociationNode = [:];

	private static warnings = [];


	public static UmlModel loadModel(String filename) {


		return loadModelFromStream(new FileInputStream(new File(filename)));
	}

	public static UmlModel loadModelFromStream(InputStream inputStream) {


		idToElement = [:];
		def root =  new XmlParser(false,false).parse(inputStream)
		NodeList documentation = root."xmi:Documentation";
		String exporter = documentation?documentation[0]."@exporter":"";
		String exporterVersion = documentation?documentation[0]."@exporterVersion":"";

		if (exporter != "Enterprise Architect" || exporterVersion != "6.5") {
			throw new Error ("Unknown exporter or unknown exporter version (expected:\"Enterprise Architect\", \"6.5\")");
		}

		Node mainPackage = getModelNode(root);
		println(root)
		
		fillElements(root, idToElement);
		// Get The classes Package
		Node packageNode = getPackage(root, CLASSES);
		def idToTypeNode = [:];

		packageNode.children().findAll{Node node-> node."@xmi:type"=="uml:Class"}.each { Node node ->
			idToTypeNode[node."@xmi:id"] = node;
		}

		fillTypesFromPackage(root, CLASSES, UML_TYPE_ASSOCIATION, idToAssociationNode);


		UmlModel umlModel = new UmlModel();

	
		
		
		umlModel.primitiveTypes = getPrimitiveTypes(root);
		umlModel.interfaces = getInterfaces(root);
		umlModel.enumerations = getEnumerations(root);
		umlModel.classes = getClasses(root);
		umlModel.setRoot();
		warnings.addAll(umlModel.checkPositions())

		warnings.each{ println(it)}
		return umlModel;

	}

	public static Node getPackage(Node root, String packageName)
	{
		Node mainPackage =  getMainPackage(root);

		def result =  mainPackage."packagedElement".find(){Node p -> p."@name" == packageName};

		return result;
	}

	private static Node getMainPackage(Node root) {
		return root."uml:Model"[0]."packagedElement".find(){Node p -> p."@name" == "OpenSCENARIO"}

	}

	private static Node getModelNode(Node root) {
		return root."uml:Model"[0];

	}

	public static void fillTypesFromPackage(Node root, String packageName, String typeName, Map idToTypeNode)
	{
		// Get The classes Package
		Node packageNode = getPackage(root, packageName);

		packageNode.children().findAll{Node node-> node."@xmi:type"== typeName }.each { Node node ->
			idToTypeNode[node."@xmi:id"] = node;
		}
	}

	public static List<UmlPrimitiveType> getPrimitiveTypes(Node root)
	{
		List<UmlPrimitiveType> result = [];
		Node packageNode = getPackage(root, PRIMITIVE_TYPES);

		packageNode.children().findAll{Node node-> node."@xmi:type"== UML_TYPE_PRIMITIVE_TYPE }.each { Node node ->
			//name
			UmlPrimitiveType primitiveType = new UmlPrimitiveType( node."@name");
			idToUmlPrimitiveType[node."@xmi:id"] = primitiveType;
			// annotation
			String annotation = getAnnotation(node."@xmi:id")
			primitiveType.annotation = annotation;
			result.add(primitiveType);
		}
		return result;
	}

	public static List<UmlEnumeration> getEnumerations(Node root)
	{
		List<UmlEnumeration> result = [];
		Node packageNode = getPackage(root, ENUMS);

		packageNode.children().findAll{Node node-> node."@xmi:type"== UML_TYPE_ENUMERATION }.each { Node node ->

			//name
			UmlEnumeration enumeration = new UmlEnumeration( node."@name");
			idToUmlEnumeration[node."@xmi:id"] = enumeration;
			// annotation
			String annotation = getAnnotation(node."@xmi:id")
			enumeration.annotation = annotation;
			enumeration.enumerationValues = getEnumerationLiterals(root, node);
			enumeration.appliedStereotypes = getStereotypes(root, BASE_ENUMERATION, node."@xmi:id");
			result.add(enumeration);
		}
		return result;
	}

	public static List<UmlClass> getClasses(Node root)
	{
		List<UmlClass> result = [];
		Node packageNode = getPackage(root, CLASSES);

		packageNode.children().findAll{Node node-> node."@xmi:type"== UML_TYPE_CLASS }.each { Node node ->

			String classId = node."@xmi:id";
			//name
			UmlClass umlClass = new UmlClass( node."@name");
			idToUmlClass[node."@xmi:id"] = umlClass;
			// annotation
			String annotation = getAnnotation(classId)
			umlClass.annotation = annotation;

			umlClass.appliedStereotypes = getStereotypes(root, BASE_CLASS, node."@xmi:id");
			result.add(umlClass);

			packageNode.children().findAll{Node realizationNode-> realizationNode."@xmi:type"== UML_TYPE_REALIZATION && realizationNode."@client" == classId }.each { Node realizationNode ->
				umlClass.implementedInterfaces.add(idToUmlInterface[realizationNode."@supplier"])
			}
		}
		// Realizations
		packageNode.children().findAll{Node node-> node."@xmi:type"== UML_TYPE_CLASS }.each { Node node ->
			UmlClass umlClass = idToUmlClass[node."@xmi:id"];
			List<UmlProperty> properties = getProperties(root, node, packageNode);
			properties.each {UmlProperty property -> property.parent = umlClass};
			properties.sort{ UmlProperty a, UmlProperty b -> 
				// XSD attributes first
				if ((a.isTransient() && b.isTransient())|| (a.isXmlAttributeProperty() && b.isXmlAttributeProperty()))
				{
					return  a.name.compareTo(b.name);
				}else if (a.isXmlAttributeProperty() && b.isSimpleContentProperty())
				{
					return 1;
				}else if (a.isSimpleContentProperty() && b.isXmlAttributeProperty())
				{
					return -1;
				}else if (a.isXmlElementProperty() && b.isXmlElementProperty())
				{
					return a.getPosition().compareTo(b.getPosition());
				}else if (a.isXmlAttributeProperty())
				{
					return -1;
				}else if (b.isXmlAttributeProperty())
				{
					return 1;
				}else if (a.isXmlElementProperty())
				{
					return -1;
				}else if (b.isXmlElementProperty())
				{
					return 1;
				}else
				{
					return 1;
				}
		}

			
			umlClass.umlProperties = properties;
		}
		return result;
	}

	public static List<UmlEnumerationLiteral> getEnumerationLiterals(Node root, Node enumerationNode)
	{
		List<UmlEnumerationLiteral> result = [];


		enumerationNode.children().findAll{Node node-> node."@xmi:type"== UML_TYPE_ENUMERATION_LITERAL }.each { Node node ->

			//name
			UmlEnumerationLiteral enumerationLiteral = new UmlEnumerationLiteral();
			enumerationLiteral.literal =  node."@name";
			// annotation
			String annotation = getAnnotationFromAttribute(enumerationNode."@xmi:id", node."@xmi:id")
			enumerationLiteral.annotation = annotation;

			result.add(enumerationLiteral);
			// Stereotypes
			enumerationLiteral.appliedStereotypes = getStereotypes(root, BASE_ENUMERATION_LITERAL, node."@xmi:id");
		}
		return result.toSorted { a, b -> a.literal <=> b.literal };
	}

	public static List<UmlProperty> getProperties(Node root, Node classNode, Node packageNode)
	{
		List<UmlProperty> result = [];


		classNode.children().findAll{Node node-> node."@xmi:type"== UML_TYPE_PROPERTY }.each { Node node ->

			UmlProperty property = new UmlProperty(node."@name");
			if ( node."@association" == null)
			{//name

				// annotation
				String annotation = getAnnotationFromAttribute(classNode."@xmi:id", node."@xmi:id")
				property.annotation = annotation;
				property.lower = Integer.parseInt(node."lowerValue"[0]."@value");
				property.upper = Integer.parseInt(node."upperValue"[0]."@value");
				property.type = getType( node."type"[0]."@xmi:idref")

				result.add(property);
				// Stereotypes
				property.appliedStereotypes = getStereotypes(root, BASE_PROPERTY, node."@xmi:id");
			}else
			{
				Node associationNode = idToAssociationNode[node."@association"];
				Node ownedEnd = associationNode.find(){Node subNode-> subNode.name() == "ownedEnd"};
				property.lower = Integer.parseInt(node."lowerValue"[0]."@value");
				property.upper = Integer.parseInt(node."upperValue"[0]."@value");
				property.type = getType( node."type"[0]."@xmi:idref")
				property.annotation = getAnnotationFromPropertyAssociation(node."@association", classNode."@name", node."@name");
				property.appliedStereotypes = getStereotypes(root, BASE_PROPERTY, node."@xmi:id");
				property.appliedStereotypes.addAll(getStereotypes(root, BASE_ASSOCIATION, node."@association"));
				result.add(property);
			}
		}

		// Get Properties from Associations:
		packageNode.children().findAll{Node associationNode-> associationNode."@xmi:type"== UML_TYPE_ASSOCIATION && associationNode."ownedEnd".size() == 2 && associationNode."ownedEnd".find{Node ownedEndNode-> ownedEndNode."type"[0]."@xmi:idref" == classNode."@xmi:id" && ownedEndNode."@name" == null} }.each {Node associationNode  ->

			Node srcNode = associationNode."ownedEnd".find{Node ownedEndNode -> ownedEndNode."@name"== null};
			Node destNode = associationNode."ownedEnd".find{Node ownedEndNode -> ownedEndNode."@name"!= null};
			String associationId = associationNode."@xmi:id";

			UmlProperty property = new UmlProperty(destNode."@name");
			property.lower = Integer.parseInt(destNode."lowerValue"[0]."@value");
			property.upper = Integer.parseInt(destNode."upperValue"[0]."@value");
			property.type = getType( destNode."type"[0]."@xmi:idref")
			property.annotation = getAnnotationFromAssociation(associationId, classNode."@name", destNode."@name");
			property.appliedStereotypes = getStereotypes(root, BASE_PROPERTY, destNode."@xmi:id");
			property.appliedStereotypes.addAll(getStereotypes(root, BASE_PROPERTY, srcNode."@xmi:id"));
			property.appliedStereotypes.addAll(getStereotypes(root, BASE_ASSOCIATION, associationId));
			result.add(property);
		}
		return result;
	}

	public static List<UmlInterface> getInterfaces(Node root)
	{
		List<UmlInterface> result = [];
		Node packageNode = getPackage(root, INTERFACES);
		NodeList interfaceNodes = packageNode.children().findAll{Node node-> node."@xmi:type"== UML_TYPE_INTERFACE };

		interfaceNodes.each { Node node ->

			//name
			UmlInterface umlInterface = new UmlInterface(node."@name");
			// annotation
			String annotation = getAnnotation(node."@xmi:id");
			umlInterface.annotation = annotation;
			idToUmlInterface[node."@xmi:id"] = umlInterface;
			result.add(umlInterface);
			// Stereotypes
			umlInterface.appliedStereotypes = getStereotypes(root, BASE_INTERFACE, node."@xmi:id");
		}

		// inheritance
		interfaceNodes.each { Node node ->
			UmlInterface umlInterface = idToUmlInterface[node."@xmi:id"];
			node.children().findAll{ Node generalizationNode -> generalizationNode."@xmi:type"=="uml:Generalization"}.each { Node generalizationNode ->
				umlInterface.extendedInterfaces.add(idToUmlInterface[generalizationNode."@general"]);
			}


		}


		return result;
	}

	private static UmlType getType(String id)
	{
		UmlType type = idToUmlClass[id];
		if (type != null)
		{
			return type;
		}
		type = idToUmlEnumeration[id];
		if (type != null)
		{
			return type;
		}
		type = idToUmlPrimitiveType[id];
		if (type != null)
		{
			return type;
		}

		type = idToUmlInterface[id];
		if (type != null)
		{
			return type;
		}

		throw new Error("type ${id} not found");
	}

	private static String getAnnotation(String id) {
		Node elementNode = idToElement[id];
		String annotation = elementNode."properties"[0]."@documentation";
		String name = elementNode."@name"
		if (annotation == null || annotation.isEmpty())
		{
			warnings.add("Annotation is missing on ${name}")
		}
		return annotation
	}

	private static String getAnnotationFromAttribute(String id, String attributeId) {
		Node elementNode = idToElement[id];
		Node attributeNode = elementNode."attributes"[0]."attribute".find(){ Node attributeNode -> attributeNode."@xmi:idref" ==  attributeId};
		String annotation = attributeNode."documentation"[0]."@value";
		String name = elementNode."@name"
		String attributeName = attributeNode."@name"
		if (annotation == null || annotation.isEmpty())
		{
			warnings.add("Annotation is missing on ${name}->${attributeName}");
		}
		return annotation
	}

	private static String getAnnotationFromPropertyAssociation(String associationId, String className, String propertyName) {
		Node connectorNode = idToElement[associationId];
		Node targetNode = connectorNode."target"[0];

		String annotation = null;
		if (targetNode."documentation"[0]."@value")
			annotation = targetNode."documentation"[0]."@value";

		if (annotation == null || annotation.isEmpty())
		{
			warnings.add("Annotation is missing on ${className}->${propertyName}")
		}
		return annotation
	}

	private static String getAnnotationFromAssociation(String associationId, String className, String propertyName) {
		Node connectorNode = idToElement[associationId];

		String annotation = null;
		if (connectorNode."documentation"[0]."@value")
			annotation = connectorNode."documentation"[0]."@value";

		if (annotation == null || annotation.isEmpty())
		{
			warnings.add("Annotation is missing on ${className}->${propertyName}")
		}
		return annotation
	}

	public static void fillElements(Node root, Map idToElement)
	{
		// get the elements
		root."xmi:Extension"[0]."elements"[0]."element".each { Node node ->
			idToElement[node."@xmi:idref"] = node;
		}
		// get the connectors
		root."xmi:Extension"[0]."connectors"[0]."connector".each { Node node ->
			idToElement[node."@xmi:idref"] = node;
		}
	}

	public static List<Stereotype> getStereotypes(Node root, String baseType, String id)
	{
		List<Stereotype> result = [];
		Node mainPackage = getModelNode(root);

		mainPackage.children().findAll { Node node ->  (node.name().startsWith("osc:")) &&  node.attribute(baseType).toString().equals(id) }.each { Node node->
			Stereotype stereotype = new Stereotype();
			String nodeName = node.name();
			stereotype.name = nodeName.substring(nodeName.indexOf(":")+1);
			// tags
			node.attributes().each{String key, String value ->
				if (key != baseType)
				{
					stereotype.tags[key] = value;
				}
			}
			result.add(stereotype);
		}
		return result;
	}

}
