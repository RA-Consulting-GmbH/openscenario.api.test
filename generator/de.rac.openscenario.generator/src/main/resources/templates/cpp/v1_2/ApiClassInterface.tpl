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
#include "INamedReference.h"
#include "Enumerations<%=fileSuffix%>.h"
#include "OscInterfaces<%=fileSuffix%>.h"
#include "MemLeakDetection.h"

#ifdef ABSOLUTE
    #define ABSOLUTE_WAS_SET ABSOLUTE
    #undef ABSOLUTE
#endif

#ifdef RELATIVE
    #define RELATIVE_WAS_SET RELATIVE
    #undef RELATIVE
#endif

namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {

    <%- model.getClasses().each{ element->-%>
        class I<%=element.name.toClassName()%>;
    <%-}-%>


    <%- model.getClasses().each{ element->-%>

<%= helper.makeClassJavaDoc(element, oscVersion, "        ")%>
        class I<%=element.name.toClassName()%> <%=helper.getExtendsExpressionCpp(element)%>
        {
        public:
            virtual ~I<%=element.name.toClassName()%>() = default;
<% List properties = element.umlProperties-%>
<%properties.each{ property ->-%>

<%=helper.makeGetterCppDoc(element, property, "            ")%>
<%-if (property.isList()) {-%>
            virtual std::vector<<%=property.type.toCppName()%>> Get<%=property.name.toClassName()%>() const
            {
                return std::vector<<%=property.type.toCppName()%>>();
            }
<%}else if (property.isProxy()){-%>
            virtual std::shared_ptr<INamedReference<<%=property.type.toCppTemplateName()%>>> Get<%=property.name.toClassName()%>() const
            {
                return std::make_shared<INamedReference<<%=property.type.toCppTemplateName()%>>>();
            }
<%}else{-%>
            virtual <%=property.type.toCppName()%> Get<%=property.name.toClassName()%>() const
            {
                return <%=property.type.toCppDefaultValue()%>;
            }
<%}}-%>

<%-properties.each{ property ->-%>
<%-if (property.isList()) {-%>
            /**
            * Retrieves the size of the list
            * @return the size of the list
            */
            virtual int Get<%=property.name.toClassName()%>Size() const { return 0; }

            /**
            * The element at specific index
            * @param index the index of the list
            * @return the element at index
            */
            virtual <%=property.type.toCppName()%> Get<%=property.name.toClassName()%>AtIndex(const unsigned int index) const
            {
                return <%=property.type.toCppDefaultValue()%>;
            }
<%-}}-%>

<%-properties.each{ property ->-%>
            /**
            * Retrieves whether property <%=property.name.toMemberName()%> is set
            * @return true when the property is set
            */
            virtual bool IsSet<%=property.name.toClassName()%>() const = 0;
<%-}-%>

        };

<%-}-%>
    }
}

#ifdef ABSOLUTE_WAS_SET
    #define ABSOLUTE ABSOLUTE_WAS_SET
    #undef ABSOLUTE_WAS_SET
#endif

#ifdef RELATIVE_WAS_SET
    #define RELATIVE RELATIVE_WAS_SET
    #undef RELATIVE_WAS_SET
#endif
