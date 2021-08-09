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
 
#define _USE_MATH_DEFINES
#include "RangeCheckerRules<%=fileSuffix%>.h"
#include "OscConstants<%=fileSuffix%>.h"
#include <math.h>

namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {
    <%- model.getClasses().findAll(){element->rangeCheckerRules[element.name.toClassName()] != null}.each{ element->-%>
        void <%=element.name.toClassName()%>RangeCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<I<%=element.name.toClassName()%>> object)
        {
            Apply(messageLogger, nullptr, object);
        }

        void <%=element.name.toClassName()%>RangeCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<I<%=element.name.toClassName()%>> object)
        {
            Apply(nullptr, messageLogger, object);
        }

        void <%=element.name.toClassName()%>RangeCheckerRule::Apply(std::shared_ptr<IParserMessageLogger> fileMessageLogger, std::shared_ptr<ITreeMessageLogger> treeMessageLogger, std::shared_ptr<I<%=element.name.toClassName()%>> object) const
        {
            <%-Map propertyMap = rangeCheckerRules[element.name.toClassName()];-%>
            <%-List properties = element.getXmlAttributeProperties().findAll(){property-> propertyMap[property.name.toMemberName()] != null};-%>
            <%-properties.each{property -> -%>
            <%-Map rangeMap = propertyMap[property.name.toMemberName()]-%>
            if (object)
            {
                const auto k<%=property.name.toClassName()%> = object->Get<%=property.name.toClassName()%>();
                <%-if (rangeMap["upperBoundValue"]){-%>
                if (!(k<%=property.name.toClassName()%> <%=rangeMap["upperBoundOperator"]%> <%=rangeMap["upperBoundValue"].replaceFirst("java.lang.Math.PI", "M_PI")%>))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object, fileMessageLogger, OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>,std::to_string(object->Get<%=property.name.toClassName()%>()), "<%=rangeMap["upperBoundOperator"]%>", "<%=rangeMap["upperBoundValueDisplay"]%>", OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object, treeMessageLogger, OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>,std::to_string(object->Get<%=property.name.toClassName()%>()), "<%=rangeMap["upperBoundOperator"]%>", "<%=rangeMap["upperBoundValueDisplay"]%>", OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>);
                    }
                }
                <%-}-%>
                <%-if (rangeMap["lowerBoundValue"]){-%>
                if (!(k<%=property.name.toClassName()%> <%=rangeMap["lowerBoundOperator"]%> <%=rangeMap["lowerBoundValue"].replaceFirst("java.lang.Math.PI", "M_PI")%>))
                {
                    if (fileMessageLogger) 
                    {
                        LogFileContentMessage(object,  fileMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%> , std::to_string(object->Get<%=property.name.toClassName()%>()), "<%=rangeMap["lowerBoundOperator"]%>", "<%=rangeMap["lowerBoundValueDisplay"]%>", OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>);
                    } 
                    else 
                    {
                        LogTreeContentMessage(object,  treeMessageLogger,  OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%> , std::to_string(object->Get<%=property.name.toClassName()%>()), "<%=rangeMap["lowerBoundOperator"]%>", "<%=rangeMap["lowerBoundValueDisplay"]%>", OSC_CONSTANTS::ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>);
                    }
                }
                <%-}-%>
            }
            <%-}-%>
        }

    <%-}-%>
    }
}