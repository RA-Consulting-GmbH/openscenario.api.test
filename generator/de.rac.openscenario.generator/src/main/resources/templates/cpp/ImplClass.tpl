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

#include "ApiClassInterfaces.h"
#include "BaseImpl.h"
#include "IParserMessageLogger.h"
#include "ParserHelper.h"
#include "ParameterValue.h"
#include "NamedReferenceProxy.h"
#include "INamedReference.h"
#include "MemLeakDetection.h"
#include "KeyNotSupportedException.h"
#include "OscConstants.h"
#include "ExportDefinitions.h"

// helper.getTypeImportCpp(element,packageName).each{importedType->%>import =importedType%>

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
    <%- model.getClasses().each{ element->-%>
<%= helper.makeClassJavaDoc(element, oscVersion, "        ")%>
        class <%=element.name.toClassName()%>Impl: public BaseImpl, public I<%=element.name.toClassName()%>, public std::enable_shared_from_this<<%=element.name.toClassName()%>Impl>
        {
    <%- List properties = element.umlProperties-%>
        private:
    <%-properties.each{ property ->-%>
    <%-if (property.upper== -1){-%>
            std::vector<<%=property.type.toCppName()%>> _<%=property.name.toMemberName()%> {};
    <%-}else if (property.isProxy()){-%>
            NamedReferenceProxy<I<%=property.type.name.toClassName()%>> _<%=property.name.toMemberName()%> {};
    <%-}else{-%>
            <%=property.type.toCppName()%> _<%=property.name.toMemberName()%> {};
    <%-}}-%>

        public:

            <%=element.name.toClassName()%>Impl();

            IOpenScenarioFlexElement* GetOpenScenarioFlexElement() override
            {
                return this;
            }

    <%-properties.each{ property ->-%>
        <%-if (property.upper== -1){-%>
            OPENSCENARIOLIB_EXP std::vector<<%=property.type.toCppName()%>> Get<%=property.name.toClassName()%>() override;
        <%-}else if (property.isProxy()){-%>
            OPENSCENARIOLIB_EXP INamedReference<I<%=property.type.name.toClassName()%>>* Get<%=property.name.toClassName()%>() override;
        <%-}else{-%>
            OPENSCENARIOLIB_EXP <%=property.type.toCppName()%> Get<%=property.name.toClassName()%>() override;
        <%-}-%>
    <%-}-%>

    <%-properties.each{ property ->-%>
<%=helper.makeSetterCppDoc(element, property, "            ")%>
        <%-if (property.upper== -1){-%>
            OPENSCENARIOLIB_EXP void Set<%=property.name.toClassName()%>(std::vector<<%=property.type.toCppName()%>>& <%=property.name.toMemberName()%>);
        <%-}else if (property.isProxy()){-%>
            OPENSCENARIOLIB_EXP void Set<%=property.name.toClassName()%> (NamedReferenceProxy<I<%=property.type.name.toClassName()%>>& <%=property.name.toMemberName()%> );
        <%-}else{-%>
            OPENSCENARIOLIB_EXP void Set<%=property.name.toClassName()%> (const <%=property.type.toCppName()%> <%=property.name.toMemberName()%> );
        <%-}-%>
    <%-}-%>

            OPENSCENARIOLIB_EXP void ResolveParameterInternal(IParserMessageLogger& logger, std::string& attributeKey, std::string& parameterLiteralValue) override;

            OPENSCENARIOLIB_EXP SimpleType GetTypeFromAttributeName(std::string& attributeKey) override;

    <%-def parameterDeclaration = element.getParameterDefinitionProperty();-%>
    <%-if (parameterDeclaration){-%>
            OPENSCENARIOLIB_EXP bool HasParameterDefinitions() override;
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<ParameterValue>> GetParameterDefinitions() override; 
    <%-}-%>

            /**
            * A list of all aggregated children (lists are flattened). This may be used for applying a specific 
            * method for any child.
            * @return a list with all children (as BaseImpl)
            */
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<BaseImpl>> GetChildren() override;

            /**
            * Making a (deep) clone this object. This is useful and used for importing elements from catalogs.
            * @return a deep copy of the object.
            */
            OPENSCENARIOLIB_EXP std::shared_ptr<BaseImpl> Clone() override;

            std::shared_ptr<void> GetAdapter(const std::string classifier) override
            {
                if (classifier == typeid(<%=element.name.toClassName()%>Impl).name())
                    return shared_from_this();
                else if (classifier == typeid(I<%=element.name.toClassName()%>).name())
                	return std::dynamic_pointer_cast<I<%=element.name.toClassName()%>>(shared_from_this());
                return BaseImpl::GetAdapter(classifier);
            }

            std::weak_ptr<IOpenScenarioModelElement> GetParent() override
            {
                return BaseImpl::GetParent();
            }

            // Implement the IOpenScenarioFlexElement interface

            OPENSCENARIOLIB_EXP std::string GetStringProperty(std::string key) override;

            uint32_t GetUnsignedIntProperty(std::string key) override
            {
                <%addTypeCode(element,"UnsignedInt")%>
            }

            int GetIntProperty(std::string key) override
            {
                <%addTypeCode(element,"Int")%>
            }

            double GetDoubleProperty(std::string key) override
            {
                <%addTypeCode(element,"Double")%>
            }

            uint16_t GetUnsignedShortProperty(std::string key) override
            {
                <%addTypeCode(element,"UnsignedShort")%>
            }
 
            bool GetBooleanProperty(std::string key) override
            {
                <%addTypeCode(element,"Boolean")%>
            }

            DateTime GetDateTimeProperty(std::string key) override
            {
                <%addTypeCode(element,"DateTime")%>
            }

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetChildElement(std::string key) override;

  <%-List listChildElements = element.getXmlElementProperties().findAll(){ it.isList() }-%>
  <%-if (!listChildElements.isEmpty()){-%>
  <%-}-%>
            OPENSCENARIOLIB_EXP std::vector<std::shared_ptr<IOpenScenarioFlexElement>> GetListChildElement(std::string key) override;

            std::weak_ptr<IOpenScenarioFlexElement> GetParentFlexElement() override
            {
                return std::dynamic_pointer_cast<IOpenScenarioFlexElement>(GetParent().lock());
            }

            OPENSCENARIOLIB_EXP std::shared_ptr<IOpenScenarioFlexElement> GetReferencedElement(std::string key, std::string name) override;

            OPENSCENARIOLIB_EXP std::string GetEnumerationLiteral(std::string key) override;

            std::string GetModelType() override
            {
                return "<%=element.name.toClassName()%>";
            }
        };

    <%-}-%>

    }
}

<%-def addTypeCode(element, String primitiveTypeName){-%>
<%- List properties = element.umlProperties.findAll(){ it.type.isPrimitiveType() && it.type.name.toClassName().equals(primitiveTypeName) }-%>
    <%-if (properties.isEmpty()){-%>
throw KeyNotSupportedException();
    <%-} else {-%>
if (key.empty())
                {
                    throw KeyNotSupportedException();
                }
    <%-properties.eachWithIndex{ property, index ->-%>
    <%=index != 0?"else ":" "%>
                if (key == OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>)
                {
                    return Get<%=property.name.toClassName()%>();
                }<%-}-%>

                throw KeyNotSupportedException();
 <%-}-%>
 <%-}-%>