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
#include "UnionCheckerRule.h"
#include "IParserMessageLogger.h"
#include "ITreeMessageLogger.h"
#include "OscConstants<%=fileSuffix%>.h"
#include "ErrorLevel.h"
#include "ApiClassInterfaces<%=fileSuffix%>.h"
#include "FileContentMessage.h"
#include "TreeContentMessage.h"
#include "PropertyTreeContext.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {

<%- element.each{ umlClass ->-%>
<%= helper.makeClassJavaDoc(umlClass, oscVersion, "        ")%>
        class <%=umlClass.name.toClassName()%>UnionCheckerRule: public UnionCheckerRule<I<%=umlClass.name.toClassName()%>>
        {
        private:
            std::vector<std::string> GetNotNullChildren(std::shared_ptr<I<%=umlClass.name.toClassName()%>> object)
            {
                std::vector<std::string> propertyNamesNotNull;
<%-properties = umlClass.getXmlElementProperties();-%>
<%-properties.each{ property -> -%>
<%-if (!property.isList()){-%>
                if (object->Get<%=property.name.toClassName()%>())
<%-}else{-%>
                if (object->Get<%=property.name.toClassName()%>Size() != 0)
<%-}-%>
                {
                    propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__<%=property.name.toUpperNameFromMemberName()%>);
                }
<%-}-%>
                return propertyNamesNotNull;
            }

<%-if (!(properties.findAll(){property-> property.lower==0})){-%>
            std::vector<std::string> GetAllChildren()
            {
                std::vector<std::string> propertyNamesNotNull;
<%-properties = umlClass.getXmlElementProperties();-%>
<%-properties.each{ property -> -%>
                propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__<%=property.name.toUpperNameFromMemberName()%>);
<%-}-%>
                return propertyNamesNotNull;
            }
<%-}-%>

        public:
            <%=umlClass.name.toClassName()%>UnionCheckerRule() = default;

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<I<%=umlClass.name.toClassName()%>> object) override
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = FileContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
<%-if (!(properties.findAll(){property-> property.lower==0})){-%>
                // There must be one item set
                if (propertyNamesNotNull.size() == 0)
                {
                auto msg = FileContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, *GetTextmarker(object));
                    messageLogger->LogMessage(msg);
                }
<%-}-%>
            }

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<I<%=umlClass.name.toClassName()%>> object)
            {
                auto propertyNamesNotNull = GetNotNullChildren(object);
                if (propertyNamesNotNull.size() > 1)
                {
                    auto msg = TreeContentMessage(GetTooManyMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, propertyNamesNotNull));
                    messageLogger->LogMessage(msg);
                }
<%-if (!(properties.findAll(){property-> property.lower==0})){-%>
                // There must be one item set
                if (propertyNamesNotNull.size() == 0)
                {
                    auto msg = TreeContentMessage(GetTooFewMessage(propertyNamesNotNull), ERROR, std::make_shared<PropertyTreeContext>(object, GetAllChildren()));
                    messageLogger->LogMessage(msg);
                }
<%-}-%>
            }
        };
<%-}-%> 
    }
}


