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

#include "TestInjectedParametersV1_1.h"
#include <iostream>
#include "ScenarioLoaderException.h"

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
	{
		TestInjectedParameters::TestInjectedParameters(std::string& executablePath) : TestBase(executablePath) {}

		bool TestInjectedParameters::TestNullInjectedParameters() const
		{
			try
			{
				const std::map<std::string, std::string> kEmptyMap;
				(void)ExecuteParsing(_executablePath + "/" +  kInputDir + "DoubleLaneChangerInjectedParams.xosc", kEmptyMap);
				return true;
			}
			catch( NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e )
			{
				(void)e;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		bool TestInjectedParameters::TestEmptyInjectedParameters() const
		{
			try
			{
				const std::map<std::string, std::string> kEmptyMap;
				(void)ExecuteParsing(_executablePath + "/" +  kInputDir + "DoubleLaneChangerInjectedParams.xosc", kEmptyMap);
				return true;
			}
			catch( NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e )
			{
				(void)e;
				return Assert(false, ASSERT_LOCATION);
			}
		}


		bool TestInjectedParameters::TestInjectionsForSuccess()
		{
			std::map<std::string, std::string> injectedParamters;
			injectedParamters.emplace("testBoolean", "true");
			injectedParamters.emplace("testInteger", "2");
			injectedParamters.emplace("testUnsignedInt", "2");
			injectedParamters.emplace("testString", "injected");
			injectedParamters.emplace("testDateTime", "2018-02-24T10:00:00");
			injectedParamters.emplace("testUnsignedShort", "2");
			injectedParamters.emplace("testDouble", "2.0");

			try
			{
				auto openScenario = std::dynamic_pointer_cast<IOpenScenario>(ExecuteParsing(_executablePath + "/" +  kInputDir + "DoubleLaneChangerInjectedParams.xosc", injectedParamters));

				// testString
				auto res = Assert("injected" == openScenario->GetOpenScenarioCategory()->GetScenarioDefinition()->GetRoadNetwork()->GetLogicFile()->GetFilepath(), ASSERT_LOCATION);

				// testUnsignedInt
				auto eventPtr = GetEvent(openScenario);
				res = res && Assert(2 == eventPtr->GetMaximumExecutionCount(), ASSERT_LOCATION);

				// testInteger
				res = res && Assert(2 == GetLaneChangeAction(eventPtr)->GetLaneChangeTarget()->GetRelativeTargetLane()->GetValue(), ASSERT_LOCATION);

				// testDateTime
				auto date = eventPtr->GetStartTrigger()->GetConditionGroupsAtIndex(0)->GetConditionsAtIndex(0)->GetByValueCondition()->GetTimeOfDayCondition()->GetDateTime();
				res = res && Assert("2018-02-24T10:00:00" == NET_ASAM_OPENSCENARIO::DateTimeParser::ToString(date), ASSERT_LOCATION);

				// testDouble
				res = res && Assert(2 == GetLaneChangeAction(eventPtr)->GetLaneChangeActionDynamics()->GetValue(), ASSERT_LOCATION);

				// testBoolean
				res = res && Assert(openScenario->GetOpenScenarioCategory()->GetScenarioDefinition()->GetStoryboard()->GetStoriesAtIndex(0)->GetActsAtIndex(0)->GetManeuverGroupsAtIndex(0)->GetActors()->GetSelectTriggeringEntities(), ASSERT_LOCATION);

				// testUnsignedShort
				// cannot be tested because data structures are above the Parameter definitions

				return res;
			}
			catch( NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e )
			{
				(void)e;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		bool TestInjectedParameters::TestWrongFormats()
		{
			std::map<std::string, std::string> injectedParamters;
			injectedParamters.emplace("testBoolean", "wrongBoolean");
			injectedParamters.emplace("testInteger", "wrongInteger");
			injectedParamters.emplace("testUnsignedInt", "wrongUnsignedIntValue");
			injectedParamters.emplace("testDateTime", "wrongDateTimeValue");
			injectedParamters.emplace("testUnsignedShort", "wrongUnsingedShortValue");
			injectedParamters.emplace("testDouble", "wrongDoubleValue");

			try
			{
				ClearMessageLogger();
				std::string filename = _executablePath + "/" +  kInputDir + "DoubleLaneChangerInjectedParams.xosc";
				(void) ExecuteParsing(filename, injectedParamters);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Injected parameter 'testInteger': Cannot convert 'wrongInteger' to an int. Number format error. Injected parameter is ignored.",
								NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(22, 3, filename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Injected parameter 'testUnsignedInt': Cannot convert 'wrongUnsignedIntValue' to an unsignedInteger. Number format error. Injected parameter is ignored.",
								NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(23, 3, filename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Injected parameter 'testDateTime': Cannot convert 'wrongDateTimeValue' to a dateTime. Illegal dateTime value. Injected parameter is ignored.",
								NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(25, 3, filename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Injected parameter 'testUnsignedShort': Cannot convert 'wrongUnsingedShortValue' to an unsignedShort. Number format error. Injected parameter is ignored.",
								NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(26, 3, filename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Injected parameter 'testDouble': Cannot convert 'wrongDoubleValue' to a double. Number format error. Injected parameter is ignored.",
								NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(27, 3, filename)));
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Injected parameter 'testBoolean': Cannot convert 'wrongBoolean' to a boolean. Illegal boolean value. Injected parameter is ignored.",
								NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(21, 3, filename)));
				return Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, _messageLogger), ASSERT_LOCATION);
			}
			catch( NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e )
			{
				(void)e;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		bool TestInjectedParameters::TestNotDefined()
		{
			std::map<std::string, std::string> injectedParamters;
			injectedParamters.emplace("notDefined", "wrongBoolean");

			try
			{
				ClearMessageLogger();
				std::string filename = _executablePath + "/" +  kInputDir + "DoubleLaneChangerInjectedParams.xosc";
				(void) ExecuteParsing(filename, injectedParamters);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Injected parameter 'notDefined' must be declared as a global parameter. Injected parameter is ignored.",
								NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING, NET_ASAM_OPENSCENARIO::Textmarker(20, 2, filename)));
				return Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING, _messageLogger), ASSERT_LOCATION);
			}
			catch(NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e )
			{
				(void)e;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		bool TestInjectedParameters::TestNotDefinedWithNoGlobalParameters()
		{
			std::map<std::string, std::string> injectedParamters;
			injectedParamters.emplace("notDefined", "wrongBoolean");

			try
			{
				ClearMessageLogger();
				std::string filename = _executablePath + "/" +  kInputDir + "DoubleLaneChanger.xosc";
				(void) ExecuteParsing(filename, injectedParamters);
				std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
				messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Injected parameter 'notDefined' must be declared as a global parameter. Injected parameter is ignored.",
								NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING, NET_ASAM_OPENSCENARIO::Textmarker(21, 2, filename)));
				return Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING, _messageLogger), ASSERT_LOCATION);
			}
			catch(NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e )
			{
				(void)e;
				return Assert(false, ASSERT_LOCATION);
			}
		}

		/**
		* @param eventPtr
		* @return
		*/
		std::shared_ptr<ILaneChangeAction> TestInjectedParameters::GetLaneChangeAction(std::shared_ptr<IEvent> eventPtr)
		{
			return eventPtr->GetActionsAtIndex(0)->GetPrivateAction()->GetLateralAction()->GetLaneChangeAction();
		}

		/**
		* @param openScenario
		 * @return
		*/
		std::shared_ptr<IEvent> TestInjectedParameters::GetEvent(std::shared_ptr<IOpenScenario> openScenario)
		{
			return openScenario->GetOpenScenarioCategory()->GetScenarioDefinition()->GetStoryboard()->GetStoriesAtIndex(0)->GetActsAtIndex(0)->GetManeuverGroupsAtIndex(0)->GetManeuversAtIndex(0)->GetEventsAtIndex(0);
		}
	}
}
