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

#include "TestBaseV1_2.h"
#include "ICheckerRule.h"
#include "IParserMessageLogger.h"
#include "ApiClassInterfacesV1_2.h"
#include "BaseTreeContext.h"
#undef ERROR

namespace NET_ASAM_OPENSCENARIO
{
    namespace v1_2
	{


		class EgoCheckerRule: public NET_ASAM_OPENSCENARIO::ICheckerRule
		{
		private:
			bool IsEgoDefined(std::shared_ptr<IEntities> object) const;

		public:

			void ApplyRuleInFileContext(std::shared_ptr<NET_ASAM_OPENSCENARIO::IParserMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;

			void ApplyRuleInTreeContext(std::shared_ptr<NET_ASAM_OPENSCENARIO::ITreeMessageLogger> messageLogger, std::shared_ptr<IOpenScenarioModelElement> object) override;

		};
	}
}
