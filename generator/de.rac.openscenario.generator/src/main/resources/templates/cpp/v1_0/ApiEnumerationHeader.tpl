
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
#include <map>
#include <vector>
#include "DateTime.h"
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
    <%- model.getEnumerations().each{ element->-%>
<%= helper.makeClassJavaDoc(element, oscVersion, "        ")%>
        class <%=element.name.toClassName()%> 
        {
        public:
            enum <%=element.name.toClassName()%>Enum
            {
                UNKNOWN = -1,
                <%- helper.getEnumElementsCpp(element).each{ enumLiteralElement ->-%>
                <%=enumLiteralElement%>
                <%-}-%>
            };

        private:
            std::string _literal;
            <%=element.name.toClassName()%>Enum _<%=element.name.toMemberName()%>Enum;
            static std::map<std::string, <%=element.name.toClassName()%>Enum> _stringToEnum;

        public:
            const std::vector<std::string> k<%=element.name.toClassName()%>EnumString 
            {
                "UNKNOWN",
                <%- element.enumerationValues.each{ property ->-%>
                "<%=property.literal.toMemberName()%>",
                <%-}-%>
            };

            /**
             * Default Constructor
             */
            OPENSCENARIOLIB_EXP <%=element.name.toClassName()%>();

            OPENSCENARIOLIB_EXP <%=element.name.toClassName()%>(<%=element.name.toClassName()%>Enum& <%=element.name.toMemberName()%>);

            OPENSCENARIOLIB_EXP <%=element.name.toClassName()%>(const <%=element.name.toClassName()%>Enum <%=element.name.toMemberName()%>);

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP <%=element.name.toClassName()%>(std::string& literal_);

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            OPENSCENARIOLIB_EXP std::string GetLiteral() const;

            OPENSCENARIOLIB_EXP <%=element.name.toClassName()%>& operator= (const <%=element.name.toClassName()%>Enum &rhs);

            OPENSCENARIOLIB_EXP <%=element.name.toClassName()%>& operator= (const <%=element.name.toClassName()%> &rhs );

            OPENSCENARIOLIB_EXP bool operator== (const <%=element.name.toClassName()%>Enum &rhs) const;
            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            OPENSCENARIOLIB_EXP static <%=element.name.toClassName()%>Enum GetFromLiteral(const std::string literal_);

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
