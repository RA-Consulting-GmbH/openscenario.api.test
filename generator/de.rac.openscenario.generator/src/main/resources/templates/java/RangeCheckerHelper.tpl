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
import net.asam.openscenario.v1_0.checker.IScenarioChecker;

<%- element.each{ umlClass ->-%>
import net.asam.openscenario.v1_0.checker.range.<%=umlClass.name.toClassName()%>RangeCheckerRule;
<%-}-%>

<%= helper.makeClassJavaDoc(oscVersion)%>
public class RangeCheckerHelper {
	/**
	 * Connects all range checker rules to a global scenarioChecker
	 * @param scenarioChecker the global scenarioChecker
	 */
	public static void addAllRangeCheckerRules(IScenarioChecker scenarioChecker)
	{
		<%- element.each{ umlClass ->-%>
		scenarioChecker.add<%=umlClass.name.toClassName()%>CheckerRule(new <%=umlClass.name.toClassName()%>RangeCheckerRule());
		<%-}-%>
	}
}