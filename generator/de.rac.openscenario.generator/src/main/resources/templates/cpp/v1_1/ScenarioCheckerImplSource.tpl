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
 
#include "ScenarioCheckerImpl<%=fileSuffix%>.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {
        void ScenarioCheckerImpl::CheckScenarioInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, const std::shared_ptr<IOpenScenario> openScenario)
        {
            ApplyOpenScenarioCheckerRules(std::dynamic_pointer_cast<IContentMessageLogger>(messageLogger), openScenario, MODE_FILE);
        }

        void ScenarioCheckerImpl::CheckScenarioInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, const std::shared_ptr<IOpenScenario> openScenario)
        {
            ApplyOpenScenarioCheckerRules(std::dynamic_pointer_cast<IContentMessageLogger>(messageLogger), openScenario, MODE_TREE);
        }

    <%- element.each{ umlClass ->-%>
        void ScenarioCheckerImpl::Add<%=umlClass.name.toClassName()%>CheckerRule(const std::shared_ptr<ICheckerRule> checkerRule)
        {
            auto checkerRulesForType = _typeToCheckerRuleList[typeid(I<%=umlClass.name.toClassName()%>).name()];
            checkerRulesForType.push_back(std::static_pointer_cast<CheckerRule> (checkerRule));
            _typeToCheckerRuleList[typeid(I<%=umlClass.name.toClassName()%>).name()] = checkerRulesForType;
        }

    <%-}-%>
  
    }
}