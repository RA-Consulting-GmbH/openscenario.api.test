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

#include <map>
#include <vector>
#include "IParserMessageLogger.h"
#include "ICheckerRule.h"
#include "IScenarioChecker.h"
#include "ApiClassInterfaces.h"
#include "MemLeakDetection.h"
#include <memory>
#include "ExportDefinitions.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
<%= helper.makeClassJavaDoc(oscVersion, "        ")%>
        class ScenarioCheckerImpl: public IScenarioChecker
        {
        private:
            //string is typeid(class).name()
            std::map<std::string, std::vector<std::shared_ptr<CheckerRule>>> _typeToCheckerRuleList;
    <%- element.each{ umlClass ->-%>
            void Apply<%=umlClass.name.toClassName()%>CheckerRules(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<I<%=umlClass.name.toClassName()%>> object);
    <%-}-%>

        public:
            OPENSCENARIOLIB_EXP void CheckScenario(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> openScenario) override;
    <%- element.each{ umlClass ->-%>
            OPENSCENARIOLIB_EXP void Add<%=umlClass.name.toClassName()%>CheckerRule(std::shared_ptr<ICheckerRule<I<%=umlClass.name.toClassName()%>>> checkerRule) override;
    <%-}-%>
        };
    }
}