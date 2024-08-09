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
#include "ParserHelper.h"
#include "ApiClassImplV1_3.h"
#include "ITreeMessageLogger.h"
#include "MemLeakDetection.h"

/**
 * Checks Parameter declarations' value to be parsable (not empty value)
 */
namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_3
    {
        class ParameterDeclarationChecker : public ICheckerRule
        {
        private:
			void ValidateParsing(std::string& value, const ParameterType parameterType);
        public:

			void ApplyRuleInFileContext(std::shared_ptr<IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement > object) override;
			void ApplyRuleInTreeContext(std::shared_ptr<ITreeMessageLogger > messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;
        };
    }
}