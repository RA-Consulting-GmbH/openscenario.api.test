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


import net.asam.openscenario.checker.model.UnionCheckerRule;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.ITreeMessageLogger;
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.v1_0.api.I<%=element.name.toClassName()%>;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.TreeContentMessage;
import net.asam.openscenario.checker.tree.PropertyTreeContext;
import java.util.List;
import java.util.ArrayList;

<%= helper.makeClassJavaDoc(element, oscVersion)%>
public class <%=element.name.toClassName()%>UnionCheckerRule  extends UnionCheckerRule<I<%=element.name.toClassName()%>>
{

	/**
	 * Default constructor
	 */
	public <%=element.name.toClassName()%>UnionCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRuleInFileContext(IParserMessageLogger messageLogger, I<%=element.name.toClassName()%> object)
	{
		List<String> propertyNamesNotNull = getNotNullChildren(object);
		if (propertyNamesNotNull.size() > 1)
		{
		  messageLogger.logMessage(new FileContentMessage( getTooManyMessage(propertyNamesNotNull) ,ErrorLevel.ERROR, getTextmarker(object)));
		}
		<%-if (!(properties.findAll(){property-> property.lower==0})){-%>
		// There must be one item set
		if (propertyNamesNotNull.size() == 0)
		{
			messageLogger.logMessage(new FileContentMessage( getTooFewMessage(propertyNamesNotNull) ,ErrorLevel.ERROR,  getTextmarker(object)));
		}
		<%-}-%>
	}
	
	private List<String> getNotNullChildren(I<%=element.name.toClassName()%> object)
	{
		List<String> propertyNamesNotNull = new ArrayList<>();
		<%-properties = element.getXmlElementProperties();-%>
		<%-properties.each{ property -> -%>
		<%-if (!property.isList()){-%>
		if (object.get<%=property.name.toClassName()%>() != null)
		<%-}else{-%>
		if (object.get<%=property.name.toClassName()%>Size() != 0)
		<%-}-%>
		{
			propertyNamesNotNull.add(OscConstants.ELEMENT__<%=property.name.toUpperNameFromMemberName()%>);
		}
		
		<%-}-%>
		return propertyNamesNotNull;
	}
	
	<%-if (!(properties.findAll(){property-> property.lower==0})){-%>
	private List<String> getAllChildren()
	{
		List<String> propertyNamesNotNull = new ArrayList<>();
		<%-properties = element.getXmlElementProperties();-%>
		<%-properties.each{ property -> -%>
		propertyNamesNotNull.add(OscConstants.ELEMENT__<%=property.name.toUpperNameFromMemberName()%>);	
		<%-}-%>
		return propertyNamesNotNull;
	}
	<%-}-%>
	
	@Override
	public void applyRuleInTreeContext(ITreeMessageLogger messageLogger, I<%=element.name.toClassName()%> object)
	{
		List<String> propertyNamesNotNull = getNotNullChildren(object);
		if (propertyNamesNotNull.size() > 1)
		{
		  messageLogger.logMessage(new TreeContentMessage( getTooManyMessage(propertyNamesNotNull) ,ErrorLevel.ERROR, new PropertyTreeContext(object, propertyNamesNotNull)));
		}
		<%-if (!(properties.findAll(){property-> property.lower==0})){-%>
		// There must be one item set
		if (propertyNamesNotNull.size() == 0)
		{
		 messageLogger.logMessage(new TreeContentMessage( getTooFewMessage(propertyNamesNotNull) ,ErrorLevel.ERROR, new PropertyTreeContext(object, getAllChildren())));
		}
		<%-}-%>
	}
}