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
#include "CardinalityCheckerRule.h"
#include "IParserMessageLogger.h"
#include "ITreeMessageLogger.h"
#include "OscConstants.h"
#include "ErrorLevel.h"
#include "ApiClassInterfaces.h"
#include "FileContentMessage.h"
#include "TreeContentMessage.h"
#include "PropertyTreeContext.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {

<%- element.each{ umlClass ->-%>
<%= helper.makeClassJavaDoc(umlClass, oscVersion, "        ")%>
        class <%=umlClass.name.toClassName()%>CardinalityCheckerRule: public CardinalityCheckerRule<I<%=umlClass.name.toClassName()%>>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation)
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
                else
                {
                    message = GetRequiredContentMessage();
                }
                return message;

            }

            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<I<%=umlClass.name.toClassName()%>> object)
            {
                std::vector<CardinalityViolation> violations;
<%-properties = umlClass.umlProperties;-%>
<%-properties.each{ property -> -%>
<%-if (!property.isOptional() && !property.isOptionalUnboundList() && !property.isTransient()){-%>
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
<%-}else{ -%>
                // Check required
                if (object->Get<%=property.name.toClassName()%>()<%=property.type.toCppIsDefaultValue()%>)
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
                 return violations;
            }


        public:
             <%=umlClass.name.toClassName()%>CardinalityCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<I<%=umlClass.name.toClassName()%>> object) override
            {
                auto  violations = GetAllViolations(object);
                
                for (auto&& violation : violations)
                {
                    auto msg = FileContentMessage(GetMsg(violation), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<I<%=umlClass.name.toClassName()%>> object) override
            {
                auto violations = GetAllViolations(object);

                for (auto&& violation : violations)
                {
                    auto msg = TreeContentMessage(GetMsg(violation), ERROR, PropertyTreeContext::Create(object, violation.propertyName));
                    messageLogger->LogMessage(msg);
                }
            }

        };

<%-}-%> 
    }
}