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
 
#include "XmlParsers<%=fileSuffix%>.h"
#include "NamedReferenceProxy.h"
#include "FileContentMessage.h"
#include "Position.h"
#include "Textmarker.h"
#include "ErrorLevel.h"
#include "WrappedListParser.h"
#include "CatalogReferenceParserContext<%=fileSuffix%>.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {

    <%- element.each{ element->-%>
<%= helper.makeClassJavaDoc(element, oscVersion, "        ")%>
    <%- if (element.isComplexType() || element.isSimpleContent()){-%>
        std::map<std::string, std::shared_ptr<IAttributeParser<<%=element.name.toClassName()%>Impl>>> <%=element.name.toClassName()%>XmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser<<%=element.name.toClassName()%>Impl>>> result;

            <%-List properties = element.getXmlAttributeProperties();-%>
            <%-properties.each{ property -> -%>
            class Attribute<%=property.name.toClassName()%>: public IAttributeParser<<%=element.name.toClassName()%>Impl>, public XmlParserBase<<%=element.name.toClassName()%>Impl>
            {
            public:
                Attribute<%=property.name.toClassName()%>(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<<%=element.name.toClassName()%>Impl>& object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    <%-if (property.isParameterizableProperty()){-%>
                    if (IsParametrized(attributeValue))
                    {
                        object->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, StripDollarSign(attributeValue), startMarker); 
                    }
                    else
                    {
                        // Parse value
                        <%-if (property.isProxy()){-%>
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<I<%=property.type.name.toClassName()%>>>(attributeValue);
                        proxy->SetParent(object);
                        object->Set<%=property.name.toClassName()%>(proxy);
                        <%-} else if (property.type.isPrimitiveType()) {-%>
                        // Simple type
                        object->Set<%=property.name.toClassName()%>(Parse<%=property.type.name.toClassName()%>(attributeValue, startMarker));
                        <%-} else {-%>
                        // Enumeration Type
                        const auto kResult = <%=property.type.name.toClassName()%>::GetFromLiteral(attributeValue);
                        if (kResult != <%=property.type.name.toClassName()%>::UNKNOWN)
                        {
                            object->Set<%=property.name.toClassName()%>(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        <%-}-%>
                    }
                    object->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, std::make_shared<Textmarker>(startMarker));
                    object->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, std::make_shared<Textmarker>(endMarker));
                    
                    <%-} else {-%>
                    // This is a special case for ParameterDeclaration.name or ParamterAssignment.parameterRef
                        <%-if (property.isProxy()){-%>
                    // Proxy
                    auto proxy = std::make_shared<NamedReferenceProxy<I<%=property.type.name.toClassName()%>>>(StripDollarSign(attributeValue));
                    proxy->SetParent(object);
                    object->Set<%=property.name.toClassName()%>(proxy);
                    <%-} else if (property.type.isPrimitiveType()) {-%>
                    // Simple type
                    object->Set<%=property.name.toClassName()%>(Parse<%=property.type.name.toClassName()%>(StripDollarSign(attributeValue), startMarker));
                        <%-}-%>
                    <%-}-%>
                }

                int GetMinOccur() override
                {
                    return <%=property.lower%>;
                }
            };
            result.emplace(std::make_pair(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, std::make_shared<Attribute<%=property.name.toClassName()%>>(_messageLogger, _filename)));
            <%-}-%>
            return result;
        }
    <%-}-%>
    <%-if (element.isSimpleContent()){-%>
        void <%=element.name.toClassName()%>XmlParser::SetContentProperty(const std::string content, std::shared_ptr<<%=element.name.toClassName()%>Impl>& object)
        {
            object->Set<%=element.getContentPropertyName().toClassName()%>(content);
        }
    <%-}else{-%>

        std::vector<std::shared_ptr<IElementParser<<%=element.name.toClassName()%>Impl>>> <%=element.name.toClassName()%>XmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser<<%=element.name.toClassName()%>Impl>>> result;
            <%-properties = element.getXmlElementProperties();-%>
            <%-properties.each{ property -> -%>
                <%- if (property.isWrappedList()){-%>
            result.push_back(std::make_shared<WrappedListParser<<%=element.name.toClassName()%>Impl>>(_messageLogger, _filename, std::make_shared<SubElement<%=property.name.toClassName()%>Parser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__<%=property.name.toClassName().toUpperNameFromMemberName()%>) );
                <%-} else { -%>
            result.push_back(std::make_shared<SubElement<%=property.name.toClassName()%>Parser>(_messageLogger, _filename));
                <%-}-%>
            <%-}-%>
            return result;
        }

    <%-}-%>
        <%-properties = element.getXmlElementProperties();-%>
        <%-properties.each{ property -> -%>
        <%=element.name.toClassName()%>XmlParser::SubElement<%=property.name.toClassName()%>Parser::SubElement<%=property.name.toClassName()%>Parser(IParserMessageLogger& messageLogger, std::string& filename)
        {
            _<%=property.type.name.toMemberName()%>XmlParser = std::make_shared<<%=property.type.name.toClassName()%>XmlParser>(messageLogger, filename);
        }

        void <%=element.name.toClassName()%>XmlParser::SubElement<%=property.name.toClassName()%>Parser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<<%=element.name.toClassName()%>Impl>& object)
        {
            auto <%=property.name.toMemberName()%> = std::make_shared<<%=property.type.name.toClassName()%>Impl>();
            // Setting the parent
            <%=property.name.toMemberName()%>->SetParent(object);
            _<%=property.type.name.toMemberName()%>XmlParser->ParseElement(indexedElement, parserContext, <%=property.name.toMemberName()%>);
            <%-if (property.isList()){-%>
            auto <%=property.name.toMemberName()%>List = object->GetWriter<%=property.name.toClassName()%>();
            <%=property.name.toMemberName()%>List.push_back(<%=property.name.toMemberName()%>);
            object->Set<%=property.name.toClassName()%>(<%=property.name.toMemberName()%>List);
            <%-} else {%>
            object->Set<%=property.name.toClassName()%>(<%=property.name.toMemberName()%>);
            <%-}-%>
            <%- if (property.type.name.toClassName() == "CatalogReference"){-%>
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(std::dynamic_pointer_cast<I<%=property.type.name.toClassName()%>>(<%=property.name.toMemberName()%>));
            <%-}-%>
        }
        <%-}-%>

    <%-}-%>
    }
}