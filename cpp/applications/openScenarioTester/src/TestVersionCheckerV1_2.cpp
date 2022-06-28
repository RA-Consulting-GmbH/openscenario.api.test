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

#include "TestVersionCheckerV1_2.h"
#include "VersionCheckerRuleV1_2.h"
#include "ScenarioLoaderException.h"
namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
	{

		void TestVersionChecker::ApplyCheckerRulesFileContext(std::shared_ptr<IOpenScenario> openScenario, int majorRev, int minorRev) const
		{
			ScenarioCheckerImpl scenarioChecker;
			scenarioChecker.AddFileHeaderCheckerRule(std::make_shared<VersionCheckerRule>(majorRev, minorRev));
			scenarioChecker.CheckScenarioInFileContext(_messageLogger, openScenario);
		}

		void TestVersionChecker::ApplyCheckerRulesTreeContext(std::shared_ptr<IOpenScenario> openScenario, int majorRev, int minorRev, std::shared_ptr<NET_ASAM_OPENSCENARIO::TreeMessageLogger> messageLogger) const {
			ScenarioCheckerImpl scenarioChecker;
			scenarioChecker.AddFileHeaderCheckerRule(std::make_shared<VersionCheckerRule>(majorRev, minorRev));
			scenarioChecker.CheckScenarioInTreeContext(messageLogger, openScenario);
		}


		TestVersionChecker::TestVersionChecker(std::string& executablePath) : TestBase(executablePath) {}

		bool TestVersionChecker::TestSuccess()
		{
			try 
			{
				std::string filename = _executablePath + "/" + kInputDir + "DoubleLaneChanger1_2.xosc";
				auto openScenario = std::dynamic_pointer_cast<IOpenScenario>(ExecuteParsing(filename));
				auto treeMessageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::TreeMessageLogger>(NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING);

				// File Context
				ApplyCheckerRulesFileContext(openScenario, 0, 9);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				auto res = Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING, _messageLogger), ASSERT_LOCATION);

				// Tree Context
				ApplyCheckerRulesTreeContext(openScenario, 0, 9, treeMessageLogger);
				res = res && Assert(treeMessageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR).size()==0, ASSERT_LOCATION);

				// File Context
				ApplyCheckerRulesFileContext(openScenario, 1, 0);
				auto msg = NET_ASAM_OPENSCENARIO::FileContentMessage("Major revision and minor revision are expected to be 1 and 0",
																NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING,
																		NET_ASAM_OPENSCENARIO::Textmarker(20, 2, filename));
				messages.push_back(msg);

				res = res && Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING, _messageLogger), ASSERT_LOCATION);

				// Tree Context
				treeMessageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::TreeMessageLogger>(NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING);
				ApplyCheckerRulesTreeContext(openScenario, 1, 0, treeMessageLogger);
				res = res && Assert(_messageLogger->GetMessagesFilteredByErrorLevel(NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING)[0].GetMsg() == 
					treeMessageLogger->GetMessagesFilteredByErrorLevel(NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING)[0].GetMsg(), ASSERT_LOCATION);

				return res;

			}
			catch ( NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e) 
			{
				(void)e;
				return Assert(false, ASSERT_LOCATION);
			}
		}
	}
}
