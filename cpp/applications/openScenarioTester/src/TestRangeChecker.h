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
#include "RangeCheckerHelperV1_0.h"
#include "ScenarioCheckerImplV1_0.h"
#include "TreeMessageLogger.h"

class TestRangeChecker : public TestBase
{

public:

    TestRangeChecker(std::string& executablePath) : TestBase(executablePath) {}

    bool TestParamsFailure() 
    {
        try 
        {
            std::string filename = _executablePath + "/" + kInputDir + "DoubleLaneChangerCheckerErrors.xosc";
            auto openScenario = std::dynamic_pointer_cast<NET_ASAM_OPENSCENARIO::v1_0::IOpenScenario>( ExecuteParsing(filename));

            auto scenarioChecker = std::make_shared<NET_ASAM_OPENSCENARIO::v1_0::ScenarioCheckerImpl>();
            NET_ASAM_OPENSCENARIO::v1_0::RangeCheckerHelper::AddAllRangeCheckerRules(scenarioChecker);
            scenarioChecker->CheckScenarioInFileContext(_messageLogger, openScenario);


            std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;


            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "Range error: Rule (maxDeceleration>=0) is violated (value: -10.000000)",
                NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(58, 20, filename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "Range error: Rule (maxAcceleration>=0) is violated (value: -2.000000)",
                NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(58, 57, filename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "Range error: Rule (positionZ>=0) is violated (value: -13.000000)",
                NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(60, 22, filename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "Range error: Rule (trackWidth>=0) is violated (value: -12.000000)",
                NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(60, 38, filename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "Range error: Rule (wheelDiameter>0) is violated (value: -12.000000)",
                NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(60, 55, filename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "Range error: Rule (maxSteering<=PI) is violated (value: 7.000000)",
                NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(60, 75, filename)));
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "Range error: Rule (positionX>=0) is violated (value: -2.000000)",
                NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(60, 91, filename)));

            auto res =  Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ERROR, _messageLogger), ASSERT_LOCATION);

            // Now apply the tree validation.
            openScenario = std::dynamic_pointer_cast<NET_ASAM_OPENSCENARIO::v1_0::IOpenScenario>(ExecuteParsing(filename));

            scenarioChecker = std::make_shared<NET_ASAM_OPENSCENARIO::v1_0::ScenarioCheckerImpl>();
            NET_ASAM_OPENSCENARIO::v1_0::RangeCheckerHelper::AddAllRangeCheckerRules(scenarioChecker);

            const auto kTreeMessageLogger = std::make_shared<NET_ASAM_OPENSCENARIO::TreeMessageLogger>(NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR);
            scenarioChecker->CheckScenarioInTreeContext(kTreeMessageLogger, openScenario);

            res = res && Assert(_messageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR).size() ==  
                kTreeMessageLogger->GetMessagesFilteredByWorseOrEqualToErrorLevel(NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR).size(), ASSERT_LOCATION);

            return res;

        }
        catch (NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e)
        {
            std::cout << e.what();
            return Assert(false, ASSERT_LOCATION);
        }

    }
};
