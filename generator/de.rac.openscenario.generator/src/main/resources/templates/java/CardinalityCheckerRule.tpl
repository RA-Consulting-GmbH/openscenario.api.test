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


import net.asam.openscenario.checker.model.CardinalityCheckerRule;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.ITreeMessageLogger;
import net.asam.openscenario.common.ErrorLevel;
import net.asam.openscenario.v1_0.api.I<%=element.name.toClassName()%>;
import net.asam.openscenario.v1_0.common.OscConstants;
import net.asam.openscenario.common.FileContentMessage;
import net.asam.openscenario.common.TreeContentMessage;
import net.asam.openscenario.checker.tree.PropertyTreeContext;
<%-properties = element.umlProperties.findAll{p-> p.isList()};-%>
<%-properties.each{ property -> -%>
import net.asam.openscenario.v1_0.api.I<%=property.type.name.toClassName()%>;
<%-}-%>

import java.util.List;
import java.util.ArrayList;

<%= helper.makeClassJavaDoc(element, oscVersion)%>
public class <%=element.name.toClassName()%>CardinalityCheckerRule  extends CardinalityCheckerRule<I<%=element.name.toClassName()%>>
{

	/**
	 * Default constructor
	 */
	public <%=element.name.toClassName()%>CardinalityCheckerRule()
	{
		super();
	}
	
	@Override
	public void applyRuleInFileContext(IParserMessageLogger messageLogger, I<%=element.name.toClassName()%> object)
	{
		List<CardinalityViolation> violations = getAllViolations(object);
		for (CardinalityViolation violation : violations)
		{
			String message = getMessage(violation);
			
			messageLogger.logMessage(new FileContentMessage( message ,ErrorLevel.ERROR, getTextmarker(object)));
		}
	}
	private String getMessage(CardinalityViolation violation)
	{
		String message = null;
		if (violation.violationType ==  ViolationType.REQUIRED)
		{
			message = getRequiredMessage(violation.propertyName);
			
		}else if (violation.violationType ==  ViolationType.TOO_FEW)
		{
			message = getTooFewMessage(violation.propertyName, violation.expected, violation.actual);
		} else if (violation.violationType ==  ViolationType.TOO_MANY)
		{
			message = getTooManyMessage(violation.propertyName, violation.expected, violation.actual);
		}else
		{
			message = getRequiredContentMessage();
		}
		return message;
	}
	private List<CardinalityViolation> getAllViolations(I<%=element.name.toClassName()%> object)
	{
		List<CardinalityViolation> violations = new ArrayList<>();
		<%-properties = element.umlProperties;-%>
		<%-properties.each{ property -> -%>
		<%-if (!property.isOptional() && !property.isOptionalUnboundList() && !property.isTransient()){-%>
			// Check violation
			<%-if (property.isList() && (property.lower != 0 || property.upper > 0)){-%>
			int <%=property.name.toMemberName()%>Size = object.get<%=property.name.toClassName()%>Size();
			<%-if (property.lower != 0){-%>
			// Check too few elements
			if (<%=property.name.toMemberName()%>Size < <%=property.lower%>)
			{
				violations.add(new CardinalityViolation(OscConstants.ELEMENT__<%=property.getXmlTagName().toUpperNameFromMemberName()%>, <%=property.lower%>, <%=property.name.toMemberName()%>Size, ViolationType.TOO_FEW));
			}
			<%-} -%>
			<%- if (property.upper > 0 ){-%>
			// Check too many elements
			if (<%=property.name.toMemberName()%>Size > <%=property.upper%>)
			{
				violations.add(new CardinalityViolation(OscConstants.ELEMENT__<%=property.getXmlTagName().toUpperNameFromMemberName()%>, <%=property.upper%>, <%=property.name.toMemberName()%>Size, ViolationType.TOO_MANY));
			}
			<%-}-%>
			<%-}else{ -%>
			// Check required
			if (object.get<%=property.name.toClassName()%>() == null)
			{
				<%- if (property.appliedStereotypes.find(){s -> s.getName() == "XSDattribute"}){-%>
				violations.add(new CardinalityViolation(OscConstants.ATTRIBUTE__<%=property.name.toUpperNameFromMemberName()%>, 0, 1, ViolationType.REQUIRED));
				<%-}else if (element.isSimpleContent()) {-%>
				violations.add(new CardinalityViolation(null, 0, 1, ViolationType.REQUIRED_SIMPLE_CONTENT));
				<%-} else {-%>
				violations.add(new CardinalityViolation(OscConstants.ELEMENT__<%=property.getXmlTagName().toUpperNameFromMemberName()%>, 0, 1, ViolationType.REQUIRED));
				<%-}-%>
				
			}
			<%-}-%>
		<%-}-%>
		<%-}-%>		
		return violations;
	}
	
	
	
	@Override
	public void applyRuleInTreeContext(ITreeMessageLogger messageLogger, I<%=element.name.toClassName()%> object)
	{
		List<CardinalityViolation> violations = getAllViolations(object);
		for (CardinalityViolation violation : violations)
		{
			String message = getMessage(violation);
			
			messageLogger.logMessage(new TreeContentMessage( message ,ErrorLevel.ERROR, PropertyTreeContext.create(object,violation.propertyName )));
		}
	}
	
}