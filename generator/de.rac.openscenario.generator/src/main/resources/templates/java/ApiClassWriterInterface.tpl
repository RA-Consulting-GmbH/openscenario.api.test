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
<%=helper.getListImport(element)%>
<%if (element.hasProxies()){%>import net.asam.openscenario.common.INamedReference;<%}%>
import net.asam.openscenario.api.IOpenScenarioModelElement;
<%-List properties = element.getParametrizableAttributes().findAll{p-> !p.type.isPrimitiveType() || p.isProxy()};-%>
<%-properties.each{ property ->-%>
import net.asam.openscenario.v1_0.api.<%=property.type.toJavaName()%>;
<%-}-%>
<%-properties = element.umlProperties.findAll{p-> p.isTransient() || p.isProxy()};-%>
<%-properties.each{ property ->-%>
import net.asam.openscenario.v1_0.api.<%=property.type.toJavaName()%>;
<%-}-%>
import net.asam.openscenario.v1_0.api.I<%=element.name.toClassName()%>;
import net.asam.openscenario.api.writer.IOpenScenarioElementWriter;


<%= helper.makeClassJavaDoc(element, oscVersion)%>
public interface I<%=element.name.toClassName()%>Writer <%=helper.getExtendsExpression(element)%>{

 
<%properties = element.umlProperties-%>
<%-if(properties){-%>
	// Setters for all attributes
<%-}-%>

<%-properties.each{ property ->-%>
<%=helper.makeAttributeSetterJavaDoc(element, property)%>
<%- if (property.isProxy() && !property.isList()){-%>
	public void set<%=property.name.toClassName()%>(INamedReference<<%=property.type.toJavaName()%>> <%=property.name.toMemberName()%>);
<%}else if (property.isTransient() && property.isList()){-%>
    public void set<%=property.name.toClassName()%>(List<<%=property.type.toJavaName()%>> <%=property.name.toMemberName()%>);
<%}else if (property.isTransient() && !property.isList()){-%>
    public void set<%=property.name.toClassName()%>(<%=property.type.toJavaName()%> <%=property.name.toMemberName()%>);
<%}else if (property.isXmlElementProperty() && !property.isList()){-%>
	public void set<%=property.name.toClassName()%>(<%=property.type.toJavaName()%>Writer <%=property.name.toMemberName()%>);
<%}else if (property.isXmlElementProperty() && property.isList()){-%>
	public void set<%=property.name.toClassName()%>(List<<%=property.type.toJavaName()%>Writer> <%=property.name.toMemberName()%>);
<%}else {-%>
	public void set<%=property.name.toClassName()%>(<%=property.type.toJavaName()%> <%=property.name.toMemberName()%>);
<%-}}-%>

<%properties = element.getParametrizableAttributes()-%>
<%-properties.each{ property ->-%>
<%=helper.makeAttributeSetterParameterJavaDoc(element, property)%>
	public void writeParameterTo<%=property.name.toClassName()%>(String parameterName);
<%-}-%>

<%-properties.each{ property ->-%>
<%=helper.makeAttributeGetterParameterJavaDoc(element, property)%>
	public String getParameterFrom<%=property.name.toClassName()%>();
<%-}-%>

<%-properties.each{ property ->-%>
<%=helper.makeIsParameterizedJavaDoc(element, property)%>
	public boolean is<%=property.name.toClassName()%>Parameterized();
<%-}-%>

// children
<%-properties = element.getXmlElementProperties().findAll(){ !it.isList() }-%>
<%-properties.each{ property ->-%>
<%=helper.makeChildWriterGetterJavaDoc(element, property)%>
	public <%=property.type.toJavaName()%>Writer getWriter<%=property.name.toClassName()%>();
<%-}-%>

<%-properties = element.getXmlElementProperties().findAll(){ it.isList() }-%>
<%-properties.each{ property ->-%>
<%=helper.makeChildListWriterGetterJavaDoc(element, property)%>
	public List<<%=property.type.toJavaName()%>Writer> getWriter<%=property.name.toClassName()%>();
<%-}-%>


}
