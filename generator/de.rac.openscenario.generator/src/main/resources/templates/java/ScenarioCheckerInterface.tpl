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
import net.asam.openscenario.checker.ICheckerRule;

<%- element.each{ umlClass ->-%>
import net.asam.openscenario.v1_0.api.I<%=umlClass.name.toClassName()%>;
<%-}-%>
<%= helper.makeClassJavaDoc(oscVersion)%>
public interface IScenarioChecker {
   /**
    * Checks the scenario in a file context
    * @param messageLogger the logger for file context
    * @param openScenario the root of the tree
    */
	public void checkScenarioInFileContext(IParserMessageLogger messageLogger, IOpenScenario openScenario);
   /**
    * Checks the scenario in a tree context
    * @param messageLogger the logger for tree context
    * @param openScenario the root of the tree
    */public void checkScenarioInTreeContext(ITreeMessageLogger messageLogger, IOpenScenario openScenario);
<%- element.each{ umlClass ->-%>
	public void add<%=umlClass.name.toClassName()%>CheckerRule(ICheckerRule<I<%=umlClass.name.toClassName()%>>checkerRule);
<%-}-%>
}