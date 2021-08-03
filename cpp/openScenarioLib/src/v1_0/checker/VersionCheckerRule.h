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

 /** */
#pragma once

#include "ICheckerRule.h"
#include "ErrorLevel.h"
#include "FileContentMessage.h"
#include "ILocator.h"
#include "IParserMessageLogger.h"
#include "PropertyTreeContext.h"
#include "ITreeMessageLogger.h"
#include "TreeContentMessage.h"
#include "Textmarker.h"
#include "ApiClassImplV1_0.h"
#include "MemLeakDetection.h"
#include "OscConstantsV1_0.h"

/**
 * A checker rule for checking the version of the standard within a OpenSCENARIO file.
 */ 
namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_0
    {
        class VersionCheckerRule: public ICheckerRule<IFileHeader> 
        {
        private:
            int _majorRev;
            int _minorRev;

            bool IsRevValid(std::shared_ptr<IFileHeader> object)
            {
                if (!object) return false;

                const auto kRevMajor = object->GetRevMajor();
                const auto kRevMinor = object->GetRevMinor();

                return kRevMajor == _majorRev && kRevMinor == _minorRev;
            }

            std::string GetMsg() const
            {
                return "Major revision and minor revision are expected to be " + std::to_string(_majorRev) + " and " + std::to_string(_minorRev);
            }

        public:
            /**
             * @param majorRev The expected major revision
             * @param minorRev The expected minor revision
             */
            VersionCheckerRule(const int majorRev, const int minorRev): _majorRev(majorRev), _minorRev(minorRev) {}

            void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IFileHeader> object) override
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

            void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IFileHeader> object) override
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
        };
    }
}