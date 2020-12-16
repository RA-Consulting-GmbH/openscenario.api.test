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
package <%=xmlPackageName%>;

import net.asam.openscenario.v1_0.api.ICatalogElement;
<%- element.each{ umlClass ->-%>
import net.asam.openscenario.v1_0.api.I<%=umlClass.name.toClassName()%>;
<%-}-%>

<%= helper.makeClassJavaDoc(oscVersion)%>
public class CatalogHelper {
	
<%- element.each{ umlClass ->-%>
	/**
	 * Tests for the type I<%=umlClass.name.toClassName()%>
	 * @param catalogElement the catalog element
	 * @return true if the catalog element is of type I<%=umlClass.name.toClassName()%>
	 */
	public static boolean is<%=umlClass.name.toClassName()%>(ICatalogElement catalogElement)
	{
		return catalogElement instanceof I<%=umlClass.name.toClassName()%>;
	}
<%-}-%>
	
<%- element.each{ umlClass ->-%>
	/**
	 * Conversion to type I<%=umlClass.name.toClassName()%>
	 * @param catalogElement the catalog element
	 * @return converted value of type I<%=umlClass.name.toClassName()%> or null if the catalogElement 
	 * cannot be converted
	 */
	public static I<%=umlClass.name.toClassName()%> as<%=umlClass.name.toClassName()%>(ICatalogElement catalogElement)
	{
		if (is<%=umlClass.name.toClassName()%>(catalogElement))
		{
			return ( I<%=umlClass.name.toClassName()%>) catalogElement;
		}
		return null;
		
	}
<%-}-%>
	/**
	 * Provides the name of the catalogElement
	 * @param catalogElement the catalog element
	 * @return the name of the catalogElement 
	 * cannot be converted
	 */
	public static String getName(ICatalogElement catalogElement)
	{
	<%- element.each{ umlClass ->-%>
		if (is<%=umlClass.name.toClassName()%>(catalogElement))
		{
			return (( I<%=umlClass.name.toClassName()%>) catalogElement).getName();
		}
	<%-}-%>
		return null;
	}

}