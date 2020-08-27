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
#include "ICheckerRule.h"
#include "FileContentMessage.h"
#include "ILocator.h"
#include "IParserMessageLogger.h"
#include "ApiClassInterfaces.h"


class EgoCheckerRule: public NET_ASAM_OPENSCENARIO::ICheckerRule<NET_ASAM_OPENSCENARIO::v1_0::IEntities> 
{
public:

    void ApplyRule(std::shared_ptr<NET_ASAM_OPENSCENARIO::IParserMessageLogger>& messageLogger, std::shared_ptr<NET_ASAM_OPENSCENARIO::v1_0::IEntities> object) override
    {
        bool isEgoDefined = false;

        // We are adding the validation code here
        auto scenarioObjects = object->GetScenarioObjects();
        if (!scenarioObjects.empty()) 
        {
            for ( auto&& scenarioObject : scenarioObjects) 
            {
                auto name = scenarioObject->GetName();
                for (std::string::iterator it = name.begin(); it != name.end(); ++it)
                    *it = std::tolower(*it, std::locale());
                if (name == "ego")
                {
                    isEgoDefined = true;
                    break;
                }
            }
        }

        if (!isEgoDefined) 
        {
            auto locator = std::static_pointer_cast<NET_ASAM_OPENSCENARIO::ILocator>(object->GetAdapter(typeid(NET_ASAM_OPENSCENARIO::ILocator).name()));
            if (locator) 
            {
                auto msg = NET_ASAM_OPENSCENARIO::FileContentMessage("No ego vehicle defined", NET_ASAM_OPENSCENARIO::ErrorLevel::ERROR, locator->GetStartMarker());
                messageLogger->LogMessage(msg);
            }
            
        }
    }
};
