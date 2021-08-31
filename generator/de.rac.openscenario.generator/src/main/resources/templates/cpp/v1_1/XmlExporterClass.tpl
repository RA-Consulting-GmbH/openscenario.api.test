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
#include "ApiClassWriterInterfaces<%=fileSuffix%>.h"
#include "MemLeakDetection.h"
#include "tinyxml2.h"
#include "ExportDefinitions.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {
<%= helper.makeClassJavaDoc(element, oscVersion, "        ")%>

        class OpenScenarioXmlExporter  
        {

        public:
            OPENSCENARIOLIB_EXP std::shared_ptr<tinyxml2::XMLDocument> CreateXmlDocument(std::shared_ptr<IOpenScenarioWriter> openScenarioWriter);
        private:
<%- element.getClasses().each{ umlClass ->-%>

            /**
            * Fills a dom element of type <%=umlClass.name.toClassName()%>
            * @param document the xml document to create child elements
            * @param elementNode the element node to fill
            * @param <%=umlClass.name.toMemberName()%>Writer the writer the element is filled from.
            */
            void Fill<%=umlClass.name.toClassName()%>Node(std::shared_ptr<tinyxml2::XMLDocument> document, tinyxml2::XMLNode* elementNode, std::shared_ptr<I<%=umlClass.name.toClassName()%>Writer> <%=umlClass.name.toMemberName()%>Writer);
<%-}-%>
        };

    }
}

