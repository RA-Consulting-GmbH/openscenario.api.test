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
#include "ApiClassInterfaces<%=fileSuffix%>.h"
#include "PropertyTreeContext.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {

<%- element.each{ umlClass ->-%>
<%= helper.makeClassJavaDoc(umlClass, oscVersion, "        ")%>
        class <%=umlClass.name.toClassName()%>CardinalityCheckerRule: public CardinalityCheckerRule<I<%=umlClass.name.toClassName()%>>
        {
        private:

            std::string GetMsg(CardinalityViolation& violation);
            std::vector<CardinalityViolation> GetAllViolations(std::shared_ptr<I<%=umlClass.name.toClassName()%>> object);

        public:
             <%=umlClass.name.toClassName()%>CardinalityCheckerRule();

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<I<%=umlClass.name.toClassName()%>> object);
            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<I<%=umlClass.name.toClassName()%>> object);
        };

<%-}-%> 
    }
}