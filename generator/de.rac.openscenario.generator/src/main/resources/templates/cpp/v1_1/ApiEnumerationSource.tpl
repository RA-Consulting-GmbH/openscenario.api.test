
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
 
#include "Enumerations<%=fileSuffix%>.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace <%=versionNamespace%>
    {
    <%- model.getEnumerations().each{ element->-%>
	    	std::map<std::string, <%=element.name.toClassName()%>::<%=element.name.toClassName()%>Enum> <%=element.name.toClassName()%>::_stringToEnum = 
	        {
	            <%- element.enumerationValues.each{ property ->-%>
	            {"<%=property.literal.toMemberName()%>", <%=property.literal.toUpperNameFromMemberName()%>},
	            <%-}-%>
	        };
	        
	        <%-if (element.hasDeprecatedLiterals()){-%>
            std::map<<%=element.name.toClassName()%>::<%=element.name.toClassName()%>Enum, bool> <%=element.name.toClassName()%>::_enumToDeprecated =
            {
            	<%- element.enumerationValues.each{ property ->-%>
            		<%- if(property.isDeprecated()){-%>
	            {<%=element.name.toClassName()%>::<%=property.literal.toUpperNameFromMemberName()%>, true},
	            	<%-} else {-%>
	            {<%=element.name.toClassName()%>::<%=property.literal.toUpperNameFromMemberName()%>, false},
	           		 <%-}-%>
	            <%-}-%>
            };
            std::map<<%=element.name.toClassName()%>::<%=element.name.toClassName()%>Enum, std::string> <%=element.name.toClassName()%>::_enumToDeprecatedVersion
            {
            	<%- element.enumerationValues.each{ property ->-%>
            	<%- if(property.isDeprecated() && property.getDeprecatedVersion()){-%>
	            {<%=element.name.toClassName()%>::<%=property.literal.toUpperNameFromMemberName()%>, "<%=property.getDeprecatedVersion().replaceAll("\"", "\\\\\"")%>"},
	            <%-} else {-%>
	            {<%=element.name.toClassName()%>::<%=property.literal.toUpperNameFromMemberName()%>, ""},
	            <%-}-%>
	            <%-}-%>
            };
            std::map<<%=element.name.toClassName()%>::<%=element.name.toClassName()%>Enum, std::string> <%=element.name.toClassName()%>::_enumToDeprecatedComment
            {
            <%- element.enumerationValues.each{ property ->-%>
            	<%- if(property.isDeprecated() && property.getDeprecatedComment()){-%>
	            {<%=element.name.toClassName()%>::<%=property.literal.toUpperNameFromMemberName()%>, "<%=property.getDeprecatedComment().replaceAll("\"", "\\\\\"")%>"},
	            <%-} else {-%>
	            {<%=element.name.toClassName()%>::<%=property.literal.toUpperNameFromMemberName()%>, ""},
	            <%-}-%>
	            <%-}-%>
            };  
            
                   	
            <%}-%>
	        
            <%=element.name.toClassName()%>::<%=element.name.toClassName()%>()
            {
                _literal = k<%=element.name.toClassName()%>EnumString[0];
                _<%=element.name.toMemberName()%>Enum = GetFromLiteral(_literal);
            }

            <%=element.name.toClassName()%>::<%=element.name.toClassName()%>(<%=element.name.toClassName()%>Enum& <%=element.name.toMemberName()%>)
            {
                _literal = k<%=element.name.toClassName()%>EnumString[<%=element.name.toMemberName()%>+1];
                _<%=element.name.toMemberName()%>Enum = GetFromLiteral(_literal);
            }

            <%=element.name.toClassName()%>::<%=element.name.toClassName()%>(const <%=element.name.toClassName()%>Enum <%=element.name.toMemberName()%>)
            {
                _literal = k<%=element.name.toClassName()%>EnumString[<%=element.name.toMemberName()%>+1];
                _<%=element.name.toMemberName()%>Enum = GetFromLiteral(_literal);
            }

            <%=element.name.toClassName()%>::<%=element.name.toClassName()%>(std::string& literal_):_literal(literal_) 
            {
                _<%=element.name.toMemberName()%>Enum = GetFromLiteral(_literal);
            }

            bool <%=element.name.toClassName()%>::IsDeprecated(const <%=element.name.toClassName()%>Enum <%=element.name.toMemberName()%>)
            { 
              <%-if (!element.hasDeprecatedLiterals()){-%>
            	return false;
              <%-} else {-%>
              	return _enumToDeprecated[<%=element.name.toMemberName()%>];
              <%-}-%>
            }
			
			std::string <%=element.name.toClassName()%>::GetDeprecatedVersion(const <%=element.name.toClassName()%>Enum <%=element.name.toMemberName()%>)
			{
			  <%-if (!element.hasDeprecatedLiterals()){-%>
            	return "";
              <%-} else {-%>
              	return _enumToDeprecatedVersion[<%=element.name.toMemberName()%>];
              <%-}-%>
			}

			std::string <%=element.name.toClassName()%>::GetDeprecatedComment(const <%=element.name.toClassName()%>Enum <%=element.name.toMemberName()%>)
			{
			  <%-if (!element.hasDeprecatedLiterals()){-%>
            	return "";
              <%-} else {-%>
              	return _enumToDeprecatedComment[<%=element.name.toMemberName()%>];
              <%-}-%>
		}
            
            std::string <%=element.name.toClassName()%>::GetLiteral() const 
            { 
            	return _literal;
            }

            <%=element.name.toClassName()%>& <%=element.name.toClassName()%>::operator= (const <%=element.name.toClassName()%>Enum &rhs)
            {
                _<%=element.name.toMemberName()%>Enum = rhs;
                _literal = k<%=element.name.toClassName()%>EnumString[_<%=element.name.toMemberName()%>Enum+1];
                return *this;
            }

            <%=element.name.toClassName()%>& <%=element.name.toClassName()%>::operator= (const <%=element.name.toClassName()%> &rhs ) 
            { 
                _literal = rhs._literal;
                _<%=element.name.toMemberName()%>Enum = rhs._<%=element.name.toMemberName()%>Enum;
                return *this;
            }

            bool <%=element.name.toClassName()%>::operator== (const <%=element.name.toClassName()%>Enum &rhs) const
            {
                return _<%=element.name.toMemberName()%>Enum == rhs;
            }

            <%=element.name.toClassName()%>::<%=element.name.toClassName()%>Enum <%=element.name.toClassName()%>::GetFromLiteral(const std::string literal_)
            {
                const auto kIt = _stringToEnum.find(literal_);
                if (kIt != _stringToEnum.end())
                    return kIt->second;
                return UNKNOWN;
            }

<%-}-%>
    }
}
