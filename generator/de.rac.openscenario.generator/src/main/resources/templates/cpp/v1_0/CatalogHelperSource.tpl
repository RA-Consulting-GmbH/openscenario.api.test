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
 
#include "CatalogHelper<%=fileSuffix%>.h"
#include "MemLeakDetection.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {
<%= helper.makeClassJavaDoc(oscVersion, "        ")%>
       
<%- element.each{ umlClass ->-%>
        /**
        * Tests for the type I<%=umlClass.name.toClassName()%>
        * @param catalogElement the catalog element
        * @return true if the catalog element is of type I<%=umlClass.name.toClassName()%>
        */
        bool CatalogHelper::Is<%=umlClass.name.toClassName()%>(std::shared_ptr<ICatalogElement>& catalogElement)
        {
            return std::dynamic_pointer_cast<I<%=umlClass.name.toClassName()%>>(catalogElement) != nullptr;
        }

<%-}-%>
<%- element.each{ umlClass ->-%>
        /**
        * Conversion to type I<%=umlClass.name.toClassName()%>
        * @param catalogElement the catalog element
        * @return converted value of type I<%=umlClass.name.toClassName()%> or null if the catalogElement 
        * cannot be converted
        */
        std::shared_ptr<I<%=umlClass.name.toClassName()%>> CatalogHelper::As<%=umlClass.name.toClassName()%>(std::shared_ptr<ICatalogElement>& catalogElement)
        {
            if (Is<%=umlClass.name.toClassName()%>(catalogElement))
                return std::dynamic_pointer_cast<I<%=umlClass.name.toClassName()%>>(catalogElement);
            return std::shared_ptr<I<%=umlClass.name.toClassName()%>>(nullptr);
        }

<%-}-%>
        /**
        * Provides the name of the catalogElement
        * @param catalogElement the catalog element
        * @return the name of the catalogElement 
        * cannot be converted
        */
        std::string CatalogHelper::GetName(std::shared_ptr<ICatalogElement>& catalogElement)
        {
        <%- element.each{ umlClass ->-%>
            if (Is<%=umlClass.name.toClassName()%>(catalogElement))
                return std::dynamic_pointer_cast<I<%=umlClass.name.toClassName()%>>(catalogElement)->GetName();
        <%-}-%>
            return "";
        }
 
    }
}