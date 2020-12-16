<%-
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
-%>
<%=JavaLicenseHelper.getApache2License()%>
package <%=packageName%>;

import org.w3c.dom.Attr;
import org.w3c.dom.Document;
import org.w3c.dom.Element;
import java.lang.Iterable;
import java.util.List;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.export.XmlExportHelper;
import net.asam.openscenario.common.INamedReference;
<%- element.getClasses().each{ umlClass ->-%>
import net.asam.openscenario.v1_0.api.writer.I<%=umlClass.name.toClassName()%>Writer;
import net.asam.openscenario.v1_0.api.I<%=umlClass.name.toClassName()%>;
<%-}-%>

<%- element.getInterfaces().each{ umlClass ->-%>
import net.asam.openscenario.v1_0.api.I<%=umlClass.name.toClassName()%>;
<%-}-%>


<%- element.getEnumerations().each{ enumeration ->-%>
import net.asam.openscenario.v1_0.api.<%=enumeration.name.toClassName()%>;
<%-}-%>



<%= helper.makeClassJavaDoc(element, oscVersion)%>
public class OpenScenarioXmlExporter  {


public Document createXmlDocument(IOpenScenarioWriter openScenarioWriter)
{	Document document = null;
	try{
		DocumentBuilderFactory documentFactory = DocumentBuilderFactory.newInstance();
 		DocumentBuilder documentBuilder = documentFactory.newDocumentBuilder();
		document = documentBuilder.newDocument();
		Element root = document.createElement("OpenSCENARIO");
		document.appendChild(root);
		fillOpenScenarioNode(document, root, openScenarioWriter);	
	}catch (ParserConfigurationException e)
	{
		// do nothing
	}
	return document;
}

<%- element.getClasses().each{ umlClass ->-%>
  /**
   * Fills a dom element of type <%=umlClass.name.toClassName()%>
   * @param document the xml document to create child elements
   * @param elementNode the element node to fill
   * @param <%=umlClass.name.toMemberName()%>Writer the writer the element is filled from.
   */
@SuppressWarnings("unused")
private void fill<%=umlClass.name.toClassName()%>Node(Document document, Element elementNode, I<%=umlClass.name.toClassName()%>Writer <%=umlClass.name.toMemberName()%>Writer)
{
	// Add Attributes (Parameters)
	<%- umlClass.umlProperties.findAll(){p-> !p.isTransient()}.each{ property -> -%>
	<%- if (property.isParameterizableProperty() && !property.isProxy()){-%>
	<%=property.type.toJavaName()%> <%=property.name.toMemberName()%> = <%=umlClass.name.toMemberName()%>Writer.get<%=property.name.toClassName()%>();
	if (<%=property.name.toMemberName()%> != null)
	{
	<%-if (property.type.isPrimitiveType()){-%>
	   elementNode.setAttribute(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, XmlExportHelper.toXmlStringFrom<%=property.type.name.toClassName()%>(<%=property.name.toMemberName()%>));
 	<%-} else {-%>
 	   elementNode.setAttribute(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, <%=property.name.toMemberName()%>.getLiteral());
 	<%-}-%>
	}else if (<%=umlClass.name.toMemberName()%>Writer.is<%=property.name.toClassName()%>Parameterized())
	{
	   elementNode.setAttribute(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, <%=umlClass.name.toMemberName()%>Writer.getParameterFrom<%=property.name.toClassName()%>());
	}	
	<%-}else if (property.isProxy()){-%>
	INamedReference<<%=property.type.toJavaName()%>> <%=property.name.toMemberName()%> = <%=umlClass.name.toMemberName()%>Writer.get<%=property.name.toClassName()%>();
	if (<%=property.name.toMemberName()%> != null)
	{
	   elementNode.setAttribute(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, XmlExportHelper.toXmlStringFromString(<%=property.name.toMemberName()%>.getNameRef()));
	}
	<%-}else if (!property.isXmlElementProperty()){-%>
	<%=property.type.toJavaName()%> <%=property.name.toMemberName()%> = <%=umlClass.name.toMemberName()%>Writer.get<%=property.name.toClassName()%>();
	if (<%=property.name.toMemberName()%> != null)
	{
	<%-if (property.type.isPrimitiveType()){-%>
	   elementNode.setAttribute(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, XmlExportHelper.toXmlStringFrom<%=property.type.name.toClassName()%>(<%=property.name.toMemberName()%>));
 	<%-} else {-%>
 	   elementNode.setAttribute(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, <%=property.name.toMemberName()%>.getLiteral());
 	<%-}-%>
	}	
	<%-}else if (umlClass.isSimpleContent()){-%>
	String <%=property.name.toMemberName()%> = <%=umlClass.name.toMemberName()%>Writer.get<%=property.name.toClassName()%>();
	if (<%=property.name.toMemberName()%> != null)
	{
	   elementNode.appendChild(document.createTextNode(<%=property.name.toMemberName()%>));
	}
	<%-}else if (!property.isList()){-%>
	<%=property.type.toJavaName()%>Writer <%=property.name.toMemberName()%> = <%=umlClass.name.toMemberName()%>Writer.getWriter<%=property.name.toClassName()%>();
	if (<%=property.name.toMemberName()%> != null)
	{
		Element <%=property.name.toMemberName()%>Element = document.createElement(OscConstants.ELEMENT__<%=property.name.toUpperNameFromMemberName()%>);
		elementNode.appendChild(<%=property.name.toMemberName()%>Element);
		fill<%=property.type.name.toClassName()%>Node(document, <%=property.name.toMemberName()%>Element, <%=property.name.toMemberName()%>);
	}
	
	<%-}else if (property.isWrappedList()){-%>
		
	    List<<%=property.type.toJavaName()%>Writer> <%=property.name.toMemberName()%> = <%=umlClass.name.toMemberName()%>Writer.getWriter<%=property.name.toClassName()%>();
	    if (<%=property.name.toMemberName()%> != null){
	    	Element <%=property.name.toMemberName()%>WrapperElement = document.createElement(OscConstants.ELEMENT__<%=property.getXsdWrapperElementName().toUpperNameFromMemberName()%>);
		    elementNode.appendChild(<%=property.name.toMemberName()%>WrapperElement);
		    for (<%=property.type.toJavaName()%>Writer <%=property.name.toMemberName()%>WriterItem : <%=property.name.toMemberName()%>)
		    {
		    	Element <%=property.name.toMemberName()%>Element = document.createElement(OscConstants.ELEMENT__<%=property.getXmlTagName().toUpperNameFromMemberName()%>);
				<%=property.name.toMemberName()%>WrapperElement.appendChild(<%=property.name.toMemberName()%>Element);
				fill<%=property.type.name.toClassName()%>Node(document, <%=property.name.toMemberName()%>Element, <%=property.name.toMemberName()%>WriterItem);
		    	
		    }
	    }
    <%-}else if (property.isList()){-%>
	    List<<%=property.type.toJavaName()%>Writer> <%=property.name.toMemberName()%> = <%=umlClass.name.toMemberName()%>Writer.getWriter<%=property.name.toClassName()%>();
	    if (<%=property.name.toMemberName()%> != null){
		    for (<%=property.type.toJavaName()%>Writer <%=property.name.toMemberName()%>WriterItem : <%=property.name.toMemberName()%>)
		    {
		    	Element <%=property.name.toMemberName()%>Element = document.createElement(OscConstants.ELEMENT__<%=property.getXmlTagName().toUpperNameFromMemberName()%>);
				elementNode.appendChild(<%=property.name.toMemberName()%>Element);
				fill<%=property.type.name.toClassName()%>Node(document, <%=property.name.toMemberName()%>Element, <%=property.name.toMemberName()%>WriterItem);
		    	
		    }
	    }
	<%-} else {-%>
		Error <%=property.name.toMemberName()%>
	<%-}}-%>
	// Add Children (Normal, Wrapped, Unwrapped, simpleContent);
}
<%-}-%>
}

