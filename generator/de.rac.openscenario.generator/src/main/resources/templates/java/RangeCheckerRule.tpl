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


import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.ITreeMessageLogger;
import net.asam.openscenario.v1_0.api.I<%=element.name.toClassName()%>;
import net.asam.openscenario.checker.RangeCheckerRule;
import net.asam.openscenario.v1_0.common.OscConstants;

<%= helper.makeClassJavaDoc(element, oscVersion)%>
public class <%=element.name.toClassName()%>RangeCheckerRule  extends RangeCheckerRule<I<%=element.name.toClassName()%>>
{

	/**
	 * Default constructor
	 */
	public <%=element.name.toClassName()%>RangeCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRuleInFileContext(IParserMessageLogger messageLogger, I<%=element.name.toClassName()%> object)
	{
		apply (messageLogger, null, object);
	}	
	
	@Override
	public void applyRuleInTreeContext(ITreeMessageLogger messageLogger, I<%=element.name.toClassName()%> object)
	{
		apply(null, messageLogger, object);
	}
	
	private void apply(IParserMessageLogger fileMessageLogger ,ITreeMessageLogger treeMessageLogger, I<%=element.name.toClassName()%> object)
	{
		<%-Map propertyMap = rangeCheckerRules[element.name.toClassName()];-%>
		<%-List properties = element.getXmlAttributeProperties().findAll(){property-> propertyMap[property.name.toMemberName()] != null};-%>
		<%-properties.each{property -> -%>
		<%-Map rangeMap = propertyMap[property.name.toMemberName()]-%>
		<%=property.type.toJavaName()%> <%=property.name.toMemberName()%> = object.get<%=property.name.toClassName()%>();
		if (<%=property.name.toMemberName()%> != null)
		{
		 	<%-if (rangeMap["upperBoundValue"]){-%>
		 	if (!(<%=property.name.toMemberName()%> <%=rangeMap["upperBoundOperator"]%> <%=rangeMap["upperBoundValue"]%>))
		 	{
		 		if (fileMessageLogger != null)
		 		{
		 		 logFileContentMessage(object,  fileMessageLogger,  OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, object.get<%=property.name.toClassName()%>().toString(), "<%=rangeMap["upperBoundOperator"]%>", "<%=rangeMap["upperBoundValueDisplay"]%>", OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>);
		 		}else{
		 		 logTreeContentMessage(object,  treeMessageLogger,  OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, object.get<%=property.name.toClassName()%>().toString(), "<%=rangeMap["upperBoundOperator"]%>", "<%=rangeMap["upperBoundValueDisplay"]%>", OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>);
		 		}
		 	}
		 	<%-}-%>
		 	<%-if (rangeMap["lowerBoundValue"]){-%>
		 	if (!(<%=property.name.toMemberName()%> <%=rangeMap["lowerBoundOperator"]%> <%=rangeMap["lowerBoundValue"]%>))
		 	{
		 		if (fileMessageLogger != null)
		 		{
		 		 logFileContentMessage(object,  fileMessageLogger,  OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%> , object.get<%=property.name.toClassName()%>().toString(), "<%=rangeMap["lowerBoundOperator"]%>", "<%=rangeMap["lowerBoundValueDisplay"]%>", OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>);
		 		}else{
		 		 logTreeContentMessage(object,  treeMessageLogger,  OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%> , object.get<%=property.name.toClassName()%>().toString(), "<%=rangeMap["lowerBoundOperator"]%>", "<%=rangeMap["lowerBoundValueDisplay"]%>", OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>);
		 		}
		 	}
		 	<%-}-%>
		}
		<%-}-%>
	}
}