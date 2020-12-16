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
 
#include "ScenarioCheckerImpl.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        void ScenarioCheckerImpl::CheckScenario(std::shared_ptr<IParserMessageLogger> messageLogger, const std::shared_ptr<IOpenScenario> openScenario)
        {
            ApplyOpenScenarioCheckerRules(messageLogger, openScenario);
        }

    <%- element.each{ umlClass ->-%>
        void ScenarioCheckerImpl::Add<%=umlClass.name.toClassName()%>CheckerRule(const std::shared_ptr<ICheckerRule<I<%=umlClass.name.toClassName()%>>> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(I<%=umlClass.name.toClassName()%>).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(I<%=umlClass.name.toClassName()%>).name()] = checkerRulesForType;
        }

    <%-}-%>
    <%- element.each{ umlClass ->-%>
        void ScenarioCheckerImpl::Apply<%=umlClass.name.toClassName()%>CheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, const std::shared_ptr<I<%=umlClass.name.toClassName()%>> object)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(I<%=umlClass.name.toClassName()%>).name()];
            if ( !checkerRulesForType.empty() )
            {
                for (auto& checkerRule:checkerRulesForType)
                {
                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule<I<%=umlClass.name.toClassName()%>>> (checkerRule);
                    typedCheckerRule->ApplyRule(messageLogger, object);
                }
            }

            // getChildren
            <%-properties = umlClass.getXmlElementProperties();-%>
            <%- properties.each { property -> -%>
                <%-if (property.isList()){-%>
            const auto k<%=property.name.toClassName()%> = object->Get<%=property.name.toClassName()%>();
            for(auto& kListItem: k<%=property.name.toClassName()%>)
            {
                if ( kListItem )
                    Apply<%=property.type.name.toClassName()%>CheckerRules(messageLogger, kListItem);
            }
                <%-} else {-%>
            const auto k<%=property.name.toClassName()%> = object->Get<%=property.name.toClassName()%>();
            if ( k<%=property.name.toClassName()%>)
            {
                Apply<%=property.type.name.toClassName()%>CheckerRules(messageLogger, k<%=property.name.toClassName()%>);
            }
                <%-}-%>
            <%-}-%>
        }

    <%-}-%>
    }
}