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
#pragma once

#include <string>
#include <vector>
#include "INamedReference.h"
#include "IOpenScenarioModelElement.h"
#include "EnumerationsV1_0.h"
#include "OscInterfacesV1_0.h"
#include "ApiClassInterfacesV1_0.h"
#include "ApiWriterInterfacesV1_0.h"
#include "IOpenScenarioElementWriter.h"
#include "MemLeakDetection.h"


namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {

    <%- model.getClasses().each{ element->-%>
        class I<%=element.name.toClassName()%>Writer;
    <%-}-%>


    <%- model.getClasses().each{ element->-%>

<%= helper.makeClassJavaDoc(element, oscVersion, "        ")%>
        class I<%=element.name.toClassName()%>Writer <%=helper.getExtendsExpressionCpp(element)%>
        {
        public:
            virtual ~I<%=element.name.toClassName()%>Writer() = default;

<%properties = element.umlProperties-%>
<%-if(properties){-%>
        // Setters for all attributes
<%-}-%>
<%-properties.each{ property ->-%>

<%=helper.makeGetterCppDoc(element, property, "            ")%>
<%- if (property.isProxy() && !property.isList()){-%>
            virtual void Set<%=property.name.toClassName()%>(std::shared_ptr<INamedReference<<%=property.type.toCppTemplateName()%>>> <%=property.name.toMemberName()%>) {}
<%}else if (property.isTransient() && property.isList()){-%>
            virtual void Set<%=property.name.toClassName()%>(std::vector<<%=property.type.toCppName()%>>& <%=property.name.toMemberName()%>) {}
<%}else if (property.isTransient() && !property.isList()){-%>
            virtual void Set<%=property.name.toClassName()%>(const <%=property.type.toCppName()%> <%=property.name.toMemberName()%>) {}
<%}else if (property.isXmlElementProperty() && !property.isList()){-%>
            virtual void Set<%=property.name.toClassName()%>(<%=property.type.toCppWriterName()%> <%=property.name.toMemberName()%>) {}
<%}else if (property.isXmlElementProperty() && property.isList()){-%>
            virtual void Set<%=property.name.toClassName()%>(std::vector<<%=property.type.toCppWriterName()%>>& <%=property.name.toMemberName()%>) {}
<%}else {-%>
            virtual void Set<%=property.name.toClassName()%>(const <%=property.type.toCppName()%> <%=property.name.toMemberName()%>) {}
<%-}}-%>

<%properties = element.getParametrizableAttributes()-%>
<%-properties.each{ property ->-%>
<%=helper.makeAttributeSetterParameterCppDoc(element, property, "            ")%>
            virtual void WriteParameterTo<%=property.name.toClassName()%>(std::string& parameterName) {}
<%-}-%>

<%-properties.each{ property ->-%>
<%=helper.makeAttributeGetterParameterCppDoc(element, property, "            ")%>
            virtual std::string GetParameterFrom<%=property.name.toClassName()%>() const { return ""; }
<%-}-%>

<%-properties.each{ property ->-%>
<%=helper.makeIsParameterizedCppDoc(element, property, "            ")%>
            virtual bool Is<%=property.name.toClassName()%>Parameterized() { return false; }
<%-}-%>

            // children
<%-properties = element.getXmlElementProperties().findAll(){ !it.isList() }-%>
<%-properties.each{ property ->-%>
<%=helper.makeChildWriterGetterCppDoc(element, property, "            ")%>
            virtual <%=property.type.toCppWriterName()%> GetWriter<%=property.name.toClassName()%>() const 
            {
                return <%=property.type.toCppDefaultValue()%>;
            } 
<%-}-%>

<%-properties = element.getXmlElementProperties().findAll(){ it.isList() }-%>
<%-properties.each{ property ->-%>
<%=helper.makeChildListWriterGetterCppDoc(element, property, "            ")%>
            virtual std::vector<<%=property.type.toCppWriterName()%>> GetWriter<%=property.name.toClassName()%>() const
            {
                return std::vector<<%=property.type.toCppWriterName()%>>();
            }
<%-}-%>
        };

<%-}-%>
    }
}
