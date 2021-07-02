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
import java.util.Hashtable;
import java.lang.Iterable;
import java.util.List;
import java.util.ArrayList;
import net.asam.openscenario.common.IParserMessageLogger;
import net.asam.openscenario.common.ITreeMessageLogger;
import net.asam.openscenario.common.IContentMessageLogger;
import net.asam.openscenario.checker.ICheckerRule;
import net.asam.openscenario.v1_0.checker.IScenarioChecker;

<%- element.each{ umlClass ->-%>
import net.asam.openscenario.v1_0.api.I<%=umlClass.name.toClassName()%>;
<%-}-%>
<%= helper.makeClassJavaDoc(oscVersion)%>
public class ScenarioCheckerImpl implements IScenarioChecker{
	
	private Hashtable<Class<?>, List<ICheckerRule<?>>> typeToCheckerRuleList = new Hashtable<>();
	@Override
	public void checkScenarioInFileContext(IParserMessageLogger messageLogger, IOpenScenario openScenario)
	{
		applyOpenScenarioCheckerRules( messageLogger, openScenario, ContextMode.MODE_FILE);
	}
	@Override
	public void checkScenarioInTreeContext(ITreeMessageLogger messageLogger, IOpenScenario openScenario)
	{
		applyOpenScenarioCheckerRules( messageLogger, openScenario, ContextMode.MODE_TREE);
	}
	
<%- element.each{ umlClass ->-%>
	@Override
	public void add<%=umlClass.name.toClassName()%>CheckerRule(ICheckerRule<I<%=umlClass.name.toClassName()%>>checkerRule)
	{
		List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(I<%=umlClass.name.toClassName()%>.class);
		if (checkerRulesForType == null)
		{
			checkerRulesForType = new ArrayList<>();
			this.typeToCheckerRuleList.put(I<%=umlClass.name.toClassName()%>.class, checkerRulesForType);
		}
		checkerRulesForType.add(checkerRule);
	}
<%-}-%>

<%- element.each{ umlClass ->-%>
	private void apply<%=umlClass.name.toClassName()%>CheckerRules(IContentMessageLogger<?> messageLogger, I<%=umlClass.name.toClassName()%> object, ContextMode contextMode)
	{
		List<ICheckerRule<?>> checkerRulesForType = this.typeToCheckerRuleList.get(I<%=umlClass.name.toClassName()%>.class);
		if (checkerRulesForType != null)
		{
			for (ICheckerRule<?> checkerRule : checkerRulesForType)
			{
			 @SuppressWarnings("unchecked")
			 ICheckerRule<I<%=umlClass.name.toClassName()%>>	typedCheckerRule =  (ICheckerRule<I<%=umlClass.name.toClassName()%>>)checkerRule;
			 if (contextMode == ContextMode.MODE_FILE)
			 {
			   typedCheckerRule.applyRuleInFileContext((IParserMessageLogger) messageLogger, object);
			 } else
			 {
			   typedCheckerRule.applyRuleInTreeContext((ITreeMessageLogger) messageLogger, object);
			 }
			}
		}
		// getChildren
		<%-properties = umlClass.getXmlElementProperties();-%>
		<%-	properties.each { property -> -%>
			<%-if (property.isList()){-%>
		Iterable<I<%=property.type.name.toClassName()%>> <%=property.name.toMemberName()%> = object.get<%=property.name.toClassName()%>();
		if (<%=property.name.toMemberName()%> != null)
		{
			for(I<%=property.type.name.toClassName()%> listItem: <%=property.name.toMemberName()%>)
			{
				apply<%=property.type.name.toClassName()%>CheckerRules(messageLogger, listItem, contextMode);
			}
		}
			<%-} else {-%>
		I<%=property.type.name.toClassName()%> <%=property.name.toMemberName()%> = object.get<%=property.name.toClassName()%>();
		if (<%=property.name.toMemberName()%> != null)
		{
			apply<%=property.type.name.toClassName()%>CheckerRules(messageLogger, <%=property.name.toMemberName()%>, contextMode);
		}
			<%-}-%>
		<%-}-%>
	}
<%-}-%>
private enum ContextMode{
	MODE_TREE, MODE_FILE;
}
}