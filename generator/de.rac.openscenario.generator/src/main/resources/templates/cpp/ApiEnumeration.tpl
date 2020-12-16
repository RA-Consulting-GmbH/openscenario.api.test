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

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
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
            <%=element.name.toClassName()%>()
            {
                _literal = k<%=element.name.toClassName()%>EnumString[0];
                _<%=element.name.toMemberName()%>Enum = GetFromLiteral(_literal);
            }

            <%=element.name.toClassName()%>(<%=element.name.toClassName()%>Enum& <%=element.name.toMemberName()%>)
            {
                _literal = k<%=element.name.toClassName()%>EnumString[<%=element.name.toMemberName()%>];
                _<%=element.name.toMemberName()%>Enum = GetFromLiteral(_literal);
            }

            /**
             * Constructor using the literal
             * @param literal_ as defined in OpenSCENARIO
             */
            <%=element.name.toClassName()%>(std::string& literal_):_literal(literal_) 
            {
                _<%=element.name.toMemberName()%>Enum = GetFromLiteral(_literal);
            }

            /**
             * The literal from this enumeration value.
             * @return the literal as defined in OpenSCENARIO
             */
            std::string GetLiteral() const { return _literal;}

            <%=element.name.toClassName()%>& operator= (const <%=element.name.toClassName()%>Enum &rhs)
            {
                _<%=element.name.toMemberName()%>Enum = rhs;
                if (_<%=element.name.toMemberName()%>Enum > -1)
                    _literal = k<%=element.name.toClassName()%>EnumString[_<%=element.name.toMemberName()%>Enum];
                else
                    _literal = "unknown";
                return *this;
            }

            <%=element.name.toClassName()%>& operator= (const <%=element.name.toClassName()%> &rhs ) 
            { 
                 _literal = rhs._literal;
                _<%=element.name.toMemberName()%>Enum = rhs._<%=element.name.toMemberName()%>Enum;
                return *this;
            }

            bool operator== (const <%=element.name.toClassName()%>Enum &rhs) const
            {
                return _<%=element.name.toMemberName()%>Enum == rhs;
            }

            /**
             * The enumeration value from the literal
             * @param literal_ as defined in OpenSCENARIO
             * @return the enumeration value
             */
            static <%=element.name.toClassName()%>Enum GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

        };


<%-}-%>
    }
}
