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


#include <vector>
#include <map>
#include "XmlExportHelper.h"
#include "IParserMessageLogger.h"
#include "OscConstants<%=fileSuffix%>.h" 
#include "INamedReference.h"
#include "ApiClassImpl<%=fileSuffix%>.h"
#include "ApiClassInterfaces<%=fileSuffix%>.h"

#include "OpenScenarioXmlExporter<%=fileSuffix%>.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {
        std::shared_ptr<tinyxml2::XMLDocument> OpenScenarioXmlExporter::CreateXmlDocument(std::shared_ptr<IOpenScenarioWriter> openScenarioWriter)
        {
            auto document = std::make_shared<tinyxml2::XMLDocument>();

            try
            {
                tinyxml2::XMLNode* root = document->NewElement("OpenSCENARIO");
                document->InsertFirstChild(root);
                FillOpenScenarioNode(document, root, openScenarioWriter);    
            }
            catch (std::exception& e)
            {
                (void)e;
                // do nothing
            }

            return document;
        }

 <%- element.getClasses().each{ umlClass ->-%>
        void OpenScenarioXmlExporter::Fill<%=umlClass.name.toClassName()%>Node(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<I<%=umlClass.name.toClassName()%>Writer> <%=umlClass.name.toMemberName()%>Writer)
        {
            // Add Attributes (Parameters)
			<%- umlClass.umlProperties.findAll(){p-> !p.isTransient()}.each{ property -> -%>
			<%- if (property.isParameterizableProperty() && !property.isProxy()){-%>
            const auto k<%=property.name.toClassName()%> = <%=umlClass.name.toMemberName()%>Writer->Get<%=property.name.toClassName()%>();
				<%-if (property.isOptional()){-%>
            if (!( k<%=property.name.toClassName()%><%=property.type.toCppIsDefaultValue()%>))
            {
					<%-if (property.type.isPrimitiveType()){-%>
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>.c_str(), XmlExportHelper::ToXmlStringFrom<%=property.type.name.toClassName()%>( k<%=property.name.toClassName()%>).c_str());
					<%-} else {-%>
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>.c_str(), k<%=property.name.toClassName()%>.GetLiteral().c_str());
					<%-}-%>
            }
			else if (<%=umlClass.name.toMemberName()%>Writer->Is<%=property.name.toClassName()%>Parameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>.c_str(), <%=umlClass.name.toMemberName()%>Writer->GetParameterFrom<%=property.name.toClassName()%>().c_str());
            }
				<%-} else {-%>
            if (<%=umlClass.name.toMemberName()%>Writer->Is<%=property.name.toClassName()%>Parameterized())
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>.c_str(), <%=umlClass.name.toMemberName()%>Writer->GetParameterFrom<%=property.name.toClassName()%>().c_str());
            }
            else
            {
					<%-if (property.type.isPrimitiveType()){-%>
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>.c_str(), XmlExportHelper::ToXmlStringFrom<%=property.type.name.toClassName()%>( k<%=property.name.toClassName()%>).c_str());
					<%-} else {-%>
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>.c_str(), k<%=property.name.toClassName()%>.GetLiteral().c_str());
					<%-}-%>
            }
				<%-}-%>
			<%-}else if (property.isProxy()){-%>
            const auto k<%=property.name.toClassName()%> = <%=umlClass.name.toMemberName()%>Writer->Get<%=property.name.toClassName()%>();
            if (k<%=property.name.toClassName()%>)
            {
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>.c_str(), XmlExportHelper::ToXmlStringFromString(k<%=property.name.toClassName()%>->GetNameRef()).c_str());
            }
			<%-}else if (!property.isXmlElementProperty()){-%>
            const auto k<%=property.name.toClassName()%> = <%=umlClass.name.toMemberName()%>Writer->Get<%=property.name.toClassName()%>();
            if (!(k<%=property.name.toClassName()%><%=property.type.toCppIsDefaultValue()%>))
            {
				<%-if (property.type.isPrimitiveType()){-%>
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>.c_str(), XmlExportHelper::ToXmlStringFrom<%=property.type.name.toClassName()%>(k<%=property.name.toClassName()%>).c_str());
				<%-} else {-%>
                elementNode->ToElement()->SetAttribute(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>.c_str(), k<%=property.name.toClassName()%>.GetLiteral().c_str());
				<%-}-%>
            }
			<%-}else if (umlClass.isSimpleContent()){-%>
            const auto k<%=property.name.toClassName()%> = <%=umlClass.name.toMemberName()%>Writer->Get<%=property.name.toClassName()%>();
            if (!k<%=property.name.toClassName()%>.empty())
            {
                elementNode->InsertEndChild(document->NewText(k<%=property.name.toClassName()%>.c_str()));
            }
			<%-}else if (!property.isList()){-%>
            const auto k<%=property.name.toClassName()%> = <%=umlClass.name.toMemberName()%>Writer->GetWriter<%=property.name.toClassName()%>();
            if (k<%=property.name.toClassName()%>)
            {
				<%-if (property.type.isGroup()){-%>
				Fill<%=property.type.name.toClassName()%>Node(document, elementNode, k<%=property.name.toClassName()%>);
				<%-} else {-%>
                tinyxml2::XMLNode* <%=property.name.toMemberName()%>Element = document->NewElement(OSC_CONSTANTS::ELEMENT__<%=property.name.toUpperNameFromMemberName()%>.c_str());
                elementNode->InsertEndChild(<%=property.name.toMemberName()%>Element);
                Fill<%=property.type.name.toClassName()%>Node(document, <%=property.name.toMemberName()%>Element, k<%=property.name.toClassName()%>);
				<%-}-%>
            }
			<%-}else if (property.isWrappedList()){-%>
            const auto k<%=property.name.toClassName()%> = <%=umlClass.name.toMemberName()%>Writer->GetWriter<%=property.name.toClassName()%>();
            if (!k<%=property.name.toClassName()%>.empty())
            {
                tinyxml2::XMLNode* <%=property.name.toMemberName()%>WrapperElement = document->NewElement(OSC_CONSTANTS::ELEMENT__<%=property.getXsdWrapperElementName().toUpperNameFromMemberName()%>.c_str());
                elementNode->InsertEndChild(<%=property.name.toMemberName()%>WrapperElement);
                for (auto <%=property.name.toMemberName()%>WriterItem : k<%=property.name.toClassName()%>)
                {
                    tinyxml2::XMLNode* <%=property.name.toMemberName()%>Element = document->NewElement(OSC_CONSTANTS::ELEMENT__<%=property.getXmlTagName().toUpperNameFromMemberName()%>.c_str());
                    <%=property.name.toMemberName()%>WrapperElement->InsertEndChild(<%=property.name.toMemberName()%>Element);
                    Fill<%=property.type.name.toClassName()%>Node(document, <%=property.name.toMemberName()%>Element, <%=property.name.toMemberName()%>WriterItem);
                }
            }
			<%-}else if (property.isList()){-%>
            const auto k<%=property.name.toClassName()%> = <%=umlClass.name.toMemberName()%>Writer->GetWriter<%=property.name.toClassName()%>();
            if (!k<%=property.name.toClassName()%>.empty())
            {
                for (auto <%=property.name.toMemberName()%>WriterItem : k<%=property.name.toClassName()%>)
                {
                    tinyxml2::XMLNode* <%=property.name.toMemberName()%>Element = document->NewElement(OSC_CONSTANTS::ELEMENT__<%=property.getXmlTagName().toUpperNameFromMemberName()%>.c_str());
                    elementNode->InsertEndChild(<%=property.name.toMemberName()%>Element);
                    Fill<%=property.type.name.toClassName()%>Node(document, <%=property.name.toMemberName()%>Element, <%=property.name.toMemberName()%>WriterItem);
                    
                }
            }
			<%-} else {-%>
            Error <%=property.name.toMemberName()%>
			<%-}-%>
		<%-}-%>
                // Add Children (Normal, Wrapped, Unwrapped, simpleContent);
            }
<%-}-%>

    }
}

