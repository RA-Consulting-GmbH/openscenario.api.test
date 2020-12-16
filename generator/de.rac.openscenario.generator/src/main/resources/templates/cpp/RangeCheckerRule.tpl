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
#include "ApiClassInterfaces.h"
#include "RangeCheckerRule.h"
#include "MemLeakDetection.h"
#include "ExportDefinitions.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
    <%- model.getClasses().findAll(){element->rangeCheckerRules[element.name.toClassName()] != null}.each{ element->-%>
<%= helper.makeClassJavaDoc(element, oscVersion, "        ")%>
        class <%=element.name.toClassName()%>RangeCheckerRule: public RangeCheckerRule<I<%=element.name.toClassName()%>>
        {
        public:
            <%=element.name.toClassName()%>RangeCheckerRule() = default;
            OPENSCENARIOLIB_EXP void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<I<%=element.name.toClassName()%>> object) override;
        };

    <%-}-%>
    }
}