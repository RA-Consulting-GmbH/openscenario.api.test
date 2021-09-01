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
#include "IParserMessageLogger.h"
#include "ITreeMessageLogger.h"
#include "ApiClassImplV1_1.h"
#include "ExportDefinitions.h"

/**
 * A checker rule for checking the version of the standard within a OpenSCENARIO file.
 */ 
namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_1
    {
        class VersionCheckerRule: public ICheckerRule<IFileHeader> 
        {
        private:
            int _majorRev;
            int _minorRev;

			bool IsRevValid(std::shared_ptr<IFileHeader> object);

			std::string GetMsg();

        public:
            /**
             * @param majorRev The expected major revision
             * @param minorRev The expected minor revision
             */
			OPENSCENARIOLIB_EXP VersionCheckerRule(const int majorRev, const int minorRev);

			void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IFileHeader> object) override;

			void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger> messageLogger, std::shared_ptr<IFileHeader> object) override;
        };
    }
}