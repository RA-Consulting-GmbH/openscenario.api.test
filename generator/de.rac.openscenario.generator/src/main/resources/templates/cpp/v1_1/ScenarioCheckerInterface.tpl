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
#include "IParserMessageLogger.h"
#include "ApiClassInterfaces<%=fileSuffix%>.h"
#include "ICheckerRule.h"
#include "MemLeakDetection.h"
#include "ITreeMessageLogger.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {
<%= helper.makeClassJavaDoc(oscVersion, "        ")%>
        class IScenarioChecker 
        {
        public:
            IScenarioChecker() = default;
            virtual  ~IScenarioChecker() = default;

            /**
             * Checks the scenario in a file context
             *
             * @param messageLogger the logger for file context
             * @param openScenario the root of the tree
            */

            virtual void CheckScenarioInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> openScenario) = 0;

            /**
             * Checks the scenario in a tree  context
             *
             * @param messageLogger the logger for file context
             * @param openScenario the root of the tree
            */

            virtual void CheckScenarioInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> openScenario) = 0;

    <%- element.each{ umlClass ->-%>
            virtual void Add<%=umlClass.name.toClassName()%>CheckerRule(std::shared_ptr<ICheckerRule<I<%=umlClass.name.toClassName()%>>> checkerRule) = 0;
    <%-}-%>
        };
    }
}