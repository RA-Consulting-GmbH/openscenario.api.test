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


#include "CardinalityCheckerRules<%=fileSuffix%>.h"
#include "OscConstants<%=fileSuffix%>.h"


namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {

<%- element.each{ umlClass ->-%>
        std::string <%=umlClass.name.toClassName()%>CardinalityCheckerRule::GetMsg(CardinalityViolation& violation)
        {
            std::string message;
            if (violation.violationType ==  VIOLATION_TYPE::REQUIRED)
            {
                message = GetRequiredMessage(violation.propertyName);
            }
            else if (violation.violationType ==  VIOLATION_TYPE::TOO_FEW)
            {
                message = GetTooFewMessage(violation.propertyName, violation.expected, violation.actual);
            }
            else if (violation.violationType ==  VIOLATION_TYPE::TOO_MANY)
            {
                message = GetTooManyMessage(violation.propertyName, violation.expected, violation.actual);
            }
            else if (violation.violationType ==  VIOLATION_TYPE::REQUIRED_XOR)
            {
                message = GetRequiredXorMessage(violation.propertiesName);
            }
            else
            {
                message = GetRequiredContentMessage();
            }
            return message;

        }

        std::vector<CardinalityViolation> <%=umlClass.name.toClassName()%>CardinalityCheckerRule::GetAllViolations(std::shared_ptr<I<%=umlClass.name.toClassName()%>> object)
        {
            std::vector<CardinalityViolation> violations;
            <%-properties = umlClass.umlProperties;-%>
            <%-properties.each{ property -> -%>
            <%-if (!property.isOptional() && !property.isOptionalUnboundList() && !property.isTransient() && !property.appliedStereotypes.find(){s -> s.getName() == "xor"}){-%>
            // Check violation
            <%-if (property.isList() && (property.lower != 0 || property.upper > 0)){-%>
            const auto k<%=property.name.toClassName()%>Size = object->Get<%=property.name.toClassName()%>Size();
            <%-if (property.lower != 0){-%>
            // Check too few elements
            if (k<%=property.name.toClassName()%>Size < <%=property.lower%>)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__<%=property.getXmlTagName().toUpperNameFromMemberName()%>, <%=property.lower%>, k<%=property.name.toClassName()%>Size, VIOLATION_TYPE::TOO_FEW) );
            }
            <%-} -%>
            <%- if (property.upper > 0 ){-%>
            // Check too many elements
            if (k<%=property.name.toClassName()%>Size > <%=property.upper%>)
            {
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT_<%=property.getXmlTagName().toUpperNameFromMemberName()%>, <%=property.upper%>, k<%=property.name.toClassName()%>Size, VIOLATION_TYPE::TOO_MANY) );
            }
            <%-}-%>
            <%-}else {-%>
            // Check required
            if (!object->IsSet<%=property.name.toClassName()%>())
            {
            <%- if (property.appliedStereotypes.find(){s -> s.getName() == "XSDattribute"}){-%>
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, 0, 1, VIOLATION_TYPE::REQUIRED) );
            <%-}else if (umlClass.isSimpleContent()) {-%>
                violations.push_back( CardinalityViolation("", 0, 1, VIOLATION_TYPE::REQUIRED_SIMPLE_CONTENT) );
            <%-} else {-%>
                violations.push_back( CardinalityViolation(OSC_CONSTANTS::ELEMENT__<%=property.getXmlTagName().toUpperNameFromMemberName()%>, 0, 1, VIOLATION_TYPE::REQUIRED) );
            <%-}-%>
            }
            <%-}-%>
            <%-}-%>
            <%-}-%>

            //Xor elements check
            <%-if (umlClass.doPropertiesContainXorElements()){ -%>
            uint16_t elementsDefined = 0;
            std::vector<std::string> propertiesName;
            <%-properties.each{ property -> -%>
            <%-if (property.appliedStereotypes.find(){s -> s.getName() == "xor"}){ -%>
            elementsDefined += object->IsSet<%=property.name.toClassName()%>()?1:0;
            <%- if (property.appliedStereotypes.find(){s -> s.getName() == "XSDattribute"}){-%>
            propertiesName.push_back( OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%> );
            <%-}else if (umlClass.isSimpleContent()) {-%>
            propertiesName.push_back( "" );
            <%-} else {-%>
            propertiesName.push_back( OSC_CONSTANTS::ELEMENT__<%=property.getXmlTagName().toUpperNameFromMemberName()%> );
            <%-}-%>
            <%-}-%>
            <%-}-%> 

            if (elementsDefined != 1)
                violations.push_back( CardinalityViolation(propertiesName, 0, 1, VIOLATION_TYPE::REQUIRED_XOR) );
            <%-}-%>

            return violations;
        }


        <%=umlClass.name.toClassName()%>CardinalityCheckerRule::<%=umlClass.name.toClassName()%>CardinalityCheckerRule() = default;

        void <%=umlClass.name.toClassName()%>CardinalityCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto  violations = GetAllViolations(std::dynamic_pointer_cast<I<%=umlClass.name.toClassName()%>>(object));

            for (auto&& violation : violations)
            {
                auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                messageLogger->LogMessage(msg);
            }
        }

        void <%=umlClass.name.toClassName()%>CardinalityCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            auto violations = GetAllViolations(std::dynamic_pointer_cast<I<%=umlClass.name.toClassName()%>>(object));

            for (auto&& violation : violations)
            {
                auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                messageLogger->LogMessage(msg);
            }
        }

<%-}-%> 
    }
}