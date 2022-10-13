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

#include "TestCardinalityV1_2.h"
#include "FileResourceLocator.h"
#include <iostream>

#include "PropertyTreeContext.h"
#include "ScenarioLoaderException.h"

#undef ERROR

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
    {
        TestCardinality::TestCardinality(std::string& executablePath) : TestBase(executablePath)
        {
        }

        bool TestCardinality::TestEmptyStory()
        {
            ClearMessageLogger();
            const std::string kFileName = _executablePath + "/" + kInputDir + "cardinalityChecks/EmptyStory.xosc";
            (void)ExecuteParsing(kFileName);

            std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "Too few children children are set (Act). min defined: 1. actual size: 0",
                NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(65, 4, kFileName)));
            const bool kResult = Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ERROR, _messageLogger), ASSERT_LOCATION);
            return kResult;
        }

        bool TestCardinality::TestMultipleGroupElements()
        {
            ClearMessageLogger();
            const std::string kFileName = _executablePath + "/" + kInputDir + "cardinalityChecks/ActionsMultipleElements.xosc";
            (void)ExecuteParsing(kFileName);

            std::vector<NET_ASAM_OPENSCENARIO::FileContentMessage> messages;
            messages.push_back(NET_ASAM_OPENSCENARIO::FileContentMessage(
                "One of these properties is required (GlobalAction; UserDefinedAction; PrivateAction)",
                NET_ASAM_OPENSCENARIO::ERROR, NET_ASAM_OPENSCENARIO::Textmarker(157, 14, kFileName)));
            const bool kResult = Assert(AssertMessages(messages, NET_ASAM_OPENSCENARIO::ERROR, _messageLogger), ASSERT_LOCATION);
            return kResult;
        }
    }
}
