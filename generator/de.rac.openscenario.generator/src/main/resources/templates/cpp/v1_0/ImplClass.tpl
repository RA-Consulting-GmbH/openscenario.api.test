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

#include "ApiClassInterfaces<%=fileSuffix%>.h"
#include "ApiClassWriterInterfaces<%=fileSuffix%>.h"
#include "BaseImpl.h"
#include "IParserMessageLogger.h"
#include "ParserHelper.h"
#include "ParameterValue.h"
#include "INamedReference.h"
#include "MemLeakDetection.h"
#include "KeyNotSupportedException.h"
#include "OscConstants<%=fileSuffix%>.h"
#include "ExportDefinitions.h"

// helper.getTypeImportCpp(element,packageName).each{importedType->%>import =importedType%>

#ifdef ABSOLUTE
    #define ABSOLUTE_WAS_SET ABSOLUTE
    #undef ABSOLUTE
#endif

#ifdef RELATIVE
    #define RELATIVE_WAS_SET RELATIVE
    #undef RELATIVE
#endif

namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {
    <%- model.getClasses().each{ element->-%>
<%= helper.makeClassJavaDoc(element, oscVersion, "        ")%>
        class <%=element.name.toClassName()%>Impl: public BaseImpl, public I<%=element.name.toClassName()%>Writer, public std::enable_shared_from_this<<%=element.name.toClassName()%>Impl> 
        {
    <%- List properties = element.umlProperties-%>
        private:
        <%-properties.each{ property ->-%>
<%- if (property.isProxy() && !property.isList()){-%>
            std::shared_ptr<INamedReference<I<%=property.type.name.toClassName()%>>> _<%=property.name.toMemberName()%> {};
<%}else if (property.isTransient() && property.isList()){-%>
            std::vector<<%=property.type.toCppName()%>> _<%=property.name.toMemberName()%> {};
<%}else if (property.isTransient() && !property.isList()){-%>
            <%=property.type.toCppName()%> _<%=property.name.toMemberName()%> {};
<%}else if (property.isXmlElementProperty() && !property.isList()){-%>
            <%=property.type.toCppWriterName()%> _<%=property.name.toMemberName()%> {};
<%}else if (property.isXmlElementProperty() && property.isList()){-%>
            std::vector<<%=property.type.toCppWriterName()%>> _<%=property.name.toMemberName()%> {};
<%}else {-%>
            <%=property.type.toCppName()%> _<%=property.name.toMemberName()%> {};
<%-}}-%>
        public:

            OPENSCENARIOLIB_EXP <%=element.name.toClassName()%>Impl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override;

    <%-properties.each{ property ->-%>
        <%-if (property.upper== -1){-%>
            OPENSCENARIOLIB_EXP std::vector<<%=property.type.toCppName()%>> Get<%=property.name.toClassName()%>() const override;

		<%- if (!property.isTransient()){-%>
            OPENSCENARIOLIB_EXP std::vector<<%=property.type.toCppWriterName()%>> GetWriter<%=property.name.toClassName()%>() const override;
		<%-} -%>
            OPENSCENARIOLIB_EXP int Get<%=property.name.toClassName()%>Size() const override;
            OPENSCENARIOLIB_EXP <%=property.type.toCppName()%> Get<%=property.name.toClassName()%>AtIndex(unsigned int index) const override;
        <%-}else if (property.isProxy()){-%>
            OPENSCENARIOLIB_EXP std::shared_ptr<INamedReference<I<%=property.type.name.toClassName()%>>> Get<%=property.name.toClassName()%>() const override;
        <%-}else{-%>
            OPENSCENARIOLIB_EXP <%=property.type.toCppName()%> Get<%=property.name.toClassName()%>() const override;
        <%-}-%>
    <%-}-%>

<%-properties.each{ property ->-%>

<%- if (property.isProxy() && !property.isList()){-%>
            OPENSCENARIOLIB_EXP void Set<%=property.name.toClassName()%>(std::shared_ptr<INamedReference<<%=property.type.toCppTemplateName()%>>> <%=property.name.toMemberName()%>) override;
<%}else if (property.isTransient() && property.isList()){-%>
            OPENSCENARIOLIB_EXP void Set<%=property.name.toClassName()%>(std::vector<<%=property.type.toCppName()%>>& <%=property.name.toMemberName()%>) override;
<%}else if (property.isTransient() && !property.isList()){-%>
            OPENSCENARIOLIB_EXP void Set<%=property.name.toClassName()%>(const <%=property.type.toCppName()%> <%=property.name.toMemberName()%>) override;
<%}else if (property.isXmlElementProperty() && !property.isList()){-%>
            OPENSCENARIOLIB_EXP void Set<%=property.name.toClassName()%>(<%=property.type.toCppWriterName()%> <%=property.name.toMemberName()%>) override;
<%}else if (property.isXmlElementProperty() && property.isList()){-%>
            OPENSCENARIOLIB_EXP void Set<%=property.name.toClassName()%>(std::vector<<%=property.type.toCppWriterName()%>>& <%=property.name.toMemberName()%>) override;
<%}else {-%>
            OPENSCENARIOLIB_EXP void Set<%=property.name.toClassName()%>(const <%=property.type.toCppName()%> <%=property.name.toMemberName()%>) override;
<%-}-%>
<%-}-%>

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) const override;

    <%-def parameterDeclaration = element.getParameterDefinitionProperty();-%>
    <%-if (parameterDeclaration){-%>
            OPENSCENARIOLIB_EXP bool HasParameterDefinitions() override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() const override; 
    <%-}-%>

            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() const override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override;

            std::weak_ptr<IOpenScenarioModelElement> GetParent() const override;

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) const override;

            uint32_t GetUnsignedIntProperty(std::string key) const override;

            int GetIntProperty(std::string key) const override;

            double GetDoubleProperty(std::string key) const override;

            uint16_t GetUnsignedShortProperty(std::string key) const override;
 
            bool GetBooleanProperty(std::string key) const override;

            DateTime GetDateTimeProperty(std::string key) const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) const override;
  <%-List listChildElements = element.getXmlElementProperties().findAll(){ it.isList() }-%>
  <%-if (!listChildElements.isEmpty()){-%>
  <%-}-%>
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) const override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() const override;

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) const override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) const override;

            std::string GetModelType() const override;

<%properties = element.getParametrizableAttributes()-%>
<%-properties.each{ property ->-%>
            OPENSCENARIOLIB_EXP  void WriteParameterTo<%=property.name.toClassName()%>(std::string& parameterName) override;

<%-}-%>
<%-properties.each{ property ->-%>
            OPENSCENARIOLIB_EXP std::string GetParameterFrom<%=property.name.toClassName()%>() const override;

<%-}-%>
<%-properties.each{ property ->-%>
            OPENSCENARIOLIB_EXP bool Is<%=property.name.toClassName()%>Parameterized() override;

<%-}-%>
            // children
<%-properties = element.getXmlElementProperties().findAll(){ !it.isList() }-%>
<%-properties.each{ property ->-%>
            OPENSCENARIOLIB_EXP <%=property.type.toCppWriterName()%> GetWriter<%=property.name.toClassName()%>() const override;
<%-}-%>
        };

    <%-}-%>

    }
}

#ifdef ABSOLUTE_WAS_SET
    #define ABSOLUTE ABSOLUTE_WAS_SET
    #undef ABSOLUTE_WAS_SET
#endif

#ifdef RELATIVE_WAS_SET
    #define RELATIVE RELATIVE_WAS_SET
    #undef RELATIVE_WAS_SET
#endif
