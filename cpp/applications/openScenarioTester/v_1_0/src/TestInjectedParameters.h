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

#pragma once
#include "TestBase.h"
#include <cassert>
#include "XmlScenarioLoaderFactory.h"

class TestInjectedParameters : public TestBase
{
public:
    void TestNullInjectedParameters()
    {
        try
        {
            const std::map<std::string, std::string> kEmptyMap;
            (void)ExecuteParsing(kInputDir + "DoubleLaneChangerInjectedParams.xosc", kEmptyMap);
        }
        catch( NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e )
        {
            (void)e;
            assert(false);
        }
    }

    void TestEmptyInjectedParameters()
    {
        try
        {
            const std::map<std::string, std::string> kEmptyMap;
            (void)ExecuteParsing(kInputDir + "DoubleLaneChangerInjectedParams.xosc", kEmptyMap);
        }
        catch( NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e )
        {
            (void)e;
            assert(false);
        }
    }


    void TestInjectionsForSuccess()
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
            auto openScenario = ExecuteParsing(kInputDir + "DoubleLaneChangerInjectedParams.xosc", injectedParamters);

            // testString
            assert("injected" == openScenario->GetOpenScenarioCategory()->GetScenarioDefinition()->GetRoadNetwork()->GetLogicFile()->GetFilepath());
            // testUnsignedInt
            auto eventPtr = GetEvent(openScenario);
            assert(2 == eventPtr->GetMaximumExecutionCount());

            // testInteger
            assert(2 == GetLaneChangeAction(eventPtr)->GetLaneChangeTarget()->GetRelativeTargetLane()->GetValue());

            // testDateTime
            auto date = eventPtr->GetStartTrigger()->GetConditionGroups()[0]->GetConditions()[0]->GetByValueCondition()->GetTimeOfDayCondition()->GetDateTime();
            assert("2018-02-24T10:00:00" == NET_ASAM_OPENSCENARIO::DateTimeParser::ToString(date));

            // testDouble
            assert(2 == GetLaneChangeAction(eventPtr)->GetLaneChangeActionDynamics()->GetValue());

            // testBoolean
            assert(openScenario->GetOpenScenarioCategory()->GetScenarioDefinition()->GetStoryboard()->GetStories()[0]->GetActs()[0]->GetManeuverGroups()[0]->GetActors()->GetSelectTriggeringEntities());

            // testUnsignedShort
            // cannot be tested because data structures are above the Parameter definitions
        }
        catch( NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e )
        {
            (void)e;
            assert(false);
        }
    }

    void TestWrongFormats()
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
            _messageLogger->Clear();
            std::string filename = kInputDir + "DoubleLaneChangerInjectedParams.xosc";
            (void) ExecuteParsing(filename, injectedParamters);
            std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Injected parameter 'testInteger': Cannot convert 'wrongInteger' to an int. Number format error. Injected parameter is ignored.",
                            NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(20, 2, filename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Injected parameter 'testUnsignedInt': Cannot convert 'wrongUnsignedIntValue' to an unsignedInteger. Number format error. Injected parameter is ignored.",
                            NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(20, 2, filename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Injected parameter 'testDateTime': Cannot convert 'wrongDateTimeValue' to a dateTime. Illegal dateTime value. Injected parameter is ignored.",
                            NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(20, 2, filename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Injected parameter 'testUnsignedShort': Cannot convert 'wrongUnsingedShortValue' to an unsignedShort. Number format error. Injected parameter is ignored.",
                            NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(20, 2, filename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Injected parameter 'testDouble': Cannot convert 'wrongDoubleValue' to a double. Number format error. Injected parameter is ignored.",
                            NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(20, 2, filename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Injected parameter 'testBoolean': Cannot convert 'wrongBoolean' to a boolean. Illegal boolean value. Injected parameter is ignored.",
                            NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(20, 2, filename)));
            assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, _messageLogger));
        }
        catch( NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e )
        {
            (void)e;
            assert(false);
        }
    }

    void TestNotDefined()
    {
        std::map<std::string, std::string> injectedParamters;
        injectedParamters.emplace("notDefined", "wrongBoolean");

        try
        {
            _messageLogger->Clear();
            std::string filename = kInputDir + "DoubleLaneChangerInjectedParams.xosc";
            (void) ExecuteParsing(filename, injectedParamters);
            std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Injected parameter 'notDefined' must be declared as a global parameter. Injected parameter is ignored.",
                            NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING, NET_ASAM_OPENSCENARIO::Textmarker(20, 2, filename)));

            assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING, _messageLogger));
        }
        catch(NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e )
        {
            (void)e;
            assert(false);
        }
    }

    void TestNotDefinedWithNoGlobalParameters()
    {
        std::map<std::string, std::string> injectedParamters;
        injectedParamters.emplace("notDefined", "wrongBoolean");

        try
        {
            _messageLogger->Clear();
            std::string filename = kInputDir + "DoubleLaneChanger.xosc";
            (void) ExecuteParsing(filename, injectedParamters);
            std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage("Injected parameter 'notDefined' must be declared as a global parameter. Injected parameter is ignored.",
                            NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING, NET_ASAM_OPENSCENARIO::Textmarker(21, 2, filename)));
            assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING, _messageLogger));
        }
        catch(NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e )
        {
            (void)e;
            assert(false);
        }
    }

private:
    /**
    * @param eventPtr
    * @return
    */
    std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::ILaneChangeAction> GetLaneChangeAction(std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::IEvent> eventPtr)
    {
        return eventPtr->GetActions()[0]->GetPrivateAction()->GetLateralAction()->GetLaneChangeAction();
    }

    /**
    * @param openScenario
     * @return
    */
    std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::IEvent> GetEvent(std::shared_ptr<NET_ASAM_OPENSCENARIO::V_1_0::IOpenScenario> openScenario)
    {
        return openScenario->GetOpenScenarioCategory()->GetScenarioDefinition()->GetStoryboard()->GetStories()[0]->GetActs()[0]->GetManeuverGroups()[0]->GetManeuvers()[0]->GetEvents()[0];
    }
};
