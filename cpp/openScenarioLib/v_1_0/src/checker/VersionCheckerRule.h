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
#include "Textmarker.h"
#include "ApiClassImpl.h"
#include "MemLeakDetection.h"

/**
 * A checker rule for checking the version of the standard within a OpenSCENARIO file.
 */
namespace NET_ASAM_OPENSCENARIO
{
    namespace V_1_0
    {
        class VersionCheckerRule: public ICheckerRule<IFileHeader> 
        {
        private:
            int _majorRev;
            int _minorRev;

        public:
            /**
             * @param majorRev The expected major revision
             * @param minorRev The expected minor revision
             */
            VersionCheckerRule(const int majorRev, const int minorRev): _majorRev(majorRev), _minorRev(minorRev) {}

            void ApplyRule(std::shared_ptr<IParserMessageLogger>& messageLogger, std::shared_ptr<IFileHeader> object) override
            {
                if (!object) return;

                const auto kRevMajor = object->GetRevMajor();
                const auto kRevMinor = object->GetRevMinor();

                if (kRevMajor != _majorRev || kRevMinor != _minorRev) 
                {
                    auto locator = std::static_pointer_cast<ILocator>(object->GetAdapter(typeid(ILocator).name()));

                    if (locator) 
                    {
                        auto msg = FileContentMessage("Major revision and minor revision are expected to be " + std::to_string(_majorRev) 
                                                      + " and " + std::to_string(_minorRev), WARNING, locator->GetStartMarker());
                        messageLogger->LogMessage(msg);
                    }

                }
            }
        };
    }
}