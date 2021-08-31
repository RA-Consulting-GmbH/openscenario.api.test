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

#include "UnionCheckerRules<%=fileSuffix%>.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {

<%- element.each{ umlClass ->-%>
        std::vector<std::string> <%=umlClass.name.toClassName()%>UnionCheckerRule::GetNotNullChildren(std::shared_ptr<I<%=umlClass.name.toClassName()%>> object)
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
        std::vector<std::string> <%=umlClass.name.toClassName()%>UnionCheckerRule::GetAllChildren()
        {
            std::vector<std::string> propertyNamesNotNull;
			<%-properties = umlClass.getXmlElementProperties();-%>
			<%-properties.each{ property -> -%>
            propertyNamesNotNull.push_back(OSC_CONSTANTS::ELEMENT__<%=property.name.toUpperNameFromMemberName()%>);
			<%-}-%>
            return propertyNamesNotNull;
        }
		<%-}-%>

        <%=umlClass.name.toClassName()%>UnionCheckerRule::<%=umlClass.name.toClassName()%>UnionCheckerRule() = default;

        void <%=umlClass.name.toClassName()%>UnionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<I<%=umlClass.name.toClassName()%>> object)
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

        void <%=umlClass.name.toClassName()%>UnionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<I<%=umlClass.name.toClassName()%>> object)
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
<%-}-%> 
    }
}


