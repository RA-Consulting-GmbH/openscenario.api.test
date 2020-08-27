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
#include "RangeCheckerHelper.h"
#include "ScenarioCheckerImpl.h"
#include "VersionCheckerRule.h"

class TestVersionChecker : public TestBase
{
private:
    void ApplyCheckerRules(std::shared_ptr<NET_ASAM_OPENSCENARIO::v1_0::IOpenScenario> openScenario, int majorRev, int minorRev) const
    {
        NET_ASAM_OPENSCENARIO::v1_0::ScenarioCheckerImpl scenarioChecker;
        scenarioChecker.AddFileHeaderCheckerRule(std::make_shared<NET_ASAM_OPENSCENARIO::v1_0::VersionCheckerRule>(majorRev, minorRev));
        scenarioChecker.CheckScenario(_messageLogger, openScenario);
    }

public:

    TestVersionChecker(std::string& executablePath) : TestBase(executablePath) {}

    bool TestSuccess() 
    {
        try 
        {
            std::string filename = _executablePath + "/" + kInputDir + "DoubleLaneChanger.xosc";
            auto openScenario = std::dynamic_pointer_cast<NET_ASAM_OPENSCENARIO::v1_0::IOpenScenario>(ExecuteParsing(filename));
            ApplyCheckerRules(openScenario, 0, 9);
            std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
            auto res = Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING, _messageLogger), ASSERT_LOCATION);
            ApplyCheckerRules(openScenario, 1, 0);
            auto msg = NET_ASAM_OPENSCENARIO::FileContentMessage("Major revision and minor revision are expected to be 1 and 0",
                                                            NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING,
                                                                    NET_ASAM_OPENSCENARIO::Textmarker(20, 2, filename));
            messages.push_back(msg);

            res = res && Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ErrorLevel::WARNING, _messageLogger), ASSERT_LOCATION);
            return res;

        }
        catch ( NET_ASAM_OPENSCENARIO::ScenarioLoaderException& e) 
        {
            (void)e;
            return Assert(false, ASSERT_LOCATION);
        }
    }
};
