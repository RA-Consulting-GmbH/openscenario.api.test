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
    <%-if (element.isSimpleContent()){-%>
        bool <%=element.name.toClassName()%>XmlParser::IsContentRequired()
        {
          return false;
        }
    <%-}else{-%>
        <%- if (element.isModelGroupAll()){-%>
            <%=element.name.toClassName()%>XmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlAllParser(messageLogger, filename) {}

        <%-}else if (element.isModelGroupChoice()){-%>
            <%=element.name.toClassName()%>XmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlChoiceParser(messageLogger, filename) {}

        <%-}else if (element.isModelGroupSequence()){-%>
            <%=element.name.toClassName()%>XmlParser::SubElementParser::SubElementParser(IParserMessageLogger& messageLogger, std::string& filename): XmlSequenceParser(messageLogger, filename) {}
        <%-}-%>
    <%-}-%>

   <%- if (element.isComplexType() || element.isSimpleContent()){-%>
        std::map<std::string, std::shared_ptr<IAttributeParser>> <%=element.name.toClassName()%>XmlParser::GetAttributeNameToAttributeParserMap()
        {
            std::map<std::string, std::shared_ptr<IAttributeParser>> result;

            <%-List properties = element.getXmlAttributeProperties();-%>
            <%-properties.each{ property -> -%>
            class Attribute<%=property.name.toClassName()%>: public IAttributeParser, public XmlParserBase
            {
            public:
                Attribute<%=property.name.toClassName()%>(IParserMessageLogger& messageLogger, std::string& filename):XmlParserBase(messageLogger, filename) {}

                void Parse(Position& startPosition, Position& endPosition, Position& startValuePosition, std::string& attributeName, std::string& attributeValue, std::shared_ptr<BaseImpl> object) override
                {
                    Textmarker startMarker(startPosition.GetLine(), startPosition.GetColumn(), _filename);
                    Textmarker endMarker(endPosition.GetLine(), endPosition.GetColumn(), _filename);
                    Textmarker startValueMarker(startValuePosition.GetLine(), startValuePosition.GetColumn(), _filename);
					auto typedObject = std::static_pointer_cast<<%=element.name.toClassName()%>Impl>(object);
                    <%-if (property.isParameterizableProperty()){-%>
                    if (IsParametrized(attributeValue))
                    {
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, attributeValue, startValueMarker); 
                    }
                    <%-if(helper.isExpressionAllowed(property.type, element.name.toClassName(), property.name.toMemberName())){-%>
					else if (IsExpression(attributeValue))
                    {
                    	// Expressions allowed for datatype <%=property.type.name%>
                        typedObject->SetAttributeParameter(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, attributeValue, startValueMarker); 
                    }
                    <%-}-%>
                    else
                    {
                    	
                        // Parse value
                        <%-if (property.isProxy()){-%>
                        // Proxy
                        auto proxy = std::make_shared<NamedReferenceProxy<I<%=property.type.name.toClassName()%>>>(attributeValue);
                        proxy->SetParent(typedObject);
                        typedObject->Set<%=property.name.toClassName()%>(proxy);
                        <%-} else if (property.type.isPrimitiveType()) {-%>
                        // Simple type
                        typedObject->Set<%=property.name.toClassName()%>(Parse<%=property.type.name.toClassName()%>(attributeValue, startMarker));
                        <%-} else {-%>
                        // Enumeration Type
                        const auto kResult = <%=property.type.name.toClassName()%>::GetFromLiteral(attributeValue);
                        if (kResult != <%=property.type.name.toClassName()%>::UNKNOWN)
                        {
                            typedObject->Set<%=property.name.toClassName()%>(attributeValue);
                        }
                        else
                        {
                            auto msg = FileContentMessage("Value '" + attributeValue + "' is not allowed.", ERROR, startMarker);
                            _messageLogger.LogMessage(msg);
                        }
                        <%-}-%>
                    }
                    typedObject->PutPropertyStartMarker(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, std::make_shared<Textmarker>(startMarker));
                    typedObject->PutPropertyEndMarker(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, std::make_shared<Textmarker>(endMarker));
                     
                    <%-} else {-%>
                    // This is a special case for ParameterDeclaration.name or ParamterAssignment.parameterRef
                        <%-if (property.isProxy()){-%>
                    // Proxy
                    auto proxy = std::make_shared<NamedReferenceProxy<I<%=property.type.name.toClassName()%>>>(StripDollarSign(attributeValue));
                    proxy->SetParent(typedObject);
                    typedObject->Set<%=property.name.toClassName()%>(proxy);
                    <%-} else if (property.type.isPrimitiveType()) {-%>
                    // Simple type
                    typedObject->Set<%=property.name.toClassName()%>(Parse<%=property.type.name.toClassName()%>(StripDollarSign(attributeValue), startMarker));
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
        void <%=element.name.toClassName()%>XmlParser::SetContentProperty(const std::string content, std::shared_ptr<BaseImpl> object)
        {
        	auto typedObject = std::static_pointer_cast<<%=element.name.toClassName()%>Impl>(object);                    
            typedObject->Set<%=element.getContentPropertyName().toClassName()%>(content);
        }
    <%-}else{-%>

        std::vector<std::shared_ptr<IElementParser>> <%=element.name.toClassName()%>XmlParser::SubElementParser::CreateParserList()
        {
            std::vector<std::shared_ptr<IElementParser>> result;
            <%-properties = element.getXmlElementProperties();-%>
            <%-properties.each{ property -> -%>
                <%- if (property.isWrappedList()){-%>
            result.push_back(std::make_shared<WrappedListParser>(_messageLogger, _filename, std::make_shared<SubElement<%=property.name.toClassName()%>Parser>(_messageLogger, _filename), OSC_CONSTANTS::ELEMENT__<%=property.name.toClassName().toUpperNameFromMemberName()%>) );
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

        void <%=element.name.toClassName()%>XmlParser::SubElement<%=property.name.toClassName()%>Parser::Parse(std::shared_ptr<IndexedElement>& indexedElement, std::shared_ptr<ParserContext>& parserContext, std::shared_ptr<BaseImpl> object)
        {
            auto <%=property.name.toMemberName()%> = std::make_shared<<%=property.type.name.toClassName()%>Impl>();
            auto typedObject = std::static_pointer_cast<<%=element.name.toClassName()%>Impl>(object);                    
            // Setting the parent
            <%=property.name.toMemberName()%>->SetParent(object);
            _<%=property.type.name.toMemberName()%>XmlParser->ParseElement(indexedElement, parserContext, <%=property.name.toMemberName()%>);
            <%-if (property.isList()){-%>
            auto <%=property.name.toMemberName()%>List = typedObject->GetWriter<%=property.name.toClassName()%>();
            <%=property.name.toMemberName()%>List.push_back(<%=property.name.toMemberName()%>);
            typedObject->Set<%=property.name.toClassName()%>(<%=property.name.toMemberName()%>List);
            <%-} else {%>
            typedObject->Set<%=property.name.toClassName()%>(<%=property.name.toMemberName()%>);
            <%-}-%>
            <%- if (property.type.name.toClassName() == "CatalogReference"){-%>
            std::dynamic_pointer_cast<CatalogReferenceParserContext>(parserContext)->AddCatalogReference(std::dynamic_pointer_cast<I<%=property.type.name.toClassName()%>>(<%=property.name.toMemberName()%>));
            <%-}-%>
        }
        
        int <%=element.name.toClassName()%>XmlParser::SubElement<%=property.name.toClassName()%>Parser::GetMinOccur() 
        {
            return <%=property.lower%>;
        }

        int <%=element.name.toClassName()%>XmlParser::SubElement<%=property.name.toClassName()%>Parser::GetMaxOccur() 
        {
            return <%=property.upper%>;
        }

        bool <%=element.name.toClassName()%>XmlParser::SubElement<%=property.name.toClassName()%>Parser::DoesMatch(std::string& elementName)
        {
            <%-if (property.isWrappedList()){-%>
            return elementName == OSC_CONSTANTS::ELEMENT__<%=property.getXsdWrapperElementName().toMemberName().toUpperNameFromMemberName()%>;
            <%-} else {-%>
            return
                <%-helper.splitEqualToCpp(property.getPossibleTagNames(),"elementName").each{ name ->-%>
                <%=name%>
            <%-}-%>
         <%-}-%>
        }

        std::vector<std::string> <%=element.name.toClassName()%>XmlParser::SubElement<%=property.name.toClassName()%>Parser::GetExpectedTagNames()
        {
        <%-if (property.isWrappedList()){-%>
            return {OSC_CONSTANTS::ELEMENT__<%=property.getXsdWrapperElementName().toMemberName().toUpperNameFromMemberName()%>};
        <%-} else {-%>
            return {
            <%-helper.splitStringListCpp(property.getPossibleTagNames()).each{ name ->-%>
                <%=name%>
            <%-}-%>
                    };
            <%-}-%>
        }
        <%-}-%>
  
        <%=element.name.toClassName()%>XmlParser::<%=element.name.toClassName()%>XmlParser(IParserMessageLogger& messageLogger, std::string& filename): 
        <%- if (element.isComplexType()){-%>
        XmlComplexTypeParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        <%-}else if (element.isSimpleContent()){-%>
        XmlSimpleContentParser(messageLogger, filename) {}
        <%-}else if (element.isGroup()){-%>
        XmlGroupParser(messageLogger, filename)
        {
            _subElementParser = std::make_shared<SubElementParser>(messageLogger, filename);
        }
        <%-}-%>
        

    <%-}-%>
    
    }
}