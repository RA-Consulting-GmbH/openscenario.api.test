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
#include "IScenarioChecker<%=fileSuffix%>.h"
#include "ApiClassInterfaces<%=fileSuffix%>.h"
#include "MemLeakDetection.h"
#include <memory>
#include "ExportDefinitions.h"
#include "IContentMessageLogger.h"
#include "ITreeMessageLogger.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {
<%= helper.makeClassJavaDoc(oscVersion, "        ")%>
        class ScenarioCheckerImpl: public IScenarioChecker
        {
        private:
            enum ContextMode { MODE_TREE, MODE_FILE };

            //string is typeid(class).name()
            std::map<std::string, std::vector<std::shared_ptr<CheckerRule>>> _typeToCheckerRuleList;
    	<%- element.each{ umlClass ->-%>
   	        void Apply<%=umlClass.name.toClassName()%>CheckerRules(std::shared_ptr<IContentMessageLogger> messageLogger, const std::shared_ptr<IOpenScenarioModelElement> object, const ContextMode contextMode)
	        {
	            auto checkerRulesForType = _typeToCheckerRuleList[typeid(I<%=umlClass.name.toClassName()%>).name()];
	            
	            auto typedObject = std::dynamic_pointer_cast<I<%=umlClass.name.toClassName()%>>(object);
	            if ( !checkerRulesForType.empty() )
	            {
	                for (auto& checkerRule:checkerRulesForType)
	                {
	                    auto typedCheckerRule = std::dynamic_pointer_cast<ICheckerRule> (checkerRule);
	                    if (contextMode == MODE_FILE) 
	                    {
	                        typedCheckerRule->ApplyRuleInFileContext(std::dynamic_pointer_cast<IParserMessageLogger>(messageLogger), typedObject);
	                    }
	                    else
	                    {
	                        typedCheckerRule->ApplyRuleInTreeContext(std::dynamic_pointer_cast<ITreeMessageLogger>(messageLogger), typedObject);
	                    }
	                }
	            }
	
	            // getChildren
	            <%-properties = umlClass.getXmlElementProperties();-%>
	            <%- properties.each { property -> -%>
	                <%-if (property.isList()){-%>
	            const auto k<%=property.name.toClassName()%> = typedObject->Get<%=property.name.toClassName()%>();
	            for(auto& kListItem: k<%=property.name.toClassName()%>)
	            {
	                if ( kListItem )
	                    Apply<%=property.type.name.toClassName()%>CheckerRules(messageLogger, kListItem, contextMode);
	            }
	                <%-} else {-%>
	            const auto k<%=property.name.toClassName()%> = typedObject->Get<%=property.name.toClassName()%>();
	            if ( k<%=property.name.toClassName()%>)
	            {
	                Apply<%=property.type.name.toClassName()%>CheckerRules(messageLogger, k<%=property.name.toClassName()%>, contextMode);
	            }
	                <%-}-%>
	            <%-}-%>
	        }
           <%-}-%>

        public:
            OPENSCENARIOLIB_EXP void CheckScenarioInFileContext(std::shared_ptr<IContentMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> openScenario) override;
            OPENSCENARIOLIB_EXP void CheckScenarioInTreeContext(std::shared_ptr<IContentMessageLogger> messageLogger, std::shared_ptr<IOpenScenario> openScenario) override;
    <%- element.each{ umlClass ->-%>
            OPENSCENARIOLIB_EXP void Add<%=umlClass.name.toClassName()%>CheckerRule(std::shared_ptr<ICheckerRule> checkerRule) override;
    <%-}-%>
        };
    }
}