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

#include "VersionCheckerRuleV1_0.h"

#include "PropertyTreeContext.h"


/**
 * A checker rule for checking the version of the standard within a OpenSCENARIO file.
 */ 
namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
       
 
        bool VersionCheckerRule::IsRevValid(std::shared_ptr<IOpenScenarioModelElement> object)
        {
            if (!object) return false;

        	auto typedObject = std::dynamic_pointer_cast <IFileHeader> (object);

            const auto kRevMajor = typedObject->GetRevMajor();
            const auto kRevMinor = typedObject->GetRevMinor();

            return kRevMajor == _majorRev && kRevMinor == _minorRev;
        }

        std::string VersionCheckerRule::GetMsg()
        {
            return "Major revision and minor revision are expected to be " + std::to_string(_majorRev) + " and " + std::to_string(_minorRev);
        }

		VersionCheckerRule::VersionCheckerRule(const int majorRev, const int minorRev): _majorRev(majorRev), _minorRev(minorRev) {}

        void VersionCheckerRule::ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
			if (!IsRevValid(object))
            {
                auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));

                if (locator) 
                {
                    auto msg = FileContentMessage(GetMsg(), WARNING, locator->GetStartMarker());
                    messageLogger->LogMessage(msg);
                }
            }
        }

        void VersionCheckerRule::ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object)
        {
            if (!IsRevValid(object)) 
            {
                std::vector<std::string> propertyNames;
                propertyNames.push_back(OSC_CONSTANTS::ATTRIBUTE__REV_MINOR);
                propertyNames.push_back(OSC_CONSTANTS::ATTRIBUTE__REV_MAJOR);
                const auto kContext = std::make_shared<PropertyTreeContext>(object, propertyNames);
                auto msg = TreeContentMessage(GetMsg(), WARNING, kContext);
                messageLogger->LogMessage(msg);
            }

        }
    }
}